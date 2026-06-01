/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100044380
// Address: 0x0000000100044380

//----- (0000000100044380) ----------------------------------------------------
void __fastcall sub_100044380(__int64 a1)
{
  _BYTE *v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r15
  _BYTE *v5; // r12
  unsigned __int8 *v6; // rsi
  int v7; // eax
  void *v8; // rdi

  v2 = *(_BYTE **)a1;
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( v3 )
    {
      v4 = 0;
      do
      {
        v5 = *(_BYTE **)a1;
        v6 = (unsigned __int8 *)(v4 + *(_QWORD *)a1);
        if ( !v6 )
        {
          if ( under_debugger != 1 )
            interr(0xA60u);
          BUG();
        }
        v7 = *v6;
        if ( v7 == 5 )
        {
          sub_1000380B0(*(unsigned __int8 ***)&v5[v4 + 8], v6);
        }
        else if ( v7 == 7 )
        {
          v8 = *(void **)&v5[v4 + 8];
          if ( v8 )
          {
            *(_QWORD *)&v5[v4 + 16] = 0;
            qfree(v8);
            *(_QWORD *)&v5[v4 + 24] = 0;
          }
        }
        v5[v4] = 2;
        *(_QWORD *)&v5[v4 + 8] = 0;
        v4 += 32;
        --v3;
      }
      while ( v3 );
      v2 = *(_BYTE **)a1;
    }
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v2);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
}
// 1000AE23D: using guessed type char under_debugger;
