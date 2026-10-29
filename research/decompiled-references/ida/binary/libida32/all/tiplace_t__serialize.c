unsigned __int64 __fastcall tiplace_t__serialize(__int64 a1, __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  size_t v7; // rbp
  unsigned __int64 v8; // r14
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  _BYTE src[10]; // [rsp+Eh] [rbp-3Ah] BYREF
  unsigned __int64 v14[6]; // [rsp+18h] [rbp-30h] BYREF

  v14[0] = __readfsqword(0x28u);
  sub_407AD0(a2, *(_DWORD *)(a1 + 8));
  sub_407AD0(a2, *(_DWORD *)(a1 + 12));
  v5 = pack_dq(src, v14, *(_QWORD *)(a1 + 16), v3, v4) - (_QWORD)src;
  if ( v5 )
  {
    v6 = a2[1];
    v7 = v5;
    v8 = v6 + v5;
    if ( __CFADD__(v6, v5) )
    {
      if ( v6 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v6 != 0x7FFFFFFFFFFFFFFFLL )
          a2[1] = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v6 + *a2), src, v7);
        return v14[0] - __readfsqword(0x28u);
      }
      v8 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v10 = *a2;
    v11 = a2[1];
    if ( a2[2] < v8 )
    {
      v12 = qvector_reserve(a2, v10, v8, 1);
      *a2 = v12;
      v10 = v12;
      v11 = a2[1];
    }
    memset((void *)(v10 + v11), 0, v8 - v11);
    a2[1] = v8;
    goto LABEL_6;
  }
  return v14[0] - __readfsqword(0x28u);
}

