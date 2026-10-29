__int64 __fastcall sub_75FFA0(const char *a1, const char *a2, __int64 a3, _BYTE *a4)
{
  char *v6; // rdi
  __int64 result; // rax
  unsigned __int64 v8; // rsi
  int v9; // r9d
  char *v10; // r12
  char v11; // al
  char *v12; // rdx
  _BYTE *v13; // rdi
  char v14; // r8
  __int64 v15; // rax
  unsigned __int8 v16; // al
  __int64 v17; // rax
  _BYTE *v18; // [rsp+0h] [rbp-68h]
  unsigned __int8 v19; // [rsp+0h] [rbp-68h]
  char v21; // [rsp+17h] [rbp-51h]
  char *ptr; // [rsp+18h] [rbp-50h]

  if ( !a3 )
    return 0;
  v6 = (char *)qstrdup(a3);
  ptr = v6;
  result = 0;
  if ( !v6 )
    return result;
  v8 = (unsigned __int64)":";
  v10 = (char *)qstrtok(v6, ":");
  v18 = a4 + 4096;
  if ( !v10 )
  {
LABEL_16:
    qfree(ptr);
    return 0;
  }
  while ( 1 )
  {
    v11 = *v10;
    v12 = v10 + 1;
    if ( !*v10 )
    {
      *a4 = 0;
      goto LABEL_20;
    }
    v13 = a4;
    v14 = 0;
    while ( v13 < a4 + 4095 )
    {
      if ( v11 != 37 )
        goto LABEL_6;
      v8 = (unsigned __int8)v10[1];
      if ( (_BYTE)v8 == 78 )
      {
        v8 = (unsigned __int64)a1;
        v10 += 2;
        v17 = qstpncpy(v13, a1, v18 - v13);
        v14 = 1;
        v13 = (_BYTE *)v17;
        goto LABEL_7;
      }
      if ( (_BYTE)v8 == 76 )
      {
        v8 = (unsigned __int64)a2;
        v21 = v14;
        v10 += 2;
        v15 = qstpncpy(v13, a2, v18 - v13);
        v14 = v21;
        v12 = v10 + 1;
        v13 = (_BYTE *)v15;
        v11 = *v10;
        if ( !*v10 )
          break;
      }
      else
      {
LABEL_6:
        *v13 = v11;
        v10 = v12;
        ++v13;
LABEL_7:
        v11 = *v10;
        v12 = v10 + 1;
        if ( !*v10 )
          break;
      }
    }
    *v13 = 0;
    if ( v14 )
      break;
LABEL_20:
    qmakepath((int)a4, 4096, (int)a4, (int)a1, 0, v9, (char)v18);
    v16 = qfileexist(a4, 4096);
    if ( v16 )
      goto LABEL_21;
LABEL_15:
    v8 = (unsigned __int64)":";
    v10 = (char *)qstrtok(nullptr, ":");
    if ( !v10 )
      goto LABEL_16;
  }
  v16 = qfileexist(a4, v8);
  if ( !v16 )
    goto LABEL_15;
LABEL_21:
  v19 = v16;
  qfree(ptr);
  return v19;
}

