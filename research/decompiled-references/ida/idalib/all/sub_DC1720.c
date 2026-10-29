__int64 __fastcall sub_DC1720(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  void *v4; // rdx
  unsigned int v5; // eax
  unsigned int v6; // esi
  unsigned int v7; // ebp
  _BYTE *v8; // rax
  __int64 v9; // rdx
  char v11; // [rsp+Fh] [rbp-49h] BYREF
  void *v12; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v13; // [rsp+18h] [rbp-40h]
  char v14; // [rsp+1Ch] [rbp-3Ch]
  void *v15; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v16; // [rsp+28h] [rbp-30h]
  char v17; // [rsp+2Ch] [rbp-2Ch]
  int v18; // [rsp+30h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 176);
  v3 = sub_E21760(v2, 24);
  v16 = *(_DWORD *)(v3 + 8);
  v4 = *(void **)v3;
  *(_DWORD *)(v3 + 8) = 0;
  v15 = v4;
  LOBYTE(v4) = *(_BYTE *)(v3 + 12);
  LODWORD(v3) = *(_DWORD *)(v3 + 16);
  v17 = (char)v4;
  v18 = v3;
  sub_E21790(v2, 24);
  sub_21F3DA0(&v12, &v15, 8, 1, &v11);
  if ( !v11 || (v5 = sub_DC1640(a1, a2, (__int64)&v12), v6 = v13, v7 = v5, (_BYTE)v5) )
  {
    v8 = (_BYTE *)sub_E216C0(*(_QWORD *)(a1 + 176), 8);
    v6 = v13;
    if ( v14 )
    {
      LOBYTE(v9) = (_BYTE)v12;
      if ( v13 > 0x40 )
        v9 = *(_QWORD *)v12;
    }
    else if ( v13 > 0x40 )
    {
      LOBYTE(v9) = *(_BYTE *)v12;
    }
    else
    {
      LOBYTE(v9) = 0;
      if ( v13 )
        v9 = (__int64)((_QWORD)v12 << (64 - (unsigned __int8)v13)) >> (64 - (unsigned __int8)v13);
    }
    *v8 = v9;
    v7 = 1;
  }
  if ( v6 > 0x40 && v12 )
    operator delete[](v12);
  if ( v16 > 0x40 && v15 )
    operator delete[](v15);
  return v7;
}
