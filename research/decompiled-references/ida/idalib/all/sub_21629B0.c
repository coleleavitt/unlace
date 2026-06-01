unsigned __int64 __fastcall sub_21629B0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int64 a7,
        __int64 a8)
{
  unsigned int v8; // eax
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  bool v12; // cf
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  _QWORD *v16; // rax
  _QWORD *v18; // [rsp+8h] [rbp-30h] BYREF
  _QWORD *v19; // [rsp+10h] [rbp-28h] BYREF
  _QWORD v20[4]; // [rsp+18h] [rbp-20h] BYREF

  v8 = sub_2162900(a1, a2, a3, a4, a5, a6, a7, a8);
  if ( v8 )
  {
    v10 = *(unsigned int *)(a1 + 24) + a2;
    if ( (*(_BYTE *)(a1 + 39) & 1) != 0 && *(_WORD *)(a1 + 32) == 0xFFFF )
      v10 += 10LL;
    v11 = 10LL * v8;
    v12 = __CFADD__(v10, v11);
    v13 = v10 + v11;
    v14 = v12;
    if ( !v12 )
    {
      v14 = a7;
      v9 = a7 + a8;
      if ( v13 <= a7 + a8 && a7 <= v10 )
        return v10;
    }
    v15 = sub_2195B10(a1, a2, v14, v9);
    sub_2220500(&v18, 4, v15);
    v16 = v18;
    if ( !v18 )
      return v10;
    v18 = nullptr;
    v19 = v16;
    sub_A05760(v20, &v19);
    if ( v19 )
      (*(void (__fastcall **)(_QWORD *))(*v19 + 8LL))(v19);
    if ( v18 )
      (*(void (__fastcall **)(_QWORD *))(*v18 + 8LL))(v18);
  }
  return 0;
}
