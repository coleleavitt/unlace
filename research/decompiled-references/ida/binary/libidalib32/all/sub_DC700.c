void __fastcall sub_DC700(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v6; // r14d
  __int64 v9; // rbx
  __int64 *v10; // r8
  unsigned __int64 v11; // rdx
  __int64 v12; // r15
  char *v13; // r9
  _QWORD *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  char *v18; // rsi
  char *v19; // r9
  unsigned int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // rsi
  __int64 *v23; // r15
  __int64 v24; // rbx
  unsigned __int64 v25; // rbp
  size_t v26; // r8
  const void *v27; // rbx
  void *v28; // rax
  unsigned __int64 v29; // [rsp+0h] [rbp-50h]
  __int64 *v30; // [rsp+8h] [rbp-48h]
  char *v31; // [rsp+10h] [rbp-40h]

  if ( !dword_2515A4 )
    return;
  if ( (unsigned int)xmmword_251418 <= (unsigned int)a5 )
    return;
  v6 = *(_DWORD *)(qword_251410 + 232LL * (int)a5);
  if ( !v6 )
    return;
  sub_94360(*a2);
  v9 = 232 * a5;
  sub_94360(*a2 + 3);
  if ( *(_BYTE *)(qword_251410 + v9 + 32) )
  {
    v11 = 10;
    v12 = 9;
    v13 = "Suspended";
  }
  else
  {
    if ( dword_2515A4 >= 0 )
    {
      v10 = *a2;
      v11 = 8;
      v12 = 7;
      v13 = "Running";
      v14 = (_QWORD *)(*a2)[6];
      if ( (unsigned __int64)(*a2)[8] < 8 )
        goto LABEL_7;
      goto LABEL_23;
    }
    v11 = 6;
    v12 = 5;
    v13 = "Ready";
  }
  v10 = *a2;
  v14 = (_QWORD *)(*a2)[6];
  if ( (*a2)[8] < v11 )
  {
LABEL_7:
    v31 = v13;
    v30 = v10;
    v29 = v11;
    v15 = qvector_reserve();
    v10 = v30;
    v14 = (_QWORD *)v15;
    v13 = v31;
    v30[6] = v15;
    v16 = (unsigned int)v12;
    v30[7] = v29;
    if ( (unsigned int)v12 >= 8 )
      goto LABEL_8;
    goto LABEL_24;
  }
LABEL_23:
  v10[7] = v11;
  v16 = (unsigned int)v12;
  if ( (unsigned int)v12 >= 8 )
  {
LABEL_8:
    v17 = (unsigned __int64)(v14 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    *v14 = *(_QWORD *)v13;
    *(_QWORD *)((char *)v14 + v12 - 8) = *(_QWORD *)&v13[v12 - 8];
    v18 = (char *)v14 - v17;
    v19 = (char *)(v13 - v18);
    if ( (((_DWORD)v12 + (_DWORD)v18) & 0xFFFFFFF8) >= 8 )
    {
      v20 = (v12 + (_DWORD)v18) & 0xFFFFFFF8;
      v21 = 0;
      do
      {
        v22 = v21;
        v21 += 8;
        *(_QWORD *)(v17 + v22) = *(_QWORD *)&v19[v22];
      }
      while ( v21 < v20 );
    }
    goto LABEL_11;
  }
LABEL_24:
  *(_DWORD *)v14 = *(_DWORD *)v13;
  *(_DWORD *)((char *)v14 + v16 - 4) = *(_DWORD *)&v13[v16 - 4];
LABEL_11:
  *(_BYTE *)(v10[6] + v12) = 0;
  v23 = *a2;
  v24 = qword_251410 + v9;
  if ( *a2 + 9 != (__int64 *)(v24 + 8) )
  {
    v25 = *(_QWORD *)(v24 + 16);
    if ( !v25 || (v26 = v25 - 1, v25 == 1) )
    {
      v23[10] = 0;
    }
    else
    {
      v27 = *(const void **)(v24 + 8);
      v28 = (void *)v23[9];
      if ( v23[11] < v25 )
      {
        v28 = (void *)qvector_reserve();
        v26 = v25 - 1;
        v23[9] = (__int64)v28;
      }
      v23[10] = v25;
      memmove(v28, v27, v26);
      *(_BYTE *)(v23[9] + v25 - 1) = 0;
    }
  }
  if ( *(_DWORD *)(a1 + 180) == v6 )
    *(_DWORD *)(a4 + 4) |= 1u;
}

