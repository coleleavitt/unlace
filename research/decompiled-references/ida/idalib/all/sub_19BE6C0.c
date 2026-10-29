__int64 __fastcall sub_19BE6C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rsi
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // rsi
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 *v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx
  unsigned int *v30; // rax
  unsigned int *v31; // rbx
  unsigned int *v32; // r13
  __int64 v33; // rcx
  __int64 *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39[6]; // [rsp+8h] [rbp-30h] BYREF

  v6 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *v6;
  v9 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  v10 = (unsigned int)(v9 - 42);
  if ( (unsigned __int8)(v9 - 42) <= 2u )
  {
    v8 = *(_QWORD *)(sub_F68450(*v6, (__int64)v6, v10, a4, a5) & 0xFFFFFFFFFFFFFFF0LL);
  }
  else if ( (unsigned __int8)(v9 - 2) <= 4u )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)(*(_BYTE *)(v8 + 16) - 2) > 4u )
      {
        if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
          break;
        v11 = sub_F63050(v8, v6, v10, a4);
        if ( !v11 )
          break;
        v8 = v11;
      }
      v8 = *(_QWORD *)(*(_QWORD *)(v8 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    }
  }
  result = (__int64)sub_F631C0(v8, (__int64)v6, v10, a4, a5, a6);
  v17 = result;
  if ( !result )
    return result;
  v18 = *(_QWORD *)(result + 104);
  v19 = sub_7052B0((__int64 *)(v18 + 96), v18, v13, v14, v15, v16);
  if ( (*((_BYTE *)v19 + 29) & 1) != 0 )
  {
    v24 = sub_B8C3D0((__int64)v19, v18, v20, v21, v22, v23);
    v27 = *v24;
    v28 = *v24 + 8LL * *((unsigned int *)v24 + 2);
    if ( v27 >= v28 )
    {
      if ( v27 == v28 )
        goto LABEL_14;
      while ( *(_WORD *)(*(_QWORD *)v28 + 36LL) != 392 )
      {
        v28 += 8LL;
        if ( v27 == v28 )
          goto LABEL_14;
      }
    }
    else
    {
      v29 = v27;
      while ( *(_WORD *)(*(_QWORD *)v29 + 36LL) != 392 )
      {
        v29 += 8LL;
        if ( v28 == v29 )
          goto LABEL_14;
      }
      if ( v28 == v29 )
        goto LABEL_14;
    }
    v33 = *(_QWORD *)v27;
    if ( *(_WORD *)(*(_QWORD *)v27 + 36LL) != 392 )
    {
      v34 = (__int64 *)(v27 + 8);
      do
        v33 = *v34++;
      while ( *(_WORD *)(v33 + 36) != 392 );
    }
    v39[0] = v33;
    return sub_19BE0B0(a3, v39, v27, v33, v25, v26);
  }
LABEL_14:
  result = (*(_BYTE *)(v17 + 28) & 0x7Fu) - 60;
  if ( (unsigned int)result <= 1 )
  {
    v30 = *(unsigned int **)(v17 + 168);
    v31 = v30 + 2;
    result = 3LL * *v30;
    v32 = &v31[2 * result];
    if ( v32 != v31 )
    {
      while ( 1 )
      {
        v39[0] = 0;
        result = *v31 & 0x7FFFFFFF;
        if ( (_DWORD)result == 1 )
          break;
        if ( (_DWORD)result == 2 )
        {
          result = sub_19BE6C0(a1, *(_QWORD *)(*((_QWORD *)v31 + 2) + 48LL), a3);
LABEL_32:
          if ( v39[0] )
            result = sub_19BE0B0(a3, v39, v35, v36, v37, v38);
        }
        v31 += 6;
        if ( v32 == v31 )
          return result;
      }
      result = sub_19BE6C0(a1, *((_QWORD *)v31 + 1), a3);
      goto LABEL_32;
    }
  }
  return result;
}
