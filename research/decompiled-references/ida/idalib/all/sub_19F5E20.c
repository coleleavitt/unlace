__int64 __fastcall sub_19F5E20(
        __int64 a1,
        __int64 a2,
        double a3,
        __int64 a4,
        __int64 (__fastcall *a5)(__int64, __int64, _QWORD, __int64))
{
  __int64 v7; // rbp
  unsigned int v8; // ebx
  __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  __int64 v11; // r14
  __int64 result; // rax

  v7 = a2;
  v8 = 0;
  while ( *(_DWORD *)(v7 + 16) > v8 )
  {
    v9 = v8++;
    v10 = *(_QWORD *)(v7 + 8 * (v9 + ((*(_BYTE *)(v7 + 2) & 8) != 0)) + 40);
    v11 = *(_QWORD *)(v10 + 8);
    a2 = (unsigned int)sub_EEB7E0(v10, a2, a3);
    result = a5(a1, a2, v8, v11);
    if ( (_BYTE)result )
      return result;
  }
  return 0;
}
