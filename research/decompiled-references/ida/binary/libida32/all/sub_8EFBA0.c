__int64 __fastcall sub_8EFBA0(_DWORD *a1, unsigned __int64 a2, const void *a3, size_t a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax

  if ( a4 > 0x1F )
  {
    v4 = a4 + (a4 > 0xFFF) + 2;
    if ( v4 <= a2 )
    {
      if ( a4 > 0xFFF )
      {
        *a1 = 16 * a4 + 12;
        v5 = 3;
      }
      else
      {
        *(_WORD *)a1 = 16 * a4 + 4;
        v5 = 2;
      }
      goto LABEL_8;
    }
    return -70;
  }
  v4 = a4 + 1;
  if ( a2 < a4 + 1 )
    return -70;
  *(_BYTE *)a1 = 8 * a4;
  v5 = 1;
LABEL_8:
  memcpy((char *)a1 + v5, a3, a4);
  return v4;
}

