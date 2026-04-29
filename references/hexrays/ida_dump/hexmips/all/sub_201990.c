__int64 __fastcall sub_201990(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // r13
  int v7; // edx
  __int64 result; // rax
  int v9; // eax

  v4 = *(int *)(a3 + 44);
  if ( (_DWORD)v4 == -1 )
  {
    if ( *(_BYTE *)(a3 + 32) == 5 )
      return 0;
    if ( !under_debugger )
      sub_37E160(50341);
    goto LABEL_21;
  }
  v5 = *(_QWORD **)(a1 + 64);
  *(_DWORD *)(a1 + 44) = v4;
  v6 = *v5 + 104 * v4;
  v7 = *(_DWORD *)(v6 + 24) & 8;
  if ( (*(_BYTE *)(a3 + 48) & 2) != 0 )
  {
    if ( v7 )
      return 0;
    if ( !under_debugger )
      sub_37E160(52200);
LABEL_21:
    BUG();
  }
  if ( v7 && (*(_DWORD *)(v6 + 24) & 0x2000000) == 0 )
  {
    if ( (unsigned __int8)sub_1EA1E0(*(unsigned __int8 **)(a1 + 56)) )
      return 0;
    if ( *(_DWORD *)v6 != 1
      || !(unsigned __int8)sub_1EB130(*(_QWORD *)(a1 + 56), *(_QWORD *)(v6 + 8), *(_DWORD *)(v6 + 88)) )
    {
      if ( !under_debugger )
        sub_37E160(50342);
      goto LABEL_21;
    }
  }
  result = sub_201760(a1, a2, *(_QWORD *)(a1 + 8), a3, 1);
  if ( (int)result < 0 )
    return result;
  v9 = *(_DWORD *)(v6 + 24);
  if ( (v9 & 8) == 0 )
    *(_DWORD *)(v6 + 24) = v9 | 8;
  return 0;
}
