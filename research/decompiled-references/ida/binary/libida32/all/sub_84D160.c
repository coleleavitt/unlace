__int64 __fastcall sub_84D160(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // r15
  _QWORD *v7; // r12
  __int64 v8; // rax
  unsigned int v9; // ebp
  unsigned int v10; // r14d
  int v11; // eax
  unsigned int *v12; // rdi
  char *v14; // rax
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __m128 *v20; // rax
  __m128 *v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // r10
  __int64 v24; // [rsp-10h] [rbp-58h]
  double *v25; // [rsp+0h] [rbp-48h]
  _QWORD *v26; // [rsp+8h] [rbp-40h]
  _QWORD *v27; // [rsp+8h] [rbp-40h]

  v5 = *(_QWORD *)a1;
  if ( *(_BYTE *)a2 == 126 )
  {
    v6 = a2 + 3;
    v7 = nullptr;
    v25 = (double *)(a3 + 24);
    v9 = (unsigned __int16)__ROL2__(*(_WORD *)(a2 + 1), 8);
    v10 = (unsigned __int16)v9;
    goto LABEL_5;
  }
  v6 = a2 + 5;
  if ( !*(_DWORD *)v5 )
  {
    v7 = sub_8451D0(*(_QWORD *)a1, 48);
    if ( !*(_DWORD *)v5 )
    {
      *(_OWORD *)v7 = 0;
      *((_OWORD *)v7 + 2) = 0;
      *((_OWORD *)v7 + 1) = 0;
      v8 = *(_QWORD *)(a3 + 16);
      v7[4] = a2;
      *v7 = v8;
      *(_QWORD *)(a3 + 16) = v7;
      v25 = (double *)(v7 + 3);
      v9 = (unsigned __int16)__ROL2__(*(_WORD *)(a2 + 1), 8);
      v10 = (unsigned __int16)__ROL2__(*(_WORD *)(a2 + 3), 8);
LABEL_5:
      sub_847F60((unsigned int *)v5, 32, 4, 0, 137, 16);
      if ( v9 )
      {
        sub_849F80((unsigned int *)v5, 0x42u, 2, 0, 2, 0, 0x7Fu, v9);
        sub_84A700((unsigned int *)v5, 2, 2, 0, 4, 0);
        if ( !*(_DWORD *)v5 )
        {
          v17 = *(_QWORD *)(v5 + 80);
          v18 = *(_QWORD *)(v17 + 8);
          v19 = v18 + 16;
          if ( (unsigned __int64)(v18 + 16) <= 0xFF0 )
          {
            v21 = (__m128 *)(v17 + v18 + 16);
            *(_QWORD *)(v17 + 8) = v19;
            if ( v21 )
              goto LABEL_21;
          }
          else
          {
            v20 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD, __int64, __int64, __int64, __int64))(v5 + 56))(
                              4096,
                              *(_QWORD *)(*(_QWORD *)(v5 + 56) + 16LL),
                              v17,
                              v19,
                              v16,
                              v24);
            if ( v20 )
            {
              v20->m128_u64[0] = *(_QWORD *)(v5 + 80);
              *(_QWORD *)(v5 + 80) = v20;
              v21 = v20 + 1;
              v21[-1].m128_u64[1] = 16;
LABEL_21:
              *v21 = _mm_loadh_ps(v25);
              *(_QWORD *)v25 = v21;
              goto LABEL_6;
            }
            *(_DWORD *)v5 = 2;
          }
        }
      }
LABEL_6:
      if ( v9 < v10 )
      {
        sub_847F60((unsigned int *)v5, 32, 140, 24, 2, 0);
        sub_849F80((unsigned int *)v5, 0x42u, 2, 0, 2, 0, 0x7Fu, v10 - v9);
        if ( !*(_DWORD *)v5 )
        {
          *(_DWORD *)(v5 + 144) = 0;
          v14 = sub_844340(v5, 1u, 2, 0, 4, 0);
          if ( v14 )
            *v14 = 59;
        }
        sub_847920((unsigned int *)v5, 2, 2, 4, 0, 2);
        sub_847F60((unsigned int *)v5, 32, 140, 16, 2, 0);
        v15 = *(_DWORD *)(a1 + 168);
        v12 = *(unsigned int **)a1;
        if ( v15 != 2 )
        {
          if ( v15 != 4 )
          {
LABEL_16:
            v7[5] = sub_845240(v5);
            return v6;
          }
LABEL_27:
          v27 = sub_84A700(v12, 5, 142, *(int *)(a1 + 92), 2, 0);
          sub_847F60(v12, 32, 142, *(int *)(a1 + 92), 2, 0);
          v22 = sub_845240((__int64)v12);
          v23 = v27;
          if ( !v27 )
            goto LABEL_25;
          goto LABEL_23;
        }
      }
      else
      {
        v11 = *(_DWORD *)(a1 + 168);
        v12 = *(unsigned int **)a1;
        if ( v11 != 2 )
        {
          if ( v11 != 4 )
            return v6;
          goto LABEL_27;
        }
      }
      sub_849F80(v12, 0x40u, 1, 0, 142, *(int *)(a1 + 92), 0x7Fu, 1);
      v26 = sub_84A700(v12, 5, 1, 0, 2, 0);
      sub_847F60(v12, 32, 142, *(int *)(a1 + 92), 2, 0);
      v22 = sub_845240((__int64)v12);
      v23 = v26;
      if ( !v26 )
        goto LABEL_25;
LABEL_23:
      if ( v22 )
      {
        v23[2] &= ~1uLL;
        v23[3] = v22;
      }
LABEL_25:
      if ( v9 >= v10 )
        return v6;
      goto LABEL_16;
    }
  }
  return v6;
}

