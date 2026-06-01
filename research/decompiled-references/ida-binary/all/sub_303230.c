__int64 __fastcall sub_303230(
        char a1,
        int a2,
        char a3,
        char a4,
        unsigned int (*a5)(void),
        double a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  char v16; // r12
  int v17; // esi
  unsigned int v18; // esi

  if ( a1 != 1 && a4 )
  {
    if ( !(unsigned __int8)sub_24B020(64, a6, a7, a8, a9, a10, a11, a12, a13) )
      return 0;
  }
  else if ( a1 )
  {
LABEL_4:
    v16 = 1;
    goto LABEL_5;
  }
  v16 = is_database_flag(8);
  if ( !v16 )
  {
    if ( a2 || !byte_8BC930 || (int)sub_300700(-1, 1207) > 0 )
    {
LABEL_5:
      if ( (unsigned __int8)upload_idb(64, 0, 0, 0, 0, 0, 0, 0, 0, 0)
        && (unsigned int)sub_1698A0(
                           0,
                           (int)"HIDECANCEL\nThe IDB is being sent to Hex-Rays.\nDo you want to abort the transmission?") != 1 )
      {
        return 0;
      }
      if ( a5 && !a5() )
        return 1;
      if ( (get_merge_state() & 3) != 0 )
        j__switch_dbctx(0);
      getinf(3);
      v17 = getinf(3);
      if ( a2 == 2 )
      {
        v18 = v17 | 0x400;
      }
      else
      {
        v18 = v17 & 0xFFFFFBFF;
        if ( a2 == 1 )
        {
          setinf(3, v18 | 0x200);
          if ( !a3 )
          {
LABEL_13:
            if ( !v16 )
              return 1;
LABEL_26:
            set_database_flag(1, 1);
            return 1;
          }
LABEL_25:
          set_database_flag(2, 1);
          if ( !v16 )
            return 1;
          goto LABEL_26;
        }
      }
      setinf(3, v18 & 0xFFFFFDFF);
      if ( !a3 )
        goto LABEL_13;
      goto LABEL_25;
    }
    return 0;
  }
  if ( !get_first_seg() || (unsigned __int8)sub_31BCA0(0) )
    goto LABEL_4;
  return 0;
}
