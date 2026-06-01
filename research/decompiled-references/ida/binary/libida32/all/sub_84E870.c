__int64 __fastcall sub_84E870(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v5; // rbx
  int v6; // r14d
  double *v7; // rax
  double *v8; // r13
  unsigned int v9; // r14d
  __int64 v10; // rax
  unsigned int *v11; // r15
  _QWORD *v12; // rax
  unsigned int *v13; // r15
  _QWORD *v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v18; // r15
  int v19; // r8d
  unsigned int *v20; // r15
  unsigned int *v21; // rdi
  char *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __m128 *v26; // rax
  __m128 *v27; // rax
  __int64 v28; // r13
  _QWORD *v29; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rcx
  __m128 *v34; // rax
  __m128 *v35; // rax
  unsigned int v36; // [rsp+4h] [rbp-44h]
  _QWORD *v37; // [rsp+8h] [rbp-40h]
  _QWORD *v38; // [rsp+8h] [rbp-40h]
  __int64 v39; // [rsp+8h] [rbp-40h]

  v5 = *(unsigned int **)a1;
  if ( *(_BYTE *)a2 == 119 )
    v36 = byte_239F9C0[119];
  else
    v36 = (unsigned __int16)__ROL2__(*(_WORD *)(a2 + 5), 8);
  v6 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 136LL);
  if ( !*v5 )
  {
    v7 = (double *)sub_8451D0((__int64)v5, 40);
    v8 = v7;
    if ( !*v5 )
    {
      *(_OWORD *)v7 = 0;
      *((_OWORD *)v7 + 1) = 0;
      v9 = (16 * v6 + 135) & 0x1FFFF8;
      v7[4] = 0.0;
      v10 = *(_QWORD *)(a3 + 16);
      *((_QWORD *)v8 + 4) = a2;
      *(_QWORD *)v8 = v10;
      *(_QWORD *)(a3 + 16) = v8;
      v11 = *(unsigned int **)a1;
      sub_849F80(*(unsigned int **)a1, 0x42u, 12, 0, 12, 0, 0x7Fu, v9);
      v12 = sub_84A700(v11, 2, 12, 0, 11, 0);
      v13 = *(unsigned int **)a1;
      v37 = v12;
      if ( !**(_DWORD **)a1 )
      {
        v14 = sub_8451D0((__int64)v13, 24);
        if ( v14 )
        {
          v15 = v37;
          v38 = v14;
          *v14 = v15;
          v14[1] = sub_845240((__int64)v13);
          v38[2] = *(_QWORD *)(a1 + 312);
          *(_QWORD *)(a1 + 312) = v38;
        }
      }
      sub_847F60(v5, 32, 4, 0, 142, *(int *)(a1 + 116));
      sub_847F60(v5, 32, 1, 0, 9, 0);
      v16 = 0;
      if ( *(_BYTE *)a2 == 119 )
        v16 = *(unsigned __int8 *)(a2 + 5);
      sub_847F60(v5, 37, 140, 4, 127, v16);
      sub_847F60(v5, 37, 140, 12, 4, 0);
      sub_847F60(v5, 37, 140, 8, 127, *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 136LL) + 1LL);
      sub_847F60(v5, 32, 140, 16, 2, 0);
      if ( *(_DWORD *)(a1 + 104) )
        sub_847F60(v5, 32, 4, 0, 129, 48);
      sub_847F60(v5, 32, 140, 64, 127, (unsigned __int16)__ROL2__(*(_WORD *)(a2 + 1), 8));
      sub_847F60(v5, 32, 140, 72, 127, (unsigned __int16)__ROL2__(*(_WORD *)(a2 + 3), 8));
      if ( *(_BYTE *)a2 == 119 )
      {
        v39 = 0;
        v18 = 0;
        v17 = 0;
      }
      else
      {
        v17 = a2 + 10;
        v39 = v36 - 11;
        v18 = (unsigned __int16)__ROL2__(*(_WORD *)(a2 + 7), 8);
      }
      sub_847F60(v5, 32, 140, 96, 127, v17);
      sub_847F60(v5, 32, 140, 88, 127, v39);
      sub_847F60(v5, 32, 140, 80, 127, v18);
      v19 = 127;
      if ( *(_DWORD *)(a1 + 104) )
        v19 = 4;
      sub_847F60(v5, 32, 140, 24, v19, 0);
      sub_847F60(v5, 32, 142, 8, 2, 0);
      sub_847F60(v5, 32, 2, 0, 12, 0);
      sub_848DB0(v5, 3, *(int *)(a1 + 76));
      sub_847C00(v5, 4370, (__int64)sub_843D80);
      sub_847F60(v5, 32, 2, 0, 142, 8);
      v20 = *(unsigned int **)a1;
      if ( !**(_DWORD **)a1 )
      {
        v21 = *(unsigned int **)a1;
        v20[36] = 0;
        if ( (unsigned int)sub_848C40(v21, 12, 0, 12, 0, 127, v9) == 4 )
          sub_8498A0(v20, 0x5030100u, 12, 0, 12, 0, 127, v9);
      }
      if ( !*v5 )
      {
        v5[36] = 256;
        v22 = sub_844340((__int64)v5, 0x11u, 127, 0, 1, 0);
        if ( v22 )
          v22[1] |= 0x38u;
      }
      sub_8452F0((__int64)v5, 8);
      if ( !*v5 )
      {
        v23 = *((_QWORD *)v5 + 10);
        v24 = *(_QWORD *)(v23 + 8);
        v25 = v24 + 16;
        if ( (unsigned __int64)(v24 + 16) <= 0xFF0 )
        {
          v27 = (__m128 *)(v23 + v24 + 16);
          *(_QWORD *)(v23 + 8) = v25;
          if ( v27 )
            goto LABEL_26;
        }
        else
        {
          v26 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v5 + 7))(
                            4096,
                            *(_QWORD *)(*((_QWORD *)v5 + 7) + 16LL));
          if ( v26 )
          {
            v26->m128_u64[0] = *((_QWORD *)v5 + 10);
            *((_QWORD *)v5 + 10) = v26;
            v27 = v26 + 1;
            v27[-1].m128_u64[1] = 16;
LABEL_26:
            *v27 = _mm_loadh_ps(v8 + 3);
            *((_QWORD *)v8 + 3) = v27;
            goto LABEL_27;
          }
          *v5 = 2;
        }
      }
