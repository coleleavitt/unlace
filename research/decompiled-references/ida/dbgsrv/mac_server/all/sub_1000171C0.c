/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000171C0
// Address: 0x00000001000171C0

//----- (00000001000171C0) ----------------------------------------------------
__int64 __fastcall sub_1000171C0(__int64 a1, __int64 a2)
{
  char *v2; // r15
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r14
  __int64 v6; // r12
  unsigned __int64 v7; // r13
  char v8; // al
  __int64 v9; // rdi
  char *v10; // r15
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 *v13; // rax
  __int64 v15; // rsi
  char *v16; // r15
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 *v19; // rdx
  _Unwind_Exception *v21; // rax
  __m128 v22; // [rsp+0h] [rbp-70h]
  __m128 v23; // [rsp+0h] [rbp-70h]
  __int64 (__fastcall **v26)(); // [rsp+20h] [rbp-50h] BYREF
  __int16 v27; // [rsp+28h] [rbp-48h]
  char v28; // [rsp+2Ah] [rbp-46h]
  _BYTE v29[21]; // [rsp+2Bh] [rbp-45h] BYREF

  v3 = a2;
  v4 = *(_QWORD *)(a2 + 80);
  if ( v4 )
  {
    LOBYTE(v2) = 1;
    if ( (int)v4 > 0 )
    {
      v5 = *(_QWORD *)(a2 + 80) & 0x7FFFFFFFLL;
      v6 = 0;
      v7 = 0;
      while ( *(_QWORD *)(v3 + 80) > v7 )
      {
        v22 = (__m128)*(unsigned __int64 *)(*(_QWORD *)(v3 + 72) + v6);
        v8 = sub_100010140(v3, v7, 0, 1u);
        v9 = a1;
        if ( !v8 )
          break;
        v10 = *(char **)a1;
        v11 = *(_QWORD *)(a1 + 8);
        if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v11 + 1) )
        {
          v10 = (char *)qvector_reserve(a1, *(void **)a1, v11 + 1, 0x1Cu);
          v9 = a1;
          *(_QWORD *)a1 = v10;
          v11 = *(_QWORD *)(a1 + 8);
        }
        v12 = 28 * v11;
        *(_OWORD *)&v10[v12 + 12] = 0;
        *(_OWORD *)&v10[v12] = 0;
        ++*(_QWORD *)(v9 + 8);
        v26 = off_1000A7F68;
        v27 = 0;
        v28 = 0;
        sub_100010C80(a2, (__int64)&v26);
        v2 = &v10[v12];
        _mm_storel_ps((double *)v2, v22);
        v13 = qword_10008FEF0;
        if ( (_BYTE)v27 )
          v13 = (__int64 *)v29;
        *(_OWORD *)(v2 + 8) = *(_OWORD *)v13;
        if ( HIBYTE(v27) == 1 )
          v2[24] |= 1u;
        v3 = a2;
        if ( *(_BYTE *)(a2 + 160) == 1 )
          v2[24] |= 2u;
        if ( v28 == 1 )
          v2[24] |= 4u;
        ++v7;
        v6 += 20;
        if ( v5 == v7 )
          goto LABEL_29;
      }
      LODWORD(v2) = 0;
    }
  }
  else
  {
    LODWORD(v2) = 0;
    if ( (unsigned __int8)sub_100010140(a2, 0, 0, 1u) )
    {
      v15 = a1;
      v16 = *(char **)a1;
      v17 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v17 + 1) )
      {
        v15 = a1;
        v16 = (char *)qvector_reserve(a1, *(void **)a1, v17 + 1, 0x1Cu);
        *(_QWORD *)a1 = v16;
        v17 = *(_QWORD *)(a1 + 8);
      }
      v18 = 28 * v17;
      *(_OWORD *)&v16[v18 + 12] = 0;
      *(_OWORD *)&v16[v18] = 0;
      ++*(_QWORD *)(v15 + 8);
      if ( *(_QWORD *)(a2 + 120) == -1 )
      {
        if ( under_debugger == 1 )
          BUG();
        interr(0x4E25u);
        _Unwind_Resume(v21);
      }
      v26 = off_1000A7F68;
      v27 = 0;
      v28 = 0;
      v23 = (__m128)*(unsigned __int64 *)(a2 + 168);
      sub_100010C80(a2, (__int64)&v26);
      v2 = &v16[v18];
      _mm_storel_ps((double *)v2, v23);
      v19 = qword_10008FEF0;
      if ( (_BYTE)v27 )
        v19 = (__int64 *)v29;
      *(_OWORD *)(v2 + 8) = *(_OWORD *)v19;
      if ( HIBYTE(v27) == 1 )
        v2[24] |= 1u;
      if ( *(_BYTE *)(a2 + 160) == 1 )
        v2[24] |= 2u;
      if ( v28 == 1 )
        v2[24] |= 4u;
LABEL_29:
      LOBYTE(v2) = 1;
    }
  }
  return (unsigned int)v2;
}
// 100017432: variable 'v2' is possibly undefined
// 100017464: variable 'v21' is possibly undefined
// 10008FEF0: using guessed type __int64 qword_10008FEF0[2];
// 1000A7F68: using guessed type __int64 (__fastcall *off_1000A7F68[38])();
// 1000AE23D: using guessed type char under_debugger;
