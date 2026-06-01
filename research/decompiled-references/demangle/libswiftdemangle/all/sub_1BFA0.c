unsigned __int64 __fastcall sub_1BFA0(_QWORD *a1)
{
  __int64 v1; // rax
  char *v2; // rdx
  __int64 v3; // r9
  char v4; // cl
  _QWORD *v5; // rbp
  char *v6; // rdx
  char *v7; // rax
  __int64 v8; // rcx
  char *v10; // rdx
  size_t v11; // rcx
  __int16 v12; // si
  char *v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbx
  _QWORD *v16; // rax
  char *v17; // rbx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rbx
  _QWORD *v20; // rax
  char *v21; // rbx
  _QWORD *v22; // rdi
  _QWORD *v23; // r9
  _QWORD v24[5]; // [rsp+0h] [rbp-28h] BYREF

  v24[1] = __readfsqword(0x28u);
  v1 = a1[4];
  if ( !v1 )
    return 0;
  v2 = (char *)a1[3];
  v3 = (__int64)a1;
  v4 = *v2;
  if ( *v2 == 111 )
  {
    v5 = (_QWORD *)a1[5];
    a1[3] = v2 + 1;
    a1[4] = v1 - 1;
    v6 = (char *)v5[1];
    if ( !v6 || (v7 = v6 + 3, (unsigned __int64)(v6 + 3) > v5[2]) )
    {
      v14 = 2LL * v5[4];
      if ( v14 < 4 )
        v14 = 4;
      v5[4] = v14;
      v15 = v14 + 8;
      v16 = malloc(v14 + 8);
      v17 = (char *)v16 + v15;
      *v16 = v5[3];
      v6 = (char *)(v16 + 1);
      v5[3] = v16;
      v7 = (char *)v16 + 11;
      v5[2] = v17;
    }
    v5[1] = v7;
    *(_WORD *)v6 = 24415;
    v6[2] = 67;
    v8 = 3;
    return sub_C510(v5, 143, (__int64)v6, v8);
  }
  switch ( v4 )
  {
    case 'C':
      v5 = (_QWORD *)a1[5];
      a1[3] = v2 + 1;
      a1[4] = v1 - 1;
      v6 = (char *)v5[1];
      if ( !v6 || (v13 = v6 + 15, (unsigned __int64)(v6 + 15) > v5[2]) )
      {
        v18 = 2LL * v5[4];
        if ( v18 < 0x10 )
          v18 = 16;
        v5[4] = v18;
        v19 = v18 + 8;
        v20 = malloc(v18 + 8);
        v21 = (char *)v20 + v19;
        *v20 = v5[3];
        v6 = (char *)(v20 + 1);
        v5[3] = v20;
        v13 = (char *)v20 + 23;
        v5[2] = v21;
      }
      v5[1] = v13;
      qmemcpy(v6, "__C_Synthesized", 15);
      v8 = 15;
      return sub_C510(v5, 143, (__int64)v6, v8);
    case 'a':
      a1[3] = v2 + 1;
      a1[4] = v1 - 1;
      v10 = "Array";
      v11 = 5;
LABEL_10:
      v12 = 208;
      return sub_1ABD0(v3, v12, v10, v11);
    case 'b':
      a1[3] = v2 + 1;
      a1[4] = v1 - 1;
      v10 = "Bool";
LABEL_23:
      v11 = 4;
      goto LABEL_10;
    case 'c':
      a1[3] = v2 + 1;
      a1[4] = v1 - 1;
      v10 = "UnicodeScalar";
      v11 = 13;
      goto LABEL_10;
    case 'd':
      a1[3] = v2 + 1;
      a1[4] = v1 - 1;
      v10 = "Double";
      v11 = 6;
      goto LABEL_10;
    case 'f':
      a1[3] = v2 + 1;
      a1[4] = v1 - 1;
      v10 = (char *)"Float";
      v11 = 5;
      goto LABEL_10;
    case 'i':
      a1[3] = v2 + 1;
      a1[4] = v1 - 1;
      v10 = (char *)"Int";
      v11 = 3;
      goto LABEL_10;
    case 'V':
      a1[3] = v2 + 1;
      a1[4] = v1 - 1;
      v10 = "UnsafeRawPointer";
      v11 = 16;
      goto LABEL_10;
    case 'v':
      v11 = 23;
      a1[3] = v2 + 1;
      v10 = "UnsafeMutableRawPointer";
      a1[4] = v1 - 1;
      goto LABEL_10;
  }
  v22 = a1 + 3;
  if ( (unsigned __int8)sub_1AB00(v22, 80) )
  {
    v10 = "UnsafePointer";
    v11 = 13;
    goto LABEL_10;
  }
  if ( (unsigned __int8)sub_1AB00(v22, 112) )
  {
    v10 = "UnsafeMutablePointer";
    v11 = 20;
    goto LABEL_10;
  }
  if ( (unsigned __int8)sub_1AB00(v22, 113) )
  {
    v10 = "Optional";
    v11 = 8;
    v12 = 58;
    return sub_1ABD0(v3, v12, v10, v11);
  }
  if ( (unsigned __int8)sub_1AB00(v22, 81) )
  {
    v10 = "ImplicitlyUnwrappedOptional";
    v11 = 27;
    v12 = 58;
    return sub_1ABD0(v3, v12, v10, v11);
  }
  if ( (unsigned __int8)sub_1AB00(v22, 82) )
  {
    v10 = "UnsafeBufferPointer";
    v11 = 19;
    goto LABEL_10;
  }
  if ( (unsigned __int8)sub_1AB00(v22, 114) )
  {
    v10 = "UnsafeMutableBufferPointer";
    v11 = 26;
    goto LABEL_10;
  }
  if ( (unsigned __int8)sub_1AB00(v22, 83) )
  {
    v10 = (char *)"String";
    v11 = 6;
    goto LABEL_10;
  }
  if ( (unsigned __int8)sub_1AB00(v22, 117) )
  {
    v10 = "UInt";
    goto LABEL_23;
  }
  if ( (unsigned __int8)sub_1AE90(v3, v24) && (unsigned __int64)((__int64)(v23[1] - *v23) >> 3) > v24[0] )
    return *(_QWORD *)(*v23 + 8LL * v24[0]);
  else
    return 0;
}
