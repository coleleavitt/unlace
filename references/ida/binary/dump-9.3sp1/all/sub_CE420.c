void __fastcall sub_CE420(__int64 a1, __int64 **a2, __int64 a3, __int64 a4)
{
  __int64 **v4; // r15
  __int64 **v5; // r14
  __int64 *v6; // rbp
  __int64 *v7; // r12
  __int64 i; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax

  v4 = &a2[a3];
  v5 = a2;
  v6 = *(__int64 **)(a1 + 768);
  do
  {
    v7 = *v5;
    for ( i = (*v5)[1]; i; i = v7[1] )
    {
      v9 = *v7;
      v12 = sub_8ED50(a1, *v7, i, a4);
      if ( (*(_BYTE *)v12 & 4) == 0 )
      {
        if ( !under_debugger )
          sub_383060(50040);
        BUG();
      }
      *(_QWORD *)(v12 + 1920) = v7[2];
      sub_CE1C0(v12, v9, v10, v11, v13, v14);
      sub_322CE0(v12, 0);
      v15 = v6[1];
      v16 = *v6;
      if ( v6[2] < (unsigned __int64)(v15 + 1) )
      {
        v17 = qvector_reserve((__int64)v6, v16, v15 + 1, 8);
        *v6 = v17;
        v16 = v17;
        v15 = v6[1];
      }
      v7 += 3;
      *(_QWORD *)(v16 + 8 * v15) = v12;
      ++v6[1];
    }
    ++v5;
  }
  while ( v5 != v4 );
}
