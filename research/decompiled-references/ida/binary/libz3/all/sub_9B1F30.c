bool __fastcall sub_9B1F30(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi

  v2 = *(_QWORD *)(a1[78] + 8LL * a2);
  if ( !v2 )
    return 0;
  if ( a2 != -1 && ((*(_BYTE *)(a1[74] + 4LL * a2 + 3) >> 4) & 3) == 2 )
    v3 = sub_999840((__int64)a1, a2);
  else
    v3 = a1[75] + 32LL * a2;
  return sub_3ED680((__int64)qword_1C7F2C0, v3, v2 + 16);
}

