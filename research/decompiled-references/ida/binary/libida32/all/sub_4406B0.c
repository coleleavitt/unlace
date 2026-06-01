__int64 __fastcall sub_4406B0(int *a1, unsigned int a2, int a3)
{
  unsigned int v4; // ebx
  __int64 v5; // r13

  v4 = a2;
  v5 = switch_dbctx(a1[2]);
  if ( a3 )
  {
    if ( (unsigned int)(a3 - 1) <= 1 )
    {
LABEL_3:
      while ( 1 )
      {
        v4 = a3 == 2 ? prev_head(v4, 0) : next_head(v4, 0xFFFFFFFFLL);
        if ( v4 == -1 )
          break;
        if ( (*(unsigned __int8 (__fastcall **)(int *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v5, v4) )
          return v4;
      }
      return -1;
    }
  }
  else if ( (get_flags_ex(a2, 4) & 0x400) == 0
         || !(*(unsigned __int8 (__fastcall **)(int *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v5, a2) )
  {
    goto LABEL_3;
  }
  if ( a2 != -1 )
    return v4;
  return -1;
}

