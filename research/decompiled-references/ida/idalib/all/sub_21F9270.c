void __fastcall sub_21F9270(__int64 *a1, char a2, char a3, void **a4)
{
  __int64 v7; // rcx
  int v8; // esi
  int v9; // eax
  int v10; // eax
  __int64 *v11; // rbx
  unsigned int v12; // ebp
  unsigned int v13; // esi
  void *v14; // rsi
  __int64 v15; // rdi
  unsigned int v16; // esi
  __int64 v17; // r8
  unsigned int v18; // eax
  __int64 v19; // rdx
  int v20; // r14d
  __int64 v21; // rsi
  void *v22; // rax
  void *v23; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v24; // [rsp+8h] [rbp-40h]
  void *v25; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v26; // [rsp+18h] [rbp-30h]

  v7 = *a1;
  v8 = *(_DWORD *)(*a1 + 16);
  *((_BYTE *)a1 + 20) = (8 * (a3 & 1)) | *((_BYTE *)a1 + 20) & 0xF0 | 1;
  if ( v8 != 1 )
  {
    v9 = *(_DWORD *)v7;
LABEL_3:
    ++v9;
    goto LABEL_4;
  }
  if ( *(_DWORD *)(v7 + 20) == 2 )
  {
    v9 = *(_DWORD *)(v7 + 4) - 1;
  }
  else
  {
    v9 = *(_DWORD *)v7;
    if ( !*(_BYTE *)(v7 + 25) )
      goto LABEL_3;
  }
LABEL_4:
  *((_DWORD *)a1 + 4) = v9;
  v10 = *(_DWORD *)(v7 + 8);
  v11 = a1 + 1;
  v12 = 1;
  if ( (unsigned int)(v10 + 64) > 0x7F )
  {
    v11 = (__int64 *)a1[1];
    v12 = (unsigned int)(v10 + 64) >> 6;
  }
  v24 = 1;
  v23 = nullptr;
  if ( v8 == 1 )
  {
    v13 = v10 - 1;
    if ( *(_DWORD *)(v7 + 20) == 2 )
    {
      *((_BYTE *)a1 + 20) |= 8u;
      v22 = nullptr;
      v26 = v13;
      if ( v13 <= 0x40 )
      {
LABEL_28:
        v23 = v22;
        a4 = &v23;
        a2 = 0;
        v24 = v13;
        goto LABEL_9;
      }
      sub_2205470(&v25, 0, 0);
      if ( v24 > 0x40 && v23 )
        operator delete[](v23);
    }
    else
    {
      v26 = v10 - 1;
      if ( v13 <= 0x40 )
      {
        v22 = (void *)(0xFFFFFFFFFFFFFFFFLL >> ~((unsigned __int8)v10 - 2));
        if ( !v13 )
          v22 = nullptr;
        goto LABEL_28;
      }
      sub_2205470(&v25, -1, 1);
    }
    v22 = v25;
    v13 = v26;
    goto LABEL_28;
  }
  if ( !a4 )
  {
    sub_22096E0(v11, 0, v12);
    v15 = *a1;
    v16 = *(_DWORD *)(*a1 + 8);
    goto LABEL_15;
  }
  v13 = *((_DWORD *)a4 + 2);
LABEL_9:
  if ( (unsigned int)(((unsigned __int64)v13 + 63) >> 6) < v12 )
  {
    sub_22096E0(v11, 0, v12);
    v13 = *((_DWORD *)a4 + 2);
  }
  if ( v13 <= 0x40 )
    v14 = a4;
  else
    v14 = *a4;
  sub_2209710(v11, v14);
  v15 = *a1;
  v16 = *(_DWORD *)(*a1 + 8);
  v17 = (v16 - 1) >> 6;
  v18 = v17 + 1;
  for ( v11[v17] &= ~(-1LL << ((unsigned __int8)v16 - 1)); v18 != v12; v11[v19] = 0 )
    v19 = v18++;
LABEL_15:
  v20 = 2;
  if ( v16 >= 2 )
    v20 = v16;
  v21 = (unsigned int)(v20 - 2);
  if ( a2 )
  {
    sub_2209820(v11, v21);
    if ( (unsigned __int8)sub_2209790(v11, v12) )
    {
      sub_2209800(v11, (unsigned int)(v20 - 3));
      if ( (_UNKNOWN *)*a1 != &unk_26F7B60 )
        goto LABEL_22;
      goto LABEL_34;
    }
  }
  else
  {
    if ( *(_DWORD *)(v15 + 20) == 2 )
      goto LABEL_21;
    sub_2209800(v11, v21);
  }
  v15 = *a1;
LABEL_21:
  if ( (_UNKNOWN *)v15 != &unk_26F7B60 )
    goto LABEL_22;
LABEL_34:
  sub_2209800(v11, (unsigned int)(v20 - 1));
LABEL_22:
  if ( v24 > 0x40 )
  {
    if ( v23 )
      operator delete[](v23);
  }
}
