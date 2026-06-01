void __fastcall sub_2A74C0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // r12
  _DWORD *v7; // r13
  __int64 v9; // rax
  __int64 v10; // r13
  void *ptr; // [rsp+8h] [rbp-48h]
  unsigned __int8 v12; // [rsp+1Dh] [rbp-33h] BYREF
  unsigned __int8 v13; // [rsp+1Eh] [rbp-32h] BYREF
  unsigned __int8 v14; // [rsp+1Fh] [rbp-31h] BYREF
  char v15[8]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v16[40]; // [rsp+28h] [rbp-28h] BYREF

  v12 = 1;
  v13 = 1;
  v14 = 0;
  sub_1858590(v15, a2 + 40);
  sub_15B10B0(a1 + 96);
  sub_15B1410(a1 + 96, v15, &v12, &v13, &v14);
  v4 = *(_QWORD *)(a2 + 24);
  if ( !v4 )
  {
    v9 = sub_AFF8B0();
    v4 = *(_QWORD *)(a2 + 24);
    v10 = v9;
    if ( v9 != v4 )
    {
      if ( v4 )
      {
        ptr = *(void **)(a2 + 24);
        (**(void (***)(void))v4)();
        sub_186B220(ptr);
      }
      *(_QWORD *)(a2 + 24) = v10;
      v4 = v10;
    }
  }
  v5 = *(_QWORD *)(a1 + 232);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, char *, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)v4 + 16LL))(
         v4,
         v5,
         v15,
         v12,
         v13,
         v14,
         a2 + 56);
  if ( v6 )
    ++*(_DWORD *)(v6 + 48);
  v7 = *(_DWORD **)(a2 + 32);
  if ( v7 )
  {
    if ( v7[12]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *, __int64))v7)(v7, v5);
      sub_186B220(v7);
    }
  }
  *(_QWORD *)(a2 + 32) = v6;
  sub_1857380(v16);
  (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a2 + 32) + 112LL))(*(_QWORD *)(a2 + 32), v16);
  sub_15B1320(v16);
  sub_18632D0(v15, v16);
  (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a2 + 32) + 88LL))(*(_QWORD *)(a2 + 32), v15);
  sub_1857540(v16);
  sub_18572D0(v15);
}

