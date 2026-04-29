_BOOL8 __fastcall sub_2E540(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 *v4; // rax
  __int64 v5; // rsi
  unsigned __int64 *fchunk; // rax
  unsigned __int64 *v7; // r13
  unsigned __int64 v8; // r14
  __int64 v9; // r12
  __int64 flags; // r15
  unsigned __int64 not_tail; // rax
  __int64 v12; // rax
  __int64 v13; // r12
  unsigned __int64 v14; // r13
  unsigned __int64 item_end; // rax
  __int16 v16; // ax
  unsigned __int64 v17; // [rsp+8h] [rbp-1D0h] BYREF
  _BYTE v18[32]; // [rsp+10h] [rbp-1C8h] BYREF
  __int128 v19; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-198h]
  __int64 v21; // [rsp+48h] [rbp-190h]
  __int64 v22; // [rsp+50h] [rbp-188h]
  char v23; // [rsp+58h] [rbp-180h] BYREF
  unsigned __int64 v24; // [rsp+68h] [rbp-170h]
  unsigned __int16 v25; // [rsp+86h] [rbp-152h]
  unsigned __int64 v26; // [rsp+198h] [rbp-40h] BYREF

  v26 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 260) == 2 )
    return 0;
  v2 = a2;
  if ( (get_flags_ex(a2, 4) & 0x10000) == 0 )
    return 0;
  v20 = -1;
  v4 = (unsigned __int64 *)&v23;
  v21 = 0;
  v22 = 0;
  v19 = -1;
  do
  {
    *(_WORD *)v4 = 0;
    v4 += 5;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *(v4 - 2) = 0;
  }
  while ( &v26 != v4 );
  if ( decode_prev_insn(&v19, a2) == -1 || get_first_fcref_to(a2) != -1 )
    return 0;
  v17 = -1;
  if ( (_WORD)v21 != 202 )
  {
    if ( (unsigned __int16)v21 <= 0xCAu )
    {
      if ( (unsigned __int16)v21 > 0x74u )
      {
        if ( (unsigned __int16)(v21 - 117) > 1u )
          return 0;
        goto LABEL_33;
      }
      if ( (unsigned __int16)v21 <= 0x72u )
      {
        if ( (_WORD)v21 != 114 )
          return 0;
        goto LABEL_14;
      }
    }
    else if ( (_WORD)v21 != 518 )
    {
      if ( (unsigned __int16)v21 <= 0x206u )
      {
        if ( (_WORD)v21 != 203 )
        {
          if ( (_WORD)v21 != 517 )
            return 0;
          goto LABEL_14;
        }
LABEL_33:
        v5 = v24;
        v17 = v24;
LABEL_16:
        v17 = sub_2A800(a1, v5);
        if ( !(unsigned __int8)func_does_return(v17, 0.0) )
        {
          fchunk = (unsigned __int64 *)get_fchunk(v17);
          v7 = fchunk;
          if ( fchunk )
          {
            v8 = *fchunk;
            v9 = v17;
            if ( *fchunk < v17 && (get_flags_ex(v17, 4) & 0x10000) != 0 )
            {
              while ( 1 )
              {
                not_tail = prev_not_tail(v9);
                v9 = not_tail;
                if ( v8 >= not_tail )
                  break;
                flags = get_flags_ex(not_tail, 4);
                if ( (~(_WORD)flags & 0x600) != 0 || (flags & 0x1000) != 0 || !(unsigned int)sub_2E400(a1, v9) )
                  break;
                if ( (flags & 0x10000) == 0 )
                {
                  if ( !(unsigned __int8)sub_28B60(v17, v7[1]) )
                    break;
                  return 0;
                }
              }
            }
          }
          set_noret_insn(v2, 1);
          if ( (unsigned int)get_auto_state() == 40 )
          {
            v12 = get_fchunk(v2);
            v13 = v12;
            if ( v12 )
            {
              v14 = *(_QWORD *)(v12 + 8);
              while ( 1 )
              {
                item_end = get_item_end(v2);
                v2 = item_end;
                if ( item_end >= v14 )
                  break;
                v16 = get_flags_ex(item_end, 4);
                if ( (~v16 & 0x600) != 0 || (v16 & 0x1000) != 0 || !(unsigned int)sub_2E400(a1, v2) )
                {
                  if ( (unsigned __int8)xrefblk_t_first_to(v18, v2, 5) )
                  {
                    while ( v18[17] != 17 )
                    {
                      if ( !(unsigned __int8)xrefblk_t_next_to(v18) )
                        return 1;
                    }
                    sub_28B60(v2, *(_QWORD *)(v13 + 8));
                  }
                  return 1;
                }
              }
            }
          }
          return 1;
        }
        return 0;
      }
      if ( (_WORD)v21 == 821 )
        goto LABEL_33;
      if ( (unsigned __int16)(v21 - 835) > 1u )
        return 0;
LABEL_14:
      if ( !(unsigned __int8)sub_48730(a1, &v17, v20, v25) )
        return 0;
      v5 = v17;
      goto LABEL_16;
    }
    return 1;
  }
  return (v22 & 0x400) == 0;
}
