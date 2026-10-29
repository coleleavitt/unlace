__int64 __fastcall sub_720870(__int64 a1)
{
  int v1; // edx
  __int64 v2; // rdx

  if ( !*(_BYTE *)(a1 + 5804) )
    return 0;
  v1 = *(_DWORD *)(a1 + 24);
  *(_BYTE *)(a1 + 5804) = 0;
  if ( v1 )
  {
    v2 = *(unsigned int *)(a1 + 36);
    *(_WORD *)(a1 + 1634) = 1;
    *(_QWORD *)(a1 + 2664) = a1 + 1640;
    sub_724B00(a1, a1 + 1640, v2);
    sub_720660(a1, 0xFFFFFFFFLL);
    *(_BYTE *)(a1 + 4220) = 1;
    *(_BYTE *)(a1 + 5804) = 1;
    return a1 + 2672;
  }
  else
  {
    *(_BYTE *)(a1 + 5804) = 1;
    return 0;
  }
}

