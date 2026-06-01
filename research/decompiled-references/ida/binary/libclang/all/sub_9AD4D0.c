void __fastcall sub_9AD4D0(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebp
  void *v3; // r12
  char v4; // dl
  int v5; // r13d
  void *v6; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v7; // [rsp+8h] [rbp-40h]
  char v8; // [rsp+Ch] [rbp-3Ch]
  int v9; // [rsp+10h] [rbp-38h]

  v1 = sub_A1A5A0(a1, 24);
  v2 = *(_DWORD *)(v1 + 8);
  v3 = *(void **)v1;
  *(_DWORD *)(v1 + 8) = 0;
  v4 = *(_BYTE *)(v1 + 12);
  LODWORD(v1) = *(_DWORD *)(v1 + 16);
  v7 = v2;
  v6 = v3;
  v8 = v4;
  v9 = v1;
  sub_A1A5E0(a1, 24);
  if ( v2 <= 0x40 )
  {
    *(_WORD *)sub_A1A4E0(a1, 8) = v3 != nullptr;
  }
  else
  {
    v5 = sub_2587400(&v6);
    *(_WORD *)sub_A1A4E0(a1, 8) = v5 != v2;
    if ( v3 )
      operator delete[](v3);
  }
}

