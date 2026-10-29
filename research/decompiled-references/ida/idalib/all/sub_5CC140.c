bool __fastcall sub_5CC140(_QWORD *a1, __int64 a2, __int64 a3, _BYTE *a4, __int64 a5, double a6)
{
  __int64 v9; // rdx
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rsi
  _QWORD *v12; // rax
  __int64 v13; // rdx
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // r8
  unsigned int v20; // eax
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  _QWORD *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int8 v28; // [rsp+Fh] [rbp-59h]
  unsigned __int64 v29; // [rsp+10h] [rbp-58h] BYREF
  char v30; // [rsp+18h] [rbp-50h]
  unsigned __int64 v31; // [rsp+28h] [rbp-40h]

  v9 = *(_QWORD *)(a2 + 32);
  v31 = __readfsqword(0x28u);
  v30 = 0;
  v29 = -1;
  sub_3E2000(a1, (__int64)&v29, v9);
  v10 = v29;
  if ( v29 == -1 )
  {
    v11 = *(_QWORD *)(a2 + 32);
LABEL_18:
    if ( (sub_3BE900(a1, v11, 4) & 0x10000) != 0 )
    {
LABEL_36:
      v10 = sub_3C2650(a1, *(_QWORD *)(a2 + 32));
      v25 = *(_QWORD *)a2;
      if ( *(_QWORD *)a2 )
      {
        v16 = *(int *)(a2 + 8);
        if ( (int)v16 >= 0 && (int)v16 < *(_DWORD *)(v25 + 128) )
        {
          v16 = *(_QWORD *)(v25 + 136) + 16 * v16;
          v25 = v16;
        }
      }
      else
      {
        v25 = a2 + 16;
      }
      if ( v10 >= *(_QWORD *)v25 && v10 < *(_QWORD *)(v25 + 8) )
      {
        v19 = 0;
LABEL_21:
        if ( !a3 )
        {
          *(_QWORD *)(a2 + 32) = v10;
          goto LABEL_29;
        }
        v21 = *(_QWORD **)a3;
        v22 = *(_QWORD *)a3 + 8LL * *(_QWORD *)(a3 + 8);
        if ( *(_QWORD *)a3 == v22 )
          goto LABEL_35;
        while ( *v21 != v10 )
        {
          if ( (_QWORD *)v22 == ++v21 )
            goto LABEL_35;
        }
        if ( v21 == (_QWORD *)v22 )
        {
LABEL_35:
          *(_QWORD *)(a2 + 32) = v10;
          goto LABEL_26;
        }
      }
    }
    else if ( v10 != -1 )
    {
      LOBYTE(v20) = func_tail_iterator_set_ea(a2, v10);
      v19 = v20;
      if ( (_BYTE)v20 )
        goto LABEL_21;
    }
    return 0;
  }
  while ( 1 )
  {
    v11 = *(_QWORD *)(a2 + 32);
    if ( (unsigned __int8)(v30 - 16) <= 1u )
    {
      if ( !*(_QWORD *)a2 )
        goto LABEL_10;
      if ( v10 >= v11 )
      {
LABEL_17:
        v29 = -1;
        goto LABEL_18;
      }
    }
    else if ( v10 >= v11 )
    {
      goto LABEL_17;
    }
    if ( a3 )
    {
      v12 = *(_QWORD **)a3;
      v13 = *(_QWORD *)a3 + 8LL * *(_QWORD *)(a3 + 8);
      if ( *(_QWORD *)a3 != v13 )
      {
        while ( v10 != *v12 )
        {
          if ( (_QWORD *)v13 == ++v12 )
            goto LABEL_13;
        }
        if ( v12 != (_QWORD *)v13 )
          goto LABEL_10;
      }
    }
LABEL_13:
    LOBYTE(v15) = func_tail_iterator_set_ea(a2, v10);
    v19 = v15;
    if ( (_BYTE)v15 )
      break;
    v11 = *(_QWORD *)(a2 + 32);
LABEL_10:
    sub_3E2EB0(a1, &v29, v11);
    v10 = v29;
    if ( v29 == -1 )
      goto LABEL_11;
  }
  v10 = v29;
  if ( v29 == -1 )
  {
LABEL_11:
    if ( (sub_3BE900(a1, *(_QWORD *)(a2 + 32), 4) & 0x10000) != 0 )
      goto LABEL_36;
    return 0;
  }
  *(_QWORD *)(a2 + 32) = v29;
  if ( !a3 )
    goto LABEL_29;
LABEL_26:
  v23 = *(_QWORD *)(a3 + 8);
  v24 = *(_QWORD **)a3;
  v16 = v23 + 1;
  if ( *(_QWORD *)(a3 + 16) < (unsigned __int64)(v23 + 1) )
  {
    v28 = v19;
    v26 = qvector_reserve(a3, v24, v16, 8);
    v19 = v28;
    *(_QWORD *)a3 = v26;
    v24 = (_QWORD *)v26;
    v23 = *(_QWORD *)(a3 + 8);
  }
  v24[v23] = v10;
  ++*(_QWORD *)(a3 + 8);
LABEL_29:
  if ( a4 )
    *a4 = v19;
  return (int)decode_insn(a5, v10, v16, v17, v19, v18, a6) > 0;
}
