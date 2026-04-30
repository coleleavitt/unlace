__int64 __fastcall sub_20EF70(__int64 a1, unsigned int a2)
{
  __int64 v4; // r9
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdx
  signed int v8; // edx
  __int64 v9; // rcx
  __int64 v11; // rdx

  v4 = *(_QWORD *)(a1 + 120);
  v5 = *(_QWORD *)(a1 + 88);
  v6 = *(_QWORD *)(a1 + 64);
  v7 = 16 * ((v4 == 0) + ((v4 - v5) >> 3) - 1)
     + ((*(_QWORD *)(a1 + 80) - v6) >> 5)
     + ((__int64)(*(_QWORD *)(a1 + 96) - *(_QWORD *)(a1 + 104)) >> 5);
  if ( a2 >= (unsigned int)v7 )
    return 0;
  if ( *(_QWORD *)(a1 + 128) )
    v8 = ((unsigned int)v7 + *(_DWORD *)(a1 + 136) - a2) % (unsigned int)v7;
  else
    v8 = v7 - a2 - 1;
  v9 = v8 + ((v6 - *(_QWORD *)(a1 + 72)) >> 5);
  if ( v9 < 0 )
  {
    v11 = ~((unsigned __int64)~v9 >> 4);
  }
  else
  {
    if ( v9 <= 15 )
      return v6 + 32LL * v8;
    v11 = v9 >> 4;
  }
  return *(_QWORD *)(v5 + 8 * v11) + 32 * (v9 - 16 * v11);
}
