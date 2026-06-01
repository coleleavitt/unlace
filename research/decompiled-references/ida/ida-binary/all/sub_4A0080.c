unsigned __int64 __fastcall sub_4A0080(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  _QWORD *v4; // r10
  _QWORD *v5; // r8
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v13; // rsi
  __int64 v14; // rdx
  unsigned __int64 v15; // [rsp+8h] [rbp-20h] BYREF
  unsigned __int64 *v16; // [rsp+10h] [rbp-18h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-10h]

  v4 = a1 + 271;
  v5 = (_QWORD *)a1[272];
  v15 = a2;
  v17 = __readfsqword(0x28u);
  if ( !v5 )
    goto LABEL_15;
  v8 = a1 + 271;
  v9 = v5;
  do
  {
    while ( 1 )
    {
      v10 = v9[2];
      v11 = v9[3];
      if ( v9[4] < a2 )
        break;
      v8 = v9;
      v9 = (_QWORD *)v9[2];
      if ( !v10 )
        goto LABEL_6;
    }
    v9 = (_QWORD *)v9[3];
  }
  while ( v11 );
LABEL_6:
  if ( v4 == v8 )
    goto LABEL_10;
  if ( a2 < v8[4] )
  {
    v8 = v4;
    do
    {
LABEL_10:
      while ( 1 )
      {
        v13 = v5[2];
        v14 = v5[3];
        if ( v5[4] < a2 )
          break;
        v8 = v5;
        v5 = (_QWORD *)v5[2];
        if ( !v13 )
          goto LABEL_12;
      }
      v5 = (_QWORD *)v5[3];
    }
    while ( v14 );
LABEL_12:
    if ( v8 != v4 )
    {
      if ( a2 >= v8[4] )
      {
LABEL_16:
        v8[5] = a3;
        return v17 - __readfsqword(0x28u);
      }
      v4 = v8;
    }
LABEL_15:
    v16 = &v15;
    v8 = sub_49B770(a1 + 270, v4, &v16);
    goto LABEL_16;
  }
  return v17 - __readfsqword(0x28u);
}
