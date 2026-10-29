void __fastcall sub_DDCE0(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // r14d
  __int64 v8; // rbx
  __int64 *v9; // r8
  unsigned __int64 v10; // rdx
  __int64 v11; // r15
  char *v12; // r9
  _QWORD *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  char *v17; // rsi
  char *v18; // r9
  unsigned int v19; // eax
  unsigned int v20; // ecx
  __int64 v21; // rsi
  __int64 *v22; // r15
  __int64 v23; // rbx
  unsigned __int64 v24; // rbp
  size_t v25; // r8
  const void *v26; // rbx
  void *v27; // rax
  unsigned __int64 v28; // [rsp+0h] [rbp-50h]
  __int64 *v29; // [rsp+8h] [rbp-48h]
  char *v30; // [rsp+10h] [rbp-40h]

  if ( !dword_25274C )
    return;
  if ( (unsigned int)xmmword_252598 <= (unsigned int)a5 )
    return;
  v5 = *(_DWORD *)(qword_252590 + ((__int64)(int)a5 << 8));
  if ( !v5 )
    return;
  v8 = a5 << 8;
  sub_94440(*a2);
  sub_94440(*a2 + 3);
  if ( *(_BYTE *)(qword_252590 + v8 + 32) )
  {
    v10 = 10;
    v11 = 9;
    v12 = "Suspended";
  }
  else
  {
    if ( dword_25274C >= 0 )
    {
      v9 = *a2;
      v10 = 8;
      v11 = 7;
      v12 = "Running";
      v13 = (_QWORD *)(*a2)[6];
      if ( (unsigned __int64)(*a2)[8] < 8 )
        goto LABEL_7;
      goto LABEL_23;
    }
    v10 = 6;
    v11 = 5;
    v12 = "Ready";
  }
  v9 = *a2;
  v13 = (_QWORD *)(*a2)[6];
  if ( (*a2)[8] < v10 )
  {
LABEL_7:
    v30 = v12;
    v29 = v9;
    v28 = v10;
    v14 = qvector_reserve();
    v9 = v29;
    v13 = (_QWORD *)v14;
    v12 = v30;
    v29[6] = v14;
    v15 = (unsigned int)v11;
    v29[7] = v28;
    if ( (unsigned int)v11 >= 8 )
      goto LABEL_8;
    goto LABEL_24;
  }
LABEL_23:
  v9[7] = v10;
  v15 = (unsigned int)v11;
  if ( (unsigned int)v11 >= 8 )
  {
LABEL_8:
    v16 = (unsigned __int64)(v13 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    *v13 = *(_QWORD *)v12;
    *(_QWORD *)((char *)v13 + v11 - 8) = *(_QWORD *)&v12[v11 - 8];
    v17 = (char *)v13 - v16;
    v18 = (char *)(v12 - v17);
    if ( (((_DWORD)v11 + (_DWORD)v17) & 0xFFFFFFF8) >= 8 )
    {
      v19 = (v11 + (_DWORD)v17) & 0xFFFFFFF8;
      v20 = 0;
      do
      {
        v21 = v20;
        v20 += 8;
        *(_QWORD *)(v16 + v21) = *(_QWORD *)&v18[v21];
      }
      while ( v20 < v19 );
    }
    goto LABEL_11;
  }
LABEL_24:
  *(_DWORD *)v13 = *(_DWORD *)v12;
  *(_DWORD *)((char *)v13 + v15 - 4) = *(_DWORD *)&v12[v15 - 4];
LABEL_11:
  *(_BYTE *)(v9[6] + v11) = 0;
  v22 = *a2;
  v23 = qword_252590 + v8;
  if ( *a2 + 9 != (__int64 *)(v23 + 8) )
  {
    v24 = *(_QWORD *)(v23 + 16);
    if ( !v24 || (v25 = v24 - 1, v24 == 1) )
    {
      v22[10] = 0;
    }
    else
    {
      v26 = *(const void **)(v23 + 8);
      v27 = (void *)v22[9];
      if ( v22[11] < v24 )
      {
        v27 = (void *)qvector_reserve();
        v25 = v24 - 1;
        v22[9] = (__int64)v27;
      }
      v22[10] = v24;
      memmove(v27, v26, v25);
      *(_BYTE *)(v22[9] + v24 - 1) = 0;
    }
  }
  if ( *(_DWORD *)(a1 + 180) == v5 )
    *(_DWORD *)(a4 + 4) |= 1u;
}

