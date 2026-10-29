__int64 __fastcall sub_C977B0(__int64 a1)
{
  bool v2; // zf
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // r12
  unsigned int v9; // edi
  _QWORD *v10; // rsi
  _WORD *v11; // r10
  _QWORD *v12; // r15
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _WORD *v15; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // esi
  int v20; // r10d
  _WORD *v21; // r11
  __m128 v22[4]; // [rsp+0h] [rbp-48h] BYREF

  v2 = *(_BYTE *)(a1 + 40) == 0;
  *(_QWORD *)a1 = &off_2B216F8;
  v3 = *(_QWORD *)(a1 + 8);
  if ( !v2 )
  {
    v5 = *(unsigned int *)(a1 + 36);
    v22[0].m128_u64[0] = 0;
    sub_CDBA30(v3, v5, v22);
    v3 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(a1 + 40) )
    {
      v6 = *(_QWORD *)(v3 + 64) + 144LL * *(unsigned int *)(a1 + 36);
      v7 = *(_QWORD *)v6;
      v8 = *(_QWORD *)v6 + 16LL * *(unsigned int *)(v6 + 8);
      if ( *(_QWORD *)v6 != v8 )
      {
        while ( 1 )
        {
          v14 = *(_QWORD **)(v7 + 8);
          if ( (*v14 & 2) != 0 )
          {
            v15 = (_WORD *)(*v14 & 0xFFFFFFFFFFFFFFFCLL);
            if ( v15 )
            {
              if ( (*v15 & 0x1FF) == 0x1A )
                break;
            }
          }
LABEL_10:
          v7 += 16;
          if ( v8 == v7 )
            goto LABEL_2;
        }
        v16 = *(unsigned int *)(v3 + 1320);
        v17 = v3 + 1304;
        v18 = *(_QWORD *)(v3 + 1304);
        if ( !(_DWORD)v16 )
          goto LABEL_15;
        v9 = (v16 - 1) & (((unsigned int)v15 >> 9) ^ ((unsigned int)v15 >> 4));
        v10 = (_QWORD *)(v18 + 16LL * v9);
        v11 = (_WORD *)*v10;
        if ( v15 != (_WORD *)*v10 )
        {
          v19 = 1;
          if ( v11 == (_WORD *)-4096LL )
          {
LABEL_15:
            sub_C96D30(
              v22,
              (_QWORD *)(v18 + 16LL * (unsigned int)v16),
              (_QWORD *)(v18 + 16LL * (unsigned int)v16),
              v17,
              1);
            v12 = (_QWORD *)v22[0].m128_u64[0];
LABEL_8:
            v13 = *(_QWORD *)(a1 + 8);
            sub_C96D30(
              v22,
              (_QWORD *)(*(_QWORD *)(v13 + 1304) + 16LL * *(unsigned int *)(v13 + 1320)),
              (_QWORD *)(*(_QWORD *)(v13 + 1304) + 16LL * *(unsigned int *)(v13 + 1320)),
              v13 + 1304,
              1);
            v3 = *(_QWORD *)(a1 + 8);
            if ( (_QWORD *)v22[0].m128_u64[0] != v12 )
            {
              *v12 = -8192;
              --*(_DWORD *)(v3 + 1312);
              ++*(_DWORD *)(v3 + 1316);
            }
            goto LABEL_10;
          }
          while ( 1 )
          {
            v20 = v19 + 1;
            v9 = (v16 - 1) & (v19 + v9);
            v10 = (_QWORD *)(v18 + 16LL * v9);
            v21 = (_WORD *)*v10;
            if ( v15 == (_WORD *)*v10 )
              break;
            v19 = v20;
            if ( v21 == (_WORD *)-4096LL )
              goto LABEL_15;
          }
        }
        sub_C96D30(v22, v10, (_QWORD *)(16 * v16 + v18), v17, 1);
        v12 = (_QWORD *)v22[0].m128_u64[0];
        goto LABEL_8;
      }
    }
  }
LABEL_2:
  result = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v3 + 1328) = result;
  return result;
}

