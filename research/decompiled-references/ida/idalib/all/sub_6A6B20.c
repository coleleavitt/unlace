unsigned __int64 __fastcall sub_6A6B20(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 i; // r12
  __int64 v6; // r13
  __int64 v7; // rax
  unsigned __int16 v8; // cx
  unsigned __int64 v9; // r13
  __int64 v10; // r15
  unsigned __int16 v11; // si
  unsigned __int16 v12; // dx
  int v13; // r8d
  int v14; // r9d
  unsigned __int64 j; // rcx
  unsigned __int16 k; // dx
  unsigned __int64 v17; // r15
  __int64 v18; // r13
  __int64 v19; // r15
  int v20; // eax
  __int16 v21; // ax
  int v23; // [rsp+0h] [rbp-88h]
  __int64 v24; // [rsp+8h] [rbp-80h]
  _DWORD v25[4]; // [rsp+10h] [rbp-78h] BYREF
  int v26; // [rsp+20h] [rbp-68h]
  int v27; // [rsp+28h] [rbp-60h]
  _DWORD v28[4]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v29; // [rsp+40h] [rbp-48h]
  unsigned __int64 v30; // [rsp+48h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v3 = a2 - a1;
  if ( (__int64)(a2 - a1) <= 384 )
    return v30 - __readfsqword(0x28u);
  for ( i = a2; ; i = v9 )
  {
    v24 = 0xAAAAAAAAAAAAAAABLL * (v3 >> 3);
    v6 = v24 >> 1;
    if ( !a3 )
      break;
    v7 = 3 * v6;
    v8 = *(_WORD *)(a1 + 40);
    --a3;
    v9 = a1 + 24;
    v10 = a1 + 8 * v7;
    v11 = *(_WORD *)(i - 8);
    v12 = *(_WORD *)(v10 + 16);
    v28[0] = 0;
    if ( v8 >= v12 )
    {
      if ( v8 < v11 )
      {
        copy_argloc(v28, a1);
        LODWORD(v29) = *(_DWORD *)(a1 + 16);
        copy_argloc(a1, a1 + 24);
        *(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 40);
        copy_argloc(a1 + 24, v28);
        *(_DWORD *)(a1 + 40) = v29;
        cleanup_argloc(v28);
        goto LABEL_9;
      }
      if ( v12 >= v11 )
      {
        copy_argloc(v28, a1);
        LODWORD(v29) = *(_DWORD *)(a1 + 16);
        copy_argloc(a1, v10);
        *(_WORD *)(a1 + 16) = *(_WORD *)(v10 + 16);
        *(_WORD *)(a1 + 18) = *(_WORD *)(v10 + 18);
        copy_argloc(v10, v28);
        *(_DWORD *)(v10 + 16) = v29;
        goto LABEL_8;
      }
    }
    else
    {
      if ( v12 < v11 )
      {
        copy_argloc(v28, a1);
        LODWORD(v29) = *(_DWORD *)(a1 + 16);
        copy_argloc(a1, v10);
        *(_WORD *)(a1 + 16) = *(_WORD *)(v10 + 16);
        *(_WORD *)(a1 + 18) = *(_WORD *)(v10 + 18);
        copy_argloc(v10, v28);
        *(_DWORD *)(v10 + 16) = v29;
        cleanup_argloc(v28);
        goto LABEL_9;
      }
      if ( v8 >= v11 )
      {
        copy_argloc(v28, a1);
        LODWORD(v29) = *(_DWORD *)(a1 + 16);
        copy_argloc(a1, a1 + 24);
        *(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 40);
        copy_argloc(a1 + 24, v28);
        *(_DWORD *)(a1 + 40) = v29;
        goto LABEL_8;
      }
    }
    copy_argloc(v28, a1);
    LODWORD(v29) = *(_DWORD *)(a1 + 16);
    copy_argloc(a1, i - 24);
    *(_WORD *)(a1 + 16) = *(_WORD *)(i - 8);
    *(_WORD *)(a1 + 18) = *(_WORD *)(i - 6);
    copy_argloc(i - 24, v28);
    *(_DWORD *)(i - 8) = v29;
LABEL_8:
    cleanup_argloc(v28);
LABEL_9:
    for ( j = i; ; j = v17 )
    {
      for ( k = *(_WORD *)(a1 + 16); *(_WORD *)(v9 + 16) < k; v9 += 24LL )
        ;
      v17 = j - 24;
      if ( k < *(_WORD *)(j - 8) )
      {
        do
          v17 -= 24LL;
        while ( k < *(_WORD *)(v17 + 16) );
      }
      if ( v9 >= v17 )
        break;
      v28[0] = 0;
      copy_argloc(v28, v9);
      LODWORD(v29) = *(_DWORD *)(v9 + 16);
      copy_argloc(v9, v17);
      *(_WORD *)(v9 + 16) = *(_WORD *)(v17 + 16);
      *(_WORD *)(v9 + 18) = *(_WORD *)(v17 + 18);
      copy_argloc(v17, v28);
      v9 += 24LL;
      *(_DWORD *)(v17 + 16) = v29;
      cleanup_argloc(v28);
    }
    sub_6A6B20(v9, i, a3, j, v13, v14, v23, v24, v25[0], v25[2], v26, v27, v28[0], v28[2], v29);
    v3 = v9 - a1;
    if ( (__int64)(v9 - a1) <= 384 )
      return v30 - __readfsqword(0x28u);
  }
  v18 = v6 - 1;
  v19 = a1 + 24 * v18;
  while ( 1 )
  {
    v25[0] = 0;
    copy_argloc(v25, v19);
    v20 = *(_DWORD *)(v19 + 16);
    v28[0] = 0;
    v26 = v20;
    copy_argloc(v28, v25);
    LODWORD(v29) = v26;
    sub_6A6280(a1, v18, v24, (__int64)v28);
    v19 -= 24;
    cleanup_argloc(v28);
    if ( !v18 )
      break;
    --v18;
    cleanup_argloc(v25);
  }
  cleanup_argloc(v25);
  while ( (__int64)(i - a1) > 24 )
  {
    i -= 24LL;
    v25[0] = 0;
    copy_argloc(v25, i);
    v26 = *(_DWORD *)(i + 16);
    copy_argloc(i, a1);
    v21 = *(_WORD *)(a1 + 16);
    v28[0] = 0;
    *(_WORD *)(i + 16) = v21;
    *(_WORD *)(i + 18) = *(_WORD *)(a1 + 18);
    copy_argloc(v28, v25);
    LODWORD(v29) = v26;
    sub_6A6280(a1, 0, 0xAAAAAAAAAAAAAAABLL * ((__int64)(i - a1) >> 3), (__int64)v28);
    cleanup_argloc(v28);
    cleanup_argloc(v25);
  }
  return v30 - __readfsqword(0x28u);
}
