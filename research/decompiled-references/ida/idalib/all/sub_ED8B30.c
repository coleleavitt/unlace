void __fastcall sub_ED8B30(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  unsigned __int64 v9; // r12
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdi
  unsigned __int64 v17; // rax
  __int64 v18; // r14
  unsigned int v19; // r12d
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rsi
  unsigned __int64 v26; // rsi
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rsi
  unsigned __int8 *v30[15]; // [rsp+0h] [rbp-78h] BYREF

  v4 = *(_QWORD *)(a1 + 32);
  v5 = sub_A98060(*(_QWORD *)a1, v4) - *(unsigned int *)(a1 + 312);
  v8 = *(_QWORD *)(a1 + 16);
  v9 = v5;
  if ( v8 )
  {
    v10 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 32) = v8;
    if ( !v10 )
      goto LABEL_10;
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 56);
    v9 = v5 + 8;
    *(_QWORD *)(a1 + 32) = 0;
    if ( !v10 )
      goto LABEL_3;
  }
  if ( *(_QWORD *)(a1 + 40) < v10 )
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 56);
  v27 = *(_QWORD *)(a1 + 48);
  v4 = *(_QWORD *)(a1 + 40);
  if ( v27 && v4 > v27 )
    v4 = *(_QWORD *)(a1 + 48);
  if ( v4 < v10 )
    v4 = *(_QWORD *)(a1 + 56);
  v8 = v4 * ((v8 - (unsigned __int64)(v8 != 0)) / v4 + (v8 != 0));
  *(_QWORD *)(a1 + 16) = v8;
  if ( !v8 )
  {
LABEL_3:
    if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 59 <= 2 )
    {
      if ( (unsigned __int8)sub_ED6660(a2, v4, v8, v10, v6, v7) )
      {
        sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v11, v12, v13, v14);
        if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 1LL) & 2) != 0 )
        {
          v10 = *(_QWORD *)(a1 + 56);
          goto LABEL_7;
        }
      }
      v10 = *(_QWORD *)(a1 + 56);
    }
    *(_BYTE *)(a1 + 316) |= 0x30u;
LABEL_7:
    if ( v10 < *(_QWORD *)(a1 + 80) )
      v15 = *(_QWORD *)(a1 + 80);
    else
      v15 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 16) = v15;
LABEL_10:
    v16 = *(_QWORD *)a1;
    if ( (*(_BYTE *)(a1 + 316) & 0x40) == 0 )
      goto LABEL_11;
    goto LABEL_28;
  }
  v16 = *(_QWORD *)a1;
  if ( (*(_BYTE *)(a1 + 316) & 0x40) == 0 )
  {
LABEL_11:
    v17 = sub_A98060(v16, *(_QWORD *)(a1 + 16));
    if ( v17 > v9 )
    {
      v18 = 1;
      v19 = v17 - v9;
      if ( (v19 & 7) == 0 )
      {
        v19 >>= 3;
        v18 = 0;
      }
      v20 = sub_A62AC0(*(_QWORD *)a1);
      sub_FC70B0(v30, v20, *(unsigned int *)(a2 + 24), 2587);
      v25 = *(_QWORD *)(a2 + 48);
      if ( v25 )
        v26 = v25 & 0xFFFFFFFFFFFFFFF0LL;
      else
        v26 = sub_A7AA70(*(_QWORD *)a1, a2, v21, v22, v23, v24);
      sub_AE9DF0(v30, v26, 8u);
      sub_AE9DF0(v30, v19, 3u);
      sub_AE9DF0(v30, v18, 2u);
      sub_AEA040((__int64)v30);
    }
    return;
  }
LABEL_28:
  v28 = sub_A97FF0(v16, *(_QWORD *)(a1 + 320));
  v29 = *(_QWORD *)(a1 + 328);
  *(_QWORD *)(a1 + 16) = v28;
  if ( v29 )
    *(_QWORD *)(a1 + 40) = sub_A97FF0(*(_QWORD *)a1, v29);
}
