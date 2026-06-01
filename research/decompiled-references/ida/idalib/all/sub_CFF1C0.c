__int64 __fastcall sub_CFF1C0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // eax
  bool v9; // zf
  __int64 v10; // rax
  __int64 v11; // rax

  v8 = sub_C00A40(a3, a2, a3, a4, a5);
  *(_QWORD *)(a2 + 1144) = a4;
  *(_DWORD *)(a2 + 792) = v8;
  v9 = *(_BYTE *)(a2 + 1160) == 0;
  *(_WORD *)(a2 + 1136) = 0;
  *(_QWORD *)(a2 + 1152) = a5;
  if ( v9 )
    *(_BYTE *)(a2 + 1160) = 1;
  *(_QWORD *)(a2 + 1128) = a3 | 2;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)a2 + 24LL))(a2, a3, 1) )
    *(_DWORD *)(a2 + 1120) = 3;
  v10 = *(_QWORD *)(a2 + 1048);
  *(_BYTE *)(a1 + 64) = -1;
  *(_QWORD *)a1 = v10;
  v11 = *(unsigned __int8 *)(a2 + 1112);
  if ( (_BYTE)v11 != 0xFF )
  {
    funcs_CFF187[v11]();
    *(_BYTE *)(a1 + 64) = *(_BYTE *)(a2 + 1112);
  }
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 1120);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 1128);
  return a1;
}
