unsigned __int64 __fastcall sub_3FA160(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rbp
  size_t v4; // rbx
  unsigned __int64 v5; // r14
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  _BYTE src[5]; // [rsp+3h] [rbp-35h] BYREF
  unsigned __int64 v11[6]; // [rsp+8h] [rbp-30h] BYREF

  v11[0] = __readfsqword(0x28u);
  v2 = pack_dd(src, v11, a2) - (_QWORD)src;
  if ( v2 )
  {
    v3 = a1[1];
    v4 = v2;
    v5 = v3 + v2;
    if ( __CFADD__(v3, v2) )
    {
      if ( v3 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v3 != 0x7FFFFFFFFFFFFFFFLL )
          a1[1] = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v3 + *a1), src, v4);
        return v11[0] - __readfsqword(0x28u);
      }
      v5 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v7 = *a1;
    v8 = a1[1];
    if ( a1[2] < v5 )
    {
      v9 = qvector_reserve(a1, v7, v5, 1);
      *a1 = v9;
      v7 = v9;
      v8 = a1[1];
    }
    memset((void *)(v7 + v8), 0, v5 - v8);
    a1[1] = v5;
    goto LABEL_6;
  }
  return v11[0] - __readfsqword(0x28u);
}

