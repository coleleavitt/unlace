__int64 __fastcall sub_CDFE0(__int64 a1, __int64 *a2, __int64 *a3, unsigned int a4, char a5)
{
  __int64 v6; // rax
  bool v8; // zf
  int v9; // ebp
  __m128i v10; // xmm0
  __int64 v11; // rdx
  __m128i v12; // xmm1
  unsigned int v13; // ebx
  __int64 v16; // rdi
  int v17; // ebp
  int v18; // eax
  __int64 v19; // rdi
  int v20; // eax
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  int *v23; // rcx
  char v24; // al
  __int64 v25; // rdi
  int *v26; // r12
  int *v27; // r15
  int v28; // eax
  __int64 v29; // [rsp+8h] [rbp-98h] BYREF
  __int64 v30; // [rsp+10h] [rbp-90h]
  _UNKNOWN **v31; // [rsp+18h] [rbp-88h] BYREF
  __int64 v32; // [rsp+20h] [rbp-80h]
  __int64 v33; // [rsp+28h] [rbp-78h]
  __m128i v34; // [rsp+30h] [rbp-70h] BYREF
  __int64 v35[2]; // [rsp+40h] [rbp-60h] BYREF
  int v36; // [rsp+50h] [rbp-50h]
  char v37; // [rsp+54h] [rbp-4Ch]
  unsigned __int64 v38; // [rsp+60h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 80);
  v38 = __readfsqword(0x28u);
  v31 = &off_4B05C0;
  v32 = v6;
  v33 = 0;
  v35[0] = 0;
  v35[1] = 0;
  v36 = 0;
  v37 = a5;
  v34 = 0;
  if ( !a5 && *(_DWORD *)(*(_QWORD *)(v6 + 8) + 4LL) == 13 && *(_QWORD *)(a1 + 120) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v6 + 112) + 200LL))(
           *(_QWORD *)(v6 + 112),
           **(unsigned int **)(a1 + 112)) )
    {
      v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 32LL))(
              *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
              **(unsigned int **)(a1 + 112));
      if ( *(_QWORD *)(a1 + 120) <= 1u )
      {
LABEL_38:
        if ( v18 > 7 )
          goto LABEL_16;
        if ( !*(_QWORD *)(a1 + 120) )
        {
LABEL_23:
          v36 = 8;
          v6 = v32;
          goto LABEL_2;
        }
        goto LABEL_20;
      }
      v16 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112));
      if ( (unsigned int)v16 >= v18 )
      {
        if ( v18 > 7 )
          goto LABEL_16;
LABEL_20:
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 200LL))(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL)) )
        {
          v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 32LL))(
                  *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                  **(unsigned int **)(a1 + 112));
          if ( *(_QWORD *)(a1 + 120) <= 1u )
            goto LABEL_26;
          v19 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112));
          if ( (unsigned int)v19 >= v20 )
            goto LABEL_26;
        }
        else
        {
          if ( *(_QWORD *)(a1 + 120) <= 1u )
            goto LABEL_23;
          v19 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112));
          if ( (unsigned int)v19 > 7 )
            goto LABEL_23;
        }
        v20 = round_down_power2(v19);
LABEL_26:
        v36 = v20;
        if ( v20 > 7 )
          goto LABEL_16;
        v21 = *(_QWORD *)(a1 + 80);
        v22 = *(_QWORD *)(a1 + 120);
        v23 = *(int **)(a1 + 112);
        if ( *(_DWORD *)(*(_QWORD *)(v21 + 8) + 4LL) == 13 )
          goto LABEL_32;
        if ( !v22 )
          goto LABEL_16;
        v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v21 + 112) + 200LL))(
                *(_QWORD *)(v21 + 112),
                (unsigned int)*v23);
        v23 = *(int **)(a1 + 112);
        if ( v24 )
        {
          v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 32LL))(
                  *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                  (unsigned int)*v23);
          if ( *(_QWORD *)(a1 + 120) <= 1u
            || (v25 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112)),
                (unsigned int)v25 >= v28) )
          {
LABEL_43:
            if ( v28 > 7 )
            {
              v23 = *(int **)(a1 + 112);
              v22 = *(_QWORD *)(a1 + 120);
              goto LABEL_32;
            }
LABEL_16:
            v6 = v32;
            goto LABEL_2;
          }
        }
        else
        {
          v22 = *(_QWORD *)(a1 + 120);
          if ( v22 <= 1 || (v25 = (unsigned int)(v23[1] - *v23), (unsigned int)v25 > 7) )
          {
LABEL_32:
            v26 = &v23[v22];
            if ( v26 != v23 )
            {
              v27 = v23;
              do
                sub_5F400(v35, *v27++, v36);
              while ( v26 != v27 );
            }
            goto LABEL_16;
          }
        }
        v28 = round_down_power2(v25);
        goto LABEL_43;
      }
    }
    else
    {
      if ( *(_QWORD *)(a1 + 120) <= 1u )
        goto LABEL_16;
      v16 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112));
      if ( (unsigned int)v16 > 7 )
        goto LABEL_16;
    }
    v18 = round_down_power2(v16);
    goto LABEL_38;
  }
LABEL_2:
  v8 = *(_BYTE *)(v6 + 145) == 0;
  v29 = 0;
  v30 = 0;
  if ( !v8 && *(_DWORD *)a3 == 4 )
  {
    v17 = *((_DWORD *)a3 + 2);
    cleanup_argloc(&v29);
    LODWORD(v29) = 4;
    LODWORD(v30) = __ROL4__(v17, 16);
    a3 = &v29;
  }
  v9 = for_all_arglocs(&v31, a3, a4, 0);
  cleanup_argloc(&v29);
  if ( v9 )
  {
    v13 = 0;
  }
  else
  {
    v10 = _mm_loadu_si128((const __m128i *)(a2 + 1));
    v11 = v33;
    v12 = _mm_loadu_si128(&v34);
    v33 = *a2;
    *a2 = v11;
    *(__m128i *)(a2 + 1) = v12;
    v13 = 1;
    v34 = v10;
  }
  v31 = &off_4B05C0;
  qfree(v35[0]);
  if ( v33 )
  {
    v34.m128i_i64[0] = 0;
    qfree(v33);
  }
  return v13;
}
