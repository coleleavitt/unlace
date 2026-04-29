unsigned __int64 __fastcall sub_3C2010(unsigned int *a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int64 v4; // rax
  unsigned __int64 v5; // r15
  size_t v6; // r12
  unsigned __int64 v7; // r8
  size_t v8; // rax
  size_t v9; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // [rsp+8h] [rbp-50h]
  unsigned __int64 v15; // [rsp+8h] [rbp-50h]
  _BYTE src[5]; // [rsp+13h] [rbp-45h] BYREF
  _QWORD v17[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = a1[2];
  v17[0] = __readfsqword(0x28u);
  v4 = pack_dd(src, v17, v2) - (_QWORD)src;
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
    v11 = *a2;
    v12 = a2[1];
    if ( a2[2] < v7 )
    {
      v15 = v7;
      v13 = qvector_reserve(a2, v11, v7, 1);
      v7 = v15;
      *a2 = v13;
      v11 = v13;
      v12 = a2[1];
    }
    v14 = v7;
    memset((void *)(v11 + v12), 0, v7 - v12);
    a2[1] = v14;
    goto LABEL_6;
  }
LABEL_7:
  v8 = pack_dd(src, v17, a1[3]) - (_QWORD)src;
  if ( v8 )
    sub_3C1F50(a2, src, v8);
  v9 = pack_dd(src, v17, a1[4]) - (_QWORD)src;
  if ( v9 )
    sub_3C1F50(a2, src, v9);
  return v17[0] - __readfsqword(0x28u);
}
