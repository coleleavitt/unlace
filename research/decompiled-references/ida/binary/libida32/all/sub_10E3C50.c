__int64 *__fastcall sub_10E3C50(__int64 *a1, __int64 *a2)
{
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 *v5; // r9
  __int64 v6; // rbx
  __int64 v7; // r13
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  __int64 v10; // r15
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  void *v13; // rdi
  char v14; // al
  _BYTE *v15; // rax
  _BYTE *v16; // rsi
  signed __int64 v17; // r14
  __int64 v18; // r13
  __int64 v20; // rbx
  __int64 v21; // r15
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // r14
  __int64 v25; // rbp
  void *v26; // rdi
  char v27; // al
  void *v28; // rax
  _BYTE *v29; // r15
  signed __int64 v30; // r14
  __int64 v31; // rbp
  __int64 v32; // rsi
  __int64 v33; // rdi
  unsigned __int64 v34; // [rsp+0h] [rbp-48h]
  unsigned __int64 v35; // [rsp+0h] [rbp-48h]
  unsigned __int64 v36; // [rsp+0h] [rbp-48h]
  unsigned __int64 v37; // [rsp+0h] [rbp-48h]
  unsigned __int64 v38; // [rsp+0h] [rbp-48h]
  unsigned __int64 v39; // [rsp+0h] [rbp-48h]
  unsigned __int64 v40; // [rsp+0h] [rbp-48h]
  unsigned __int64 v41; // [rsp+0h] [rbp-48h]
  __int64 *srca; // [rsp+8h] [rbp-40h]
  __int64 *srcb; // [rsp+8h] [rbp-40h]
  __int64 *src; // [rsp+8h] [rbp-40h]
  __int64 *srcc; // [rsp+8h] [rbp-40h]
  _BYTE *srcd; // [rsp+8h] [rbp-40h]

  if ( a2 != a1 )
  {
    v3 = a2[1];
    v4 = *a2;
    v5 = a2;
    v6 = *a1;
    v7 = v3 - *a2;
    v8 = 0xCCCCCCCCCCCCCCCDLL * (v7 >> 3);
    v9 = v8;
    if ( 0xCCCCCCCCCCCCCCCDLL * ((a1[2] - *a1) >> 3) < v8 )
    {
      v20 = 0;
      if ( v8 )
      {
        if ( v8 > 0x666666666666666LL )
          std::__throw_bad_alloc();
        v20 = operator new(a2[1] - *a2);
      }
      v21 = v20;
      while ( v3 != v4 )
      {
        v22 = v4;
        v23 = v21;
        v4 += 40;
        v21 += 40;
        sub_10CF690(v23, v22);
      }
      v24 = a1[1];
      v25 = *a1;
      if ( v24 != *a1 )
      {
        do
        {
          if ( *(_BYTE *)(v25 + 32) && *(_QWORD *)v25 != v25 + 16 )
            operator delete(*(void **)v25);
          v25 += 40;
        }
        while ( v24 != v25 );
        v25 = *a1;
      }
      if ( v25 )
        operator delete((void *)v25);
      v18 = v20 + v7;
      *a1 = v20;
      a1[2] = v18;
      goto LABEL_24;
    }
    v10 = a1[1];
    v11 = v10 - v6;
    v12 = 0xCCCCCCCCCCCCCCCDLL * ((v10 - v6) >> 3);
    if ( v9 <= v12 )
    {
      if ( v7 <= 0 )
      {
LABEL_22:
        while ( v10 != v6 )
        {
          if ( *(_BYTE *)(v6 + 32) && *(_QWORD *)v6 != v6 + 16 )
            operator delete(*(void **)v6);
          v6 += 40;
        }
        goto LABEL_23;
      }
      while ( 1 )
      {
        v14 = *(_BYTE *)(v4 + 32);
        if ( *(_BYTE *)(v6 + 32) )
        {
          if ( v14 )
          {
            v35 = v9;
            sub_9CAB60(v6, v4);
            v9 = v35;
          }
          else
          {
            v13 = *(void **)v6;
            *(_BYTE *)(v6 + 32) = 0;
            if ( v13 != (void *)(v6 + 16) )
            {
              v34 = v9;
              operator delete(v13);
              v9 = v34;
            }
          }
          goto LABEL_9;
        }
        if ( v14 )
          break;
LABEL_9:
        v4 += 40;
        v6 += 40;
        if ( !--v9 )
          goto LABEL_22;
      }
      v15 = (_BYTE *)(v6 + 16);
      *(_QWORD *)v6 = v6 + 16;
      v16 = *(_BYTE **)v4;
      v17 = *(_QWORD *)(v4 + 8);
      if ( v17 + *(_QWORD *)v4 && !v16 )
        goto LABEL_72;
      if ( (unsigned __int64)v17 > 0xF )
      {
        if ( v17 < 0 )
          goto LABEL_71;
        srcd = *(_BYTE **)v4;
        v40 = v9;
        v15 = (_BYTE *)operator new(v17 + 1);
        *(_QWORD *)(v6 + 16) = v17;
        v9 = v40;
        *(_QWORD *)v6 = v15;
        v16 = srcd;
      }
      else
      {
        if ( v17 == 1 )
        {
          *(_BYTE *)(v6 + 16) = *v16;
LABEL_17:
          *(_QWORD *)(v6 + 8) = v17;
          v15[v17] = 0;
          *(_BYTE *)(v6 + 32) = 1;
          goto LABEL_9;
        }
        if ( !v17 )
          goto LABEL_17;
      }
      v41 = v9;
      memcpy(v15, v16, v17);
      v15 = *(_BYTE **)v6;
      v9 = v41;
      goto LABEL_17;
    }
    if ( v11 <= 0 )
    {
LABEL_56:
      v31 = v11 + v4;
      if ( v31 == v3 )
      {
        v18 = v6 + v7;
        goto LABEL_24;
      }
      do
      {
        v32 = v31;
        v33 = v10;
        v31 += 40;
        v10 += 40;
        sub_10CF690(v33, v32);
      }
      while ( v3 != v31 );
LABEL_23:
      v18 = *a1 + v7;
LABEL_24:
      a1[1] = v18;
      return a1;
    }
    while ( 1 )
    {
      v27 = *(_BYTE *)(v4 + 32);
      if ( *(_BYTE *)(v6 + 32) )
        break;
      if ( v27 )
      {
        v28 = (void *)(v6 + 16);
        *(_QWORD *)v6 = v6 + 16;
        v29 = *(_BYTE **)v4;
        v30 = *(_QWORD *)(v4 + 8);
        if ( v30 + *(_QWORD *)v4 && !v29 )
LABEL_72:
          std::__throw_logic_error("basic_string::_M_construct null not valid");
        if ( (unsigned __int64)v30 > 0xF )
        {
          src = v5;
          v38 = v12;
          if ( v30 < 0 )
LABEL_71:
            std::__throw_length_error("basic_string::_M_create");
          v28 = (void *)operator new(v30 + 1);
          *(_QWORD *)(v6 + 16) = v30;
          v12 = v38;
          *(_QWORD *)v6 = v28;
          v5 = src;
LABEL_66:
          srcc = v5;
          v39 = v12;
          memcpy(v28, v29, v30);
          v28 = *(void **)v6;
          v5 = srcc;
          v12 = v39;
          goto LABEL_54;
        }
        if ( v30 == 1 )
        {
          *(_BYTE *)(v6 + 16) = *v29;
        }
        else if ( v30 )
        {
          goto LABEL_66;
        }
LABEL_54:
        *(_QWORD *)(v6 + 8) = v30;
        v4 += 40;
        v6 += 40;
        *((_BYTE *)v28 + v30) = 0;
        *(_BYTE *)(v6 - 8) = 1;
        if ( !--v12 )
        {
LABEL_55:
          v10 = a1[1];
          v6 = *a1;
          v3 = v5[1];
          v4 = *v5;
          v11 = v10 - *a1;
          goto LABEL_56;
        }
      }
      else
      {
LABEL_46:
        v4 += 40;
        v6 += 40;
        if ( !--v12 )
          goto LABEL_55;
      }
    }
    if ( v27 )
    {
      srcb = v5;
      v37 = v12;
      sub_9CAB60(v6, v4);
      v12 = v37;
      v5 = srcb;
    }
    else
    {
      v26 = *(void **)v6;
      *(_BYTE *)(v6 + 32) = 0;
      if ( v26 != (void *)(v6 + 16) )
      {
        srca = v5;
        v36 = v12;
        operator delete(v26);
        v5 = srca;
        v12 = v36;
      }
    }
    goto LABEL_46;
  }
  return a1;
}

