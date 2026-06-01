__int64 __fastcall sub_2254910(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r15
  unsigned int v4; // ebp
  unsigned __int8 *v6; // r14
  unsigned int v7; // eax
  char *v8; // rsi
  __int64 v9; // rdx
  char *v10; // rdi
  __int64 i; // rdx
  __int64 v12; // rax
  char *v13; // rsi
  __int64 v15; // rax
  char *v16; // rdi
  char *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rax
  char *v20; // rsi
  unsigned int v21; // [rsp+14h] [rbp-4Ch] BYREF
  unsigned __int8 *v22; // [rsp+18h] [rbp-48h] BYREF
  unsigned int *v23; // [rsp+20h] [rbp-40h] BYREF

  if ( !a2 )
    return 0;
  v2 = 0;
  v4 = 0;
LABEL_3:
  v6 = (unsigned __int8 *)(a1 + v2);
  v7 = sub_2218990(*(_BYTE *)(a1 + v2));
  if ( v7 != 1 )
  {
    if ( !v7 )
      return 4294967294LL;
    v2 += v7;
    if ( v2 > a2 )
      return 4294967294LL;
    v22 = v6;
    v23 = &v21;
    if ( (unsigned int)sub_2218E30(&v22, (char *)&v6[v7], &v23, (unsigned __int64)&v22, 0) )
      return 4294967294LL;
    v8 = (char *)&unk_26F8C00;
    v9 = 343;
    if ( v21 == 173 )
      goto LABEL_19;
    v10 = (char *)&unk_26F9780;
    for ( i = 711; ; i = v12 )
    {
      v12 = i >> 1;
      v13 = &v10[8 * (i >> 1)];
      if ( v21 > *((_DWORD *)v13 + 1) )
      {
        v10 = v13 + 8;
        v12 = i - v12 - 1;
        if ( v12 <= 0 )
          goto LABEL_13;
      }
      else if ( !v12 )
      {
LABEL_13:
        if ( v10 == (char *)&unk_26FADB8 || v21 < *(_DWORD *)v10 )
          return 0xFFFFFFFFLL;
        v8 = (char *)&unk_26F8C00;
        v9 = 343;
LABEL_19:
        while ( 2 )
        {
          v15 = v9 >> 1;
          v16 = &v8[8 * (v9 >> 1)];
          if ( v21 > *((_DWORD *)v16 + 1) )
          {
            v8 = v16 + 8;
            v15 = v9 - v15 - 1;
            if ( v15 <= 0 )
              goto LABEL_21;
LABEL_18:
            v9 = v15;
            continue;
          }
          break;
        }
        if ( v15 )
          goto LABEL_18;
LABEL_21:
        if ( v8 != (char *)&unk_26F96B8 && v21 >= *(_DWORD *)v8 )
          goto LABEL_31;
        v17 = (char *)&unk_26F88E0;
        v18 = 100;
        while ( 2 )
        {
          v19 = v18 >> 1;
          v20 = &v17[8 * (v18 >> 1)];
          if ( v21 > *((_DWORD *)v20 + 1) )
          {
            v17 = v20 + 8;
            v19 = v18 - v19 - 1;
            if ( v19 <= 0 )
              goto LABEL_28;
LABEL_25:
            v18 = v19;
            continue;
          }
          break;
        }
        if ( v19 )
          goto LABEL_25;
LABEL_28:
        if ( v17 == (char *)&unk_26F8C00 || v21 < *(_DWORD *)v17 )
          ++v4;
        else
          v4 += 2;
LABEL_31:
        if ( a2 <= v2 )
          return v4;
        goto LABEL_3;
      }
    }
  }
  if ( (unsigned __int8)(*v6 - 32) <= 0x5Eu )
  {
    ++v4;
    ++v2;
    goto LABEL_31;
  }
  return 0xFFFFFFFFLL;
}
