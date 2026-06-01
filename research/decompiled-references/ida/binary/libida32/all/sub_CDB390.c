__int64 __fastcall sub_CDB390(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  bool v5; // r15
  char v6; // r14
  unsigned __int8 v7; // r13
  __int64 v9; // rax
  __int64 v10; // rax

  v5 = a4;
  v6 = a4;
  v7 = a5;
  *(_DWORD *)(a2 + 792) = sub_BDCD00(a3, a2, a3, a4, a5);
  if ( v6 )
    v5 = (*(_WORD *)a3 & 0x1FF) != 61;
  *(_BYTE *)(a2 + 1136) = v5;
  *(_BYTE *)(a2 + 1137) = (*(_WORD *)a3 & 0x1FF) == 61;
  *(_QWORD *)(a2 + 1128) = a3 | 2;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)a2 + 24LL))(a2, a3, v7) )
    *(_DWORD *)(a2 + 1120) = 3;
  v9 = *(_QWORD *)(a2 + 1048);
  *(_BYTE *)(a1 + 64) = -1;
  *(_QWORD *)a1 = v9;
  v10 = *(unsigned __int8 *)(a2 + 1112);
  if ( (_BYTE)v10 != 0xFF )
  {
    funcs_CDB447[v10]();
    *(_BYTE *)(a1 + 64) = *(_BYTE *)(a2 + 1112);
  }
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 1120);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 1128);
  return a1;
}

