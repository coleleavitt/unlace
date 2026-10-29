__int64 __fastcall sub_CAECF0(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v4; // rbp
  unsigned int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v9[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = 1;
  if ( *(_BYTE *)(a1 + 40) )
  {
    v4 = a2 | 4;
    v5 = (*(__int64 (**)(void))(*(_QWORD *)a1 + 32LL))();
    v6 = *(_QWORD *)(a1 + 8);
    v7 = *(unsigned int *)(a1 + 36);
    v2 = v5;
    v9[0] = v4;
    sub_CFF770(v6, v7, v9);
  }
  return v2;
}
