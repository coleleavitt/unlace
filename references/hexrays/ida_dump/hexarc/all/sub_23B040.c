__int64 __fastcall sub_23B040(__int64 a1, __int64 a2, _QWORD *a3, signed int a4, int a5, char a6)
{
  __int64 result; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  int *v14; // rdi
  char v15; // bl
  int v16; // [rsp+Ch] [rbp-4Ch]
  _QWORD v17[9]; // [rsp+10h] [rbp-48h] BYREF

  v17[1] = __readfsqword(0x28u);
  if ( a5 == -1 )
  {
    v12 = *(_QWORD *)(a1 + 48);
    v17[0] = 48;
    v16 = lexcompare_tinfo(v12, 48, 0);
    clear_tinfo_t(v17);
    if ( v16 )
      return 1;
  }
  else if ( a5 == 32 && a6 )
  {
    return 1;
  }
  if ( (get_tinfo_property(*(_QWORD *)(a1 + 48), 2) & 0xF) == 0xB )
    return 2;
  if ( a5 < a4 )
  {
    if ( !a6 && *(_DWORD *)(a1 + 8) == 65 )
    {
      v13 = *(_QWORD *)(a1 + 24);
      v14 = (int *)(*(_QWORD *)(v13 + 432) + 104LL * *(int *)(a1 + 32));
      if ( a4 > v14[22] && (unsigned __int8)sub_1E99F0(v14, *(_QWORD **)(v13 + 1504)) && sub_1163C0(a5) )
      {
LABEL_14:
        if ( (get_tinfo_property(*a3, 2) & 0xF) != 9 )
          goto LABEL_15;
        return 2;
      }
    }
    return 1;
  }
  if ( a5 > a4 )
  {
    if ( !a2 )
    {
      if ( a6 || (get_tinfo_property(*(_QWORD *)(a1 + 48), 2) & 0x3F) == 0xD )
        return 2;
      goto LABEL_14;
    }
    return 1;
  }
LABEL_15:
  if ( ((get_tinfo_property(*a3, 2) & 0x3F) == 0x1D || (get_tinfo_property(*(_QWORD *)(a1 + 48), 2) & 0x3F) == 0x1D)
    && (unsigned int)lexcompare_tinfo(*a3, *(_QWORD *)(a1 + 48), 0) )
  {
    return 2;
  }
  result = 0;
  if ( (unsigned __int8)*a3 )
  {
    v15 = get_tinfo_property(*a3, 2) & 0xF;
    return 2 * (unsigned int)(unsigned __int8)(sub_238120((__int64 *)(a1 + 48), a4, a6 | (a2 != 0)) ^ (v15 == 9));
  }
  return result;
}
