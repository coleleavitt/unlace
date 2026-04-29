__int64 sub_5B900()
{
  __int64 v0; // rbx
  char v1; // bp
  char v2; // al
  char v3; // dl
  const char *v4; // r13
  int idasgn_qty; // ebp
  int v7; // ebx
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 nlist_size; // rbp
  int v11; // r15d
  int v12; // r14d
  int v13; // r13d
  __int64 v14; // r12
  int v15; // eax
  int v16; // eax
  unsigned __int64 *v17; // rax
  const char *v18; // rsi
  char v19; // [rsp+11h] [rbp-1B7h]
  char v20; // [rsp+48h] [rbp-180h] BYREF
  unsigned __int64 v21; // [rsp+188h] [rbp-40h] BYREF

  v21 = __readfsqword(0x28u);
  if ( (getinf() & 0xF) == 0 )
  {
    if ( (unsigned int)getinf() != 18 )
    {
      v8 = getinf();
      if ( (unsigned int)v8 <= 0xC )
      {
        v9 = 7568;
        if ( _bittest64(&v9, v8) )
        {
          nlist_size = get_nlist_size();
          if ( nlist_size )
          {
            v11 = 0;
            v12 = 0;
            v13 = 0;
            v14 = 32769;
            do
            {
              get_nlist_name();
              v15 = demangle_name();
              if ( v15 > 0 )
              {
                if ( (v15 & 0x74000000) == 0x24000000 )
                  break;
                if ( !_bittest64(&v14, v15 & 0xF) )
                {
                  v16 = v15 & 0x70000000;
                  if ( v16 == 805306368 )
                    break;
                  if ( v16 > 805306368 )
                  {
                    if ( ((v16 - 1342177280) & 0xE0000000) != 0 )
                      break;
                    if ( ++v12 > 99 )
                      break;
                  }
                  else
                  {
                    if ( v16 != 0x20000000 )
                      break;
                    if ( ++v13 > 99 )
                      break;
                  }
                }
              }
              ++v11;
            }
            while ( v11 < nlist_size );
          }
        }
      }
    }
    set_compiler();
  }
  if ( (getinf() & 0xF) == 1 && get_name_ea() != -1 )
    set_compiler();
  netnode_check();
  v0 = netnode_altval();
  v1 = getinf() & 0xF;
  if ( (unsigned int)getinf() == 11 && sub_356F0() )
  {
    getinf_flag();
    add_til();
LABEL_23:
    if ( v1 )
      goto LABEL_24;
LABEL_17:
    getinf();
    setinf();
    if ( (getinf() & 0xC) != 0 )
      goto LABEL_25;
LABEL_18:
    if ( (getinf() & 3) == 2 && (getinf(), (unsigned __int8)xrefblk_t_first_to()) )
    {
      v17 = (unsigned __int64 *)&v20;
      do
      {
        *(_WORD *)v17 = 0;
        v17 += 5;
        *((_WORD *)v17 - 19) = 0;
        *((_WORD *)v17 - 18) = 0;
        *((_DWORD *)v17 - 2) = 0;
        *((_WORD *)v17 - 17) = 0;
        *((_OWORD *)v17 - 2) = 0;
        *(v17 - 2) = 0;
      }
      while ( &v21 != v17 );
      get_func();
      decode_prev_insn();
      getinf();
      setinf();
      if ( v19 == 16 )
        v18 = "Large";
      else
        v18 = "Compact";
      sub_51730((__int64)"Detected memory model: %s\n", v18);
      sub_58E80();
    }
    else
    {
      getinf();
      setinf();
    }
    goto LABEL_25;
  }
  v2 = getinf();
  v3 = v2 & 0xF;
  if ( (v2 & 0xF) == 3 )
  {
    if ( (unsigned int)getinf() != 22 && (unsigned int)getinf() != 23 )
      goto LABEL_21;
    getinf_flag();
  }
  else if ( (v2 & 0xC) != 0 )
  {
    if ( v3 != 8 )
      goto LABEL_20;
    setinf();
  }
  else
  {
    if ( v3 != 1 )
    {
      if ( v3 == 2 )
      {
        if ( (unsigned int)getinf() != 7 )
        {
LABEL_9:
          getinf_flag();
          goto LABEL_12;
        }
LABEL_21:
        if ( (unsigned int)getinf() == 11 )
          goto LABEL_13;
        goto LABEL_22;
      }
LABEL_20:
      if ( (unsigned int)getinf() == 18 )
        goto LABEL_9;
      goto LABEL_21;
    }
    if ( (unsigned __int8)getinf_flag() )
      goto LABEL_20;
  }
LABEL_12:
  add_til();
  if ( (unsigned int)getinf() == 11 )
    goto LABEL_13;
LABEL_22:
  if ( (unsigned int)getinf() != 10 )
    goto LABEL_23;
LABEL_13:
  if ( v0 )
    goto LABEL_23;
  if ( (unsigned int)getinf() == 11 )
    sub_35650();
  getinf_flag();
  add_til();
  if ( !v1 )
    goto LABEL_17;
LABEL_24:
  if ( (getinf() & 0xC) == 0 )
    goto LABEL_18;
LABEL_25:
  v4 = "vcseh.sig";
  idasgn_qty = get_idasgn_qty();
  if ( (unsigned __int8)getinf_flag() )
    v4 = "vc64seh.sig";
  if ( (unsigned __int8)sub_6E420(3, 4) )
  {
    if ( !idasgn_qty )
    {
LABEL_45:
      plan_to_apply_idasgn();
      goto LABEL_30;
    }
  }
  else if ( !idasgn_qty && v0 )
  {
    getinf_flag();
    plan_to_apply_idasgn();
    if ( (unsigned int)getinf() != 11 )
      return v21 - __readfsqword(0x28u);
    goto LABEL_35;
  }
  if ( (unsigned int)getinf() != 11 )
    goto LABEL_30;
  v7 = 0;
  if ( idasgn_qty <= 0 )
    goto LABEL_45;
  while ( (unsigned int)get_idasgn_desc() == -1 || strcmp(s1, v4) )
  {
    if ( idasgn_qty == ++v7 )
      goto LABEL_45;
  }
LABEL_30:
  if ( (unsigned int)getinf() != 11 )
    return v21 - __readfsqword(0x28u);
LABEL_35:
  netnode_check();
  if ( !netnode_altval() )
    return v21 - __readfsqword(0x28u);
  getinf_flag();
  return add_til();
}
