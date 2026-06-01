__int64 __fastcall sub_71C930(__int64 a1, const void *a2, int a3, __int64 a4, __int64 a5, int a6)
{
  char *v8; // r14
  int v9; // ebp

  if ( !*(_BYTE *)(a1 + 5804) )
    return 0;
  *(_BYTE *)(a1 + 5804) = 0;
  v8 = sub_7188E0(*(__m128i **)(a1 + 8), 0, 0, a4, a5, a6);
  if ( v8 )
  {
    v9 = *(_DWORD *)a1 - 45;
    if ( v9 > a3 )
      v9 = a3;
    memcpy(v8 + 45, a2, v9);
    sub_718590(*(_QWORD *)(a1 + 8), (__int64)v8);
  }
  else
  {
    v9 = 0;
  }
  *(_BYTE *)(a1 + 5804) = 1;
  return (unsigned int)v9;
}

