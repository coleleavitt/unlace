__int64 __fastcall sub_2ACF40(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 result; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdx

  result = a4;
  v5 = *(_QWORD *)(a1 + 440);
  if ( (unsigned __int64)a3 < *(_QWORD *)(v5 + 24) )
  {
    v6 = (_QWORD *)(*(_QWORD *)(v5 + 16) + 24LL * a3);
    if ( v6[1] )
      return *(unsigned int *)(*v6 + 36LL);
  }
  return result;
}
