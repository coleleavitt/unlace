void __fastcall sub_8D1560(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rbp
  __int16 v7; // r12
  __int64 v8; // rdi
  void *v9; // [rsp+0h] [rbp-28h]
  unsigned int v10; // [rsp+8h] [rbp-20h]

  *(_QWORD *)(a1 + 800) = a2;
  v3 = *(_QWORD *)(a1 + 568);
  v4 = sub_A1A5A0(v3, 16);
  v5 = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v4 + 8) = 0;
  v10 = v5;
  v9 = *(void **)v4;
  sub_A1A5E0(v3, 16);
  v6 = *(_QWORD *)(a1 + 568);
  v7 = *(_WORD *)sub_A1A5A0(v6, 8);
  sub_A1A5E0(v6, 8);
  v8 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 16);
  *(_DWORD *)(v8 + 8) = v10;
  if ( v10 > 0x40 )
    sub_2585B30(v8);
  else
    *(_QWORD *)v8 = v9;
  *(_WORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v7;
  if ( v10 > 0x40 )
  {
    if ( v9 )
      operator delete[](v9);
  }
}

