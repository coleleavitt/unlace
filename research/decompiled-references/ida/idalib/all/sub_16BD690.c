void __fastcall sub_16BD690(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  char v7; // r13
  unsigned int v8; // eax
  void *v9; // rdx
  bool v10; // cc
  unsigned int v11; // r9d
  unsigned int v12; // ecx
  void *v13; // rdx
  unsigned int v14; // r9d
  void *v15; // rdi
  unsigned int v16; // r12d
  void *v17; // rbp
  void *v18; // rdi
  void *v19; // rdi
  unsigned int v20; // r14d
  __int64 v21; // rbp
  unsigned int v22; // r12d
  __int64 v23; // rbp
  unsigned __int64 v24; // rbp
  void *v25; // rdi
  __int64 v26; // r15
  void *v27; // r8
  __int64 v28; // r8
  unsigned int v29; // ecx
  void *v30; // rdx
  unsigned int v31; // r15d
  unsigned int v32; // eax
  unsigned __int64 v33; // rdx
  void *v34; // rdi
  char v35; // [rsp+8h] [rbp-80h]
  unsigned __int64 v36; // [rsp+8h] [rbp-80h]
  unsigned int v37; // [rsp+18h] [rbp-70h]
  unsigned int v38; // [rsp+18h] [rbp-70h]
  unsigned int v39; // [rsp+18h] [rbp-70h]
  unsigned int v40; // [rsp+18h] [rbp-70h]
  unsigned int v41; // [rsp+24h] [rbp-64h]
  void *v42; // [rsp+28h] [rbp-60h]
  void *v43; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v44; // [rsp+38h] [rbp-50h]
  char v45; // [rsp+3Ch] [rbp-4Ch]
  void *v46; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v47; // [rsp+48h] [rbp-40h]
  char v48; // [rsp+4Ch] [rbp-3Ch]

  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)a1 = 0;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 24) = 1;
  *(_QWORD *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 28) = 0;
  if ( !(_DWORD)a2 )
  {
    v7 = a4;
    v47 = a3;
    if ( a3 > 0x40 )
    {
      sub_2205470(&v46, 0, 0);
      v10 = *(_DWORD *)(a1 + 24) <= 0x40u;
      v48 = a4;
      if ( !v10 )
      {
        v19 = *(void **)(a1 + 16);
        if ( v19 )
        {
          operator delete[](v19);
          v7 = v48;
        }
      }
    }
    else
    {
      v46 = nullptr;
      v48 = a4;
    }
    v8 = v47;
    v9 = v46;
    *(_BYTE *)(a1 + 28) = v7;
    v10 = *(_DWORD *)(a1 + 8) <= 0x40u;
    v47 = 0;
    *(_QWORD *)(a1 + 16) = v9;
    *(_DWORD *)(a1 + 24) = v8;
    if ( v10 && v8 <= 0x40 )
    {
      *(_BYTE *)(a1 + 12) = v7;
      *(_QWORD *)a1 = v9;
      *(_DWORD *)(a1 + 8) = v8;
    }
    else
    {
      sub_22056A0(a1, a1 + 16);
      v10 = v47 <= 0x40;
      *(_BYTE *)(a1 + 12) = *(_BYTE *)(a1 + 28);
      if ( !v10 )
      {
        if ( v46 )
          operator delete[](v46);
      }
    }
    return;
  }
  v11 = a2;
  if ( a3 > (unsigned int)a2 || a4 )
  {
    v47 = a2;
    if ( BYTE4(a2) )
    {
      if ( (unsigned int)a2 > 0x40 )
      {
        sub_2205470(&v46, 0, 0);
        v11 = a2;
      }
      else
      {
        v46 = nullptr;
      }
      v37 = v11;
      v45 = 1;
      v44 = v47;
      v43 = v46;
      sub_2206D90(&v46, &v43, a3);
      v35 = BYTE4(a2);
      v12 = v47;
      v13 = v46;
      v14 = v37;
LABEL_16:
      if ( *(_DWORD *)(a1 + 8) > 0x40u )
      {
        v15 = *(void **)a1;
        if ( *(_QWORD *)a1 )
        {
          v42 = v13;
          v41 = v12;
          v38 = v14;
          operator delete[](v15);
          v13 = v42;
          v12 = v41;
          v14 = v38;
        }
      }
      v10 = v44 <= 0x40;
      *(_QWORD *)a1 = v13;
      *(_DWORD *)(a1 + 8) = v12;
      *(_BYTE *)(a1 + 12) = v35;
      if ( !v10 && v43 )
      {
        v39 = v14;
        operator delete[](v43);
        v14 = v39;
      }
      *(_BYTE *)(a1 + 12) = a4;
      v47 = a2;
      if ( BYTE4(a2) )
      {
        if ( (unsigned int)a2 > 0x40 )
        {
          sub_2205470(&v46, -1, 1);
          v14 = v47;
        }
        else
        {
          v46 = (void *)(0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)a2));
        }
        v44 = v14;
        v45 = 1;
        v43 = v46;
        sub_2206D90(&v46, &v43, a3);
        v16 = v47;
        v17 = v46;
        goto LABEL_26;
      }
      v26 = ~(1LL << ((unsigned __int8)a2 - 1));
      if ( (unsigned int)a2 > 0x40 )
      {
        sub_2205470(&v46, -1, 1);
        v14 = v47;
        if ( v47 > 0x40 )
        {
          *((_QWORD *)v46 + ((unsigned int)(a2 - 1) >> 6)) &= v26;
          v27 = v46;
          goto LABEL_49;
        }
      }
      else
      {
        v46 = (void *)(0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)a2));
      }
      v27 = (void *)(v26 & (unsigned __int64)v46);
