__int64 __fastcall sub_17A1840(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx

  v4 = (__int64 *)(*(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a1 + 56) & 4) != 0 )
    v4 = (__int64 *)v4[4];
  if ( v4 )
    v5 = *v4;
  else
    v5 = *(_QWORD *)(a1 + 48);
  v6 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = (unsigned int)*(unsigned __int8 *)(v6 + 16) - 25;
  if ( (unsigned int)v7 > 1 )
    return *(_QWORD *)(sub_F63050(v6, a2, v7, a4) + 24);
  else
    return *(_QWORD *)(v6 + 24);
}
