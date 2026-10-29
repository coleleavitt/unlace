__int64 __fastcall sub_3C6060(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r15
  __int64 v8; // r14
  unsigned __int8 *v9; // r13
  __int64 result; // rax
  char v11; // al
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rbp
  __int64 v15; // rdx
  unsigned __int64 v16; // r12
  int *v17; // rdi
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 range; // rax
  __int64 v26; // [rsp+8h] [rbp-40h]

  v7 = a1[6];
  v8 = a1[2];
  v9 = *(unsigned __int8 **)(*(_QWORD *)(v7 + 136) + 8 * a3);
  result = *v9;
  if ( (_BYTE)result == 4 )
  {
    v23 = -1;
    if ( v8 == *(_QWORD *)(*((_QWORD *)v9 + 1) + 24LL) )
      goto LABEL_9;
  }
  else
  {
    if ( v8 == -1 )
      goto LABEL_9;
    if ( (_BYTE)result != 2 )
    {
      if ( a2 != 2 )
        return result;
LABEL_7:
      result = *((_QWORD *)v9 + 2);
LABEL_8:
      if ( result != v8 )
        return result;
      goto LABEL_9;
    }
    v26 = a5;
    v11 = is_mapped();
    a5 = v26;
    if ( !v11 || !*(_QWORD *)(v7 + 24) || (range = rangeset_t_find_range(), a5 = v26, !range) )
    {
LABEL_6:
      v8 = a1[2];
      result = -1;
      if ( a2 != 2 )
        goto LABEL_8;
      goto LABEL_7;
    }
    v23 = **((_QWORD **)v9 + 1);
  }
  if ( v8 != v23 )
    goto LABEL_6;
LABEL_9:
  v12 = sub_3C5160(*a1, a4, a5);
  v14 = v13;
  v15 = a1[4];
  v16 = v12;
  while ( v15 )
  {
    v17 = *(int **)(a1[3] + 8 * v15 - 8);
    if ( *(_QWORD *)v17 != a1[1] )
      break;
    if ( v17[3] != 82 )
      break;
    v18 = v17[4];
    if ( v18 < v16 )
      break;
    if ( v14 < v17[5] + (int)v18 )
      break;
    if ( v17 )
    {
      operator delete(v17, 0x18u);
      v15 = a1[4];
      if ( !v15 )
        break;
    }
    a1[4] = --v15;
  }
  v19 = operator new(0x18u);
  v20 = a1[3];
  v21 = v19;
  v22 = a1[1];
  *(_QWORD *)(v21 + 16) = -1;
  *(_QWORD *)v21 = v22;
  *(_QWORD *)(v21 + 8) = 0x5200000001LL;
  result = a1[4];
  if ( a1[5] < (unsigned __int64)(result + 1) )
  {
    v24 = qvector_reserve();
    a1[3] = v24;
    v20 = v24;
    result = a1[4];
  }
  *(_QWORD *)(v20 + 8 * result) = v21;
  ++a1[4];
  *(_DWORD *)(v21 + 16) = v16;
  *(_DWORD *)(v21 + 20) = v14 - v16;
  return result;
}
