/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_515F4
// Address: 0x000515F4

//----- (000515F4) --------------------------------------------------------
const char *__fastcall sub_515F4(int a1, unsigned __int8 *a2, int a3, unsigned __int8 *a4, int a5, int a6)
{
  int v7; // r5
  const char *v8; // r7
  char *v9; // r2
  int v10; // r0
  int v11; // r4
  int v12; // r6
  char *v13; // r2
  char *s2; // r6
  int *v16; // r0
  unsigned __int8 *v17; // r0
  int v20; // [sp+30h] [bp-1018h]
  char v23[4100]; // [sp+44h] [bp-1004h] BYREF

  v7 = *(_DWORD *)(a1 + 184) & 4;
  if ( qisabspath(a4) )
  {
    v8 = (const char *)qstrncpy((unsigned int)a2, a4, a3);
    if ( v7 && !sub_55268(a2, a3) )
      return nullptr;
    return v8;
  }
  v20 = (int)a4;
  v8 = nullptr;
  if ( a5 != 34 || a6 )
    goto LABEL_31;
  v9 = *(char **)(a1 + 144);
  if ( v9 )
    qdirname(v23, 0x1000u, v9);
  else
    qgetcwd(v23, 0x1000u);
  v8 = qmakepath((char *)a2, a3, v23);
  if ( v7 )
  {
    if ( sub_55268(a2, a3) )
      goto LABEL_17;
    goto LABEL_16;
  }
  if ( !qfileexist(v8) )
LABEL_16:
    v8 = nullptr;
LABEL_17:
  v10 = *(_DWORD *)(a1 + 132);
  if ( !v8 && v10 - 1 >= 0 )
  {
    v11 = 24 * v10 - 24;
    v12 = v10 - 2;
    while ( 1 )
    {
      v13 = *(char **)(*(_DWORD *)(a1 + 128) + v11);
      if ( v13 )
        qdirname(v23, 0x1000u, v13);
      else
        qgetcwd(v23, 0x1000u);
      v8 = qmakepath((char *)a2, a3, v23);
      if ( !v7 )
        break;
      if ( !sub_55268(a2, a3) )
        goto LABEL_27;
LABEL_28:
      v11 -= 24;
      if ( !v8 && v12-- >= 0 )
        continue;
      goto LABEL_31;
    }
    if ( qfileexist(v8) )
      goto LABEL_28;
LABEL_27:
    v8 = nullptr;
    goto LABEL_28;
  }
LABEL_31:
  if ( a6 )
  {
    s2 = v23;
    if ( !qdirname(v23, 0x1000u, *(char **)(a1 + 144)) )
      s2 = nullptr;
  }
  else
  {
    if ( a5 == 34 && v8 )
      return v8;
    s2 = nullptr;
  }
  v16 = (int *)off_DD644(off_DD644);
  v17 = sub_55120(v16, (char *)a2, a3, v20, s2, v7 != 0);
  if ( v17 )
    return (const char *)v17;
  return v8;
}
// DD644: using guessed type int (__fastcall *off_DD644)(_DWORD);
