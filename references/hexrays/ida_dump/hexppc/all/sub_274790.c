__int64 __fastcall sub_274790(_QWORD *a1, _QWORD *a2, int a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  int v15; // r13d
  int v16; // r12d
  __int64 v17; // rdi
  __int64 tinfo_property; // rax
  __int64 v19; // rdi
  bool v20; // [rsp+Fh] [rbp-49h]
  __int64 v21; // [rsp+18h] [rbp-40h] BYREF
  _QWORD v22[7]; // [rsp+20h] [rbp-38h] BYREF

  v5 = *a2;
  v6 = *a1;
  v22[1] = __readfsqword(0x28u);
  if ( (unsigned __int8)compare_tinfo(v6, v5, 0)
    || (get_tinfo_property(*a1, 2) & 0xF) == 0xB
    && (unsigned __int8)sub_274940((_DWORD)a1, (_DWORD)a2, a3, v9, v10, v11) )
  {
    return 0;
  }
  if ( (get_tinfo_property(*a2, 2) & 0xF) == 0xB
    && (unsigned __int8)sub_274940((_DWORD)a2, (_DWORD)a1, a3, v12, v13, v14) )
  {
    return 1;
  }
  v15 = sub_32A000(a2);
  v16 = sub_32A000(a1);
  if ( v15 < v16 || sub_274420(a1, a2) )
    return 1;
  if ( v15 > v16
    || (unsigned __int8)((get_tinfo_property(*a2, 2) & 0xF) - 10) > 1u
    || (get_tinfo_property(*a1, 2) & 0x2F) == 0xD )
  {
    return 0;
  }
  v17 = *a2;
  v22[0] = 0;
  tinfo_property = get_tinfo_property(v17, 13);
  v19 = *a1;
  v22[0] = tinfo_property;
  v21 = get_tinfo_property(v19, 13);
  v20 = sub_274420(&v21, v22);
  clear_tinfo_t(&v21);
  clear_tinfo_t(v22);
  return v20;
}
