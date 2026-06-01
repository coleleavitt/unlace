__int64 __fastcall sub_D1B2A0(__int64 a1, __int64 a2, __int64 *a3, int a4)
{
  char v6; // al
  __int64 v7; // rbp
  unsigned int v8; // r12d
  __int64 v10; // rax
  __int64 v11; // rbx
  void *v12; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v13; // [rsp+8h] [rbp-90h]
  char v14; // [rsp+Ch] [rbp-8Ch]
  int v15; // [rsp+10h] [rbp-88h]
  void *v16; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v17; // [rsp+28h] [rbp-70h]
  char v18; // [rsp+2Ch] [rbp-6Ch]
  int v19; // [rsp+30h] [rbp-68h]
  _BYTE v20[88]; // [rsp+40h] [rbp-58h] BYREF

  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(*(_QWORD *)(a1 + 24));
  v7 = *(_QWORD *)(a1 + 400);
  if ( v6 && !*(_DWORD *)(v7 + 24) )
    return 0;
  v8 = sub_DCA720(a1, a2, v7 + 40);
  if ( !(_BYTE)v8 )
    return 0;
  sub_E23220(
    v20,
    *(_QWORD *)(v7 + 72),
    (unsigned int)(a4 + *(_DWORD *)(v7 + 40)),
    (unsigned int)(a4 + *(_DWORD *)(v7 + 40)));
  sub_D0AF80((__int64)&v12, *(_QWORD *)(a1 + 176));
  sub_B78170(*a3);
  v17 = v13;
  if ( v13 > 0x40 )
    sub_2205510(&v16);
  else
    v16 = v12;
  v18 = v14;
  v19 = v15;
  v10 = sub_D0F1C0((__int64)v20);
  v11 = v10;
  if ( *(_DWORD *)(v10 + 8) > 0x40u && *(_QWORD *)v10 )
    operator delete[](*(void **)v10);
  *(_QWORD *)v11 = v16;
  *(_DWORD *)(v11 + 8) = v17;
  *(_BYTE *)(v11 + 12) = v18;
  *(_DWORD *)(v11 + 16) = v19;
  sub_E24D00(v20);
  if ( v13 > 0x40 )
  {
    if ( v12 )
      operator delete[](v12);
  }
  sub_E232A0(v20);
  return v8;
}
