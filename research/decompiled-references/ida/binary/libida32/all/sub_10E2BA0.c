__int64 __fastcall sub_10E2BA0(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4, __int64 a5)
{
  __int64 *v5; // rbx
  __int64 result; // rax
  __int64 v7; // r12
  unsigned int v10; // ebp
  __int64 v11; // rdi

  v5 = *(__int64 **)a1;
  result = *(unsigned int *)(a1 + 8);
  v7 = *(_QWORD *)a1 + 8 * result;
  if ( v7 != *(_QWORD *)a1 )
  {
    v10 = a4;
    do
    {
      v11 = *v5++;
      result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)v11 + 16LL))(
                 v11,
                 a2,
                 a3,
                 v10,
                 a5);
    }
    while ( (__int64 *)v7 != v5 );
  }
  return result;
}

