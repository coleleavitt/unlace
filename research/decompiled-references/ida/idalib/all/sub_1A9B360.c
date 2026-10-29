void __fastcall sub_1A9B360(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v10; // dl
  _QWORD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rsi
  _QWORD *v14; // rdi
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rsi
  unsigned __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 *v32; // r13
  __int64 v33; // rdx

  v10 = *(_BYTE *)(a4 + 20);
  if ( !v10 )
    goto LABEL_10;
  v11 = *(_QWORD **)a4;
  v12 = *(unsigned int *)(a4 + 12);
  v13 = 8 * v12;
  v14 = &v11[v12];
  if ( v11 != v14 )
  {
    v15 = v11;
    if ( a3 == (_QWORD *)*v11 )
    {
LABEL_28:
      v10 = 0;
      v17 = (__int64)&v11[*(unsigned int *)(a4 + 12)];
      goto LABEL_12;
    }
    while ( v14 != ++v15 )
    {
      if ( a3 == (_QWORD *)*v15 )
        goto LABEL_28;
    }
  }
  if ( (unsigned int)v12 < *(_DWORD *)(a4 + 8) )
  {
    v12 = (unsigned int)(v12 + 1);
    *(_DWORD *)(a4 + 12) = v12;
    *v14 = a3;
    v16 = *(_QWORD **)a4;
    v15 = (_QWORD *)(*(_QWORD *)a4 + v13);
  }
  else
  {
LABEL_10:
    v15 = (_QWORD *)sub_2236760(a4, a3);
    v16 = *(_QWORD **)a4;
    if ( !*(_BYTE *)(a4 + 20) )
    {
      v17 = (__int64)&v16[*(unsigned int *)(a4 + 8)];
      goto LABEL_12;
    }
  }
  v17 = (__int64)&v16[*(unsigned int *)(a4 + 12)];
LABEL_12:
  if ( (_QWORD *)v17 != v15 && *v15 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v18 = v15 + 1;
    do
    {
      v19 = v18;
      if ( (_QWORD *)v17 == v18 )
        break;
      ++v18;
    }
    while ( *v19 >= 0xFFFFFFFFFFFFFFFELL );
  }
  if ( v10 )
  {
    v20 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 40) & 7) != 0 )
      v20 = 0;
    v25 = sub_BA7A80((__int64)a3, v20, ((*(_WORD *)(a2 + 72) >> 14) ^ 1) & 1, v17, v12, a6);
    if ( v25 )
    {
      v26 = a3[5] & 0xFFFFFFFFFFFFFFF8LL;
      if ( (a3[5] & 7) != 0 )
        v26 = 0;
      sub_1A9AEF0(*(__int64 **)(a1 + 736), a2, v25, v26, 1);
      return;
    }
    v31 = a3[13];
    if ( v31 )
    {
      v30 = v31 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v30 )
        return;
    }
    else
    {
      sub_A79820((__int64 *)(a3[12] + 88LL), a3[12], v21, v22, v23, v24);
      v30 = a3[13] & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v30 )
      {
        if ( a3[13] )
          return;
        sub_A79820((__int64 *)(a3[12] + 88LL), a3[12], 0, v27, v28, v29);
        if ( (a3[13] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          return;
        v32 = *(__int64 **)((a3[13] & 0xFFFFFFFFFFFFFFF8LL) + 8);
LABEL_33:
        while ( (__int64 *)v25 != v32 )
        {
          v33 = *v32++;
          sub_1A9B360(a1, a2, v33, a4);
        }
        return;
      }
    }
    v32 = *(__int64 **)(v30 + 8);
    v25 = (unsigned __int64)&v32[*(unsigned int *)(v30 + 16)];
    goto LABEL_33;
  }
}
