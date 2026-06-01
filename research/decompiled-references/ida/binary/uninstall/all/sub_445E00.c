__int64 __fastcall sub_445E00(
        __int64 a1,
        const void *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10)
{
  unsigned int v11; // ebx
  int v12; // edx

  v11 = 0;
  v12 = a7 - 2;
  if ( a7 - 2 < 0 )
    v12 = 0;
  if ( a3 > v12 )
  {
    a3 = v12;
    v11 = -4;
  }
  *a8 = a3;
  *a9 = a3;
  *a10 = a3;
  memcpy(a6, a2, a3);
  return v11;
}

