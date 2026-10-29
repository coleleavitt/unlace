void __fastcall sub_1F98300(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // eax
  _QWORD *v8; // rdi
  __int64 v9; // r15
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rbx
  __int64 v24; // rax
  void *ptr; // [rsp+0h] [rbp-88h] BYREF
  __int64 v26; // [rsp+8h] [rbp-80h]
  _QWORD v27[15]; // [rsp+10h] [rbp-78h] BYREF

  v26 = 0x800000000LL;
  ptr = v27;
  if ( a2 )
  {
    v3 = *(_QWORD *)(a2 + 8);
    v27[0] = a2;
    v4 = 1;
    LODWORD(v26) = 1;
    v5 = v3 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v5 )
    {
      v6 = 1;
      do
      {
        while ( v4 + 1 <= (unsigned __int64)HIDWORD(v26) )
        {
          *((_QWORD *)ptr + v6) = v5;
          v6 = (unsigned int)(v26 + 1);
          LODWORD(v26) = v6;
          v4 = (unsigned int)v6;
          v5 = *(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v5 )
            goto LABEL_6;
        }
        sub_2237220(&ptr, v27, v4 + 1, 8);
        *((_QWORD *)ptr + (unsigned int)v26) = v5;
        LODWORD(v26) = v26 + 1;
        v4 = (unsigned int)v26;
        v6 = (unsigned int)v26;
        v5 = *(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      }
      while ( v5 );
    }
  }
  else
  {
    v4 = 0;
  }
LABEL_6:
  sub_9B9C90(a1[2], v4);
  while ( 1 )
  {
    v7 = v26;
    v8 = ptr;
    if ( !(_DWORD)v26 )
      break;
LABEL_8:
    v9 = v8[v7 - 1];
    LODWORD(v26) = v7 - 1;
    v10 = sub_E90000(v9);
    v13 = a1[2];
    v14 = v10;
    v15 = *(unsigned int *)(v13 + 8);
    v16 = *(unsigned int *)(v13 + 12);
    if ( v15 + 1 > v16 )
    {
      sub_2237220(a1[2], v13 + 16, v15 + 1, 8);
      v15 = *(unsigned int *)(v13 + 8);
    }
    v17 = *(_QWORD *)v13;
    *(_QWORD *)(*(_QWORD *)v13 + 8 * v15) = v14;
    ++*(_DWORD *)(v13 + 8);
    switch ( v14 )
    {
      case 0LL:
        v22 = 0;
        if ( (*(_BYTE *)(v9 + 8) & 6) == 0 )
          v22 = *(_QWORD *)(v9 + 16);
        v23 = a1[2];
        v24 = sub_1F80CA0(a1[1], v22, v17, v16, v11, v12);
        sub_9B9C90(v23, v24);
        continue;
      case 1LL:
        v19 = sub_E90060(v9);
        goto LABEL_18;
      case 2LL:
        v19 = sub_E90090(v9);
        goto LABEL_18;
      case 3LL:
        v18 = 0;
        if ( ((*(__int64 *)(v9 + 8) >> 1) & 3) == 2 )
          v18 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFF0LL;
        sub_1F85840(a1[1], *a1, v18, (_QWORD *)a1[2], v11, v12);
        v7 = v26;
        v8 = ptr;
        if ( (_DWORD)v26 )
          goto LABEL_8;
        goto LABEL_14;
      case 4LL:
        continue;
      case 5LL:
        v19 = sub_E900C0(v9);
LABEL_18:
        v20 = a1[2];
        v21 = sub_1F92240(a1[1], v19);
        sub_9B9C90(v20, v21);
        break;
    }
  }
LABEL_14:
  if ( v8 != v27 )
    free(v8);
}
