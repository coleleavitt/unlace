__int64 __fastcall sub_D9DFD0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  void *v4; // rdx
  unsigned int v5; // ebp
  _DWORD *v6; // rax
  __int64 v7; // rdx
  char v9; // [rsp+Fh] [rbp-49h] BYREF
  void *v10; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v11; // [rsp+18h] [rbp-40h]
  char v12; // [rsp+1Ch] [rbp-3Ch]
  void *v13; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+28h] [rbp-30h]
  char v15; // [rsp+2Ch] [rbp-2Ch]
  int v16; // [rsp+30h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 176);
  v3 = sub_DFDA20(v2, 24);
  v14 = *(_DWORD *)(v3 + 8);
  v4 = *(void **)v3;
  *(_DWORD *)(v3 + 8) = 0;
  v13 = v4;
  LOBYTE(v4) = *(_BYTE *)(v3 + 12);
  LODWORD(v3) = *(_DWORD *)(v3 + 16);
  v15 = (char)v4;
  v16 = v3;
  sub_DFDA50(v2, 24);
  sub_21D0060(&v10, &v13, 32, 0, &v9);
  if ( !v9 || (v5 = sub_D9D900(a1, a2, (__int64)&v10), (_BYTE)v5) )
  {
    v6 = (_DWORD *)sub_DFD980(*(_QWORD *)(a1 + 176), 8);
    if ( v12 )
    {
      LODWORD(v7) = (_DWORD)v10;
      if ( v11 > 0x40 )
        v7 = *(_QWORD *)v10;
    }
    else
    {
      LODWORD(v7) = v11;
      if ( v11 > 0x40 )
      {
        LODWORD(v7) = *(_DWORD *)v10;
      }
      else if ( v11 )
      {
        v7 = (__int64)((_QWORD)v10 << (64 - (unsigned __int8)v11)) >> (64 - (unsigned __int8)v11);
      }
    }
    *v6 = v7;
    v5 = 1;
  }
  if ( v11 > 0x40 && v10 )
    operator delete[](v10);
  if ( v14 > 0x40 && v13 )
    operator delete[](v13);
  return v5;
}

