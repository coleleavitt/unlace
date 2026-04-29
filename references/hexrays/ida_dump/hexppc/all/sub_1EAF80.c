__int64 __fastcall sub_1EAF80(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  unsigned int v4; // r12d
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // r13
  __int64 v11; // rbp
  _QWORD *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // [rsp+0h] [rbp-C8h] BYREF
  __int128 v16; // [rsp+8h] [rbp-C0h]
  __int64 v17; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v18; // [rsp+28h] [rbp-A0h]
  __int64 v19; // [rsp+38h] [rbp-90h]
  __int64 v20; // [rsp+40h] [rbp-88h] BYREF
  __int64 v21; // [rsp+48h] [rbp-80h] BYREF
  __int128 v22; // [rsp+50h] [rbp-78h]
  __int64 v23; // [rsp+60h] [rbp-68h]
  __int128 v24; // [rsp+68h] [rbp-60h]
  char v25; // [rsp+78h] [rbp-50h]
  unsigned __int64 v26; // [rsp+88h] [rbp-40h]

  v4 = 0;
  v26 = __readfsqword(0x28u);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 112) + 80LL) < (signed int)a2 )
  {
    v17 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v23 = 0;
    v18 = 0;
    v22 = 0;
    v24 = 0;
    if ( (a3 & 0xFFFFFF0F) != 0 || a3 == 192 )
    {
      HIDWORD(v19) = a3;
      LOBYTE(a3) = -64;
    }
    v25 = a3;
    v17 = qvector_reserve(&v17, 0, 1, 80);
    v7 = v17 + 80 * v18;
    *(_DWORD *)v7 = 0;
    *(_QWORD *)(v7 + 8) = 0;
    *(_QWORD *)(v7 + 16) = 0;
    *(_QWORD *)&v18 = v18 + 1;
    *(_QWORD *)(v7 + 40) = 0;
    *(_QWORD *)(v7 + 64) = 0;
    *(_DWORD *)(v7 + 72) = 0;
    *(_OWORD *)(v7 + 24) = 0;
    *(_OWORD *)(v7 + 48) = 0;
    if ( a4 )
    {
      v15 = 0;
      copy_tinfo_t(&v15, a4);
    }
    else
    {
      sub_328100(&v15, *(_QWORD *)(a1 + 112), a2, 0);
    }
    copy_tinfo_t(v7 + 64, &v15);
    clear_tinfo_t(&v15);
    v15 = 1;
    copy_tinfo_t(&v20, &v15);
    clear_tinfo_t(&v15);
    v16 = 0;
    v15 = 0;
    v8 = sub_CC530(0x7DCu, &v15, &v17);
    v4 = 1;
    if ( v8 != 2 )
    {
      v4 = 0;
      if ( v8 == 1 )
        LOBYTE(v4) = (_QWORD)v16 != 0;
    }
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree(v15);
    }
    if ( v23 )
    {
      *(_QWORD *)&v24 = 0;
      qfree(v23);
    }
    cleanup_argloc(&v21);
    clear_tinfo_t(&v20);
    v9 = v17;
    if ( v17 )
    {
      v10 = v18;
      if ( (_QWORD)v18 )
      {
        v11 = 0;
        do
        {
          v12 = (_QWORD *)(v9 + 80 * v11);
          clear_tinfo_t(v12 + 8);
          v13 = v12[5];
          if ( v13 )
          {
            v12[6] = 0;
            qfree(v13);
          }
          v14 = v12[2];
          if ( v14 )
          {
            v12[3] = 0;
            qfree(v14);
          }
          ++v11;
          cleanup_argloc(v12);
          v9 = v17;
        }
        while ( v10 != v11 );
      }
      *(_QWORD *)&v18 = 0;
      qfree(v9);
    }
  }
  return v4;
}
