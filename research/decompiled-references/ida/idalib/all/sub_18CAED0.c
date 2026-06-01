char __fastcall sub_18CAED0(__int64 a1, unsigned int a2, _QWORD *a3, __int64 a4)
{
  __int64 v4; // r11
  __int64 v5; // r10
  char result; // al
  int v7; // r9d
  _QWORD *v8; // [rsp+8h] [rbp-10h] BYREF

  v4 = 0;
  v8 = a3;
  if ( a3 )
  {
    v4 = 1;
    a3 = &v8;
  }
  v5 = *(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640;
  result = 0;
  v7 = *(_DWORD *)v5;
  if ( *(_DWORD *)v5 != 2 && v7 != 5 )
  {
    result = v7 == 4 || (unsigned int)(v7 - 6) <= 1;
    if ( result )
    {
      result = *(_BYTE *)(v5 + 596);
      if ( result )
      {
        return 0;
      }
      else if ( (unsigned int)(v7 - 6) <= 1 )
      {
        return sub_18C9A50(a1, a2, a3, v4, a4);
      }
    }
  }
  return result;
}
