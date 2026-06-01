__int64 __fastcall sub_142B00(char a1, int a2, char a3, char a4, unsigned int (__fastcall *a5)(__int64, const char *))
{
  char v8; // r12
  const char *v9; // rsi
  __int64 v10; // rdi

  if ( a1 != 1 && a4 )
  {
    if ( !(unsigned __int8)sub_DC360(64) )
      return 0;
  }
  else if ( a1 )
  {
LABEL_4:
    v8 = 1;
    goto LABEL_5;
  }
  v8 = is_database_flag();
  if ( !v8 )
  {
    if ( a2 || !byte_25022C || (int)sub_F9410(0xFFFFFFFF, 1207) > 0 )
    {
LABEL_5:
      v9 = nullptr;
      v10 = 64;
      if ( (unsigned __int8)upload_idb() )
      {
        v10 = 0;
        v9 = "HIDECANCEL\nThe IDB is being sent to Hex-Rays.\nDo you want to abort the transmission?";
        if ( (unsigned int)sub_924A0(
                             0,
                             (__int64)"HIDECANCEL\n"
                                      "The IDB is being sent to Hex-Rays.\n"
                                      "Do you want to abort the transmission?") != 1 )
          return 0;
      }
      if ( a5 && !a5(v10, v9) )
        return 1;
      if ( (get_merge_state() & 3) != 0 )
        j__switch_dbctx();
      getinf();
      getinf();
      if ( a2 == 1 )
      {
        setinf();
        if ( !a3 )
        {
LABEL_12:
          if ( !v8 )
            return 1;
LABEL_24:
          set_database_flag();
          return 1;
        }
      }
      else
      {
        setinf();
        if ( !a3 )
          goto LABEL_12;
      }
      set_database_flag();
      if ( !v8 )
        return 1;
      goto LABEL_24;
    }
    return 0;
  }
  if ( !get_first_seg() || (unsigned __int8)sub_11AD60(nullptr) )
    goto LABEL_4;
  return 0;
}

