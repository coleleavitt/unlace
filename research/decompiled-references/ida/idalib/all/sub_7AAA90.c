__int64 __fastcall sub_7AAA90(_QWORD *a1, __int64 a2, __int64 a3, int a4, _UNKNOWN *__ptr32 *a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx

  v6 = a1[24];
  v7 = v6 + a1[6] + 16;
  if ( v6 < v7 )
    a1[22] = qvector_reserve(a1 + 22, a1[22], v7, 1);
  return sub_7AA650(a1 + 22, (__int64)(a1 + 5), v7, a4, a5, a6);
}
