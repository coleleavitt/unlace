__int64 __fastcall sub_EFF250(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  __int64 v5; // [rsp+0h] [rbp-10h] BYREF

  v1 = *a1;
  result = 0;
  if ( *a1 )
  {
    if ( ((v1 >> 1) & 3) != 0 )
    {
      if ( ((v1 >> 1) & 3) == 2 )
      {
        v4 = v1 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v4 )
        {
          v5 = *(_QWORD *)(v4 + 16);
          return sub_EFF250(&v5);
        }
      }
    }
    else
    {
      v3 = v1 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v3 )
      {
        if ( (*(_BYTE *)(v3 + 28) & 0x7Fu) - 53 < 2 )
          return v3;
      }
    }
  }
  return result;
}

