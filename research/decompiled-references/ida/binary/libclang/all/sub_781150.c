unsigned __int64 __fastcall sub_781150(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r10
  unsigned __int64 result; // rax
  __int64 v11; // r10

  v5 = a4;
  if ( a4 )
    v5 = sub_AFFF00(a2, a4);
  v7 = 8LL * *(unsigned int *)(a3 + 8) + 16;
  v8 = a2[274];
  a2[284] += v7;
  v9 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[275] >= (unsigned __int64)(v7 + v9) && v8 )
    a2[274] = v7 + v9;
  else
    v9 = sub_779030((__int64)(a2 + 274), v7, 3);
  result = sub_7810B0(v9, a3, v5);
  *(_QWORD *)(a1 + 152) = v11;
  return result;
}

