unsigned __int64 __fastcall sub_4BE740(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  size_t v5; // r12
  unsigned __int64 v6; // r15
  __int64 v7; // r15
  __int64 v8; // r12
  const char *v9; // r14
  size_t v10; // rax
  unsigned __int64 v11; // rbx
  size_t v12; // r9
  unsigned __int64 v13; // r11
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // [rsp+0h] [rbp-58h]
  unsigned __int64 v22; // [rsp+0h] [rbp-58h]
  size_t v23; // [rsp+8h] [rbp-50h]
  size_t v24; // [rsp+8h] [rbp-50h]
  _BYTE src[5]; // [rsp+13h] [rbp-45h] BYREF
  unsigned __int64 v26[8]; // [rsp+18h] [rbp-40h] BYREF

  v26[0] = __readfsqword(0x28u);
  v3 = pack_dd(src, v26, *((unsigned int *)a2 + 2)) - (_QWORD)src;
  if ( v3 )
  {
    v4 = a1[1];
    v5 = v3;
    v6 = v4 + v3;
    if ( __CFADD__(v4, v3) )
    {
      if ( v4 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v4 != 0x7FFFFFFFFFFFFFFFLL )
          a1[1] = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v4 + *a1), src, v5);
        goto LABEL_7;
      }
      v6 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v18 = *a1;
    v19 = a1[1];
    if ( a1[2] < v6 )
    {
      v20 = qvector_reserve(a1, v18, v6, 1);
      *a1 = v20;
      v18 = v20;
      v19 = a1[1];
    }
    memset((void *)(v18 + v19), 0, v6 - v19);
    a1[1] = v6;
    goto LABEL_6;
  }
LABEL_7:
  v7 = *a2;
  v8 = *a2 + 24 * a2[1];
  if ( v8 != *a2 )
  {
    while ( 1 )
    {
      v9 = haystack;
      if ( *(_QWORD *)(v7 + 8) )
        v9 = *(const char **)v7;
      if ( !v9 )
        break;
      v10 = strlen(v9);
      v11 = a1[1];
      v12 = v10 + 1;
      v13 = v10 + 1 + v11;
      if ( !__CFADD__(v10 + 1, v11) )
        goto LABEL_17;
      if ( v11 <= 0x7FFFFFFFFFFFFFFELL )
      {
        v14 = *a1;
        v15 = a1[1];
        v13 = 0x7FFFFFFFFFFFFFFFLL;
        if ( (unsigned __int64)a1[2] < 0x7FFFFFFFFFFFFFFFLL )
        {
LABEL_22:
          v24 = v12;
          v22 = v13;
          v16 = qvector_reserve(a1, v14, v13, 1);
          v12 = v24;
          v13 = v22;
          *a1 = v16;
          v14 = v16;
          v15 = a1[1];
        }
LABEL_18:
        v23 = v12;
        v21 = v13;
        memset((void *)(v14 + v15), 0, v13 - v15);
        v12 = v23;
        a1[1] = v21;
        goto LABEL_12;
      }
      if ( v11 != 0x7FFFFFFFFFFFFFFFLL )
        goto LABEL_11;
LABEL_12:
      v7 += 24;
      memcpy((void *)(*a1 + v11), v9, v12);
      if ( v8 == v7 )
        return v26[0] - __readfsqword(0x28u);
    }
    v11 = a1[1];
    v12 = 1;
    v9 = &byte_22CD811;
    v13 = v11 + 1;
    if ( v11 != -1 )
    {
LABEL_17:
      v14 = *a1;
      v15 = v11;
      if ( a1[2] < v13 )
        goto LABEL_22;
      goto LABEL_18;
    }
    v11 = -1;
    v9 = &byte_22CD811;
LABEL_11:
    a1[1] = 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_12;
  }
  return v26[0] - __readfsqword(0x28u);
}

