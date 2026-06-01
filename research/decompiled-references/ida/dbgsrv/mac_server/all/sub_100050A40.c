/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100050A40
// Address: 0x0000000100050A40

//----- (0000000100050A40) ----------------------------------------------------
__int64 __fastcall sub_100050A40(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // r10
  __int64 v5; // rcx
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r11
  __int64 v9; // r12
  __int64 v10; // r10
  __int64 v11; // r13
  __int64 v12; // r14
  unsigned __int8 v13; // r15
  unsigned __int8 v14; // al
  int v15; // ebx
  unsigned __int64 v16; // r12
  __int64 result; // rax
  __int64 v18; // [rsp+10h] [rbp-50h]
  __int64 v19; // [rsp+18h] [rbp-48h]
  unsigned __int64 v20; // [rsp+28h] [rbp-38h]
  int v21; // [rsp+34h] [rbp-2Ch]

  v2 = a1;
  v3 = **(_QWORD **)(a1 + 24);
  v4 = a2[2];
  v5 = 80LL * a2[1];
  v6 = *(_QWORD *)(v3 + v5 + 8) - v4;
  v7 = *(_QWORD *)(a1 + 4240);
  v8 = v7;
  if ( v6 < v7 )
    v8 = *(_QWORD *)(v3 + v5 + 8) - v4;
  v9 = v4 + *(_QWORD *)(v3 + v5 + 24);
  if ( !*(_QWORD *)(v3 + v5 + 32) )
    v9 = 0;
  if ( !v8 )
    goto LABEL_20;
  v20 = *(_QWORD *)(v3 + v5 + 8) - v4;
  v10 = *(_QWORD *)(v5 + v3) + v4;
  v11 = 0;
  v12 = 0;
  v18 = v10;
  v19 = v9;
  do
  {
    v13 = *(_BYTE *)(v2 + v11 + 48);
    v14 = *(_BYTE *)(v10 + v11);
    v15 = *(_DWORD *)(v2 + 32);
    if ( (v15 & 1) == 0 )
    {
      v21 = v14;
      v16 = v8;
      v13 = __toupper(v13);
      v14 = __toupper(v21);
      v8 = v16;
      v9 = v19;
      v10 = v18;
      v2 = a1;
    }
    if ( !v9 )
      goto LABEL_8;
    if ( (v15 & 0x20) == 0 )
    {
      if ( v9 == 255 )
      {
        if ( v14 == 0xFF )
          goto LABEL_9;
      }
      else if ( !*(_BYTE *)(v9 + v12) )
      {
        goto LABEL_9;
      }
LABEL_8:
      if ( v13 != v14 )
        return 0xFFFFFFFFLL;
      goto LABEL_9;
    }
    if ( ((unsigned __int8)(v14 ^ v13) & *(_BYTE *)(v9 + v12)) != 0 )
      return 0xFFFFFFFFLL;
LABEL_9:
    v12 = (int)++v11;
  }
  while ( v8 > (int)v11 );
  v7 = *(_QWORD *)(v2 + 4240);
  v6 = v20;
LABEL_20:
  if ( v6 <= v7 )
  {
    **(_QWORD **)(v2 + 8) = *a2;
    return 1;
  }
  else
  {
    result = 0xFFFFFFFFLL;
    if ( v7 == 4096 )
    {
      a2[2] += 4096LL;
      return 0;
    }
  }
  return result;
}
