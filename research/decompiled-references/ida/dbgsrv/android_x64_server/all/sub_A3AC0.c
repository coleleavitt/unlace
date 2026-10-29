/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A3AC0
// Address: 0x00000000000A3AC0

//----- (00000000000A3AC0) ----------------------------------------------------
void __fastcall sub_A3AC0(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r15
  char *v4; // rax
  __int64 v5; // rsi
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rsi

  *(_OWORD *)a1 = 0;
  a1[2] = 0;
  v2 = a2[1];
  if ( v2 )
  {
    v4 = (char *)qalloc_or_throw(32 * v2);
    *a1 = (__int64)v4;
    a1[2] = v2;
    v5 = *a2;
    *(_DWORD *)v4 = -2;
    *(_OWORD *)(v4 + 8) = 0;
    *((_QWORD *)v4 + 3) = 0;
    sub_9E470((__int64)v4, v5);
    if ( v2 != 1 )
    {
      v6 = v2 - 1;
      v7 = 32;
      do
      {
        v8 = *a1;
        v9 = v7 + *a2;
        *(_DWORD *)(v8 + v7) = -2;
        *(_OWORD *)(v8 + v7 + 8) = 0;
        *(_QWORD *)(v8 + v7 + 24) = 0;
        sub_9E470(v8 + v7, v9);
        v7 += 32;
        --v6;
      }
      while ( v6 );
    }
    a1[1] = v2;
  }
}
