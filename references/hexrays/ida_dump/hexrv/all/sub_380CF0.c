unsigned __int64 __fastcall sub_380CF0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // r15
  size_t v5; // r14
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  size_t v8; // r12
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // [rsp+8h] [rbp-60h]
  unsigned __int64 v19; // [rsp+8h] [rbp-60h]
  _BYTE src[10]; // [rsp+1Eh] [rbp-4Ah] BYREF
  _QWORD v21[8]; // [rsp+28h] [rbp-40h] BYREF

  v21[0] = __readfsqword(0x28u);
  simpleline_place_t__serialize();
  v3 = pack_dq(src, v21, *(_QWORD *)(a1 + 16)) - (_QWORD)src;
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
        goto LABEL_7;
      }
      v6 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v14 = *a2;
    v15 = a2[1];
    if ( a2[2] < v6 )
    {
      v19 = v6;
      v17 = qvector_reserve(a2, v14, v6, 1);
      v6 = v19;
      *a2 = v17;
      v14 = v17;
      v15 = a2[1];
    }
    v18 = v6;
    memset((void *)(v14 + v15), 0, v6 - v15);
    a2[1] = v18;
    goto LABEL_6;
  }
LABEL_7:
  v7 = pack_dq(src, v21, *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16)) - (_QWORD)src;
  v8 = v7;
  if ( v7 )
  {
    v9 = a2[1];
    v10 = v9 + v7;
    if ( __CFADD__(v9, v7) )
    {
      if ( v9 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v9 != 0x7FFFFFFFFFFFFFFFLL )
          a2[1] = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_12;
      }
      v10 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v11 = *a2;
    v12 = a2[1];
    if ( a2[2] < v10 )
    {
      v16 = qvector_reserve(a2, v11, v10, 1);
      *a2 = v16;
      v11 = v16;
      v12 = a2[1];
    }
    memset((void *)(v11 + v12), 0, v10 - v12);
    a2[1] = v10;
LABEL_12:
    memcpy((void *)(v9 + *a2), src, v8);
  }
  return v21[0] - __readfsqword(0x28u);
}
