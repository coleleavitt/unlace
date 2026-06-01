__int64 __fastcall sub_1EEC00(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  unsigned int v4; // r12d
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // r13
  __int64 v11; // rbp
  _QWORD *v12; // rbx
  __int64 v13; // [rsp+0h] [rbp-C8h] BYREF
  __int128 v14; // [rsp+8h] [rbp-C0h]
  __int64 v15; // [rsp+20h] [rbp-A8h]
  __int128 v16; // [rsp+28h] [rbp-A0h]
  __int64 v17; // [rsp+38h] [rbp-90h]
  __int64 v18; // [rsp+40h] [rbp-88h]
  __int64 v19; // [rsp+48h] [rbp-80h]
  __int128 v20; // [rsp+50h] [rbp-78h]
  __int64 v21; // [rsp+60h] [rbp-68h]
  __int128 v22; // [rsp+68h] [rbp-60h]
  char v23; // [rsp+78h] [rbp-50h]
  unsigned __int64 v24; // [rsp+88h] [rbp-40h]

  v4 = 0;
  v24 = __readfsqword(0x28u);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 112) + 80LL) < (signed int)a2 )
  {
    v15 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v21 = 0;
    v16 = 0;
    v20 = 0;
    v22 = 0;
    if ( (a3 & 0xFFFFFF0F) != 0 || a3 == 192 )
    {
      HIDWORD(v17) = a3;
      LOBYTE(a3) = -64;
    }
    v23 = a3;
    v15 = qvector_reserve();
    v7 = v15 + 80 * v16;
    *(_DWORD *)v7 = 0;
    *(_QWORD *)(v7 + 8) = 0;
    *(_QWORD *)(v7 + 16) = 0;
    *(_QWORD *)&v16 = v16 + 1;
    *(_QWORD *)(v7 + 40) = 0;
    *(_QWORD *)(v7 + 64) = 0;
    *(_DWORD *)(v7 + 72) = 0;
    *(_OWORD *)(v7 + 24) = 0;
    *(_OWORD *)(v7 + 48) = 0;
    if ( a4 )
    {
      v13 = 0;
      copy_tinfo_t();
    }
    else
    {
      sub_32C430(&v13, *(_QWORD *)(a1 + 112), a2, 0);
    }
    copy_tinfo_t();
    clear_tinfo_t();
    v13 = 1;
    copy_tinfo_t();
    clear_tinfo_t();
    v14 = 0;
    v13 = 0;
    v8 = sub_CFF70();
    v4 = 1;
    if ( v8 != 2 )
    {
      v4 = 0;
      if ( v8 == 1 )
        LOBYTE(v4) = (_QWORD)v14 != 0;
    }
    if ( v13 )
    {
      *(_QWORD *)&v14 = 0;
      qfree();
    }
    if ( v21 )
    {
      *(_QWORD *)&v22 = 0;
      qfree();
    }
    cleanup_argloc();
    clear_tinfo_t();
    v9 = v15;
    if ( v15 )
    {
      v10 = v16;
      if ( (_QWORD)v16 )
      {
        v11 = 0;
        do
        {
          v12 = (_QWORD *)(v9 + 80 * v11);
          clear_tinfo_t();
          if ( v12[5] )
          {
            v12[6] = 0;
            qfree();
          }
          if ( v12[2] )
          {
            v12[3] = 0;
            qfree();
          }
          ++v11;
          cleanup_argloc();
          v9 = v15;
        }
        while ( v10 != v11 );
      }
      *(_QWORD *)&v16 = 0;
      qfree();
    }
  }
  return v4;
}
