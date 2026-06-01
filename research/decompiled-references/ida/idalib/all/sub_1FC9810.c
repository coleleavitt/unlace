__int64 __fastcall sub_1FC9810(__int64 a1, __int64 a2)
{
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 v9; // al
  int v10; // esi
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // r14
  __int64 v19; // r12
  __int64 result; // rax
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // r13
  __int64 v24; // r12
  int *v25; // r12
  __int64 v26; // rbp
  int v27; // esi
  __int64 v28; // rsi
  __int64 v29[8]; // [rsp+18h] [rbp-40h] BYREF

  sub_1FC2690(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned __int16 *)(a2 + 24));
  v3 = *(_BYTE *)(a2 + 27);
  v4 = 0;
  if ( (v3 & 0x18) == 0 && (v3 & 4) == 0 )
  {
    v4 = 1;
    v29[0] = sub_C9AC10(a2);
    if ( (v29[0] & 3) != 1 )
      v4 = (unsigned int)sub_FDE930(v29);
  }
  sub_9B9C90(*(_QWORD *)(a1 + 24), v4);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_BYTE *)(a2 + 27) >> 3) & 3);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_BYTE *)(a2 + 27) & 2) != 0);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_BYTE *)(a2 + 27) & 4) != 0);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned __int8 *)(a2 + 26));
  v9 = *(_BYTE *)(a2 + 26);
  if ( v9 == 1 )
  {
    sub_183F100(a1 + 32, *(_QWORD *)(a2 + 40));
  }
  else if ( v9 )
  {
    if ( v9 <= 3u )
    {
      sub_1F85840(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 8), *(_QWORD *)(a2 + 40), *(_QWORD **)(a1 + 24), v7, v8);
      v10 = 0;
      if ( (unsigned int)*(unsigned __int8 *)(a2 + 26) - 2 <= 1 )
        v10 = *(_DWORD *)(a2 + 28);
      sub_1F6F570(*(_QWORD **)(a1 + 16), v10, *(_QWORD *)(a1 + 24));
    }
  }
  else
  {
    sub_1F9A760((__int64 *)(a1 + 8), *(__int64 **)(a2 + 40), v5, v6, v7, v8);
  }
  v11 = *(_QWORD *)(a1 + 24);
  if ( (*(_BYTE *)(a2 + 27) & 1) != 0 && *(_QWORD *)(a2 + 16) )
  {
    sub_9B9C90(*(_QWORD *)(a1 + 24), 1);
    v28 = 0;
    if ( (*(_BYTE *)(a2 + 27) & 1) != 0 )
      v28 = *(_QWORD *)(a2 + 16);
    sub_1F92A90(*(_QWORD *)(a1 + 16), v28, *(_QWORD *)(a1 + 24));
  }
  else
  {
    v12 = *(unsigned int *)(v11 + 8);
    if ( v12 + 1 > (unsigned __int64)*(unsigned int *)(v11 + 12) )
    {
      sub_2237220(*(_QWORD *)(a1 + 24), v11 + 16, v12 + 1, 8);
      v12 = *(unsigned int *)(v11 + 8);
    }
    *(_QWORD *)(*(_QWORD *)v11 + 8 * v12) = 0;
    ++*(_DWORD *)(v11 + 8);
    v13 = sub_C9AC10(a2);
    sub_1F906B0(a1 + 8, v13, v14, v15, v16, v17);
  }
  v18 = (__int64 *)(a2 + 48);
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 32), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 36), *(_QWORD *)(a1 + 24));
  v19 = a2 + 48 + 8LL * *(unsigned __int16 *)(a2 + 24);
  result = *(unsigned __int16 *)(a2 + 24);
  if ( v19 != a2 + 48 )
  {
    v21 = *(unsigned int *)(a1 + 40);
    do
    {
      v22 = *v18;
      if ( v21 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
      {
        sub_2237220(a1 + 32, a1 + 48, v21 + 1, 8);
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40)) = v22;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v21) = v22;
      }
      ++v18;
      v21 = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
      *(_DWORD *)(a1 + 40) = v21;
    }
    while ( (__int64 *)v19 != v18 );
    result = *(unsigned __int16 *)(a2 + 24);
  }
  if ( (*(_BYTE *)(a2 + 27) & 0x18) == 0 && (*(_BYTE *)(a2 + 27) & 4) == 0 )
  {
    v23 = 8 * result + 8;
    v24 = 8 * result + 48;
    v29[0] = sub_C9AC10(a2);
    if ( (v29[0] & 3) == 1 )
    {
      result = sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + v23 + 40), *(_QWORD *)(a1 + 24));
    }
    else
    {
      result = sub_FDE930(v29);
      if ( (_DWORD)result )
      {
        v25 = (int *)(a2 + v24);
        v26 = a2 + v23 + 44 + 4LL * (unsigned int)(result - 1);
        do
        {
          v27 = *v25++;
          result = sub_1F6F570(*(_QWORD **)(a1 + 16), v27, *(_QWORD *)(a1 + 24));
        }
        while ( v25 != (int *)v26 );
      }
    }
  }
  *(_DWORD *)(a1 + 224) = 227;
  return result;
}
