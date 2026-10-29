/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400698F0
// Address: 0x00000001400698F0

//----- (00000001400698F0) ----------------------------------------------------
char *__fastcall sub_1400698F0(char *a1, __int64 a2, char *a3, char *a4)
{
  unsigned __int64 v6; // rdi
  __int8 *v7; // rbx
  __int8 *v8; // rax
  __int8 *v9; // rcx
  bool v10; // zf
  _BYTE *v11; // rax
  char *v12; // rdx
  char v13; // cl

  if ( a2 < 0 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(1225);
  }
  if ( !a1 )
    return a1;
  v6 = (unsigned __int64)&a1[a2];
  if ( a1 != a3 )
    sub_1400621E0(a1, a3, a2);
  v7 = sub_14005D9D0(a1);
  v8 = sub_14006CA14((__int64)v7, 0);
  v9 = v8;
  v10 = v8 == v7;
  if ( v8 > v7 )
  {
    while ( *v8 != 46 )
    {
      v10 = --v8 == v7;
      if ( v8 <= v7 )
        goto LABEL_8;
    }
    goto LABEL_19;
  }
LABEL_8:
  if ( !v10 )
  {
LABEL_19:
    v11 = v8 + 1;
    goto LABEL_20;
  }
  if ( (unsigned __int64)v9 >= v6 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(518);
  }
  v11 = v9 + 1;
  *v9 = 46;
  if ( (unsigned __int64)(v9 + 1) >= v6 )
  {
    v11 = (_BYTE *)(v6 - 1);
    *(_BYTE *)(v6 - 1) = 0;
LABEL_20:
    v12 = a4 + 1;
    if ( *a4 != 46 )
      v12 = a4;
    if ( (unsigned __int64)v11 >= v6 )
    {
      if ( byte_1400CB61C )
        __debugbreak();
      sub_14005A480(520);
    }
    goto LABEL_14;
  }
  v12 = a4 + 1;
  if ( *a4 != 46 )
    v12 = a4;
LABEL_14:
  if ( v11 == (_BYTE *)(v6 - 1) )
  {
LABEL_17:
    *v11 = 0;
  }
  else
  {
    while ( 1 )
    {
      v13 = *v12++;
      *v11 = v13;
      if ( !v13 )
        break;
      if ( ++v11 == (_BYTE *)(v6 - 1) )
        goto LABEL_17;
    }
  }
  return a1;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
