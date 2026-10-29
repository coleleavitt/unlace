__int64 __fastcall sub_9E610(__int64 a1)
{
  unsigned __int64 v1; // rsi
  _QWORD *v2; // rcx
  __int64 result; // rax
  int v4; // edx
  int v5; // r8d
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi

  v1 = *(int *)(a1 + 8);
  v2 = *(_QWORD **)a1;
  result = a1;
  v4 = *(_DWORD *)(a1 + 8);
  v5 = *(unsigned __int8 *)(**(_QWORD **)a1 + (v1 >> 3));
  if ( _bittest(&v5, v4 & 7) )
  {
    if ( (v1 & 0x80000000) == 0LL && v1 < (unsigned __int64)xmmword_2524F8 )
    {
      v6 = qword_2524F0 + 56 * v1;
      if ( v6 )
      {
        v7 = *(int *)(v6 + 44);
        if ( (int)v7 < *(_DWORD *)(dbg + 64LL) )
        {
          v8 = *(_QWORD *)(dbg + 56LL) + 32 * v7;
          if ( (*(_BYTE *)(v8 + 9) & 1) == 0 )
          {
            if ( *(_QWORD *)(v8 + 16) )
            {
              if ( v2[7] )
                ++*(_DWORD *)(a1 + 16);
            }
          }
        }
      }
    }
    goto LABEL_10;
  }
  if ( !v2 )
    goto LABEL_11;
  if ( v2[4] == *(_DWORD *)(dbg + 64LL) )
  {
LABEL_10:
    ++*(_DWORD *)(a1 + 12);
LABEL_11:
    *(_DWORD *)(a1 + 8) = v4 + 1;
    return result;
  }
  *(_DWORD *)(a1 + 8) = v4 + 1;
  return result;
}

