__int64 __fastcall sub_20E1340(__int64 a1)
{
  char *v2; // rax
  char *v3; // rdx
  char v4; // cl
  signed __int64 v5; // rdi
  __int64 result; // rax
  char *v7; // rdx
  char *v8; // rax
  __int64 v9; // r12
  __int64 v10; // rbp
  int v11; // ebp
  size_t v12; // rax
  char *v13; // rax
  __int64 v14; // rbp
  __int64 v15; // r12
  char v16; // dl
  void *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rbp
  void *v20; // r12
  char v21; // cl
  __int64 v22[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(char **)a1;
  v3 = *(char **)(a1 + 8);
  if ( *(char **)a1 == v3 )
    return sub_20D8F30(a1);
  v4 = *v2;
  v5 = v3 - v2;
  if ( *v2 == 76 )
  {
    if ( v5 == 1 || v2[1] != 90 )
      return sub_20E0980(a1);
    *(_QWORD *)a1 = v2 + 2;
    result = sub_20DF440((char **)a1, 1);
    if ( !result )
      return 0;
    v7 = *(char **)a1;
    if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) )
      return 0;
    goto LABEL_8;
  }
  if ( v4 <= 76 )
  {
    if ( v4 == 74 )
    {
      v8 = v2 + 1;
      v9 = *(_QWORD *)(a1 + 16);
      v10 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)a1 = v8;
      if ( v8 == v3 )
        goto LABEL_13;
LABEL_12:
      if ( *v8 == 69 )
      {
        *(_QWORD *)a1 = v8 + 1;
        v17 = sub_20CFAD0(a1, (v10 - v9) >> 3);
        v19 = v18;
        v20 = v17;
        result = sub_20CF970(a1 + 816, 32);
        *(_WORD *)(result + 8) = 16425;
        v21 = *(_BYTE *)(result + 10);
        *(_QWORD *)(result + 16) = v20;
        *(_QWORD *)result = off_2BE7620;
        *(_QWORD *)(result + 24) = v19;
        *(_BYTE *)(result + 10) = v21 & 0xF0 | 5;
      }
      else
      {
LABEL_13:
        while ( 1 )
        {
          result = sub_20E1340(a1);
          v22[0] = result;
          if ( !result )
            break;
          sub_20D8690((char **)(a1 + 16), v22);
          v8 = *(char **)a1;
          if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) )
            goto LABEL_12;
        }
      }
      return result;
    }
    return sub_20D8F30(a1);
  }
  if ( v4 == 84 )
  {
    v11 = 0;
    if ( v5 != 1 )
      v11 = v2[1];
    v12 = j__strlen("yptnk");
    if ( v12 )
    {
      v13 = (char *)memchr("yptnk", v11, v12);
      if ( v13 )
      {
        if ( v13 != "" )
        {
          v14 = sub_20DE150(a1, 0);
          if ( !v14 )
            return 0;
          v15 = sub_20E1340(a1);
          if ( !v15 )
            return 0;
          result = sub_20CF970(a1 + 816, 32);
          *(_WORD *)(result + 8) = 16418;
          v16 = *(_BYTE *)(result + 10);
          *(_QWORD *)(result + 16) = v14;
          *(_QWORD *)(result + 24) = v15;
          *(_BYTE *)(result + 10) = v16 & 0xF0 | 5;
          *(_QWORD *)result = off_2BE7380;
          return result;
        }
      }
    }
    return sub_20D8F30(a1);
  }
  if ( v4 != 88 )
    return sub_20D8F30(a1);
  *(_QWORD *)a1 = v2 + 1;
  result = sub_20DA8A0(a1);
  if ( !result )
    return 0;
  v7 = *(char **)a1;
  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)a1 )
    return 0;
LABEL_8:
  if ( *v7 != 69 )
    return 0;
  *(_QWORD *)a1 = v7 + 1;
  return result;
}
