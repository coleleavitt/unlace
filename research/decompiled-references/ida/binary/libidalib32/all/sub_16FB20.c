__int64 __fastcall sub_16FB20(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  _QWORD *v6; // rdx
  unsigned int v7; // eax
  int *v9; // rdx
  int v10; // edx
  __int64 result; // rax
  unsigned int item_end; // r12d
  unsigned int next_dref_from; // eax
  __int64 v14; // rsi
  __int64 (__fastcall *v15)(__int64); // rax
  unsigned __int64 v16; // rdx
  unsigned int v17; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v18; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v19; // [rsp+8h] [rbp-20h]

  v6 = *(_QWORD **)(a1 + 192);
  v7 = *(_DWORD *)(a1 + 208);
  v19 = __readfsqword(0x28u);
  v9 = (int *)(*v6 + 8 * a2);
  if ( (*(_BYTE *)(a1 + 212) & 2) != 0 )
  {
    v17 = *v9;
  }
  else
  {
    v17 = v7;
    v7 = *v9;
  }
  v18 = v7;
  v10 = sub_18BA90(1211, (unsigned int)&v17, (unsigned int)&v18, (unsigned int)&qword_244078 + 6, a5, a6);
  result = -1;
  if ( v10 )
  {
    del_cref();
    item_end = get_item_end();
    while ( 1 )
    {
      del_dref();
      next_dref_from = get_next_dref_from();
      v14 = next_dref_from;
      if ( next_dref_from >= item_end )
        break;
      v18 = next_dref_from;
    }
    v15 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL);
    if ( v15 == sub_16F930 )
      v16 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL);
    else
      v16 = ((__int64 (__fastcall *)(__int64, __int64))v15)(a1, v14);
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

