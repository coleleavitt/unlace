__int64 __fastcall sub_21A2C60(__int64 a1, unsigned int a2)
{
  __int64 (*v2)(void); // rax
  char v3; // dl
  __int64 result; // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 448LL);
  if ( (char *)v2 == (char *)sub_21A2860 )
    v3 = *(_BYTE *)(a1 + 612);
  else
    v3 = v2();
  result = 0;
  if ( !v3 && !*(_BYTE *)(a1 + 613) )
    return *(unsigned int *)(*(_QWORD *)(a1 + 72) + 80LL * a2 + 4);
  return result;
}
