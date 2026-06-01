__int64 __fastcall sub_2147F00(__int64 a1)
{
  unsigned int v2; // eax
  _DWORD **v3; // rdi
  unsigned int v4; // ebx
  __int64 v6; // [rsp+8h] [rbp-50h] BYREF
  const char *v7; // [rsp+10h] [rbp-48h] BYREF
  __int16 v8; // [rsp+30h] [rbp-28h]

  v2 = sub_2153CB0(*(_QWORD *)(a1 + 8), &v6);
  if ( (_BYTE)v2 )
  {
    v3 = *(_DWORD ***)(a1 + 8);
    v7 = "expected identifier in directive";
    v8 = 259;
  }
  else
  {
    v3 = *(_DWORD ***)(a1 + 8);
    v4 = v2;
    if ( *v3[6] == 9 )
    {
      (*((void (__fastcall **)(_DWORD **))*v3 + 19))(v3);
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 24LL) + 360LL))(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
        v6);
      return v4;
    }
    v7 = "unexpected token in directive";
    v8 = 259;
  }
  return (unsigned int)sub_21543E0(v3, &v7, 0, 0);
}
