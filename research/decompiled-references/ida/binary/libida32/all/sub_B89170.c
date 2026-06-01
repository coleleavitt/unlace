unsigned __int64 __fastcall sub_B89170(unsigned __int64 a1, char a2)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  char *v7; // rbp
  char *v8; // r13
  unsigned __int64 v9; // rbx
  char v11; // bp
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // r13
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r14
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 j; // rbp
  double v30[2]; // [rsp+8h] [rbp-A0h] BYREF
  _BYTE v31[2]; // [rsp+1Eh] [rbp-8Ah] BYREF
  __int64 v32; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 i; // [rsp+28h] [rbp-80h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v35[13]; // [rsp+40h] [rbp-68h] BYREF

  v32 = *(_QWORD *)(a1 + 40);
  v2 = sub_FBABF0(&v32);
  if ( v2 > 1 )
    return 0;
  if ( (*(_BYTE *)(a1 + 58) & 8) != 0 )
  {
    v11 = v2;
    v12 = *(_QWORD *)(sub_B68470(a1 + 48) + 16);
    if ( (v12 & 4) != 0 )
      v13 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v13 = v12 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v13 )
      BUG();
    v14 = v13 - 48;
    if ( (*(_BYTE *)(v13 - 20) & 0x7Fu) - 21 <= 1 && (*(_BYTE *)(a1 + 58) & 0x10) != 0 )
      v14 = *(_QWORD *)(v13 + 40);
    v15 = *(_BYTE *)(a1 + 58);
    v35[0] = &v32;
    v31[0] = (v11 ^ 1) & 1;
    v31[1] = (v15 & 2) != 0;
    *(_QWORD *)&v30[0] = v31;
    *(__m128 *)ptr = _mm_loadh_ps(v30);
    v9 = sub_B83520((__int64)ptr, v14);
    if ( v9 )
      return v9;
    if ( (*(_BYTE *)(v14 + 28) & 0x7F) == 0x17 )
    {
      v20 = *(_QWORD *)(v14 + 88);
      v21 = sub_B83520((__int64)ptr, v20);
      if ( v21 )
        return v21;
    }
    else
    {
      v20 = v14;
    }
    v22 = *(_QWORD *)(v20 + 120);
    if ( !v22 )
    {
      sub_A557A0((__int64 *)(*(_QWORD *)(v20 + 96) + 88LL), *(_QWORD *)(v20 + 96), v16, v17, v18, v19);
      v22 = *(_QWORD *)(v20 + 120);
    }
    v23 = v22 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v23 )
    {
      if ( (*(_BYTE *)(v23 + 72) & 1) != 0 )
      {
        sub_B84BC0(v20);
        v23 = *(_QWORD *)(v20 + 120) & 0xFFFFFFFFFFFFFFF8LL;
      }
      v9 = *(_QWORD *)(v23 + 56);
    }
    for ( i = v9; ; i = *(_QWORD *)(v24 + 128) )
    {
      sub_B82AC0((__int64 *)&i);
      v24 = i;
      if ( !i )
        break;
      if ( v14 != i )
      {
        v9 = sub_B83520((__int64)ptr, i);
        if ( v9 )
          return v9;
        v24 = i;
      }
    }
    for ( j = sub_B86FC0(v20, 0, v25, v26, v27, v28); ; j = *(_QWORD *)(j + 128) )
    {
      if ( v14 != j )
      {
        v9 = sub_B83520((__int64)ptr, j);
        if ( v9 )
          break;
      }
    }
    return v9;
  }
  if ( !a2 )
    return 0;
  ptr[0] = v35;
  ptr[1] = (void *)0x800000000LL;
  sub_B87D30(a1, (__int64)ptr, v3, v4, v5, v6);
  v7 = (char *)ptr[0];
  v8 = (char *)ptr[0] + 8 * LODWORD(ptr[1]);
  if ( ptr[0] == v8 )
  {
    v9 = 0;
  }
  else
  {
    do
    {
      v9 = sub_B89170(*(_QWORD *)v7, 0);
      if ( v9 )
        break;
      v7 += 8;
    }
    while ( v8 != v7 );
    v8 = (char *)ptr[0];
  }
  if ( v8 != (char *)v35 )
  {
    free(v8);
    return v9;
  }
  return v9;
}

