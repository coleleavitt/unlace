__int64 __fastcall sub_1E86E0(__int64 a1, int a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  __int64 v7; // r14
  _QWORD *v10; // r15
  __int64 v11; // rbx

  v5 = (_QWORD *)(a1 + 16);
  v6 = (_QWORD *)(a1 + 48);
  if ( a2 )
    v5 = v6;
  v7 = v5[1];
  if ( !v7 )
    return -1;
  v10 = v5;
  v11 = 0;
  while ( (*(unsigned int (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a4 + 464LL))(
            a4,
            *(_QWORD *)(*v10 + 16 * v11),
            a3) == -1 )
  {
    if ( ++v11 == v7 )
      return -1;
  }
  if ( a5 )
    *a5 = *(_DWORD *)(*v10 + 16 * v11 + 8);
  return v11;
}
