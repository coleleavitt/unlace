void __fastcall sub_8D2F80(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rbp
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 v9; // rdi
  __int64 v10; // rdi
  void *v11; // [rsp+0h] [rbp-38h]
  unsigned int v12; // [rsp+8h] [rbp-30h]
  void *v13; // [rsp+10h] [rbp-28h]
  unsigned int v14; // [rsp+18h] [rbp-20h]

  *(_QWORD *)(a1 + 800) = a2;
  v3 = *(_QWORD *)(a1 + 568);
  v4 = sub_A1A5A0(v3, 16);
  v5 = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v4 + 8) = 0;
  v12 = v5;
  v11 = *(void **)v4;
  sub_A1A5E0(v3, 16);
  v6 = *(_QWORD *)(a1 + 568);
  v7 = sub_A1A5A0(v6, 16);
  v8 = *(_DWORD *)(v7 + 8);
  *(_DWORD *)(v7 + 8) = 0;
  v14 = v8;
  v13 = *(void **)v7;
  sub_A1A5E0(v6, 16);
  v9 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 16);
  *(_DWORD *)(v9 + 8) = v12;
  if ( v12 > 0x40 )
    sub_2585B30(v9);
  else
    *(_QWORD *)v9 = v11;
  v10 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 16);
  *(_DWORD *)(v10 + 8) = v14;
  if ( v14 > 0x40 )
    sub_2585B30(v10);
  else
    *(_QWORD *)v10 = v13;
  if ( v14 > 0x40 && v13 )
    operator delete[](v13);
  if ( v12 > 0x40 )
  {
    if ( v11 )
      operator delete[](v11);
  }
}

