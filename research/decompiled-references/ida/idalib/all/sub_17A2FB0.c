unsigned __int64 __fastcall sub_17A2FB0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char *v3; // rsi
  unsigned __int64 result; // rax

  *(_QWORD *)(a1 + 544) = a3;
  *(_QWORD *)(a2 + 360) = a3;
  v3 = *(char **)a2;
  if ( v3[8] < 0 )
    return sub_17A2EE0(a1, v3, a3);
  return result;
}
