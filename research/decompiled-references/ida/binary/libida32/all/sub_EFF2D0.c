__int64 __fastcall sub_EFF2D0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdi
  char v8; // al
  char v9; // dl
  char v10; // si
  char v11; // cl
  char v12; // dl
  int v13; // esi
  int v14; // ecx
  int v15; // eax

  v6 = *a1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v6 )
    return 6;
  v8 = sub_E6D500(v6, a2, a3, a4, a5, a6);
  v9 = v8 & 8;
  if ( (v8 & 8) != 0 )
    v9 = 16;
  v10 = v8 & 4;
  if ( (v8 & 4) != 0 )
    v10 = 12;
  v11 = v8 & 2;
  if ( (v8 & 2) != 0 )
    v11 = 2;
  v12 = v11 | v10 | v8 & 1 | v9;
  v13 = v12 & 0x10;
  if ( (v12 & 0x10) != 0 )
    v13 = 8;
  v14 = v12 & 0xC;
  if ( (v12 & 0xC) != 0 )
    v14 = 4;
  v15 = v12 & 2;
  if ( (v12 & 2) != 0 )
    v15 = 2;
  return v14 | v13 | v12 & 1 | v15 | 6u;
}

