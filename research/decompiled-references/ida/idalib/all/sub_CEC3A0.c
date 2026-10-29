__int64 __fastcall sub_CEC3A0(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4)
{
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 result; // rax
  __int64 i; // r12

  v5 = *a3;
  v6 = *(_QWORD *)(v5 + 8);
  v7 = v6 + 32LL * *(unsigned int *)(v5 + 16);
  if ( v6 != v7 )
  {
    v8 = a2 + a4;
    do
    {
      v9 = *(_QWORD *)(v6 + 16);
      v10 = *(unsigned int *)(v6 + 8);
      v6 += 32;
      sub_CEC3A0(a1, v8, v9 + 32, v10);
    }
    while ( v7 != v6 );
    v5 = *a3;
  }
  v11 = *(_QWORD *)(v5 + 280);
  result = 3LL * *(unsigned int *)(v5 + 288);
  for ( i = v11 + 24LL * *(unsigned int *)(v5 + 288); i != v11; v11 += 24 )
  {
    result = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 72LL);
    if ( result )
      result = ((__int64 (__fastcall *)(__int64, unsigned __int64))result)(
                 a1,
                 a2 + a4 + (unsigned __int64)*(unsigned int *)(v11 + 8));
  }
  return result;
}
