__int64 __fastcall sub_3767A0(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r13d
  __int64 v3; // rax
  int v4; // ecx
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rbp
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v12; // [rsp+10h] [rbp-98h] BYREF
  __int128 v13; // [rsp+18h] [rbp-90h]
  __int64 v14; // [rsp+28h] [rbp-80h]
  __int64 v15; // [rsp+30h] [rbp-78h] BYREF
  __int64 v16; // [rsp+38h] [rbp-70h] BYREF
  __int128 v17; // [rsp+40h] [rbp-68h]
  __int64 v18; // [rsp+50h] [rbp-58h]
  __int128 v19; // [rsp+58h] [rbp-50h]
  char v20; // [rsp+68h] [rbp-40h]
  unsigned __int64 v21; // [rsp+78h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 1496);
  v4 = *(_DWORD *)(a1 + 464);
  v21 = __readfsqword(0x28u);
  if ( *(_DWORD *)(v3 + 656) <= v4 )
    sub_3311F0((_QWORD *)a1, 0xFFFFFFFFFFFFFFFFLL, 0x16u);
  v12 = 0;
  v20 = 16;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v18 = 0;
  v13 = 0;
  v17 = 0;
  v19 = 0;
  sub_3760F0(a1, (__int64)&v12);
  create_tinfo(a2, 12, 12, &v12);
  LOBYTE(v2) = (unsigned int)verify_tinfo(*a2) == 0;
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18);
  }
  cleanup_argloc(&v16);
  clear_tinfo_t(&v15);
  v5 = v12;
  if ( v12 )
  {
    v6 = v13;
    if ( (_QWORD)v13 )
    {
      v7 = 0;
      do
      {
        v8 = (_QWORD *)(v5 + 80 * v7);
        clear_tinfo_t(v8 + 8);
        v9 = v8[5];
        if ( v9 )
        {
          v8[6] = 0;
          qfree(v9);
        }
        v10 = v8[2];
        if ( v10 )
        {
          v8[3] = 0;
          qfree(v10);
        }
        ++v7;
        cleanup_argloc(v8);
        v5 = v12;
      }
      while ( v6 != v7 );
    }
    *(_QWORD *)&v13 = 0;
    qfree(v5);
  }
  return v2;
}
