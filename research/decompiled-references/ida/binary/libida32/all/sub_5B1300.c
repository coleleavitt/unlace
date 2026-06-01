bool __fastcall sub_5B1300(_QWORD *a1, __int64 a2, __int64 a3, _BYTE *a4, __int64 a5)
{
  __int64 v8; // rdx
  unsigned int v9; // r15d
  unsigned int v10; // esi
  _DWORD *v11; // rax
  __int64 v12; // rdx
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // r8
  unsigned int v19; // eax
  _DWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  _DWORD *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int8 v27; // [rsp+Fh] [rbp-49h]
  unsigned int v28; // [rsp+10h] [rbp-48h] BYREF
  char v29; // [rsp+14h] [rbp-44h]
  unsigned __int64 v30; // [rsp+18h] [rbp-40h]

  v8 = *(unsigned int *)(a2 + 24);
  v30 = __readfsqword(0x28u);
  v28 = -1;
  v29 = 0;
  sub_3DC4D0(a1, (__int64)&v28, v8);
  v9 = v28;
  if ( v28 == -1 )
  {
    v10 = *(_DWORD *)(a2 + 24);
LABEL_18:
    if ( (sub_3B9AA0((__int64)a1, v10, 4) & 0x10000) != 0 )
    {
LABEL_36:
      v9 = sub_3BD5D0((__int64)a1, *(_DWORD *)(a2 + 24));
      v24 = *(_QWORD *)a2;
      if ( *(_QWORD *)a2 )
      {
        v15 = *(int *)(a2 + 8);
        if ( (int)v15 >= 0 && (int)v15 < *(_DWORD *)(v24 + 104) )
          v24 = *(_QWORD *)(v24 + 112) + 8 * v15;
      }
      else
      {
        v24 = a2 + 12;
      }
      if ( v9 >= *(_DWORD *)v24 && v9 < *(_DWORD *)(v24 + 4) )
      {
        v18 = 0;
LABEL_21:
        if ( !a3 )
        {
          *(_DWORD *)(a2 + 24) = v9;
          goto LABEL_29;
        }
        v20 = *(_DWORD **)a3;
        v21 = *(_QWORD *)a3 + 4LL * *(_QWORD *)(a3 + 8);
        if ( *(_QWORD *)a3 == v21 )
          goto LABEL_35;
        while ( *v20 != v9 )
        {
          if ( (_DWORD *)v21 == ++v20 )
            goto LABEL_35;
        }
        if ( v20 == (_DWORD *)v21 )
        {
LABEL_35:
          *(_DWORD *)(a2 + 24) = v9;
          goto LABEL_26;
        }
      }
    }
    else if ( v9 != -1 )
    {
      v19 = func_tail_iterator_set_ea(a2, v9);
      v18 = v19;
      if ( (_BYTE)v19 )
        goto LABEL_21;
    }
    return 0;
  }
  while ( 1 )
  {
    v10 = *(_DWORD *)(a2 + 24);
    if ( (unsigned __int8)(v29 - 16) <= 1u )
    {
      if ( !*(_QWORD *)a2 )
        goto LABEL_10;
      if ( v9 >= v10 )
      {
LABEL_17:
        v28 = -1;
        goto LABEL_18;
      }
    }
    else if ( v9 >= v10 )
    {
      goto LABEL_17;
    }
    if ( a3 )
    {
      v11 = *(_DWORD **)a3;
      v12 = *(_QWORD *)a3 + 4LL * *(_QWORD *)(a3 + 8);
      if ( *(_QWORD *)a3 != v12 )
      {
        while ( v9 != *v11 )
        {
          if ( (_DWORD *)v12 == ++v11 )
            goto LABEL_13;
        }
        if ( v11 != (_DWORD *)v12 )
          goto LABEL_10;
      }
    }
LABEL_13:
    v14 = func_tail_iterator_set_ea(a2, v9);
    v18 = v14;
    if ( (_BYTE)v14 )
      break;
    v10 = *(_DWORD *)(a2 + 24);
LABEL_10:
    sub_3DD2D0(a1, &v28, v10);
    v9 = v28;
    if ( v28 == -1 )
      goto LABEL_11;
  }
  v9 = v28;
  if ( v28 == -1 )
  {
LABEL_11:
    if ( (sub_3B9AA0((__int64)a1, *(_DWORD *)(a2 + 24), 4) & 0x10000) != 0 )
      goto LABEL_36;
    return 0;
  }
  *(_DWORD *)(a2 + 24) = v28;
  if ( !a3 )
    goto LABEL_29;
LABEL_26:
  v22 = *(_QWORD *)(a3 + 8);
  v23 = *(_DWORD **)a3;
  v15 = v22 + 1;
  if ( *(_QWORD *)(a3 + 16) < (unsigned __int64)(v22 + 1) )
  {
    v27 = v18;
    v25 = qvector_reserve(a3, v23, v15, 4);
    v18 = v27;
    *(_QWORD *)a3 = v25;
    v23 = (_DWORD *)v25;
    v22 = *(_QWORD *)(a3 + 8);
  }
  v23[v22] = v9;
  ++*(_QWORD *)(a3 + 8);
LABEL_29:
  if ( a4 )
    *a4 = v18;
  return (int)decode_insn(a5, v9, v15, v16, v18, v17) > 0;
}

