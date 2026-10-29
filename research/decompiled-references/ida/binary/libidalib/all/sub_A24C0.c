__int64 __fastcall sub_A24C0(unsigned __int8 a1)
{
  __int64 v1; // rbx
  int v2; // edx
  unsigned __int64 v3; // rsi
  __int64 v4; // rax

  v1 = sub_C6150((unsigned int)dword_252588);
  if ( v1 )
  {
    if ( dbg && *(char *)(dbg + 34LL) < 0 )
    {
      v2 = sub_9E1E0() != 1;
    }
    else
    {
      v2 = 0;
      if ( (a1 & *(_BYTE *)(v1 + 153)) == 0 )
      {
        v3 = *(_QWORD *)(v1 + 128);
        if ( v3 )
        {
          v4 = 0;
          while ( (*(_BYTE *)(*(_QWORD *)(v1 + 120) + 16 * v4 + 8) & a1) == 0 )
          {
            v4 = ++v2;
            if ( v2 >= v3 )
              goto LABEL_17;
          }
          v2 = 0;
        }
        else
        {
LABEL_17:
          v2 = 1;
        }
      }
    }
    if ( sub_A2380((unsigned int *)v1, a1, v2, 1) )
      goto LABEL_11;
    return 0;
  }
  if ( !dbg || *(char *)(dbg + 34LL) >= 0 )
    return 0;
  if ( (unsigned int)sub_9E1E0() == 1 )
  {
LABEL_11:
    dword_2526BC |= 3u;
    return 1;
  }
  return 0;
}

