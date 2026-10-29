__int64 __fastcall sub_1AA9DF0(__int64 a1, double a2)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // r8
  __int64 result; // rax
  unsigned __int64 v5; // rsi
  char v6; // al
  unsigned __int64 v7; // rsi
  unsigned int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int64 v17; // rsi
  unsigned __int16 *v18; // rsi
  __int64 v19; // [rsp+0h] [rbp-18h] BYREF
  __int64 v20[2]; // [rsp+8h] [rbp-10h] BYREF

  if ( *(_BYTE *)(a1 + 64) != 1 )
    abort();
  if ( !*(_BYTE *)(a1 + 12) )
  {
    v2 = *(_QWORD *)(a1 + 40);
    v20[0] = 0;
    sub_1AA9220(a1, v2, v20, 1u, a2);
    sub_1AA9750(a1, *(_QWORD *)(a1 + 48), v20[0], 1u, a2);
    return sub_1AA9B90(a1, *(unsigned __int16 **)(a1 + 56), v20[0], 1u, v3, a2);
  }
  v5 = *(_QWORD *)(a1 + 16);
  v19 = 0;
  v6 = sub_1AA9220(a1, v5, &v19, 0, a2);
  v7 = *(_QWORD *)(a1 + 40);
  v8 = 0;
  if ( !v6 )
  {
    v9 = *(_QWORD *)(a1 + 16);
    if ( v9 != v7 )
    {
      v10 = 0;
      if ( (*(_WORD *)v9 & 0x1FF) == 0xF5 )
      {
        v11 = *(_QWORD *)(v9 + 8);
        if ( !v11 || (v11 & 1) != 0 )
        {
          v10 = 0;
        }
        else if ( (*(_BYTE *)(v11 + 28) & 0x7Fu) - 40 <= 6 )
        {
          v10 = *(_QWORD *)(v11 + 48);
        }
      }
      if ( (*(_WORD *)v7 & 0x1FF) == 0xF5
        && (v12 = *(_QWORD *)(v7 + 8)) != 0
        && (v12 & 1) == 0
        && (*(_BYTE *)(v12 + 28) & 0x7Fu) - 40 <= 6
        && (v13 = *(_QWORD *)(v12 + 48), (v14 = v10 & 0xFFFFFFFFFFFFFFF0LL) != 0)
        && (v15 = v13 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v8 = ((*(_BYTE *)(*(_QWORD *)v14 + 17LL) >> 1) ^ (*(_BYTE *)(*(_QWORD *)v15 + 17LL) >> 1)) & 1;
      }
      else
      {
        v8 = 1;
      }
    }
  }
  v20[0] = 0;
  result = sub_1AA9220(a1, v7, v20, v8, a2);
  v17 = *(_QWORD *)(a1 + 24);
  if ( v17 != *(_QWORD *)(a1 + 48) )
  {
    result = sub_1AA9750(a1, v17, v19, 0, a2);
    if ( !(_BYTE)result )
      result = sub_1AA9750(a1, *(_QWORD *)(a1 + 48), v20[0], 1u, a2);
  }
  v18 = *(unsigned __int16 **)(a1 + 32);
  if ( v18 != *(unsigned __int16 **)(a1 + 56) )
  {
    result = sub_1AA9B90(a1, v18, v19, 0, v16, a2);
    if ( !(_BYTE)result )
      return sub_1AA9B90(a1, *(unsigned __int16 **)(a1 + 56), v20[0], 1u, v3, a2);
  }
  return result;
}
