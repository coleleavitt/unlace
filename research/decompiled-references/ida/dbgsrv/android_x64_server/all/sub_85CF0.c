/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85CF0
// Address: 0x0000000000085CF0

//----- (0000000000085CF0) ----------------------------------------------------
char *__fastcall sub_85CF0(__int64 a1, char *a2, __int64 a3, _BYTE *a4, char a5, char a6)
{
  int v10; // r15d
  char *v11; // r12
  char v12; // cl
  char *result; // rax
  __int64 v14; // rbx
  const char *v15; // rdx
  char *v16; // rax
  int v17; // eax
  int v18; // r13d
  __int64 v19; // rbp
  const char *v20; // rdx
  char *v21; // rax
  const char *v23; // r13
  __int64 *v24; // rax
  char *v25; // rax
  char v26; // [rsp+4h] [rbp-1054h]
  __int64 v27; // [rsp+8h] [rbp-1050h]
  char v28; // [rsp+1Ch] [rbp-103Ch]
  char dest[4096]; // [rsp+20h] [rbp-1038h] BYREF
  unsigned __int64 v30; // [rsp+1020h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  v10 = *(_DWORD *)(a1 + 340);
  if ( !qisabspath(a4) )
  {
    v26 = a6;
    v27 = (__int64)a4;
    v11 = nullptr;
    v28 = a5;
    if ( a5 != 34 )
    {
      v14 = a3;
      if ( v26 )
        goto LABEL_32;
      goto LABEL_35;
    }
    v14 = a3;
    if ( v26 )
    {
LABEL_31:
      if ( v26 )
      {
LABEL_32:
        v23 = nullptr;
        if ( (unsigned __int8)qdirname(dest, 0x1000u, *(const char **)(a1 + 280)) )
          v23 = dest;
        goto LABEL_38;
      }
LABEL_35:
      if ( v28 == 34 && v11 )
        return v11;
      v23 = nullptr;
LABEL_38:
      v24 = (__int64 *)off_154A80();
      v25 = sub_8A9B0(v24, a2, v14, v27, v23, (unsigned __int8)(v10 & 4) >> 2);
      if ( v25 )
        return v25;
      return v11;
    }
    v15 = *(const char **)(a1 + 280);
    if ( v15 )
      qdirname(dest, 0x1000u, v15);
    else
      qgetcwd(dest, 0x1000u);
    v16 = qmakepath(a2, a3, dest, v27, 0);
    v11 = v16;
    if ( (v10 & 4) != 0 )
    {
      if ( (unsigned __int8)sub_8ABC0(a2, a3) )
        goto LABEL_18;
    }
    else if ( qfileexist(v16) )
    {
LABEL_18:
      if ( !v11 )
      {
        v17 = *(_DWORD *)(a1 + 256) - 1;
        if ( v17 >= 0 )
        {
          v18 = *(_DWORD *)(a1 + 256) - 2;
          v19 = 40LL * v17;
          while ( 1 )
          {
            v20 = *(const char **)(*(_QWORD *)(a1 + 248) + v19);
            if ( v20 )
              qdirname(dest, 0x1000u, v20);
            else
              qgetcwd(dest, 0x1000u);
            v21 = qmakepath(a2, v14, dest, v27, 0);
            v11 = v21;
            if ( (v10 & 4) == 0 )
              break;
            if ( !(unsigned __int8)sub_8ABC0(a2, v14) )
              goto LABEL_28;
LABEL_29:
            if ( !v11 )
            {
              v19 -= 40;
              if ( v18-- >= 0 )
                continue;
            }
            goto LABEL_31;
          }
          if ( qfileexist(v21) )
            goto LABEL_29;
LABEL_28:
          v11 = nullptr;
          goto LABEL_29;
        }
      }
      goto LABEL_31;
    }
    v11 = nullptr;
    goto LABEL_18;
  }
  v11 = qstrncpy(a2, (__int64)a4, a3);
  if ( (v10 & 4) == 0 )
    return v11;
  v12 = sub_8ABC0(a2, a3);
  result = nullptr;
  if ( v12 )
    return v11;
  return result;
}
// 154A80: using guessed type __int128 *(*off_154A80)();
