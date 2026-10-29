__int64 __fastcall sub_D97F30(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned int v3; // ebp
  void *v4; // r12
  char v5; // dl
  int v6; // r13d
  void *v8; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v9; // [rsp+8h] [rbp-40h]
  char v10; // [rsp+Ch] [rbp-3Ch]
  int v11; // [rsp+10h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 176);
  v2 = sub_DFDA20(v1, 24);
  v3 = *(_DWORD *)(v2 + 8);
  v4 = *(void **)v2;
  *(_DWORD *)(v2 + 8) = 0;
  v5 = *(_BYTE *)(v2 + 12);
  LODWORD(v2) = *(_DWORD *)(v2 + 16);
  v9 = v3;
  v8 = v4;
  v10 = v5;
  v11 = v2;
  sub_DFDA50(v1, 24);
  if ( v3 <= 0x40 )
  {
    *(_WORD *)sub_DFD980(v1, 8) = v4 != nullptr;
    return 1;
  }
  else
  {
    v6 = sub_21E2A40(&v8);
    *(_WORD *)sub_DFD980(v1, 8) = v6 != v3;
    if ( v4 )
      operator delete[](v4);
    return 1;
  }
}

