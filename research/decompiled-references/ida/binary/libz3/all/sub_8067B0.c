__int64 __fastcall sub_8067B0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rbp
  void *v12; // rdi
  __int64 *v13; // rbp
  unsigned __int64 v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rdi
  bool v17; // zf
  __int64 v18; // rsi
  __int64 v19; // rdi
  _DWORD *v20; // rax
  int v21; // edx
  __int64 v23; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v24; // [rsp+8h] [rbp-E0h]
  _BYTE v25[8]; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v26; // [rsp+18h] [rbp-D0h]
  __int64 *v27; // [rsp+20h] [rbp-C8h]
  __int64 v28; // [rsp+30h] [rbp-B8h]
  _BYTE v29[8]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+48h] [rbp-A0h]
  void *v31; // [rsp+68h] [rbp-80h]
  _BYTE v32[8]; // [rsp+80h] [rbp-68h] BYREF
  __int64 v33; // [rsp+88h] [rbp-60h]
  void *ptr; // [rsp+A8h] [rbp-40h]

  v2 = a2 >> 1;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 2328LL);
  if ( !v3 )
    return 0;
  if ( (unsigned int)v2 >= *(_DWORD *)(v3 - 4) )
    return 0;
  v4 = *(_QWORD *)(v3 + 8 * v2);
  if ( !v4 )
    return 0;
  if ( *(_WORD *)(v4 + 4) || (v20 = *(_DWORD **)(*(_QWORD *)(v4 + 16) + 24LL)) == nullptr || *v20 )
  {
LABEL_5:
    v6 = *(_QWORD *)(a1 + 128);
    goto LABEL_6;
  }
  v21 = v20[1];
  if ( v21 == 5 || v21 == 6 || v21 == 8 || v21 == 9 )
    return 0;
  v6 = *(_QWORD *)(a1 + 128);
  if ( v20[1] == 2 )
  {
    if ( (unsigned __int8)sub_15D2CB0(v6, *(_QWORD *)(v4 + 32)) )
      return 0;
    goto LABEL_5;
  }
LABEL_6:
  ++*(_DWORD *)(v4 + 8);
  v23 = v4;
  v24 = v6;
  sub_167EE60(v25, &v23, 1, 0, 0);
  sub_167F5F0(v29, v25);
  sub_167F5B0(v32, v25);
  v7 = a1 + 136;
  while ( 1 )
  {
    v10 = sub_167E490(v29, v32);
    if ( !(_BYTE)v10 )
      break;
    v8 = sub_167E460(v29);
    v9 = sub_15D1F10(v8);
    v10 = sub_1673B10(v7, v9);
    if ( (_BYTE)v10 )
    {
      if ( ptr )
        sub_186B220(ptr);
      if ( v33 )
        sub_186B220((void *)(v33 - 8));
      if ( v31 )
        sub_186B220(v31);
      if ( v30 )
        goto LABEL_17;
      goto LABEL_18;
    }
    sub_167EA90(v29);
  }
  if ( ptr )
    sub_186B220(ptr);
  if ( v33 )
    sub_186B220((void *)(v33 - 8));
  if ( v31 )
    sub_186B220(v31);
  if ( v30 )
LABEL_17:
    sub_186B220((void *)(v30 - 8));
LABEL_18:
  v11 = v28;
  if ( v28 )
  {
    v12 = *(void **)(v28 + 16);
    if ( v12 )
      memset(v12, 0, 4LL * *(unsigned int *)(v28 + 12));
    *(_DWORD *)(v11 + 8) = 0;
  }
  v13 = v27;
  if ( v27 )
  {
    v14 = (unsigned __int64)&v27[*((unsigned int *)v27 - 1)];
    if ( (unsigned __int64)v27 >= v14 )
      goto LABEL_30;
    do
    {
      while ( 1 )
      {
        v15 = *v13;
        if ( *v13 )
        {
          v16 = v26;
          v17 = (*(_DWORD *)(v15 + 8))-- == 1;
          if ( v17 )
            break;
        }
        if ( (unsigned __int64)++v13 >= v14 )
          goto LABEL_29;
      }
      sub_15D7BC0(v16, v15);
      ++v13;
    }
    while ( (unsigned __int64)v13 < v14 );
LABEL_29:
    v13 = v27;
    if ( v27 )
LABEL_30:
      sub_186B220(v13 - 1);
  }
  v18 = v23;
  if ( v23 )
  {
    v19 = v24;
    v17 = (*(_DWORD *)(v23 + 8))-- == 1;
    if ( v17 )
      sub_15D7BC0(v19, v18);
  }
  return v10;
}

