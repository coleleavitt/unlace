__int64 __fastcall sub_183D8A0(__int64 a1, unsigned __int64 *a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rsi
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned int v7; // r13d
  unsigned __int64 v8; // rbx
  unsigned int v9; // ebx
  bool v11; // al
  void *v12; // [rsp+0h] [rbp-38h] BYREF
  int v13; // [rsp+8h] [rbp-30h]
  char v14; // [rsp+Ch] [rbp-2Ch]

  v3 = *(_QWORD *)(a1 + 248);
  v4 = *a2;
  v13 = 1;
  v5 = *(_QWORD *)(v3 + 18640);
  v12 = nullptr;
  v14 = 0;
  v6 = sub_1C0AEA0(a1, v4 & 0xFFFFFFFFFFFFFFFCLL, v5, &v12, 5);
  v7 = v13;
  v8 = v6 & 0xFFFFFFFFFFFFFFFELL | *a2 & 3;
  *a2 = v8;
  if ( v6 <= 1 || (*(_DWORD *)(v6 & 0xFFFFFFFFFFFFFFFELL) & 0x20000) != 0 )
  {
    *a2 = v8 & 0xFFFFFFFFFFFFFFFCLL | 2;
    v9 = 0;
  }
  else
  {
    if ( v7 <= 0x40 )
      v11 = v12 == nullptr;
    else
      v11 = (unsigned int)sub_2206780(&v12) == v7;
    *a2 = !v11 | v8 & 0xFFFFFFFFFFFFFFFCLL;
    v9 = 1;
  }
  if ( v7 > 0x40 && v12 )
    operator delete[](v12);
  return v9;
}
