void __fastcall sub_DFED30(_QWORD *a1)
{
  __int64 v1; // rax
  int v2; // esi
  unsigned int v3; // r15d
  __int64 (__fastcall *v4)(__int64, _QWORD, _QWORD *, _BOOL4, _QWORD, _QWORD, _QWORD *); // r13
  __int64 v5; // rax
  __int64 v6; // r15
  void (__fastcall ***v7)(void *); // r13
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // r14
  void (__fastcall ***v11)(void *); // r13
  __int64 v12; // rax
  __int64 v13; // r15
  void (__fastcall ***v14)(void *); // r13
  unsigned int v15; // [rsp+0h] [rbp-50h]
  _BOOL4 v16; // [rsp+4h] [rbp-4Ch]
  __int64 v17; // [rsp+8h] [rbp-48h]
  bool v18; // [rsp+15h] [rbp-3Bh] BYREF
  unsigned __int8 v19; // [rsp+16h] [rbp-3Ah] BYREF
  unsigned __int8 v20; // [rsp+17h] [rbp-39h] BYREF
  _QWORD v21[7]; // [rsp+18h] [rbp-38h] BYREF

  sub_DFBCB0(a1);
  v1 = a1[37];
  v19 = 1;
  v2 = *(_DWORD *)(v1 + 712);
  v20 = 1;
  v21[0] = 0;
  v18 = v2 != 0;
  sub_15B1410(a1 + 14, v21, &v18, &v19, &v20);
  v3 = v19;
  v17 = a1[107];
  v15 = v20;
  v16 = v18;
  v4 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *, _BOOL4, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v17 + 16LL);
  sub_DFBCB0(a1);
  v5 = v4(v17, a1[37], v21, v16, v3, v15, a1 + 31);
  v6 = v5;
  if ( v5 )
    ++*(_DWORD *)(v5 + 48);
  v7 = (void (__fastcall ***)(void *))a1[108];
  if ( v7 )
  {
    v8 = (*((_DWORD *)v7 + 12))-- == 1;
    if ( v8 )
    {
      (**v7)(v7);
      sub_186B220(v7);
    }
  }
  a1[108] = v6;
  v9 = sub_E21F10(v6);
  v10 = v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 48);
  v11 = (void (__fastcall ***)(void *))a1[108];
  if ( v11 )
  {
    v8 = (*((_DWORD *)v11 + 12))-- == 1;
    if ( v8 )
    {
      (**v11)(v11);
      sub_186B220(v11);
    }
  }
  v8 = a1[104] == 0;
  a1[108] = v10;
  if ( !v8 )
  {
    v12 = sub_E4FC20(v10, a1 + 102);
    v13 = v12;
    if ( v12 )
      ++*(_DWORD *)(v12 + 48);
    v14 = (void (__fastcall ***)(void *))a1[108];
    if ( v14 )
    {
      v8 = (*((_DWORD *)v14 + 12))-- == 1;
      if ( v8 )
      {
        (**v14)(v14);
        sub_186B220(v14);
      }
    }
    a1[108] = v13;
  }
  sub_18572D0(v21);
}

