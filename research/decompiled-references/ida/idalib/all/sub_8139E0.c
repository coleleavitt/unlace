__int64 __fastcall sub_8139E0(_QWORD *a1, __int64 a2)
{
  __int64 first_dref_from; // rax
  unsigned __int64 next_dref_from; // rbx
  __int64 result; // rax
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 sreg; // rdi
  __int64 segm_base; // r13
  __int64 flags; // rbx
  unsigned int v11; // r14d
  unsigned __int16 word; // ax
  unsigned int dword; // eax
  unsigned __int8 default_reftype; // al
  __int64 v15; // rax
  _QWORD v16[23]; // [rsp+0h] [rbp-B8h] BYREF

  v16[17] = __readfsqword(0x28u);
  first_dref_from = get_first_dref_from(a2);
  if ( first_dref_from == -1 )
  {
LABEL_7:
    v6 = *a1;
    if ( getinf(18) == -1 )
    {
      if ( getinf(16) == -1 )
        v7 = getinf(19);
      else
        v7 = getinf(16);
    }
    else
    {
      v7 = getinf(18);
    }
    sreg = get_sreg(v7, *(unsigned int *)(v6 + 1012));
    if ( sreg == -1 )
    {
      v15 = getseg(v7);
      if ( !v15 || *(_QWORD *)(v15 + 8LL * (*(_DWORD *)(v6 + 1012) - *(_DWORD *)(v6 + 996)) + 56) == -1 )
      {
        segm_base = get_segm_base(v15);
        goto LABEL_11;
      }
      sreg = *(_QWORD *)(v15 + 8LL * (*(_DWORD *)(v6 + 1012) - *(_DWORD *)(v6 + 996)) + 56);
    }
    segm_base = 16 * sel2para(sreg);
LABEL_11:
    flags = get_flags_ex(a2, 0);
    if ( !(unsigned __int8)is_off(flags, 0) )
    {
      v11 = 0;
      goto LABEL_17;
    }
    do
    {
      v11 = 1;
      if ( (unsigned __int8)is_off(flags, 1) )
        break;
LABEL_17:
      if ( get_immvals(v16, a2, v11, flags, 0)
        && (unsigned __int8)sub_813690(a1, *(_QWORD *)(*a1 + 1504LL) & (segm_base + v16[0])) )
      {
        if ( (~(_WORD)flags & 0x600) == 0 )
        {
          default_reftype = get_default_reftype(a2);
          op_offset(a2, v11, default_reftype, -1, segm_base, 0);
        }
        return 2;
      }
    }
    while ( v11 != 1 );
    result = 0;
    if ( (~(_WORD)flags & 0x600) == 0 )
      return result;
    word = get_word(a2);
    if ( !(unsigned __int8)sub_813690(a1, *(_QWORD *)(*a1 + 1504LL) & (segm_base + word)) )
    {
      dword = get_dword(a2);
      return 2 * (unsigned int)(unsigned __int8)sub_813690(a1, *(_QWORD *)(*a1 + 1504LL) & (segm_base + dword));
    }
    return 2;
  }
  next_dref_from = first_dref_from;
  while ( !(unsigned __int8)sub_813690(a1, next_dref_from) )
  {
    next_dref_from = get_next_dref_from(a2, next_dref_from);
    if ( next_dref_from == -1 )
      goto LABEL_7;
  }
  return 2;
}
