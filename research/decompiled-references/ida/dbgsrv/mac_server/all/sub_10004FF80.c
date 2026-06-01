/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004FF80
// Address: 0x000000010004FF80

//----- (000000010004FF80) ----------------------------------------------------
__int64 __fastcall sub_10004FF80(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // r10
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  __int64 v11; // rcx
  unsigned __int64 v12; // r12
  __int64 v13; // rbx
  __int64 v14; // r13
  unsigned __int8 v15; // r15
  unsigned __int8 v16; // al
  int v17; // r14d
  __int64 v18; // r12
  __int64 result; // rax
  __int64 v20; // [rsp+0h] [rbp-60h]
  unsigned __int64 v21; // [rsp+8h] [rbp-58h]
  unsigned __int64 v22; // [rsp+10h] [rbp-50h]
  unsigned __int64 v23; // [rsp+18h] [rbp-48h]
  unsigned __int64 v24; // [rsp+28h] [rbp-38h]
  int v25; // [rsp+34h] [rbp-2Ch]

  v2 = a1;
  v3 = **(_QWORD **)(a1 + 24);
  v4 = 80LL * a2[1];
  v5 = *(_QWORD *)(v3 + v4 + 8) - a2[2];
  v6 = *(_QWORD *)(a1 + 4240);
  v7 = 4096 - v6;
  v8 = 4096 - v6;
  if ( v5 < 4096 - v6 )
    v8 = *(_QWORD *)(v3 + v4 + 8) - a2[2];
  v9 = v5 - v8 + *(_QWORD *)(v3 + v4 + 24);
  if ( !*(_QWORD *)(v3 + v4 + 32) )
    v9 = 0;
  if ( !v8 )
    goto LABEL_20;
  v10 = v9;
  v24 = *(_QWORD *)(v3 + v4 + 8) - a2[2];
  v11 = v2 - v8 + 4144;
  v12 = *(_QWORD *)(v4 + v3) + v5 - v8;
  v13 = 0;
  v14 = 0;
  v20 = v2;
  v21 = v12;
  v22 = v10;
  v23 = v8;
  do
  {
    v15 = *(_BYTE *)(v11 + v13);
    v16 = *(_BYTE *)(v12 + v13);
    v17 = *(_DWORD *)(v2 + 32);
    if ( (v17 & 1) == 0 )
    {
      v25 = v16;
      v18 = v11;
      v15 = __toupper(v15);
      v16 = __toupper(v25);
      v11 = v18;
      v10 = v22;
      v8 = v23;
      v12 = v21;
      v2 = v20;
    }
    if ( !v10 )
      goto LABEL_8;
    if ( (v17 & 0x20) == 0 )
    {
      if ( v10 == 255 )
      {
        if ( v16 == 0xFF )
          goto LABEL_9;
      }
      else if ( !*(_BYTE *)(v10 + v14) )
      {
        goto LABEL_9;
      }
LABEL_8:
      if ( v15 != v16 )
        return 0xFFFFFFFFLL;
      goto LABEL_9;
    }
    if ( ((unsigned __int8)(v16 ^ v15) & *(_BYTE *)(v10 + v14)) != 0 )
      return 0xFFFFFFFFLL;
LABEL_9:
    v14 = (int)++v13;
  }
  while ( v8 > (int)v13 );
  v6 = *(_QWORD *)(v2 + 4240);
  v7 = 4096 - v6;
  v5 = v24;
LABEL_20:
  if ( v5 <= v7 )
  {
    **(_QWORD **)(v2 + 8) = *a2;
    return 1;
  }
  else
  {
    result = 0xFFFFFFFFLL;
    if ( !v6 )
    {
      a2[2] += 4096LL;
      return 0;
    }
  }
  return result;
}
