__int64 __fastcall sub_21481B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  _DWORD **v7; // rdi
  unsigned int v9; // [rsp+8h] [rbp-50h] BYREF
  const char *v10; // [rsp+10h] [rbp-48h] BYREF
  __int16 v11; // [rsp+30h] [rbp-28h]

  v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 8) + 224LL))(*(_QWORD *)(a1 + 8), &v9);
  if ( (_BYTE)v6 )
    return v6;
  v7 = *(_DWORD ***)(a1 + 8);
  if ( *v7[6] == 9 )
  {
    (*((void (__fastcall **)(_DWORD **))*v7 + 19))(v7);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 24LL) + 1104LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
      v9,
      a4);
    return v6;
  }
  v10 = "unexpected token in directive";
  v11 = 259;
  return (unsigned int)sub_21543E0(v7, &v10, 0, 0);
}
