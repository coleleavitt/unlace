__int64 __fastcall sub_2149D80(__int64 a1)
{
  _DWORD **v2; // rdi
  unsigned int v3; // ebp
  __int64 v5; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v6; // [rsp+8h] [rbp-50h] BYREF
  const char *v7; // [rsp+10h] [rbp-48h] BYREF
  __int16 v8; // [rsp+30h] [rbp-28h]

  if ( (unsigned __int8)sub_2153CB0(*(_QWORD *)(a1 + 8), &v5) )
  {
    v2 = *(_DWORD ***)(a1 + 8);
    v7 = "expected identifier in directive";
    v8 = 259;
    return (unsigned int)sub_21543E0(v2, &v7, 0, 0);
  }
  v2 = *(_DWORD ***)(a1 + 8);
  if ( *v2[6] != 26 )
  {
LABEL_6:
    v7 = "unexpected token in '.desc' directive";
    v8 = 259;
    return (unsigned int)sub_21543E0(v2, &v7, 0, 0);
  }
  (*((void (__fastcall **)(_DWORD **))*v2 + 19))(v2);
  v3 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 8) + 224LL))(*(_QWORD *)(a1 + 8), &v6);
  if ( !(_BYTE)v3 )
  {
    v2 = *(_DWORD ***)(a1 + 8);
    if ( *v2[6] == 9 )
    {
      (*((void (__fastcall **)(_DWORD **))*v2 + 19))(v2);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 24LL) + 304LL))(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
        v5,
        v6);
      return v3;
    }
    goto LABEL_6;
  }
  return v3;
}
