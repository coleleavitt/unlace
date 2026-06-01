__int64 __fastcall sub_170560(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  _QWORD *v6; // rcx
  __int64 v7; // rax
  int v9; // edx
  __int64 result; // rax
  unsigned __int64 item_end; // r12
  unsigned __int64 next_dref_from; // rax
  unsigned __int64 v13; // rsi
  __int64 (__fastcall *v14)(__int64); // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v17[5]; // [rsp+10h] [rbp-28h] BYREF

  v6 = *(_QWORD **)(a1 + 192);
  v7 = *(_QWORD *)(a1 + 216);
  v17[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 224) & 2) != 0 )
  {
    v16 = *(_QWORD *)(*v6 + 16 * a2);
  }
  else
  {
    v16 = v7;
    v7 = *(_QWORD *)(*v6 + 16 * a2);
  }
  v17[0] = v7;
  v9 = sub_18C660(1211, (unsigned int)&v16, (unsigned int)v17, (unsigned int)&qword_245088 + 6, a5, a6);
  result = -1;
  if ( v9 )
  {
    del_cref();
    item_end = get_item_end();
    while ( 1 )
    {
      del_dref();
      next_dref_from = get_next_dref_from();
      v13 = next_dref_from;
      if ( next_dref_from >= item_end )
        break;
      v17[0] = next_dref_from;
    }
    v14 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL);
    if ( v14 == sub_170320 )
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL);
    else
      v15 = ((__int64 (__fastcall *)(__int64, unsigned __int64))v14)(a1, v13);
    if ( v15 )
    {
      result = v15 - 1;
      if ( a2 < v15 )
        return a2;
    }
    else
    {
      return -1;
    }
  }
  return result;
}

