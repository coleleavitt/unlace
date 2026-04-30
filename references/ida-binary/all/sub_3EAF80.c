__int64 __fastcall xref_editor_t__::vfunc_11(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  _QWORD *v6; // rcx
  __int64 v7; // rax
  int v9; // edx
  __int64 result; // rax
  __int64 item_end; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r12
  unsigned __int64 next_dref_from; // rax
  __int64 (__fastcall *v15)(__int64); // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v18[5]; // [rsp+10h] [rbp-28h] BYREF

  v6 = *(_QWORD **)(a1 + 192);
  v7 = *(_QWORD *)(a1 + 216);
  v18[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 224) & 2) != 0 )
  {
    v17 = *(_QWORD *)(*v6 + 16 * a2);
  }
  else
  {
    v17 = v7;
    v7 = *(_QWORD *)(*v6 + 16 * a2);
  }
  v18[0] = v7;
  v9 = sub_507F10(1211, (unsigned int)&v17, (unsigned int)v18, (unsigned int)&qword_8BCD88 + 6, a5, a6);
  result = -1;
  if ( v9 )
  {
    del_cref(v17, v18[0], HIWORD(qword_8BCD88) != 0, 0);
    item_end = get_item_end(v18[0]);
    v12 = v18[0];
    v13 = item_end;
    while ( 1 )
    {
      del_dref(v17, v12);
      next_dref_from = get_next_dref_from(v17, v18[0]);
      v12 = next_dref_from;
      if ( next_dref_from >= v13 )
        break;
      v18[0] = next_dref_from;
    }
    v15 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL);
    if ( v15 == xref_chooser_t__::vfunc_5 )
      v16 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL);
    else
      v16 = ((__int64 (__fastcall *)(__int64, unsigned __int64))v15)(a1, v12);
    if ( v16 )
    {
      result = v16 - 1;
      if ( a2 < v16 )
        return a2;
    }
    else
    {
      return -1;
    }
  }
  return result;
}
