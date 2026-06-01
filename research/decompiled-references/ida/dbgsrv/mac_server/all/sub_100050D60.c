/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100050D60
// Address: 0x0000000100050D60

//----- (0000000100050D60) ----------------------------------------------------
char __fastcall sub_100050D60(__int64 a1, __int64 a2)
{
  int *v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v9; // r14
  unsigned __int8 v10; // r15
  unsigned __int8 v11; // al
  int v12; // r13d
  __int64 v13; // rbx
  __int64 v14; // r14
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  __int64 v18; // [rsp+8h] [rbp-78h]
  __int64 v19; // [rsp+10h] [rbp-70h]
  unsigned __int64 v20; // [rsp+18h] [rbp-68h]
  unsigned __int64 v21; // [rsp+20h] [rbp-60h]
  __int64 v23; // [rsp+30h] [rbp-50h]
  int *v24; // [rsp+38h] [rbp-48h]
  unsigned __int64 v25; // [rsp+40h] [rbp-40h]
  int v26; // [rsp+4Ch] [rbp-34h]

  if ( !(4LL * *(_QWORD *)(a1 + 4216)) )
    return 0;
  v18 = a1 + a2 + 48;
  v25 = *(_QWORD *)(a1 + 4240) - a2;
  v2 = *(int **)(a1 + 4208);
  v23 = a1 + 4152;
  while ( 1 )
  {
    v24 = v2;
    v3 = **(_QWORD **)(a1 + 24);
    v4 = 80LL * *v2;
    v5 = *(_QWORD *)(v3 + v4 + 8);
    v6 = *(_QWORD *)(v3 + v4 + 32);
    v21 = v5;
    if ( v25 < v5 )
      v5 = v25;
    if ( v6 )
      v6 = *(_QWORD *)(v3 + v4 + 24);
    if ( v5 )
    {
      v7 = *(_QWORD *)(v4 + v3);
      v8 = 0;
      v9 = 0;
      v19 = v6;
      v20 = v5;
      while ( 1 )
      {
        v10 = *(_BYTE *)(v18 + v8);
        v11 = *(_BYTE *)(v7 + v8);
        v12 = *(_DWORD *)(a1 + 32);
        if ( (v12 & 1) == 0 )
        {
          v26 = v11;
          v10 = __toupper(v10);
          v11 = __toupper(v26);
          v6 = v19;
          v5 = v20;
        }
        if ( !v6 )
          break;
        if ( (v12 & 0x20) != 0 )
        {
          if ( ((unsigned __int8)(v11 ^ v10) & *(_BYTE *)(v6 + v9)) != 0 )
            goto LABEL_3;
        }
        else if ( v6 == 255 )
        {
          if ( v11 != 0xFF )
            break;
        }
        else if ( *(_BYTE *)(v6 + v9) )
        {
          break;
        }
LABEL_12:
        v9 = (int)++v8;
        if ( v5 <= (int)v8 )
          goto LABEL_22;
      }
      if ( v10 != v11 )
        goto LABEL_3;
      goto LABEL_12;
    }
LABEL_22:
    v13 = a2 + *(_QWORD *)(a1 + 4144);
    if ( v21 <= v25 )
      break;
    v14 = *v24;
    v15 = qalloc_or_throw(40);
    v15[2] = v13;
    v15[3] = v14;
    v15[4] = v5;
    *v15 = v23;
    v16 = *(_QWORD **)(a1 + 4160);
    v15[1] = v16;
    *v16 = v15;
    *(_QWORD *)(a1 + 4160) = v15;
    ++*(_QWORD *)(a1 + 4168);
LABEL_3:
    v2 = v24 + 1;
    if ( v24 + 1 == (int *)(*(_QWORD *)(a1 + 4208) + 4LL * *(_QWORD *)(a1 + 4216)) )
      return 0;
  }
  **(_QWORD **)(a1 + 8) = v13;
  return 1;
}
