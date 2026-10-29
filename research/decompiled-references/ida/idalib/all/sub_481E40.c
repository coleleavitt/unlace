_BOOL8 __fastcall sub_481E40(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  unsigned __int64 *v4; // r13
  __int64 v5; // rdx
  _QWORD *v6; // rdi
  __int64 v7; // r12
  unsigned __int64 *v8; // rbp
  unsigned __int64 v9; // r11
  __int64 v10; // r15
  __int64 v11; // rcx
  unsigned __int64 *v12; // rbx
  __int64 v13; // rdx
  unsigned __int64 *v14; // rax
  __int64 v15; // r15
  unsigned __int64 v16; // r14
  const char *v18; // rsi
  unsigned __int64 v19; // rax
  const char *v20; // rsi
  unsigned __int64 v21; // rax
  unsigned __int64 v22[11]; // [rsp+0h] [rbp-58h] BYREF

  v3 = (_QWORD *)a1[5];
  v22[3] = __readfsqword(0x28u);
  v22[1] = 0;
  v4 = (unsigned __int64 *)(16 * a3 + *v3);
  v5 = a1[7];
  v6 = (_QWORD *)a1[6];
  v22[0] = *v4;
  v7 = (__int64)&v6[10 * v5];
  v8 = sub_4813C0(v6, v7, v22);
  v10 = 80LL * *(_QWORD *)(a2 + 56);
  v11 = 0xCCCCCCCCCCCCCCCDLL * (v10 >> 4);
  if ( v10 <= 0 )
  {
    v12 = *(unsigned __int64 **)(a2 + 48);
  }
  else
  {
    v12 = *(unsigned __int64 **)(a2 + 48);
    do
    {
      while ( 1 )
      {
        v13 = v11 >> 1;
        v14 = &v12[10 * (v11 >> 1)];
        if ( v9 >= *v14 && (v9 != *v14 || v14[1] < v9 + 1) )
          break;
        v11 >>= 1;
        if ( v13 <= 0 )
          goto LABEL_8;
      }
      v12 = v14 + 10;
      v11 = v11 - 1 - v13;
    }
    while ( v11 > 0 );
  }
LABEL_8:
  v15 = *(_QWORD *)(a2 + 48) + v10;
  if ( (unsigned __int64 *)v7 != v8 )
  {
    v16 = v4[1];
    do
    {
      if ( *v8 >= v16 )
        break;
      if ( v12 == (unsigned __int64 *)v15 || *v12 >= v16 || *v8 != *v12 || v8[1] != v12[1] )
        return 1;
      v21 = v8[3];
      if ( v12[3] )
      {
        v18 = (const char *)v12[2];
        if ( !v21 )
        {
          if ( strcmp(haystack, v18) )
            return 1;
          goto LABEL_27;
        }
      }
      else
      {
        v18 = haystack;
        if ( !v21 )
        {
          v19 = v8[6];
          if ( !v12[6] )
            goto LABEL_17;
          goto LABEL_31;
        }
      }
      if ( strcmp((const char *)v8[2], v18) )
        return 1;
LABEL_27:
      v19 = v8[6];
      if ( !v12[6] )
      {
LABEL_17:
        v20 = haystack;
        if ( !v19 )
        {
          if ( v8[8] != v12[8] )
            return 1;
          goto LABEL_19;
        }
LABEL_35:
        if ( strcmp((const char *)v8[5], v20) )
          return 1;
        goto LABEL_33;
      }
LABEL_31:
      v20 = (const char *)v12[5];
      if ( v19 )
        goto LABEL_35;
      if ( strcmp(haystack, v20) )
        return 1;
LABEL_33:
      if ( v8[8] != v12[8] )
        return 1;
LABEL_19:
      if ( *((_WORD *)v8 + 36) != *((_WORD *)v12 + 36) )
        return 1;
      v8 += 10;
      v12 += 10;
    }
    while ( v8 != (unsigned __int64 *)v7 );
  }
  return (unsigned __int64 *)v15 != v12 && *v12 < v4[1];
}
