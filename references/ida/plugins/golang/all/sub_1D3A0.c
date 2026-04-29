__int64 __fastcall sub_1D3A0(__int64 a1, double a2, double a3, double a4)
{
  _DWORD *v4; // rax
  __m128i v5; // xmm1
  __int64 *v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rcx
  char v12; // dl
  __int64 v13; // rbp
  char v14; // al
  __int64 v15; // rdi
  _QWORD *i; // rax
  __int64 *v18; // r13
  __int64 j; // rax
  __int64 v20; // rbx
  __m128i v21; // [rsp+0h] [rbp-98h] BYREF
  __int64 v22; // [rsp+10h] [rbp-88h] BYREF
  __m128i v23; // [rsp+18h] [rbp-80h] BYREF
  __int64 v24; // [rsp+30h] [rbp-68h]
  __m128i v25; // [rsp+38h] [rbp-60h]
  _DWORD *v26; // [rsp+48h] [rbp-50h]
  __int128 v27; // [rsp+50h] [rbp-48h]
  int v28; // [rsp+60h] [rbp-38h]
  bool v29; // [rsp+64h] [rbp-34h]
  unsigned __int64 v30; // [rsp+68h] [rbp-30h]

  v30 = __readfsqword(0x28u);
  v25 = 0;
  v24 = 0;
  v27 = 0;
  v4 = (_DWORD *)qvector_reserve();
  v26 = v4;
  *(_QWORD *)&v27 = 8;
  *v4 = 1819240239;
  *(_DWORD *)((char *)v4 + 3) = 1735287148;
  *((_BYTE *)v26 + 7) = 0;
  v28 = 0;
  get_std_dirtree();
  v23 = 0;
  dirtree_getcwd();
  v22 = 0;
  v5 = _mm_loadu_si128(&v23);
  v23 = 0;
  if ( v24 )
  {
    v21 = v5;
    v25.m128i_i64[0] = 0;
    qfree();
    v5 = _mm_load_si128(&v21);
    v24 = 0;
    v25 = v5;
    if ( v22 )
    {
      v23.m128i_i64[0] = 0;
      qfree();
    }
  }
  else
  {
    v24 = 0;
    v25 = v5;
  }
  v29 = (unsigned __int8)dirtree_mkdir() == 0;
  dirtree_chdir();
  v6 = (_QWORD *)&byte_4;
  v7 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)getinf_flag() )
  {
    v10 = 16;
    v11 = 805307392;
    v12 = 8;
  }
  else
  {
    v10 = 8;
    v11 = 536871936;
    v12 = 4;
  }
  *(_QWORD *)(v7 + 544) = v11;
  *(_BYTE *)(v7 + 565) = v12;
  *(_QWORD *)(v7 + 360) = v10;
  v13 = *(_QWORD *)(a1 + 16);
  if ( !*(_BYTE *)(v13 + 563) )
  {
    v6 = &v22;
    ((void (__fastcall *)(__int64, __int64 *, __int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD), __int64, __int64, __int64, __int64, __int64))callui)(
      11,
      &v22,
      &callui,
      v11,
      v8,
      v9,
      v21.m128i_i64[0],
      v21.m128i_i64[1]);
    *(_QWORD *)(v13 + 392) = v22;
    v14 = sub_11D20(*(_QWORD *)(a1 + 16), 0.0);
    v13 = *(_QWORD *)(a1 + 16);
    if ( !v14 )
    {
      for ( i = (_QWORD *)get_first_seg(); i; i = (_QWORD *)get_next_seg() )
      {
        v18 = (__int64 *)i[1];
        v6 = v18;
        for ( j = sub_AB20(*i, v18); ; j = sub_AB20(v20 + 6, v18) )
        {
          v20 = j;
          if ( j == -1 )
            break;
          *(_QWORD *)(v13 + 392) = j;
          if ( (unsigned __int8)sub_11D20(v13, 0.0) )
            goto LABEL_27;
          v6 = v18;
        }
      }
      sub_5050((__int64)"golang: no pclntab found\n");
LABEL_27:
      v13 = *(_QWORD *)(a1 + 16);
    }
  }
  sub_A1C0(v13, (__int64)v6);
  v15 = *(_QWORD *)(a1 + 16);
  if ( !*(_BYTE *)(v15 + 564) )
    sub_1B9C0(v15, 0.0, *(double *)v5.m128i_i64, a4);
  get_std_dirtree();
  dirtree_chdir();
  if ( v29 )
    dirtree_rmdir();
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree();
  }
  if ( v24 )
  {
    v25.m128i_i64[0] = 0;
    qfree();
  }
  return 0;
}
