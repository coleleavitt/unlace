__int64 __fastcall sub_3767A0(__int64 a1)
{
  unsigned int v1; // r13d
  __int64 v2; // rax
  int v3; // ecx
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 v6; // rbp
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v11; // [rsp+10h] [rbp-98h] BYREF
  __int128 v12; // [rsp+18h] [rbp-90h]
  __int64 v13; // [rsp+28h] [rbp-80h]
  __int64 v14; // [rsp+30h] [rbp-78h]
  __int64 v15; // [rsp+38h] [rbp-70h]
  __int128 v16; // [rsp+40h] [rbp-68h]
  __int64 v17; // [rsp+50h] [rbp-58h]
  __int128 v18; // [rsp+58h] [rbp-50h]
  char v19; // [rsp+68h] [rbp-40h]
  unsigned __int64 v20; // [rsp+78h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 1496);
  v3 = *(_DWORD *)(a1 + 464);
  v20 = __readfsqword(0x28u);
  if ( *(_DWORD *)(v2 + 656) <= v3 )
    sub_3311F0((_QWORD *)a1, 0xFFFFFFFFFFFFFFFFLL, 0x16u);
  v11 = 0;
  v19 = 16;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v17 = 0;
  v12 = 0;
  v16 = 0;
  v18 = 0;
  sub_3760F0(a1, (__int64)&v11);
  create_tinfo();
  LOBYTE(v1) = (unsigned int)verify_tinfo() == 0;
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v17);
  }
  cleanup_argloc();
  clear_tinfo_t();
  v4 = v11;
  if ( v11 )
  {
    v5 = v12;
    if ( (_QWORD)v12 )
    {
      v6 = 0;
      do
      {
        v7 = (_QWORD *)(v4 + 80 * v6);
        clear_tinfo_t();
        v8 = v7[5];
        if ( v8 )
        {
          v7[6] = 0;
          qfree(v8);
        }
        v9 = v7[2];
        if ( v9 )
        {
          v7[3] = 0;
          qfree(v9);
        }
        ++v6;
        cleanup_argloc();
        v4 = v11;
      }
      while ( v5 != v6 );
    }
    *(_QWORD *)&v12 = 0;
    qfree(v4);
  }
  return v1;
}
