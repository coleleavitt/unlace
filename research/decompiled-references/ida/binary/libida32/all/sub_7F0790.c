__int64 __fastcall sub_7F0790(__int64 *a1, unsigned int a2)
{
  unsigned int first_dref_from; // eax
  unsigned int next_dref_from; // ebx
  __int64 result; // rax
  __int64 v6; // r13
  unsigned int v7; // ebx
  unsigned int sreg; // eax
  __int64 v9; // rdi
  int segm_base; // r13d
  __int64 flags; // rbx
  unsigned int v12; // r14d
  unsigned __int16 word; // ax
  int dword; // eax
  __int64 v15; // rax
  __int64 v16; // rdi
  unsigned int v17; // eax
  _DWORD v18[18]; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  first_dref_from = get_first_dref_from(a2);
  if ( first_dref_from == -1 )
  {
LABEL_7:
    v6 = *a1;
    if ( (unsigned int)getinf(18) == -1 )
    {
      if ( (unsigned int)getinf(16) == -1 )
        v7 = getinf(19);
      else
        v7 = getinf(16);
    }
    else
    {
      v7 = getinf(18);
    }
    sreg = get_sreg(v7, *(unsigned int *)(v6 + 844));
    v9 = sreg;
    if ( sreg == -1 )
    {
      v15 = getseg(v7);
      v16 = v15;
      if ( !v15 || (v17 = *(_DWORD *)(v15 + 4LL * (*(_DWORD *)(v6 + 844) - *(_DWORD *)(v6 + 828)) + 32), v17 == -1) )
      {
        segm_base = get_segm_base(v16);
        goto LABEL_11;
      }
      v9 = v17;
    }
    segm_base = 16 * sel2para(v9);
LABEL_11:
    flags = get_flags_ex(a2, 0);
    if ( !(unsigned __int8)is_off(flags, 0) )
    {
      v12 = 0;
      goto LABEL_17;
    }
    do
    {
      v12 = 1;
      if ( (unsigned __int8)is_off(flags, 1) )
        break;
LABEL_17:
      if ( get_immvals(v18, a2, v12, flags, 0) && (unsigned __int8)sub_7F04A0((__int64)a1, segm_base + v18[0]) )
      {
        if ( (~(_WORD)flags & 0x600) == 0 )
        {
          get_default_reftype(a2);
          op_offset(a2, v12);
        }
        return 2;
      }
    }
    while ( v12 != 1 );
    result = 0;
    if ( (~(_WORD)flags & 0x600) == 0 )
      return result;
    word = get_word(a2);
    if ( !(unsigned __int8)sub_7F04A0((__int64)a1, segm_base + (unsigned int)word) )
    {
      dword = get_dword(a2);
      return 2 * (unsigned int)(unsigned __int8)sub_7F04A0((__int64)a1, segm_base + dword);
    }
    return 2;
  }
  next_dref_from = first_dref_from;
  while ( !(unsigned __int8)sub_7F04A0((__int64)a1, next_dref_from) )
  {
    next_dref_from = get_next_dref_from(a2, next_dref_from);
    if ( next_dref_from == -1 )
      goto LABEL_7;
  }
  return 2;
}

