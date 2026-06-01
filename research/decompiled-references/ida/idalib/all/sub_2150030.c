__int64 __fastcall sub_2150030(__int64 a1)
{
  _DWORD **v2; // rdi
  unsigned int v3; // ebp
  const char *v5; // rax
  __int64 v6; // [rsp+0h] [rbp-58h] BYREF
  __int64 v7; // [rsp+8h] [rbp-50h] BYREF
  const char *v8; // [rsp+10h] [rbp-48h] BYREF
  __int16 v9; // [rsp+30h] [rbp-28h]

  if ( (unsigned __int8)sub_2153CB0(*(_QWORD *)(a1 + 8), &v6) )
  {
    v2 = *(_DWORD ***)(a1 + 8);
    v8 = "expected identifier";
    v9 = 259;
    return (unsigned int)sub_21543E0(v2, &v8, 0, 0);
  }
  v2 = *(_DWORD ***)(a1 + 8);
  if ( *v2[6] != 26 )
  {
    v5 = "expected comma";
LABEL_7:
    v8 = v5;
    v9 = 259;
    return (unsigned int)sub_21543E0(v2, &v8, 0, 0);
  }
  (*((void (__fastcall **)(_DWORD **))*v2 + 19))(v2);
  v3 = sub_2153C90(*(_QWORD *)(a1 + 8), &v7);
  if ( !(_BYTE)v3 )
  {
    v2 = *(_DWORD ***)(a1 + 8);
    if ( *v2[6] == 9 )
    {
      (*((void (__fastcall **)(_DWORD **))*v2 + 19))(v2);
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 24LL) + 448LL))(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
        v6,
        v7);
      return v3;
    }
    v5 = "unexpected token";
    goto LABEL_7;
  }
  return v3;
}
