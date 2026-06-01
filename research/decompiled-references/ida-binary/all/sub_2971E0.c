__int64 __fastcall sub_2971E0(__int64 *a1, _QWORD *a2, _QWORD *a3, double a4)
{
  time_t v5; // rax
  time_t v6; // rbp
  int v7; // r14d
  int v8; // ebx
  __int64 v9; // rdx

  v5 = time(nullptr);
  if ( a2[1] <= 1u )
    return 0;
  v6 = v5;
  v7 = 1;
  v8 = 0;
  v9 = 1;
  do
  {
    v8 += sub_296EC0(a1, a4, 32LL * (v7 - 1) + *a2, (_QWORD *)(*a2 + 32 * v9), *a3 + 48LL * (v7 - 1), 1);
    if ( time(nullptr) - v6 > 10 )
      break;
    v9 = ++v7;
  }
  while ( (unsigned __int64)v7 < a2[1] );
  return v8;
}
