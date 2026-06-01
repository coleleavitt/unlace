/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_59320
// Address: 0x0000000000059320

//----- (0000000000059320) ----------------------------------------------------
unsigned __int64 __fastcall sub_59320(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r14
  signed __int64 v10; // r12
  char v11; // r9
  unsigned int *v12; // rcx
  _QWORD *v13; // rdx
  __int64 *v15; // rbx
  unsigned __int64 v16; // r12
  __int64 v17; // rsi
  __int64 v18; // r10
  __int64 v19; // rbx
  unsigned __int64 v20; // rdx
  unsigned int v21; // eax
  unsigned __int32 v22; // edi
  unsigned int v23; // eax
  unsigned __int32 v24; // edi
  unsigned int v25; // eax
  unsigned __int32 v26; // ecx

  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 == 16 || v3 == 8 )
  {
    v4 = *(_QWORD *)(a1 + 64);
    if ( (!v4 || 0xFFFFFFFFFFFFFFFFLL / v3 >= v4) && (!a2 || 0xFFFFFFFFFFFFFFFFLL / v3 >= a2) )
    {
      v6 = *(_QWORD *)(a1 + 8);
      v7 = qlseek(*(_QWORD *)(v6 + 472), 0, 1);
      v8 = *(_QWORD *)(v6 + 480);
      v9 = v7 - v8;
      if ( qlseek(*(_QWORD *)(v6 + 472), *(_QWORD *)(a1 + 64) * *(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 16) + v8, 0) == -1 )
        goto LABEL_14;
      v10 = a2 * *(_QWORD *)(a1 + 32);
      if ( qlread(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 472LL), *(void **)(a1 + 40), v10) != v10 )
        goto LABEL_14;
      v11 = *(_BYTE *)(*(_QWORD *)(a1 + 8) + 616LL);
      if ( *(_QWORD *)(a1 + 32) != 8 )
      {
        v5 = 0;
        if ( !v11 )
          v5 = a2;
        if ( !a2 || !v11 )
          goto LABEL_15;
        v15 = *(__int64 **)(a1 + 40);
        v16 = 0;
        do
        {
          *v15 = swap64(*v15);
          v15[1] = swap64(v15[1]);
          ++v16;
          v15 += 2;
        }
        while ( v16 < a2 );
        goto LABEL_37;
      }
      if ( !a2 )
      {
LABEL_14:
        v5 = 0;
LABEL_15:
        qlseek(*(_QWORD *)(v6 + 472), *(_QWORD *)(v6 + 480) + v9, 0);
        return v5;
      }
      v12 = *(unsigned int **)(a1 + 40);
      if ( a2 == 1 )
      {
        v13 = *(_QWORD **)(a1 + 40);
      }
      else
      {
        v17 = 8 * a2 - 4;
        v18 = 16 - 16 * a2;
        v19 = 8 - 8 * a2;
        v20 = (a2 & 1) - a2;
        do
        {
          v21 = *(unsigned int *)((char *)v12 + v17);
          if ( v11 )
          {
            v21 = _byteswap_ulong(v21);
            v22 = _byteswap_ulong(*(unsigned int *)((char *)v12 + v17 - 4));
          }
          else
          {
            v22 = *(unsigned int *)((char *)v12 + v17 - 4);
          }
          *(_QWORD *)((char *)v12 + 2 * v17) = v21;
          *(_QWORD *)((char *)v12 + 2 * v17 - 8) = v22;
          v23 = *(unsigned int *)((char *)v12 + v17 - 8);
          if ( v11 )
          {
            v23 = _byteswap_ulong(v23);
            v24 = _byteswap_ulong(*(unsigned int *)((char *)v12 + v17 - 12));
          }
          else
          {
            v24 = *(unsigned int *)((char *)v12 + v17 - 12);
          }
          *(_QWORD *)((char *)v12 + 2 * v17 - 16) = v23;
          *(_QWORD *)((char *)v12 + 2 * v17 - 24) = v24;
          v17 -= 16;
          v18 += 32;
          v19 += 16;
          v20 += 2LL;
        }
        while ( v20 );
        v13 = (_QWORD *)((char *)v12 - v18);
        v12 = (unsigned int *)((char *)v12 - v19);
        if ( (a2 & 1) == 0 )
          goto LABEL_37;
      }
      v25 = v12[1];
      if ( v11 )
      {
        v25 = _byteswap_ulong(v25);
        v26 = _byteswap_ulong(*v12);
      }
      else
      {
        v26 = *v12;
      }
      v13[1] = v25;
      *v13 = v26;
LABEL_37:
      v5 = a2;
      goto LABEL_15;
    }
  }
  return 0;
}
// 59424: conditional instruction was optimized away because r15.1==1
