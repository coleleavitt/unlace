unsigned __int64 __fastcall sub_3B39D0(__int64 a1, _BYTE *a2, unsigned __int64 a3)
{
  int v3; // eax
  int v4; // ebp
  int v5; // eax
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // rsi
  bool v13; // dl
  _BYTE *v14; // rax
  int v15; // eax
  _BYTE *v17; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v18; // [rsp+8h] [rbp-30h]
  unsigned __int64 v19; // [rsp+18h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  v17 = a2;
  v18 = a3;
  v3 = unpack_dd(&v17);
  *(_DWORD *)a1 = v3;
  v4 = v3;
  v5 = unpack_dd(&v17);
  v6 = v18;
  *(_DWORD *)(a1 + 4) = v5 + v4;
  v7 = unpack_ds(&v17, v6, 1);
  v8 = v18;
  *(_QWORD *)(a1 + 8) = v7;
  v9 = unpack_ds(&v17, v8, 1);
  v10 = v18;
  *(_QWORD *)(a1 + 16) = v9;
  v11 = unpack_ds(&v17, v10, 1);
  v12 = v18;
  v13 = 0;
  *(_QWORD *)(a1 + 24) = v11;
  v14 = v17;
  if ( (unsigned __int64)v17 < v12 )
  {
    v13 = *v17 != 0;
    v14 = v17 + 1;
  }
  v17 = v14;
  *(_BYTE *)(a1 + 32) = v13;
  v15 = -1;
  if ( (dword_2CA24C8 & 0x8000) == 0 )
    v15 = unpack_dd(&v17) - 1;
  *(_DWORD *)(a1 + 36) = v15;
  return v19 - __readfsqword(0x28u);
}

