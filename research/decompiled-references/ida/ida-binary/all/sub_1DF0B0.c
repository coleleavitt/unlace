unsigned __int64 __fastcall dbgreg_place_t__::vfunc_12(unsigned int *a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int64 v4; // rax
  unsigned __int64 v5; // r15
  size_t v6; // r13
  unsigned __int64 v7; // r8
  size_t v8; // rax
  size_t v9; // rax
  size_t v10; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // [rsp+8h] [rbp-50h]
  unsigned __int64 v16; // [rsp+8h] [rbp-50h]
  _BYTE src[5]; // [rsp+13h] [rbp-45h] BYREF
  _QWORD v18[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = a1[2];
  v18[0] = __readfsqword(0x28u);
  v4 = pack_dd(src, v18, v2) - (_QWORD)src;
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
    v12 = *a2;
    v13 = a2[1];
    if ( a2[2] < v7 )
    {
      v16 = v7;
      v14 = qvector_reserve(a2, v12, v7, 1);
      v7 = v16;
      *a2 = v14;
      v12 = v14;
      v13 = a2[1];
    }
    v15 = v7;
    memset((void *)(v12 + v13), 0, v7 - v13);
    a2[1] = v15;
    goto LABEL_6;
  }
LABEL_7:
  v8 = pack_dd(src, v18, a1[3]) - (_QWORD)src;
  if ( v8 )
    sub_1DEF90(a2, src, v8);
  v9 = pack_dd(src, v18, a1[4]) - (_QWORD)src;
  if ( v9 )
    sub_1DEF90(a2, src, v9);
  v10 = pack_dd(src, v18, a1[5]) - (_QWORD)src;
  if ( v10 )
    sub_1DEF90(a2, src, v10);
  return v18[0] - __readfsqword(0x28u);
}
