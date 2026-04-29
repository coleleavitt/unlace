__int64 __fastcall sub_8470(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned int v7; // r12d
  __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  unsigned int v11; // r13d
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // r10
  __int64 v18; // rdx
  __int64 v19; // rsi
  _DWORD *v20; // r9
  void *v21; // rsi
  __int64 v23; // [rsp+8h] [rbp-70h]
  __int64 v24; // [rsp+10h] [rbp-68h]
  __int64 v25; // [rsp+18h] [rbp-60h]
  _BYTE *v26; // [rsp+20h] [rbp-58h] BYREF
  __int128 v27; // [rsp+28h] [rbp-50h]
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 8);
  v28 = __readfsqword(0x28u);
  v3 = v1 + *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 32) + v1;
  if ( v3 >= v4 || (v5 = sub_E440(v3, v4, a1 + 88)) == 0 )
    sub_3890((__int64)"function section: couldn't read function count");
  v6 = *(_QWORD *)(a1 + 24);
  v7 = 0;
  *(_QWORD *)(a1 + 40) = v6;
  *(_QWORD *)(a1 + 24) = v5 + v6;
  create_data(v6, 0, v5, -1);
  set_cmt(*(_QWORD *)(a1 + 40), "function count", 0);
  sub_4DA0((__int64 *)(a1 + 192), (unsigned int)(*(_DWORD *)(a1 + 76) + *(_DWORD *)(a1 + 88)));
  if ( *(_DWORD *)(a1 + 88) )
  {
    do
    {
      v8 = *(_QWORD *)(a1 + 8);
      v9 = v8 + *(_QWORD *)(a1 + 24);
      v10 = *(_QWORD *)(a1 + 32) + v8;
      v11 = v7 + *(_DWORD *)(a1 + 76);
      if ( v9 >= v10 || (v12 = *(_QWORD *)(a1 + 192) + 16LL * v11, (v13 = sub_E440(v9, v10, v12 + 12)) == 0) )
        sub_3890((__int64)"function section: couldn't read signature index of function %u", v11);
      v14 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 40) = v14;
      *(_QWORD *)(a1 + 24) = v13 + v14;
      create_data(v14, 0, v13, -1);
      v27 = 0;
      v26 = nullptr;
      v15 = qvector_reserve(&v26, 0, 10, 1);
      v26 = (_BYTE *)v15;
      *(_QWORD *)&v27 = 10;
      *(_QWORD *)v15 = 0x6E6F6974636E7566LL;
      *(_BYTE *)(v15 + 8) = 32;
      v26[9] = 0;
      sub_4EE0((__int64 *)&v26, (__int64)"%u", v11);
      v16 = v27;
      if ( (_QWORD)v27 )
      {
        v17 = v27 + 6;
        v18 = v27 + 7;
        v19 = (__int64)v26;
        v16 = v27 - 1;
        if ( *((_QWORD *)&v27 + 1) < (unsigned __int64)(v27 + 7) )
          goto LABEL_18;
      }
      else
      {
        v19 = (__int64)v26;
        v18 = 8;
        v17 = 7;
        if ( *((_QWORD *)&v27 + 1) < 8u )
        {
LABEL_18:
          v25 = v16;
          v24 = v17;
          v23 = v18;
          v26 = (_BYTE *)qvector_reserve(&v26, v19, v18, 1);
          v16 = v25;
          v19 = (__int64)v26;
          v17 = v24;
          v18 = v23;
        }
      }
      *(_QWORD *)&v27 = v18;
      *(_BYTE *)(v19 + v17) = 0;
      v20 = &v26[v16];
      *v20 = 1931488544;
      *(_DWORD *)((char *)v20 + 3) = 543648115;
      sub_4EE0((__int64 *)&v26, (__int64)"%u", *(_DWORD *)(v12 + 12));
      v21 = &unk_10F58;
      if ( (_QWORD)v27 )
        v21 = v26;
      set_cmt(*(_QWORD *)(a1 + 40), v21, 0);
      if ( *(_DWORD *)(v12 + 12) >= *(_DWORD *)(a1 + 48) )
        sub_3890((__int64)"function section: invalid signature index of function %u", v11);
      if ( v26 )
      {
        *(_QWORD *)&v27 = 0;
        qfree(v26);
      }
      ++v7;
    }
    while ( v7 < *(_DWORD *)(a1 + 88) );
  }
  return 1;
}
