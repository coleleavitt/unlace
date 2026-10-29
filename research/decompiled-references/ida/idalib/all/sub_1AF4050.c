void __fastcall sub_1AF4050(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 *v8; // rbx
  __int64 *v9; // r13
  __int64 v10; // rsi
  __int64 *v11; // rbx
  __int64 *v12; // r12
  __int64 v13; // rsi

  if ( *(char *)(a2 + 28) >= 0 )
  {
    v6 = a2;
    if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x47 )
      v6 = *(_QWORD *)(a2 + 48);
    v7 = *(unsigned int *)(*(_QWORD *)a1 + 11320LL);
    if ( *(_DWORD *)(*(_QWORD *)a1 + 12596LL) >= (unsigned int)v7 )
    {
      v8 = *(__int64 **)(a1 + 432);
      v9 = &v8[*(unsigned int *)(a1 + 440)];
      while ( v9 != v8 )
      {
        v10 = *v8++;
        sub_B8CC60(v6, v10, v7, a4, a5, a6);
      }
    }
    v11 = *(__int64 **)(a1 + 480);
    v12 = &v11[*(unsigned int *)(a1 + 488)];
    while ( v12 != v11 )
    {
      v13 = *v11++;
      sub_B8CC60(v6, v13, v7, a4, a5, a6);
    }
  }
}
