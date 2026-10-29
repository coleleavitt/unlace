unsigned __int64 __fastcall simpleline_place_t__serialize(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  size_t v6; // r12
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  size_t v9; // r12
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // [rsp+8h] [rbp-50h]
  unsigned __int64 v20; // [rsp+8h] [rbp-50h]
  _BYTE src[5]; // [rsp+13h] [rbp-45h] BYREF
  _QWORD v22[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = *(unsigned int *)(a1 + 8);
  v22[0] = __readfsqword(0x28u);
  v4 = pack_dd(src, v22, v2) - (_QWORD)src;
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
        goto LABEL_7;
      }
      v7 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v15 = *a2;
    v16 = a2[1];
    if ( a2[2] < v7 )
    {
      v20 = v7;
      v18 = qvector_reserve(a2, v15, v7, 1);
      v7 = v20;
      *a2 = v18;
      v15 = v18;
      v16 = a2[1];
    }
    v19 = v7;
    memset((void *)(v15 + v16), 0, v7 - v16);
    a2[1] = v19;
    goto LABEL_6;
  }
LABEL_7:
  v8 = pack_dd(src, v22, *(unsigned int *)(a1 + 12)) - (_QWORD)src;
  v9 = v8;
  if ( v8 )
  {
    v10 = a2[1];
    v11 = v10 + v8;
    if ( __CFADD__(v10, v8) )
    {
      if ( v10 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v10 != 0x7FFFFFFFFFFFFFFFLL )
          a2[1] = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_12;
      }
      v11 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v12 = *a2;
    v13 = a2[1];
    if ( a2[2] < v11 )
    {
      v17 = qvector_reserve(a2, v12, v11, 1);
      *a2 = v17;
      v12 = v17;
      v13 = a2[1];
    }
    memset((void *)(v12 + v13), 0, v11 - v13);
    a2[1] = v11;
LABEL_12:
    memcpy((void *)(v10 + *a2), src, v9);
  }
  return v22[0] - __readfsqword(0x28u);
}
