unsigned __int64 __fastcall sub_1B07DD0(__int64 *a1, char *a2, __int64 a3, unsigned int a4, int a5, char a6)
{
  char *v8; // rcx
  __int64 v11; // rdi
  char *v12; // rdx
  int v13; // r8d
  char *v14; // rax
  _DWORD *v15; // rsi
  __int64 v16; // r13
  char *v17; // rax
  __int64 v18; // rax
  size_t v19; // rdx
  _QWORD *v21; // rax
  __int64 v22; // r9
  size_t v23; // rdx
  __int64 v25; // [rsp+8h] [rbp-E0h]
  __int64 v26; // [rsp+8h] [rbp-E0h]
  char *v27; // [rsp+10h] [rbp-D8h] BYREF
  size_t v28; // [rsp+18h] [rbp-D0h]
  _BYTE v29[200]; // [rsp+20h] [rbp-C8h] BYREF

  v8 = &a2[8 * a3];
  if ( a2 == v8 )
  {
    v16 = 0;
    sub_168B9F0((__int64)v29, a1, a4, 0xE6Du, 0);
    goto LABEL_34;
  }
  v11 = *(_QWORD *)a2;
  v12 = a2;
  v13 = *(_DWORD *)(*(_QWORD *)a2 + 8LL);
  if ( v13 != 10 )
  {
    v14 = a2 + 8;
    do
    {
      if ( v14 == v8 )
      {
        v15 = nullptr;
        goto LABEL_7;
      }
      v15 = *(_DWORD **)v14;
      v14 += 8;
    }
    while ( v15[2] != 10 );
    if ( a6 )
    {
LABEL_7:
      v16 = v11;
      if ( v13 == 93 )
        goto LABEL_27;
      goto LABEL_8;
    }
LABEL_24:
    if ( v15[4] == 1 )
    {
      sub_168B9F0((__int64)v29, a1, v15[5], 0x71Fu, 0);
      sub_15F7200(v29);
      return 1;
    }
    goto LABEL_7;
  }
  v15 = *(_DWORD **)a2;
  if ( !a6 )
    goto LABEL_24;
LABEL_8:
  v17 = a2;
  while ( 1 )
  {
    v17 += 8;
    if ( v8 == v17 )
      break;
    v16 = *(_QWORD *)v17;
    if ( *(_DWORD *)(*(_QWORD *)v17 + 8LL) == 93 )
      goto LABEL_12;
  }
  v16 = 0;
LABEL_12:
  if ( v13 == 59 )
  {
LABEL_13:
    v18 = *(_QWORD *)(v11 + 16);
  }
  else
  {
LABEL_27:
    while ( 1 )
    {
      v12 += 8;
      if ( v8 == v12 )
        break;
      v11 = *(_QWORD *)v12;
      if ( *(_DWORD *)(*(_QWORD *)v12 + 8LL) == 59 )
        goto LABEL_13;
    }
    v18 = 0;
  }
  if ( v15 && v15[4] )
    goto LABEL_29;
  if ( !v16 || *(_DWORD *)(v16 + 16) != 1 )
  {
    v25 = v18;
    sub_168B9F0((__int64)v29, a1, a4, 0xE6Du, 0);
    if ( v25 )
    {
      v19 = *(_DWORD *)(v25 + 16) * ((*(_WORD *)(v25 + 2) >> 6) & 7u);
      v27 = (char *)(v25 + 4LL * *(unsigned int *)(v25 + 4) + 20);
      v28 = v19;
      goto LABEL_20;
    }
LABEL_34:
    v27 = "ERROR";
    v28 = j__strlen("ERROR");
LABEL_20:
    sub_166BAF0((__int64)v29, (__int64)&v27);
    sub_15F7200(v29);
    if ( !v16 )
      return 1;
    goto LABEL_21;
  }
  v26 = v18;
  sub_168B9F0((__int64)v29, a1, *(_DWORD *)(v16 + 20), 0x1AC1u, 0);
  if ( v26 )
  {
    v23 = *(_DWORD *)(v26 + 16) * ((*(_WORD *)(v26 + 2) >> 6) & 7u);
    v27 = (char *)(v26 + 4LL * *(unsigned int *)(v26 + 4) + 20);
    v28 = v23;
  }
  else
  {
    v27 = "WARNING";
    v28 = j__strlen("WARNING");
  }
  sub_166BAF0((__int64)v29, (__int64)&v27);
  sub_15F7200(v29);
LABEL_21:
  if ( *(_DWORD *)(v16 + 16) != 1 )
    return 1;
LABEL_29:
  v21 = (_QWORD *)sub_168B6C0((__int64)a1);
  return sub_F00500(v21, a4, a5, a2, a3, v22);
}