LABEL_27:
      v28 = *(_QWORD *)(a1 + 288);
      if ( v28 )
      {
        v29 = sub_8452F0((__int64)v5, 1);
        if ( v29 )
        {
          v29[2] &= ~1uLL;
          v29[3] = v28;
        }
        return a2 + v36;
      }
      sub_8452F0((__int64)v5, 1);
      if ( !*v5 )
      {
        v31 = *((_QWORD *)v5 + 10);
        v32 = *(_QWORD *)(v31 + 8);
        v33 = v32 + 16;
        if ( (unsigned __int64)(v32 + 16) <= 0xFF0 )
        {
          v35 = (__m128 *)(v31 + v32 + 16);
          *(_QWORD *)(v31 + 8) = v33;
          if ( !v35 )
            return a2 + v36;
        }
        else
        {
          v34 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v5 + 7))(
                            4096,
                            *(_QWORD *)(*((_QWORD *)v5 + 7) + 16LL));
          if ( !v34 )
          {
            *v5 = 2;
            return a2 + v36;
          }
          v34->m128_u64[0] = *((_QWORD *)v5 + 10);
          *((_QWORD *)v5 + 10) = v34;
          v35 = v34 + 1;
          v35[-1].m128_u64[1] = 16;
        }
        *v35 = _mm_loadh_ps((const double *)(a1 + 360));
        *(_QWORD *)(a1 + 360) = v35;
      }
      return a2 + v36;
    }
  }
  return 0;
}

