unsigned __int64 __fastcall sub_1FBC0(_QWORD *a1, int a2)
{
  __int64 v2; // rax
  char *v3; // rdx
  char v5; // cl
  __int64 v6; // r12
  __int64 v7; // r13
  unsigned __int64 v8; // r14
  _QWORD *v9; // rdi
  __int16 v10; // si
  unsigned __int64 v12; // rax
  _QWORD *v13; // rdx
  _BYTE *v14; // rsi
  _QWORD v15[7]; // [rsp+0h] [rbp-38h] BYREF

  v15[1] = __readfsqword(0x28u);
  v2 = a1[4];
  if ( !v2 )
    return 0;
  v3 = (char *)a1[3];
  v5 = *v3;
  if ( *v3 == 83 )
  {
    a1[3] = v3 + 1;
    a1[4] = v2 - 1;
    return sub_1BFA0(a1);
  }
  switch ( v5 )
  {
    case 'V':
      a1[3] = v3 + 1;
      a1[4] = v2 - 1;
      v7 = sub_1F0C0((__int64)a1, a2 + 2);
      if ( !v7 )
        return 0;
      v8 = sub_1B760((__int64)a1);
      if ( !v8 )
        return 0;
      v9 = (_QWORD *)a1[5];
      v10 = 208;
      goto LABEL_14;
    case 'O':
      a1[3] = v3 + 1;
      a1[4] = v2 - 1;
      v7 = sub_1F0C0((__int64)a1, a2 + 2);
      if ( !v7 )
        return 0;
      v8 = sub_1B760((__int64)a1);
      if ( !v8 )
        return 0;
      v9 = (_QWORD *)a1[5];
      v10 = 58;
      goto LABEL_14;
    case 'C':
      a1[3] = v3 + 1;
      a1[4] = v2 - 1;
      v7 = sub_1F0C0((__int64)a1, a2 + 2);
      if ( !v7 )
        return 0;
      v8 = sub_1B760((__int64)a1);
      if ( !v8 )
        return 0;
      v9 = (_QWORD *)a1[5];
      v10 = 22;
LABEL_14:
      v12 = sub_C400(v9, v10);
      v13 = (_QWORD *)a1[5];
      v6 = v12;
      v15[0] = v12;
      sub_C080(v12, v7, v13);
      sub_C080(v6, v8, (_QWORD *)a1[5]);
      v14 = (_BYTE *)a1[1];
      if ( v14 == (_BYTE *)a1[2] )
      {
        sub_18710((__int64)a1, v14, v15);
        return v15[0];
      }
      else
      {
        *(_QWORD *)v14 = v6;
        a1[1] += 8LL;
      }
      return v6;
  }
  v6 = 0;
  if ( v5 == 80 )
  {
    a1[3] = v3 + 1;
    a1[4] = v2 - 1;
    v7 = sub_1F0C0((__int64)a1, a2 + 2);
    if ( v7 )
    {
      v8 = sub_1B760((__int64)a1);
      if ( v8 )
      {
        v9 = (_QWORD *)a1[5];
        v10 = 169;
        goto LABEL_14;
      }
    }
    return 0;
  }
  return v6;
}

