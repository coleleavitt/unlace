/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_595B0
// Address: 0x00000000000595B0

//----- (00000000000595B0) ----------------------------------------------------
unsigned __int64 __fastcall sub_595B0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r14
  signed __int64 v10; // r12
  char v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  unsigned int v15; // edi
  unsigned __int32 v16; // eax
  __int64 v17; // rbx
  __int64 *v19; // rbx
  unsigned __int64 v20; // r12

  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 == 24 || v3 == 12 )
  {
    v4 = *(_QWORD *)(a1 + 64);
    if ( (!v4 || 0xFFFFFFFFFFFFFFFFLL / v3 >= v4) && (!a2 || 0xFFFFFFFFFFFFFFFFLL / v3 >= a2) )
    {
      v6 = *(_QWORD *)(a1 + 8);
      v7 = qlseek(*(_QWORD *)(v6 + 472), 0, 1);
      v8 = *(_QWORD *)(v6 + 480);
      v9 = v7 - v8;
      if ( qlseek(*(_QWORD *)(v6 + 472), *(_QWORD *)(a1 + 64) * *(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 16) + v8, 0) != -1 )
      {
        v10 = a2 * *(_QWORD *)(a1 + 32);
        if ( qlread(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 472LL), *(void **)(a1 + 40), v10) == v10 )
        {
          v11 = *(_BYTE *)(*(_QWORD *)(a1 + 8) + 616LL);
          if ( *(_QWORD *)(a1 + 32) != 12 )
          {
            v5 = 0;
            if ( !v11 )
              v5 = a2;
            if ( !a2 || !v11 )
              goto LABEL_19;
            v19 = *(__int64 **)(a1 + 40);
            v20 = 0;
            do
            {
              *v19 = swap64(*v19);
              v19[1] = swap64(v19[1]);
              v19[2] = swap64(v19[2]);
              ++v20;
              v19 += 3;
            }
            while ( v20 < a2 );
            goto LABEL_27;
          }
          if ( a2 )
          {
            v12 = *(_QWORD *)(a1 + 40);
            v13 = 12 * a2 - 4;
            v14 = a2;
            do
            {
              v15 = *(_DWORD *)(v12 + v13 - 4);
              if ( v11 )
              {
                v15 = _byteswap_ulong(v15);
                v16 = _byteswap_ulong(*(_DWORD *)(v12 + v13 - 8));
                v17 = _byteswap_ulong(*(_DWORD *)(v12 + v13));
              }
              else
              {
                v16 = *(_DWORD *)(v12 + v13 - 8);
                v17 = *(int *)(v12 + v13);
              }
              *(_QWORD *)(v12 + 2 * v13 - 8) = v15;
              *(_QWORD *)(v12 + 2 * v13 - 16) = v16;
              *(_QWORD *)(v12 + 2 * v13) = v17;
              v13 -= 12;
              --v14;
            }
            while ( v14 );
LABEL_27:
            v5 = a2;
            goto LABEL_19;
          }
        }
      }
      v5 = 0;
LABEL_19:
      qlseek(*(_QWORD *)(v6 + 472), *(_QWORD *)(v6 + 480) + v9, 0);
      return v5;
    }
  }
  return 0;
}
