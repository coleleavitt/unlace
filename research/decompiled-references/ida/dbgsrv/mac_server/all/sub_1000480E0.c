/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000480E0
// Address: 0x00000001000480E0

//----- (00000001000480E0) ----------------------------------------------------
char *__fastcall sub_1000480E0(__int64 a1, char *a2, __int64 a3, unsigned __int8 *a4, char a5, unsigned __int8 a6)
{
  char *v9; // r14
  int v10; // r13d
  const char *v11; // r12
  char *v12; // rdx
  char *v13; // rax
  unsigned int v14; // eax
  __int64 v15; // r13
  __int64 v16; // rbx
  char *v17; // rdx
  char *v18; // rax
  bool v19; // cc
  __int64 v20; // r12
  const char *v21; // r15
  __int64 *v22; // rax
  unsigned __int8 v24; // [rsp+4h] [rbp-45Ch]
  unsigned __int8 *v25; // [rsp+18h] [rbp-448h]
  char v27; // [rsp+2Ch] [rbp-434h]
  char __dst[1024]; // [rsp+30h] [rbp-430h] BYREF

  v9 = a2;
  v10 = *(_DWORD *)(a1 + 340);
  if ( (unsigned __int8)qisabspath(a4) )
  {
    v11 = qstrncpy(a2, (__int64)a4, a3);
    if ( (v10 & 4) != 0 && !(unsigned __int8)sub_10004BA10(a2, a3) )
      return nullptr;
    return (char *)v11;
  }
  v25 = a4;
  if ( a6 | (a5 != 34) )
    goto LABEL_30;
  v24 = a6;
  v12 = *(char **)(a1 + 280);
  if ( v12 )
    qdirname(__dst, 0x400u, v12);
  else
    qgetcwd(__dst, 0x400u);
  v13 = qmakepath(a2, a3, (__int64)__dst, a4, 0);
  v11 = v13;
  v27 = v10;
  if ( (v10 & 4) != 0 )
  {
    if ( (unsigned __int8)sub_10004BA10(a2, a3) )
      goto LABEL_15;
    goto LABEL_14;
  }
  if ( !qfileexist(v13) )
LABEL_14:
    v11 = nullptr;
LABEL_15:
  v14 = *(_QWORD *)(a1 + 256) - 1;
  if ( v11 != nullptr || (v14 & 0x80000000) != 0 )
    goto LABEL_29;
  v15 = v14;
  v16 = 40LL * v14;
  while ( 1 )
  {
    v17 = *(char **)(*(_QWORD *)(a1 + 248) + v16);
    if ( v17 )
      qdirname(__dst, 0x400u, v17);
    else
      qgetcwd(__dst, 0x400u);
    v18 = qmakepath(v9, a3, (__int64)__dst, v25, 0);
    v11 = v18;
    if ( (v27 & 4) == 0 )
    {
      if ( qfileexist(v18) )
        goto LABEL_25;
LABEL_24:
      v11 = nullptr;
      goto LABEL_25;
    }
    if ( !(unsigned __int8)sub_10004BA10(a2, a3) )
      goto LABEL_24;
LABEL_25:
    if ( v11 )
      break;
    v16 -= 40;
    v19 = v15-- <= 0;
    v9 = a2;
    if ( v19 )
      goto LABEL_29;
  }
  v9 = a2;
LABEL_29:
  LOBYTE(v10) = v27;
  a6 = v24;
  if ( !v11 )
  {
LABEL_30:
    v20 = a3;
    if ( a6 )
    {
      v21 = nullptr;
      if ( (unsigned __int8)qdirname(__dst, 0x400u, *(char **)(a1 + 280)) )
        v21 = __dst;
    }
    else
    {
      v21 = nullptr;
    }
    v22 = (__int64 *)off_1000AC140();
    return sub_10004B830(v22, v9, v20, (__int64)v25, v21, (unsigned __int8)(v10 & 4) >> 2);
  }
  return (char *)v11;
}
// 1000AC140: using guessed type __int128 *(*off_1000AC140)();
