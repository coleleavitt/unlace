__int64 __fastcall sub_763080(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rdx
  __int64 *v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx

  v1 = *(unsigned __int8 *)(a1 + 204);
  if ( (unsigned __int8)v1 <= 0xEFu )
  {
    if ( (unsigned __int8)v1 <= 0xB3u )
    {
      if ( (unsigned __int8)v1 > 0xA1u )
      {
        if ( (_BYTE)v1 == 0xA7 )
          return 0;
      }
      else if ( (unsigned __int8)v1 > 0x9Fu )
      {
        return 0;
      }
    }
    else
    {
      v2 = 0xFFFF00087F007FFLL;
      if ( _bittest64(&v2, (unsigned int)(v1 + 76)) )
        return 0;
    }
  }
  v4 = *(__int64 **)(a1 + 192);
  *(_BYTE *)(a1 + 204) = -50;
  v5 = v4[1];
  v6 = *v4;
  if ( v4[2] < (unsigned __int64)(v5 + 1) )
  {
    v7 = qvector_reserve(v4, v6, v5 + 1, 1);
    v8 = v4[1];
    *v4 = v7;
    *(_BYTE *)(v7 + v8) = -50;
  }
  else
  {
    *(_BYTE *)(v6 + v5) = -50;
  }
  ++v4[1];
  ++*(_DWORD *)(a1 + 200);
  return 0;
}

