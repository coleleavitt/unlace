unsigned __int64 __fastcall sub_570620(_QWORD *a1, unsigned int a2, int a3)
{
  __int64 v4; // rcx
  __int64 v6; // rax
  size_t v7; // r12
  unsigned __int64 v8; // rbp
  _QWORD *v9; // rdi
  unsigned __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v14; // rax
  char v15; // r12
  unsigned __int64 v16; // rsi
  __int64 v17; // rax
  _QWORD *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  char v21; // [rsp+2h] [rbp-36h] BYREF
  _BYTE src[5]; // [rsp+3h] [rbp-35h] BYREF
  unsigned __int64 v23[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = a1[5];
  v23[0] = __readfsqword(0x28u);
  if ( v4 )
  {
    if ( 1 << *(_BYTE *)a1[4] != a3 )
    {
      if ( !under_debugger )
        interr(24);
LABEL_33:
      BUG();
    }
  }
  else
  {
    switch ( a3 )
    {
      case 1:
        v15 = 0;
        break;
      case 2:
        v15 = 1;
        break;
      case 4:
        v15 = 2;
        break;
      case 8:
        v15 = 3;
        break;
      default:
        if ( !under_debugger )
          interr(23);
        goto LABEL_33;
    }
    v16 = a1[4];
    v17 = a1[6];
    v18 = a1 + 4;
    v21 = v15;
    if ( (unsigned __int64)&v21 < v16 || (unsigned __int64)&v21 >= v16 + v17 )
    {
      if ( !v17 )
      {
        v19 = qvector_reserve(v18, v16, 1, 1);
        v4 = a1[5];
        v15 = v21;
        a1[4] = v19;
        v16 = v19;
      }
    }
    else if ( !v17 )
    {
      v20 = qvector_reserve(v18, v16, 1, 1);
      v4 = a1[5];
      a1[4] = v20;
      v16 = v20;
    }
    *(_BYTE *)(v16 + v4) = v15;
    ++a1[5];
  }
  v6 = pack_dd(src, v23, a2) - (_QWORD)src;
  v7 = v6;
  if ( v6 )
  {
    v8 = a1[5];
    v9 = a1 + 4;
    v10 = v8 + v6;
    if ( __CFADD__(v8, v6) )
    {
      if ( v8 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v8 != 0x7FFFFFFFFFFFFFFFLL )
          a1[5] = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_17;
      }
      v10 = 0x7FFFFFFFFFFFFFFFLL;
      v9 = a1 + 4;
    }
    v11 = a1[4];
    v12 = a1[5];
    if ( a1[6] < v10 )
    {
      v14 = qvector_reserve(v9, v11, v10, 1);
      a1[4] = v14;
      v11 = v14;
      v12 = a1[5];
    }
    memset((void *)(v11 + v12), 0, v10 - v12);
    a1[5] = v10;
LABEL_17:
    memcpy((void *)(v8 + a1[4]), src, v7);
  }
  return v23[0] - __readfsqword(0x28u);
}

