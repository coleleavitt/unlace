__int64 __fastcall sub_20DA530(__int64 a1, _BYTE *a2)
{
  char *v3; // r12
  char *v4; // rbp
  size_t v5; // r13
  char v6; // r9
  __int64 v7; // r8
  __int64 v8; // rdi
  __int64 v9; // rdx
  char *v10; // rcx
  char *v11; // rdx
  size_t v12; // r14
  __int64 result; // rax
  char v14; // al
  __int64 v15; // rbp
  size_t v16; // r12
  char v17; // dl
  char v18; // bp
  char v19; // r12
  __int64 v20; // r13
  char v21; // dl
  __int64 v22; // rbp
  char v23; // dl
  __int64 v24; // rbp
  char v25; // dl

  v3 = *(char **)(a1 + 8);
  v4 = *(char **)a1;
  v5 = (size_t)&v3[-*(_QWORD *)a1];
  if ( v5 <= 1 )
  {
LABEL_10:
    v12 = j__strlen("li");
    if ( sub_20D1BF0(v5, v4, v12, "li") )
    {
      *(_QWORD *)a1 = &v4[v12];
      v22 = sub_20D1DD0((char **)a1);
      if ( v22 )
      {
        result = sub_20CF970(a1 + 816, 24);
        v23 = *(_BYTE *)(result + 10);
        *(_WORD *)(result + 8) = 16404;
        *(_QWORD *)(result + 16) = v22;
        *(_BYTE *)(result + 10) = v23 & 0xF0 | 5;
        *(_QWORD *)result = off_2BE6EA0;
        return result;
      }
    }
    else if ( v4 != v3 && *v4 == 118 )
    {
      *(_QWORD *)a1 = v4 + 1;
      if ( v4 + 1 != v3 && (unsigned __int8)(v4[1] - 48) <= 9u )
      {
        *(_QWORD *)a1 = v4 + 2;
        v24 = sub_20D1DD0((char **)a1);
        if ( v24 )
        {
          result = sub_20CF970(a1 + 816, 24);
          *(_WORD *)(result + 8) = 16388;
          v25 = *(_BYTE *)(result + 10);
          *(_QWORD *)(result + 16) = v24;
          *(_BYTE *)(result + 10) = v25 & 0xF0 | 5;
          *(_QWORD *)result = off_2BE67E0;
          return result;
        }
      }
    }
    return 0;
  }
  v6 = *v4;
  v7 = 62;
  v8 = 0;
  while ( 1 )
  {
    v9 = (unsigned __int64)(v8 + v7) >> 1;
    v10 = (char *)&unk_2BE6260 + 16 * v9;
    if ( *v10 < v6 )
    {
      v8 = v9 + 1;
      v9 = v7;
      goto LABEL_8;
    }
    if ( *v10 == v6 && v10[1] < v4[1] )
      break;
    if ( v9 == v8 )
      goto LABEL_9;
LABEL_5:
    v7 = v9;
  }
  v8 = v9 + 1;
  v9 = v7;
LABEL_8:
  if ( v9 != v8 )
    goto LABEL_5;
LABEL_9:
  v11 = (char *)&unk_2BE6260 + 16 * v9;
  if ( v6 != *v11 || v11[1] != v4[1] )
    goto LABEL_10;
  *(_QWORD *)a1 = v4 + 2;
  v14 = v11[2];
  if ( v14 == 8 )
  {
    v18 = *(_BYTE *)(a1 + 777);
    v19 = *(_BYTE *)(a1 + 776);
    *(_BYTE *)(a1 + 776) = 0;
    if ( v18 )
    {
      *(_BYTE *)(a1 + 777) = 1;
      v20 = sub_20D8F30(a1);
      if ( v20 )
      {
        if ( !a2 )
          goto LABEL_27;
        goto LABEL_26;
      }
    }
    else if ( a2 )
    {
      *(_BYTE *)(a1 + 777) = 1;
      v20 = sub_20D8F30(a1);
      if ( v20 )
      {
LABEL_26:
        *a2 = 1;
LABEL_27:
        result = sub_20CF970(a1 + 816, 24);
        v21 = *(_BYTE *)(result + 10);
        *(_WORD *)(result + 8) = 16388;
        *(_QWORD *)(result + 16) = v20;
        *(_BYTE *)(result + 10) = v21 & 0xF0 | 5;
        *(_QWORD *)result = off_2BE67E0;
LABEL_28:
        *(_BYTE *)(a1 + 777) = v18;
        *(_BYTE *)(a1 + 776) = v19;
        return result;
      }
    }
    else
    {
      v20 = sub_20D8F30(a1);
      if ( v20 )
        goto LABEL_27;
    }
    result = 0;
    goto LABEL_28;
  }
  if ( (unsigned __int8)v14 > 0xAu )
    return 0;
  if ( v14 == 4 && (v11[3] & 1) == 0 )
    return 0;
  v15 = *((_QWORD *)v11 + 1);
  v16 = 0;
  if ( v15 )
    v16 = j__strlen(*((const char **)v11 + 1));
  result = sub_20CF970(a1 + 816, 32);
  v17 = *(_BYTE *)(result + 10);
  *(_WORD *)(result + 8) = 16392;
  *(_QWORD *)(result + 16) = v16;
  *(_QWORD *)(result + 24) = v15;
  *(_BYTE *)(result + 10) = v17 & 0xF0 | 5;
  *(_QWORD *)result = off_2BE68A0;
  return result;
}
