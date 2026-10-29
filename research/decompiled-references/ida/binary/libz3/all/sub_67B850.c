__int64 __fastcall sub_67B850(__int64 *a1, unsigned int *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 result; // rax
  int v7; // r9d
  __int64 v8; // rdx
  int v9; // ecx
  unsigned int *v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r15
  __int64 v18; // rax
  unsigned int *v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rbx
  unsigned int *v22; // r15
  unsigned int *v23; // rcx
  __int64 v24; // rcx
  unsigned int v25; // eax
  __int64 v26; // r8
  __int16 v27; // di
  unsigned int *v28; // rsi
  __int64 v29; // rax
  int v30; // eax
  unsigned int *v31; // rdi
  unsigned int v32; // edx
  __int64 v33; // r8
  __int64 v34; // rax
  int v35; // [rsp+0h] [rbp-88h]
  int v36; // [rsp+8h] [rbp-80h]
  int v37; // [rsp+Ch] [rbp-7Ch]
  int *v38; // [rsp+10h] [rbp-78h]
  unsigned int *v39; // [rsp+18h] [rbp-70h] BYREF
  int v40; // [rsp+20h] [rbp-68h]
  char v41[8]; // [rsp+28h] [rbp-60h] BYREF
  int v42[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v43; // [rsp+38h] [rbp-50h]
  __int64 v44; // [rsp+40h] [rbp-48h] BYREF
  void *v45; // [rsp+48h] [rbp-40h]

  v4 = a1[3];
  v39 = a2;
  if ( v4 )
  {
    v5 = *a2;
    if ( (unsigned int)v5 < *(_DWORD *)(v4 - 4) )
    {
      result = *(_QWORD *)(v4 + 8 * v5);
      *(_QWORD *)v41 = result;
      if ( result )
        return result;
    }
  }
  sub_6761A0((unsigned int **)a1 + 24, &v39);
  v8 = a1[24];
  result = a1[3];
  if ( !v8 )
    goto LABEL_13;
  v36 = *((_DWORD *)a1 + 24);
  v37 = *((_DWORD *)a1 + 32);
  do
  {
    v9 = *(_DWORD *)(v8 - 4);
    if ( !v9 )
      break;
    v10 = *(unsigned int **)(v8 + 8LL * (unsigned int)(v9 - 1));
    v11 = (unsigned int)(v9 - 1);
    if ( result && (v12 = *v10, (unsigned int)v12 < *(_DWORD *)(result - 4)) )
    {
      *(_QWORD *)v41 = *(_QWORD *)(result + 8 * v12);
      if ( *(_QWORD *)v41 )
      {
        *(_DWORD *)(v8 - 4) = v11;
        continue;
      }
    }
    else
    {
      *(_QWORD *)v41 = 0;
    }
    if ( *((_WORD *)v10 + 2) )
      goto LABEL_19;
    v11 = a1[23];
    if ( v11 )
    {
      *(_DWORD *)(v11 - 4) = 0;
      v19 = v10 + 8;
      v20 = v10[6];
      v21 = (__int64)&v10[2 * v20 + 8];
      if ( !(8 * v20) )
        goto LABEL_43;
    }
    else
    {
      v19 = v10 + 8;
      v20 = v10[6];
      v21 = (__int64)&v10[2 * v20 + 8];
      if ( !(8 * v20) )
        goto LABEL_59;
    }
    v22 = v19;
    v38 = v42;
    while ( 1 )
    {
      v23 = *(unsigned int **)v22;
      *(_QWORD *)v42 = *(_QWORD *)v22;
      if ( result && (v24 = *v23, (unsigned int)v24 < *(_DWORD *)(result - 4)) )
      {
        *(_QWORD *)v41 = *(_QWORD *)(result + 8 * v24);
        if ( *(_QWORD *)v41 )
        {
          sub_6761A0((unsigned int **)a1 + 23, v41);
          goto LABEL_36;
        }
      }
      else
      {
        *(_QWORD *)v41 = 0;
      }
      sub_6761A0((unsigned int **)a1 + 24, v42);
LABEL_36:
      v22 += 2;
      if ( (unsigned int *)v21 == v22 )
        break;
      result = a1[3];
    }
    v11 = a1[23];
    LODWORD(v20) = v10[6];
    if ( v11 )
    {
LABEL_43:
      v25 = *(_DWORD *)(v11 - 4);
      goto LABEL_44;
    }
LABEL_59:
    v25 = 0;
LABEL_44:
    if ( v25 != (_DWORD)v20 )
      goto LABEL_30;
    v26 = *((_QWORD *)v10 + 2);
    v27 = *((_WORD *)v10 + 2);
    v28 = *(unsigned int **)(v26 + 24);
    if ( !v28 )
    {
      LOBYTE(v19) = v37 == -1;
      v8 = (v36 == -1) | (unsigned int)v19;
      if ( v27 )
      {
        if ( !(_BYTE)v8 )
          goto LABEL_19;
LABEL_62:
        v31 = (unsigned int *)*a1;
LABEL_63:
        *(_QWORD *)v41 = sub_15DC610(
                           (int)v31,
                           *((_QWORD *)v10 + 2),
                           v25,
                           v11,
                           v26,
                           v7,
                           v35,
                           v36,
                           (int)v38,
                           (int)v39,
                           v40,
                           v41[0],
                           v42[0],
                           v43,
                           v44,
                           v45);
        v14 = *(_QWORD *)v41;
        goto LABEL_20;
      }
      if ( (_BYTE)v8 )
        goto LABEL_62;
      if ( sub_676730((__int64)v10) )
      {
LABEL_70:
        if ( (unsigned __int8)sub_15D2CB0(*a1, v10) )
        {
LABEL_71:
          *(_QWORD *)v41 = v10;
          v14 = (__int64)v10;
          goto LABEL_20;
        }
        if ( *((_WORD *)v10 + 2) )
          goto LABEL_19;
        if ( sub_676730((__int64)v10) )
        {
          v34 = sub_15D1F10(v10);
          if ( (unsigned __int8)sub_1673B10(a1 + 12, v34) )
            goto LABEL_71;
          if ( *((_WORD *)v10 + 2) )
            goto LABEL_19;
        }
        v33 = *((_QWORD *)v10 + 2);
      }
      v28 = *(unsigned int **)(v33 + 24);
      if ( v28 )
        goto LABEL_51;
      goto LABEL_19;
    }
    v8 = *v28;
    if ( v27 )
    {
      if ( v36 == (_DWORD)v8 || (_DWORD)v8 == 0 || v37 == (_DWORD)v8 )
        goto LABEL_62;
LABEL_19:
      *(_QWORD *)v41 = sub_6789D0(a1, v10, v8, v11);
      v14 = *(_QWORD *)v41;
      goto LABEL_20;
    }
    if ( !(_DWORD)v8 )
    {
      v32 = v28[1];
      v31 = (unsigned int *)*a1;
      switch ( v32 )
      {
        case 2u:
          *(_QWORD *)v41 = sub_15E1B70((int)v31);
          v14 = *(_QWORD *)v41;
          goto LABEL_20;
        case 3u:
          *(_QWORD *)v41 = sub_15DDD10(v31, v25, v11);
          v14 = *(_QWORD *)v41;
          goto LABEL_20;
        case 4u:
          *(_QWORD *)v41 = sub_15E1BF0((int)v31);
          v14 = *(_QWORD *)v41;
          goto LABEL_20;
      }
      goto LABEL_63;
    }
    if ( v36 == (_DWORD)v8 || v37 == (_DWORD)v8 )
      goto LABEL_62;
    if ( sub_676730((__int64)v10) )
      goto LABEL_70;
LABEL_51:
    if ( *v28 != 3 || v28[1] )
      goto LABEL_19;
    v29 = *((_QWORD *)v28 + 1);
    if ( *(_BYTE *)(v29 + 8) )
      sub_DBF6E(0);
    v30 = *(_DWORD *)v29;
    v43 = 0;
    LOBYTE(v42[1]) &= 0xFCu;
    v45 = nullptr;
    v44 = 1;
    v42[0] = v30;
    sub_182CBA0(qword_1C7F2C0, &v44);
    BYTE4(v44) &= ~1u;
    LODWORD(v44) = 1;
    *(_QWORD *)v41 = sub_1674520(a1 + 12, v42, 24);
    v14 = *(_QWORD *)v41;
    sub_25A130((char *)v42);
LABEL_20:
    if ( (unsigned __int8)sub_676F80(a1, v14) && (*(_WORD *)(v14 + 4) || !sub_676730(v14)) )
    {
      v17 = sub_6789D0(a1, v14, v15, v16);
      v18 = sub_15E1B70(*a1);
      *(_QWORD *)v42 = v18;
      if ( v18 )
        ++*(_DWORD *)(v18 + 8);
      v14 = v17;
      sub_6761A0((unsigned int **)a1 + 9, v42);
      *(_QWORD *)v41 = v17;
    }
    v38 = (int *)(a1 + 26);
    sub_67AB30(a1 + 2, (unsigned int **)a1 + 26, v10, v14);
    sub_67AB30(a1 + 4, (unsigned int **)a1 + 27, (unsigned int *)v14, (__int64)v10);
    if ( v10 == (unsigned int *)v14 )
    {
      if ( (unsigned __int8)sub_676F80(a1, (__int64)v10) )
      {
        *(_QWORD *)v42 = v14;
LABEL_57:
        ++*(_DWORD *)(v14 + 8);
LABEL_29:
        sub_6761A0((unsigned int **)a1 + 7, v42);
      }
    }
    else
    {
      sub_67AB30(a1 + 2, (unsigned int **)v38, (unsigned int *)v14, v14);
      if ( (unsigned __int8)sub_676F80(a1, v14) )
      {
        *(_QWORD *)v42 = v14;
        if ( !v14 )
          goto LABEL_29;
        goto LABEL_57;
      }
    }
LABEL_30:
    result = a1[3];
    v8 = a1[24];
  }
  while ( v8 );
LABEL_13:
  if ( result )
  {
    v13 = *a2;
    if ( (unsigned int)v13 >= *(_DWORD *)(result - 4) )
      return 0;
    else
      return *(_QWORD *)(result + 8 * v13);
  }
  return result;
}

