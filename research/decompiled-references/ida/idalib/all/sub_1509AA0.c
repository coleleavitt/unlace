__int64 __fastcall sub_1509AA0(const __m128i *a1, __int64 a2, int a3, __m128i a4)
{
  int *m128i_i32; // rbx
  char v8; // bp
  char v9; // r13
  __int64 *v10; // rax
  __int64 v11; // rdx
  _BOOL4 v12; // eax
  __int64 *v13; // rdi
  __int64 *v14; // rdi
  __int64 *v16; // rdi
  __int64 *v17; // rdi
  __int64 *v18; // rdi
  __int64 *v19; // rdi
  unsigned __int8 v20; // al
  unsigned __int64 v21; // rsi
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  unsigned __int32 v27; // r13d
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int16 v31; // ax
  unsigned __int64 v32; // rax
  __int64 *v33; // rdi
  unsigned __int8 v34; // [rsp+Dh] [rbp-ABh]
  char v35; // [rsp+Eh] [rbp-AAh]
  unsigned __int8 v36; // [rsp+Fh] [rbp-A9h]
  unsigned __int64 v37; // [rsp+18h] [rbp-A0h]
  int v38; // [rsp+2Ah] [rbp-8Eh] BYREF
  __int16 v39; // [rsp+2Eh] [rbp-8Ah]
  __m128i *v40; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int8 v41; // [rsp+38h] [rbp-80h]
  const __m128i *v42; // [rsp+40h] [rbp-78h]
  int v43; // [rsp+48h] [rbp-70h]
  __int16 v44; // [rsp+4Ch] [rbp-6Ch]
  __int64 (__fastcall *v45)(__int64); // [rsp+50h] [rbp-68h]
  __int64 v46; // [rsp+58h] [rbp-60h]
  __int64 v47; // [rsp+60h] [rbp-58h]

  m128i_i32 = a1[1].m128i_i32;
  if ( a1[2].m128i_i16[0] != 5 )
    goto LABEL_29;
  v35 = 0;
  v8 = 0;
  v34 = 0;
  do
  {
    v9 = 0;
    if ( a3 == 49 && !*(_DWORD *)(a2 + 16) )
      v9 = (v8 | v35) ^ 1;
    v10 = *(__int64 **)(a1[1].m128i_i64[1] + 16);
    v11 = *v10;
    if ( (unsigned int)*v10 == 6 )
    {
      if ( *((_DWORD *)v10 + 4) != 1735549300 || *((_WORD *)v10 + 10) != 29797 )
        goto LABEL_10;
      if ( v8 )
      {
        sub_1564840(&v40, a1, m128i_i32, 2176);
        sub_1503D30((unsigned __int8 **)&v40, (__int64)"target");
        sub_AEA040((__int64)&v40);
      }
      v16 = (__int64 *)a1->m128i_i64[1];
      v8 = 1;
      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
      sub_14634E0(v16, m128i_i32);
    }
    else
    {
      if ( (_DWORD)v11 != 10 )
      {
        if ( (_DWORD)v11 == 11 )
        {
          v12 = v10[2] != 0x745F726566657270LL || *((_WORD *)v10 + 12) != 28793 || *((_BYTE *)v10 + 26) != 101;
          v36 = v9 & !v12;
          if ( v36 )
          {
            v19 = (__int64 *)a1->m128i_i64[1];
            a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
            sub_14634E0(v19, m128i_i32);
            v40 = (__m128i *)&a1[122];
            v20 = a1[122].m128i_u8[0];
            v21 = 1625;
            a1[122].m128i_i8[0] = 1;
            v41 = v20;
            v45 = sub_146A990;
            v44 = 449;
            v42 = a1;
            v43 = 1507350;
            v46 = 0;
            v47 = 0;
            v22 = sub_156A040(&v40, 1625, "prefer_type", 0);
            v26 = v34;
            if ( (_BYTE)v22 )
              v26 = v22;
            v34 = v26;
            if ( a1[2].m128i_i16[0] == 23 )
            {
LABEL_44:
              sub_14808E0((__int64)&v40, (__int64 *)v21, v23, v26, v24, v25);
              v40->m128i_i8[0] = v41;
              goto LABEL_11;
            }
            while ( 1 )
            {
              v27 = a1[1].m128i_u32[0];
              v28 = sub_14BDA20((__int64)a1, 0, 0, 0, 0, nullptr, a4);
              v29 = sub_14BE680(a1, v28, 3, a4);
              v30 = sub_19B4A30(a1[6].m128i_i64[0], v29 & 0xFFFFFFFFFFFFFFFELL, v27, 0, 0, 0);
              if ( v30 > 1 )
              {
                v26 = *(unsigned int *)(a2 + 16);
                v21 = *(unsigned int *)(a2 + 20);
                v32 = v30 & 0xFFFFFFFFFFFFFFFELL;
                if ( v26 + 1 > v21 )
                {
                  v21 = a2 + 24;
                  v37 = v32;
                  sub_2237220(a2 + 8, a2 + 24, v26 + 1, 8);
                  v26 = *(unsigned int *)(a2 + 16);
                  v32 = v37;
                }
                v23 = *(_QWORD *)(a2 + 8);
                *(_QWORD *)(v23 + 8 * v26) = v32;
                v31 = a1[2].m128i_i16[0];
                ++*(_DWORD *)(a2 + 16);
                if ( v31 != 66 )
                {
LABEL_43:
                  if ( v31 == 23 )
                    goto LABEL_44;
                  continue;
                }
              }
              else
              {
                v21 = (unsigned __int64)&v38;
                v38 = 1507394;
                v39 = 449;
                sub_15680D0(a1, &v38, 3, 2);
                v34 = v36;
                v31 = a1[2].m128i_i16[0];
                if ( v31 != 66 )
                  goto LABEL_43;
              }
              v33 = (__int64 *)a1->m128i_i64[1];
              v21 = (unsigned __int64)m128i_i32;
              a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
              sub_14634E0(v33, m128i_i32);
              if ( a1[2].m128i_i16[0] == 23 )
                goto LABEL_44;
            }
          }
        }
LABEL_10:
        sub_1564840(&v40, a1, m128i_i32, 1801);
        sub_AEA040((__int64)&v40);
        v13 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v13, m128i_i32);
        v34 = 1;
        goto LABEL_11;
      }
      if ( v10[2] != 0x7973746567726174LL || *((_WORD *)v10 + 12) != 25454 )
        goto LABEL_10;
      if ( v35 )
      {
        sub_1564840(&v40, a1, m128i_i32, 2176);
        sub_1503D30((unsigned __int8 **)&v40, (__int64)"targetsync");
        sub_AEA040((__int64)&v40);
      }
      v17 = (__int64 *)a1->m128i_i64[1];
      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
      sub_14634E0(v17, m128i_i32);
      v35 = 1;
    }
LABEL_11:
    if ( a1[2].m128i_i16[0] != 66 )
      break;
    v14 = (__int64 *)a1->m128i_i64[1];
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v14, m128i_i32);
  }
  while ( a1[2].m128i_i16[0] == 5 );
  if ( (unsigned __int8)v8 | v34 || (v8 = 0, v34 = 0, v35) )
  {
    if ( a3 != 49 )
      goto LABEL_15;
    goto LABEL_30;
  }
LABEL_29:
  sub_1564840(&v40, a1, m128i_i32, 1801);
  v8 = 0;
  sub_AEA040((__int64)&v40);
  v35 = 0;
  v34 = 1;
  if ( a3 != 49 )
    goto LABEL_15;
LABEL_30:
  if ( a1[2].m128i_i16[0] == 62
    || (v35 || v8)
    && (sub_1564840(&v40, a1, m128i_i32, 2186),
        sub_1503D30((unsigned __int8 **)&v40, (__int64)"interop types"),
        sub_AEA040((__int64)&v40),
        a1[2].m128i_i16[0] == 62) )
  {
    v18 = (__int64 *)a1->m128i_i64[1];
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v18, m128i_i32);
  }
LABEL_15:
  *(_BYTE *)a2 = v8;
  *(_BYTE *)(a2 + 1) = v35;
  return v34;
}
