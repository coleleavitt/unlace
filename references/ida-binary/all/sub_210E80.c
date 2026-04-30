__int64 __fastcall sub_210E80(unsigned int a1, unsigned __int8 a2)
{
  unsigned int *v2; // rbx
  int v3; // edx
  unsigned __int64 v4; // rsi
  __int64 v5; // rax

  v2 = (unsigned int *)sub_234FE0((unsigned int)dword_8CC428);
  if ( v2 )
  {
    if ( dbg && *(char *)(dbg + 34) < 0 )
    {
      v3 = sub_20CEA0(dbg, 39, *v2, a1) != 1;
    }
    else
    {
      v3 = 0;
      if ( ((unsigned __int8)a1 & *((_BYTE *)v2 + 153)) == 0 )
      {
        v4 = *((_QWORD *)v2 + 16);
        if ( v4 )
        {
          v5 = 0;
          while ( (*(_BYTE *)(*((_QWORD *)v2 + 15) + 16 * v5 + 8) & (unsigned __int8)a1) == 0 )
          {
            v5 = ++v3;
            if ( v3 >= v4 )
              goto LABEL_17;
          }
          v3 = 0;
        }
        else
        {
LABEL_17:
          v3 = 1;
        }
      }
    }
    if ( sub_210D40(v2, a1, v3, 1) )
      goto LABEL_11;
    return 0;
  }
  if ( !dbg || *(char *)(dbg + 34) >= 0 )
    return 0;
  if ( (unsigned int)sub_20CEA0(dbg, 38, (unsigned int)dword_8CC428, a2, a1) == 1 )
  {
LABEL_11:
    dword_8CC55C |= 3u;
    return 1;
  }
  return 0;
}
