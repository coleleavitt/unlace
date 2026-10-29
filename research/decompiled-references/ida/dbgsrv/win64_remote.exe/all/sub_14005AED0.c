/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005AED0
// Address: 0x000000014005AED0

//----- (000000014005AED0) ----------------------------------------------------
_BYTE *__fastcall sub_14005AED0(_BYTE *a1, unsigned __int64 a2, unsigned __int8 *a3)
{
  unsigned __int8 *v5; // rdi
  char v6; // al
  int v7; // r14d
  int v8; // eax
  int v9; // r14d
  char *v10; // r8
  char *v11; // rcx
  char v12; // al
  char v13; // al
  char v15[16]; // [rsp+20h] [rbp-38h] BYREF

  v5 = a3;
  if ( sub_14006CA14((__int64)"+-0*#.", *a3) )
  {
    while ( 1 )
    {
      v6 = *v5++;
      if ( (unsigned __int64)a1 >= a2 )
        break;
      *a1++ = v6;
      if ( (unsigned __int64)a1 >= a2 )
      {
        a1 = (_BYTE *)(a2 - 1);
        *(_BYTE *)(a2 - 1) = 0;
      }
      if ( !sub_14006CA14((__int64)"+-0*#.", *v5) )
        goto LABEL_6;
    }
LABEL_24:
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(518);
  }
LABEL_6:
  v7 = 0;
  while ( (*v5 & 0x80u) == 0 && isdigit(*v5) )
  {
    v8 = (char)*v5++;
    v7 = v8 + 2 * (5 * v7 - 24);
  }
  if ( v7 )
  {
    v9 = 2 * v7;
    v10 = v15;
    do
    {
      *v10++ = v9 % 10 + 48;
      v9 /= 10;
    }
    while ( v9 );
    *v10 = 0;
    sub_1400622B0(v15, v10 - v15);
    if ( (unsigned __int64)a1 >= a2 )
    {
      if ( byte_1400CB61C )
        __debugbreak();
      sub_14005A480(520);
    }
    v11 = v15;
    if ( a1 == (_BYTE *)(a2 - 1) )
    {
LABEL_17:
      *a1 = 0;
    }
    else
    {
      while ( 1 )
      {
        v12 = *v11++;
        *a1 = v12;
        if ( !v12 )
          break;
        if ( ++a1 == (_BYTE *)(a2 - 1) )
          goto LABEL_17;
      }
    }
  }
  if ( sub_14006CA14((__int64)"+-0123456789*#.", *v5) )
  {
    while ( 1 )
    {
      v13 = *v5++;
      if ( (unsigned __int64)a1 >= a2 )
        break;
      *a1++ = v13;
      if ( (unsigned __int64)a1 >= a2 )
      {
        a1 = (_BYTE *)(a2 - 1);
        *(_BYTE *)(a2 - 1) = 0;
      }
      if ( !sub_14006CA14((__int64)"+-0123456789*#.", *v5) )
        return a1;
    }
    goto LABEL_24;
  }
  return a1;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
