unsigned __int64 __fastcall srcdbg_place_t__::vfunc_12(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rbp
  size_t v5; // rbx
  unsigned __int64 v6; // r14
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  _BYTE src[10]; // [rsp+Eh] [rbp-3Ah] BYREF
  unsigned __int64 v12[6]; // [rsp+18h] [rbp-30h] BYREF

  v12[0] = __readfsqword(0x28u);
  simpleline_place_t__serialize();
  v3 = pack_dq(src, v12, *(_QWORD *)(a1 + 16)) - (_QWORD)src;
  if ( v3 )
  {
    v4 = a2[1];
    v5 = v3;
    v6 = v4 + v3;
    if ( __CFADD__(v4, v3) )
    {
      if ( v4 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v4 != 0x7FFFFFFFFFFFFFFFLL )
          a2[1] = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v4 + *a2), src, v5);
        return v12[0] - __readfsqword(0x28u);
      }
      v6 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v8 = *a2;
    v9 = a2[1];
    if ( a2[2] < v6 )
    {
      v10 = qvector_reserve(a2, v8, v6, 1);
      *a2 = v10;
      v8 = v10;
      v9 = a2[1];
    }
    memset((void *)(v8 + v9), 0, v6 - v9);
    a2[1] = v6;
    goto LABEL_6;
  }
  return v12[0] - __readfsqword(0x28u);
}
