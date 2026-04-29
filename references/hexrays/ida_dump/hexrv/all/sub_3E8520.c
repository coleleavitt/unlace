__int64 __fastcall sub_3E8520(__int64 *a1, __int64 a2, __m128 si128)
{
  char *v4; // rsi
  __int64 v5; // r8
  unsigned __int16 v6; // cx
  char *v7; // rax
  int v8; // edi
  char *v9; // rdx
  const char **v10; // r14
  const char *v11; // rsi
  char v12; // bl
  int custom_refinfo; // eax
  char v14; // bl
  __int64 v15; // rax
  char v16; // bl
  char v18; // bl
  __int64 v19; // rax
  char v20; // bl
  __int64 v21; // rax
  __int64 v22; // rax
  const char *v23; // [rsp+10h] [rbp-68h] BYREF
  char v24; // [rsp+18h] [rbp-60h]
  const char *v25; // [rsp+20h] [rbp-58h]
  char v26; // [rsp+28h] [rbp-50h]
  const char *v27; // [rsp+30h] [rbp-48h]
  char v28; // [rsp+38h] [rbp-40h]
  char v29; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v30; // [rsp+48h] [rbp-30h]

  v30 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_3E84C0() )
  {
    if ( !under_debugger )
      sub_37DDE0(0xCE12u, a2, *(double *)si128.m128_u64);
LABEL_22:
    BUG();
  }
  sub_3E5130((__m128i *)&unk_4C0C30 - 45, (__int64 *)&unk_4C0C30, 10);
  sub_3E5020((char **)&unk_4C0C30 - 58);
  v4 = (char *)&unk_4C0C30 - 464;
  do
  {
    v5 = *(_QWORD *)v4;
    v6 = *((_WORD *)v4 + 4);
    v7 = v4 - 16;
    v8 = *((_DWORD *)v4 + 3);
    if ( v6 >= *((_WORD *)v4 - 4) )
    {
      v9 = v4;
    }
    else
    {
      do
      {
        si128 = (__m128)_mm_load_si128((const __m128i *)v7);
        v9 = v7;
        v7 -= 16;
        *((__m128 *)v7 + 2) = si128;
      }
      while ( v6 < *((_WORD *)v7 + 4) );
    }
    v4 += 16;
    *(_QWORD *)v9 = v5;
    *((_WORD *)v9 + 4) = v6;
    *((_DWORD *)v9 + 3) = v8;
  }
  while ( v4 != (char *)&unk_4C0C30 );
  v10 = &v23;
  v11 = "$ ignore micro";
  netnode_check(a1[12] + 104, "$ ignore micro", 0, 1);
  v24 = 1;
  v23 = "HI20";
  v25 = "GOT20";
  v26 = 1;
  v27 = "LO12";
  v28 = 0;
  do
  {
    v12 = *((_BYTE *)v10 + 8);
    custom_refinfo = find_custom_refinfo(*v10);
    if ( custom_refinfo == -1 )
    {
      if ( !under_debugger )
        sub_37DDE0(0xCE2Fu, (__int64)v11, *(double *)si128.m128_u64);
      goto LABEL_22;
    }
    if ( v12 )
    {
      v14 = custom_refinfo;
      v15 = a1[39];
      v16 = v14 | 0x40;
      v11 = (const char *)a1[38];
      if ( a1[40] < (unsigned __int64)(v15 + 1) )
      {
        v21 = qvector_reserve(a1 + 38, v11, v15 + 1, 1);
        a1[38] = v21;
        v11 = (const char *)v21;
        v15 = a1[39];
      }
      v11[v15] = v16;
      ++a1[39];
    }
    else
    {
      v18 = custom_refinfo;
      v19 = a1[42];
      v20 = v18 | 0x40;
      v11 = (const char *)a1[41];
      if ( a1[43] < (unsigned __int64)(v19 + 1) )
      {
        v22 = qvector_reserve(a1 + 41, v11, v19 + 1, 1);
        a1[41] = v22;
        v11 = (const char *)v22;
        v19 = a1[42];
      }
      v11[v19] = v20;
      ++a1[42];
    }
    v10 += 2;
  }
  while ( v10 != (const char **)&v29 );
  sub_1CE550(a1[12]);
  sub_1CE540(a1[12], 1);
  return 1;
}
