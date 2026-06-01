__int64 __fastcall sub_D15EA0(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 result; // rax
  _DWORD *v5; // rax
  _QWORD *v6; // [rsp+8h] [rbp-18h]
  _QWORD *v7; // [rsp+10h] [rbp-10h]

  if ( *(_WORD *)(a2 + 4) )
    return 0;
  v5 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v5 || *v5 )
    return 0;
  if ( v5[1] != 2 || *(_DWORD *)(a2 + 24) != 2 )
  {
LABEL_8:
    if ( v5[1] == 2 && *(_DWORD *)(a2 + 24) == 2 )
    {
      *a3 = *(_QWORD *)(a2 + 32);
      *a4 = *(_QWORD *)(a2 + 40);
      return sub_15D2CB0(a1, *a3);
    }
    return 0;
  }
  v7 = a4;
  v6 = a3;
  *a3 = *(_QWORD *)(a2 + 32);
  *a4 = *(_QWORD *)(a2 + 40);
  result = sub_15D2CB0(a1, *a3);
  if ( !(_BYTE)result )
  {
    a3 = v6;
    a4 = v7;
    if ( *(_WORD *)(a2 + 4) )
      return 0;
    v5 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v5 || *v5 )
      return 0;
    goto LABEL_8;
  }
  return result;
}

