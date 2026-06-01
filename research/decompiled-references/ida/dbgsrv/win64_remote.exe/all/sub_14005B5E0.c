/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005B5E0
// Address: 0x000000014005B5E0

//----- (000000014005B5E0) ----------------------------------------------------
_BYTE *__fastcall sub_14005B5E0(_BYTE *a1, unsigned __int64 a2, unsigned __int16 a3)
{
  _BYTE *v3; // r9
  __int16 v5; // r8
  bool v6; // sf
  bool v7; // cc
  _BYTE *v8; // rcx

  v3 = a1;
  if ( (__int64)(a2 - (_QWORD)a1) < 0 )
    goto LABEL_16;
  if ( a3 <= 0x7Fu )
  {
    if ( (unsigned __int64)a1 < a2 )
    {
      *a1 = a3;
      return a1 + 1;
    }
    return v3;
  }
  if ( a3 > 0x3FFFu )
  {
    v7 = a2 <= (unsigned __int64)a1;
    v6 = (__int64)(a2 - (_QWORD)a1) < 0;
    if ( a2 > (unsigned __int64)a1 )
    {
      v3 = a1 + 1;
      *a1 = -1;
      v7 = a2 <= (unsigned __int64)(a1 + 1);
      v6 = (__int64)(a2 - (_QWORD)(a1 + 1)) < 0;
    }
    if ( !v6 )
    {
      if ( !v7 )
      {
        *v3 = HIBYTE(a3);
        v8 = v3 + 1;
        v3 = v8;
        if ( (unsigned __int64)v8 < a2 )
        {
          v3 = v8 + 1;
          *v8 = a3;
        }
      }
      return v3;
    }
LABEL_16:
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(1225);
  }
  v5 = a3 | 0x8000;
  if ( (unsigned __int64)a1 < a2 )
  {
    *a1 = HIBYTE(v5);
    v3 = a1 + 1;
    if ( (unsigned __int64)(a1 + 1) < a2 )
    {
      a1[1] = v5;
      return a1 + 2;
    }
  }
  return v3;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
