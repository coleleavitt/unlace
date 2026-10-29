/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100050310
// Address: 0x0000000100050310

//----- (0000000100050310) ----------------------------------------------------
char __fastcall sub_100050310(__int64 a1, __int64 a2)
{
  int *v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r8
  __int64 v11; // r13
  __int64 v12; // rbx
  unsigned __int8 v13; // r15
  unsigned __int8 v14; // al
  int v15; // r14d
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // r14
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  unsigned __int64 v22; // [rsp+0h] [rbp-80h]
  unsigned __int64 v23; // [rsp+8h] [rbp-78h]
  unsigned __int64 v24; // [rsp+10h] [rbp-70h]
  unsigned __int64 v25; // [rsp+18h] [rbp-68h]
  __int64 v26; // [rsp+20h] [rbp-60h]
  __int64 v27; // [rsp+28h] [rbp-58h]
  int *v28; // [rsp+30h] [rbp-50h]
  unsigned __int64 v29; // [rsp+38h] [rbp-48h]
  int v31; // [rsp+4Ch] [rbp-34h]

  if ( !(4LL * *(_QWORD *)(a1 + 4216)) )
    return 0;
  v29 = a2 - *(_QWORD *)(a1 + 4240);
  v2 = *(int **)(a1 + 4208);
  v27 = a1 + a2 + 48;
  v26 = a1 + 4152;
  while ( 1 )
  {
    v28 = v2;
    v3 = **(_QWORD **)(a1 + 24);
    v4 = 80LL * *v2;
    v5 = *(_QWORD *)(v3 + v4 + 8);
    v6 = v5;
    if ( v29 < v5 )
      v6 = v29;
    v25 = *(_QWORD *)(v3 + v4 + 8);
    v7 = v5 - v6;
    v8 = v7 + *(_QWORD *)(v3 + v4 + 24);
    if ( !*(_QWORD *)(v3 + v4 + 32) )
      v8 = 0;
    if ( v6 )
    {
      v9 = v27 - v6;
      v10 = *(_QWORD *)(v4 + v3) + v7;
      v11 = 0;
      v12 = 0;
      v22 = v6;
      v23 = v8;
      v24 = v10;
      while ( 1 )
      {
        v13 = *(_BYTE *)(v9 + v11);
        v14 = *(_BYTE *)(v10 + v11);
        v15 = *(_DWORD *)(a1 + 32);
        if ( (v15 & 1) == 0 )
        {
          v31 = v14;
          v13 = __toupper(v13);
          v14 = __toupper(v31);
          v8 = v23;
          v10 = v24;
          v6 = v22;
        }
        if ( !v8 )
          break;
        if ( (v15 & 0x20) != 0 )
        {
          if ( ((unsigned __int8)(v14 ^ v13) & *(_BYTE *)(v8 + v12)) != 0 )
            goto LABEL_3;
        }
        else if ( v8 == 255 )
        {
          if ( v14 != 0xFF )
            break;
        }
        else if ( *(_BYTE *)(v8 + v12) )
        {
          break;
        }
LABEL_12:
        v12 = (int)++v11;
        if ( v6 <= (int)v11 )
          goto LABEL_22;
      }
      if ( v13 != v14 )
        goto LABEL_3;
      goto LABEL_12;
    }
LABEL_22:
    v16 = *(_QWORD *)(a1 + 4144);
    if ( v25 <= v29 )
      break;
    v17 = v16 + a2 - v25;
    v18 = *v28;
    v19 = qalloc_or_throw(40);
    v19[2] = v17;
    v19[3] = v18;
    v19[4] = v6;
    *v19 = v26;
    v20 = *(_QWORD **)(a1 + 4160);
    v19[1] = v20;
    *v20 = v19;
    *(_QWORD *)(a1 + 4160) = v19;
    ++*(_QWORD *)(a1 + 4168);
LABEL_3:
    v2 = v28 + 1;
    if ( v28 + 1 == (int *)(*(_QWORD *)(a1 + 4208) + 4LL * *(_QWORD *)(a1 + 4216)) )
      return 0;
  }
  **(_QWORD **)(a1 + 8) = v16 + a2 - v6;
  return 1;
}
