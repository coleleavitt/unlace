__int64 __fastcall sub_2147D10(__int64 a1)
{
  unsigned int v2; // ebx
  _DWORD **v3; // rdi
  unsigned int v5; // [rsp+8h] [rbp-50h] BYREF
  const char *v6; // [rsp+10h] [rbp-48h] BYREF
  __int16 v7; // [rsp+30h] [rbp-28h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 8) + 224LL))(*(_QWORD *)(a1 + 8), &v5);
  if ( (_BYTE)v2 )
    return v2;
  v3 = *(_DWORD ***)(a1 + 8);
  if ( *v3[6] == 9 )
  {
    (*((void (__fastcall **)(_DWORD **))*v3 + 19))(v3);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 24LL) + 328LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
      v5);
    return v2;
  }
  v6 = "unexpected token in directive";
  v7 = 259;
  return (unsigned int)sub_21543E0(v3, &v6, 0, 0);
}
