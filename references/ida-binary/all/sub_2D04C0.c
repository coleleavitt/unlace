unsigned __int64 __fastcall hintplace_t__::vfunc_12(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int64 v4; // rax
  unsigned __int64 v5; // rbp
  size_t v6; // rbx
  unsigned __int64 v7; // r14
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  _BYTE src[5]; // [rsp+3h] [rbp-35h] BYREF
  unsigned __int64 v13[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(unsigned int *)(a1 + 8);
  v13[0] = __readfsqword(0x28u);
  v4 = pack_dd(src, v13, v2) - (_QWORD)src;
  if ( v4 )
  {
    v5 = a2[1];
    v6 = v4;
    v7 = v5 + v4;
    if ( __CFADD__(v5, v4) )
    {
      if ( v5 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v5 != 0x7FFFFFFFFFFFFFFFLL )
          a2[1] = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v5 + *a2), src, v6);
        return v13[0] - __readfsqword(0x28u);
      }
      v7 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v9 = *a2;
    v10 = a2[1];
    if ( a2[2] < v7 )
    {
      v11 = qvector_reserve(a2, v9, v7, 1);
      *a2 = v11;
      v9 = v11;
      v10 = a2[1];
    }
    memset((void *)(v9 + v10), 0, v7 - v10);
    a2[1] = v7;
    goto LABEL_6;
  }
  return v13[0] - __readfsqword(0x28u);
}
