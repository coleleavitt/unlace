unsigned __int64 __fastcall sub_1FBC310(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned __int64 result; // rax
  __int64 v21; // rsi
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  unsigned __int64 v26; // rax
  __int64 *v27; // r12
  __int64 *v28; // r13
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned int *v31; // r12
  unsigned int *v32; // r13
  unsigned int v33; // eax

  v7 = (__int64 *)(a2 + 88);
  if ( !a2 )
    v7 = nullptr;
  sub_1FB7C10((__int64 *)a1, v7, a3, a4, a5, a6);
  sub_1FBC160(a1, a2);
  v12 = *(_QWORD *)(a2 + 104);
  if ( !v12 )
  {
    sub_A79820((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96), v8, v9, v10, v11);
    v12 = *(_QWORD *)(a2 + 104);
  }
  v13 = 0;
  v14 = (__int64 *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v14 )
    v13 = *v14;
  sub_9B9C90(*(_QWORD *)(a1 + 24), a2 == v13);
  v19 = *(_QWORD *)(a2 + 104);
  if ( !v19 )
  {
    sub_A79820((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96), v15, v16, v17, v18);
    v19 = *(_QWORD *)(a2 + 104);
  }
  result = v19 & 0xFFFFFFFFFFFFFFF8LL;
  if ( result && a2 == *(_QWORD *)result )
  {
    v21 = *(unsigned int *)(result + 16);
    sub_9B9C90(*(_QWORD *)(a1 + 24), v21);
    v25 = *(_QWORD *)(a2 + 104);
    if ( v25 )
    {
      v26 = v25 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v25 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        goto LABEL_32;
    }
    else
    {
      v21 = *(_QWORD *)(a2 + 96);
      sub_A79820((__int64 *)(v21 + 88), v21, 0, v22, v23, v24);
      v25 = *(_QWORD *)(a2 + 104);
      v26 = v25 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v25 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      {
        if ( v25 )
          goto LABEL_32;
        v21 = *(_QWORD *)(a2 + 96);
        sub_A79820((__int64 *)(v21 + 88), v21, 0, v22, v23, v24);
        v25 = *(_QWORD *)(a2 + 104);
        v29 = v25;
        v22 = v25 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v25 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          goto LABEL_18;
        v27 = *(__int64 **)(v22 + 8);
        v28 = nullptr;
        goto LABEL_15;
      }
    }
    v27 = *(__int64 **)(v26 + 8);
    v28 = &v27[*(unsigned int *)(v26 + 16)];
LABEL_15:
    if ( v28 != v27 )
    {
      do
      {
        v21 = *v27++;
        sub_1F92A90(*(_QWORD *)(a1 + 16), v21, *(_QWORD *)(a1 + 24));
      }
      while ( v28 != v27 );
      v29 = *(_QWORD *)(a2 + 104);
LABEL_18:
      if ( v29 )
      {
        v30 = v29 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v30 )
        {
LABEL_23:
          v33 = sub_BAA660(a2, v21, v25, v22, v23, v24);
          result = sub_9B9C90(*(_QWORD *)(a1 + 24), v33);
          goto LABEL_11;
        }
      }
      else
      {
        v21 = *(_QWORD *)(a2 + 96);
        sub_A79820((__int64 *)(v21 + 88), v21, v25, v22, v23, v24);
        v25 = *(_QWORD *)(a2 + 104);
        v30 = v25 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v25 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        {
          if ( v25 )
            goto LABEL_23;
          v21 = *(_QWORD *)(a2 + 96);
          sub_A79820((__int64 *)(v21 + 88), v21, 0, v22, v23, v24);
          if ( (*(_QWORD *)(a2 + 104) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
            goto LABEL_23;
          v31 = *(unsigned int **)((*(_QWORD *)(a2 + 104) & 0xFFFFFFFFFFFFFFF8LL) + 24);
          v32 = nullptr;
          goto LABEL_22;
        }
      }
      v31 = *(unsigned int **)(v30 + 24);
      v32 = &v31[*(unsigned int *)(v30 + 16)];
LABEL_22:
      while ( v32 != v31 )
      {
        v21 = *v31++;
        sub_1F6F570(*(_QWORD **)(a1 + 16), v21, *(_QWORD *)(a1 + 24));
      }
      goto LABEL_23;
    }
LABEL_32:
    v29 = v25;
    goto LABEL_18;
  }
LABEL_11:
  *(_DWORD *)(a1 + 224) = 59;
  return result;
}
