__int64 __fastcall sub_2AB670(_QWORD *a1)
{
  __int64 v1; // rax
  int v3; // eax
  __int64 v4; // rdi
  const char *v5; // rsi
  unsigned int *v6; // rbx
  __int64 v7; // rdi
  const char *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // eax
  _QWORD **v12; // rbx
  void *v13; // rdi
  __int64 (__fastcall *v15)(_QWORD *, _QWORD); // rbx
  unsigned int v16; // eax
  __int64 v17; // [rsp+8h] [rbp-80h] BYREF
  unsigned int *v18; // [rsp+10h] [rbp-78h] BYREF
  __int128 v19; // [rsp+18h] [rbp-70h]
  __int64 v20; // [rsp+30h] [rbp-58h] BYREF
  int v21; // [rsp+38h] [rbp-50h] BYREF
  void *v22; // [rsp+40h] [rbp-48h]
  int *v23; // [rsp+48h] [rbp-40h]
  int *v24; // [rsp+50h] [rbp-38h]
  unsigned __int64 v25; // [rsp+58h] [rbp-30h]
  unsigned __int64 v26; // [rsp+68h] [rbp-20h]

  v1 = *a1;
  v26 = __readfsqword(0x28u);
  v3 = (*(__int64 (__fastcall **)(_QWORD *))(v1 + 504))(a1);
  if ( v3 >= 0 )
  {
    v4 = a1[55];
    v18 = nullptr;
    v19 = 0;
    if ( v4 )
      v4 = *(_QWORD *)(v4 + 8);
    v5 = (const char *)&v18;
    sub_29A380(v4, (__int64 *)&v18, v3);
    v6 = v18;
    v21 = 0;
    v23 = &v21;
    v24 = &v21;
    v22 = nullptr;
    v25 = 0;
    if ( 4LL * (_QWORD)v19 )
    {
      do
      {
        v5 = (const char *)*v6;
        v17 = (*(__int64 (__fastcall **)(_QWORD *, const char *))(*a1 + 736LL))(a1, v5);
        if ( v17 != -1 )
        {
          v5 = (const char *)&v17;
          sub_2AB280(&v20, (unsigned __int64 *)&v17);
        }
        ++v6;
      }
      while ( v6 != &v18[(_QWORD)v19] );
    }
    v7 = a1[24];
    if ( v7 )
    {
      a1[25] = 0;
      qfree(v7, v5);
      a1[24] = 0;
      a1[26] = 0;
    }
    sub_2B38C0(a1 + 24);
    if ( v25 <= 1 )
    {
      v15 = *(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 736LL);
      v16 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 504LL))(a1);
      v8 = (const char *)v15(a1, v16);
      sub_1933F0(0, (__int64)v8, 2u);
    }
    else
    {
      v8 = (_BYTE *)(&dword_0 + 2);
      v9 = sub_3EC200(&v20, 2, "Xrefs to collapsed node", sub_2A8900, a1);
      v10 = v9;
      if ( v9 != -1 )
      {
        v11 = sub_192880(v9);
        v8 = (const char *)v10;
        sub_192AA0(0, v10, v11, 1u);
      }
    }
    v12 = (_QWORD **)v22;
    if ( v22 )
    {
      do
      {
        sub_2A8620(v12[3]);
        v13 = v12;
        v12 = (_QWORD **)v12[2];
        v8 = (const char *)&qword_28;
        operator delete(v13, 0x28u);
      }
      while ( v12 );
    }
    if ( v18 )
    {
      *(_QWORD *)&v19 = 0;
      qfree(v18, v8);
    }
  }
  return 0;
}
