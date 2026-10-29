void __fastcall bf_decrypt_cbc(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v6; // r13
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 i; // rax

  if ( a3 )
  {
    v6 = a1 + a3;
    v9 = a1;
    do
    {
      v10 = *a2;
      bf_decrypt_ecb(v9, a2, a4);
      for ( i = 0; i != 8; ++i )
        *(_BYTE *)(v9 + i) ^= *((_BYTE *)a5 + i);
      v9 += 8;
      *a5 = v10;
      ++a2;
    }
    while ( v9 != v6 );
  }
}