LABEL_49:
      v44 = v14;
      v43 = v27;
      v45 = 0;
      sub_2206DE0(&v46, &v43, a3);
      v16 = v47;
      v17 = v46;
LABEL_26:
      if ( *(_DWORD *)(a1 + 24) > 0x40u )
      {
        v18 = *(void **)(a1 + 16);
        if ( v18 )
          operator delete[](v18);
      }
      v10 = v44 <= 0x40;
      *(_QWORD *)(a1 + 16) = v17;
      *(_DWORD *)(a1 + 24) = v16;
      *(_BYTE *)(a1 + 28) = v35;
      if ( !v10 && v43 )
        operator delete[](v43);
      *(_BYTE *)(a1 + 28) = a4;
      return;
    }
    v28 = 1LL << ((unsigned __int8)a2 - 1);
    if ( (unsigned int)a2 > 0x40 )
    {
      sub_2205470(&v46, 0, 0);
      v29 = v47;
      v11 = a2;
      v28 = 1LL << ((unsigned __int8)a2 - 1);
      if ( v47 > 0x40 )
      {
        *((_QWORD *)v46 + ((unsigned int)(a2 - 1) >> 6)) |= 1LL << ((unsigned __int8)a2 - 1);
        v30 = v46;
        goto LABEL_53;
      }
    }
    else
    {
      v46 = nullptr;
      v29 = a2;
    }
    v30 = (void *)(v28 | (unsigned __int64)v46);
LABEL_53:
    v43 = v30;
    v40 = v11;
    v44 = v29;
    v45 = 0;
    sub_2206DE0(&v46, &v43, a3);
    v12 = v47;
    v13 = v46;
    v35 = 0;
    v14 = v40;
    goto LABEL_16;
  }
  v20 = a3 - 1;
  v47 = a3;
  v21 = 1LL << ((unsigned __int8)a3 - 1);
  if ( a3 > 0x40 )
  {
    sub_2205470(&v46, 0, 0);
    v31 = v47;
    if ( v47 <= 0x40 )
    {
      v32 = *(_DWORD *)(a1 + 8);
      v33 = v21 | (unsigned __int64)v46;
    }
    else
    {
      *((_QWORD *)v46 + (v20 >> 6)) |= v21;
      v32 = *(_DWORD *)(a1 + 8);
      v33 = (unsigned __int64)v46;
    }
    if ( v32 > 0x40 )
    {
      v34 = *(void **)a1;
      if ( *(_QWORD *)a1 )
      {
        v36 = v33;
        operator delete[](v34);
        v33 = v36;
      }
    }
    *(_QWORD *)a1 = v33;
    *(_DWORD *)(a1 + 8) = v31;
    *(_BYTE *)(a1 + 12) = 0;
    v47 = a3;
    sub_2205470(&v46, -1, 1);
  }
  else
  {
    *(_QWORD *)a1 = v21;
    *(_DWORD *)(a1 + 8) = a3;
    v46 = (void *)-1LL;
    sub_CF8100((unsigned __int64 *)&v46);
  }
  v22 = v47;
  v23 = ~v21;
  if ( v47 > 0x40 )
  {
    *((_QWORD *)v46 + (v20 >> 6)) &= v23;
    v24 = (unsigned __int64)v46;
  }
  else
  {
    v24 = (unsigned __int64)v46 & v23;
  }
  if ( *(_DWORD *)(a1 + 24) > 0x40u )
  {
    v25 = *(void **)(a1 + 16);
    if ( v25 )
      operator delete[](v25);
  }
  *(_QWORD *)(a1 + 16) = v24;
  *(_DWORD *)(a1 + 24) = v22;
  *(_BYTE *)(a1 + 28) = 0;
}
