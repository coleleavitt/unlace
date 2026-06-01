unsigned __int64 __fastcall sub_F95940(__int16 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r14d
  void (__fastcall *v4)(__int64, __int64, unsigned __int64); // r12
  __int16 v6; // ax
  unsigned __int64 v7; // rdi
  __int64 v8; // rax
  unsigned __int8 v9; // al
  unsigned __int64 result; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int64 *v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r13
  unsigned __int64 v19; // rdx
  __int64 v20; // rdi
  unsigned int v21; // edx
  __int64 v22; // r15
  __int64 v23; // rbp
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r14
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v33; // [rsp+18h] [rbp-40h]

  v3 = 0;
  v4 = (void (__fastcall *)(__int64, __int64, unsigned __int64))a2;
  v6 = *a1;
  v7 = *((_QWORD *)a1 + 4);
  if ( (v6 & 0x1FF) != 0x5B )
  {
LABEL_5:
    result = sub_BFBC70(v7);
    if ( !result )
      goto LABEL_43;
    goto LABEL_6;
  }
  v8 = sub_BFBC70(v7);
  if ( v8 && ((*(_BYTE *)(v8 + 28) + 93) & 0x7Fu) <= 3 )
  {
    v9 = sub_B981D0((_QWORD *)v8, a2);
    v7 = *((_QWORD *)a1 + 4);
    v3 = v9 ^ 1;
    goto LABEL_5;
  }
  v3 = 0;
  result = sub_BFBC70(*((_QWORD *)a1 + 4));
  if ( !result )
    goto LABEL_43;
LABEL_6:
  if ( (*(_BYTE *)(result + 28) & 0x7Fu) - 26 > 0x1A )
    goto LABEL_43;
  v13 = (unsigned __int64 *)(*(_QWORD *)&byte_8[*(_QWORD *)(result + 48) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
  result = *v13;
  v14 = *(unsigned __int8 *)(*v13 + 16);
  v15 = *v13;
  if ( (_BYTE)v14 != 42 )
  {
    v18 = 0;
    v11 = *(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF0LL;
    a2 = *(_QWORD *)v11;
    if ( *(_BYTE *)(*(_QWORD *)v11 + 16LL) != 42 )
      goto LABEL_11;
    result = sub_F63050(v15, a2, v14, v11);
    if ( !result )
    {
      a2 = *v13;
      v18 = 0;
      LOBYTE(v14) = *(_BYTE *)(*v13 + 16);
      result = *v13;
      goto LABEL_11;
    }
    v15 = *v13;
  }
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(result + 32)
                                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 > 1 )
  {
    LOBYTE(v14) = *(_BYTE *)(v15 + 16);
    result = v15;
    v18 = 0;
  }
  else
  {
    v16 = sub_F68450(v15, a2, v14, v11, v12) & 0xFFFFFFFFFFFFFFF0LL;
    v18 = *(_QWORD *)v16;
    if ( *(_BYTE *)(*(_QWORD *)v16 + 16LL) != 26 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 )
        v18 = sub_F63050(v18, a2, v17, v11);
      else
        v18 = 0;
    }
    result = *v13;
    LOBYTE(v14) = *(_BYTE *)(*v13 + 16);
  }
LABEL_11:
  if ( (_BYTE)v14 == 33 )
  {
    v19 = *(_QWORD *)(result + 32) & 0xFFFFFFFFFFFFFFF0LL;
    v20 = *(_QWORD *)v19;
    if ( *(_BYTE *)(*(_QWORD *)v19 + 16LL) == 26 )
      goto LABEL_40;
  }
  else
  {
    v29 = *(_QWORD *)(*(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v29 + 16) != 33 || (result = sub_F63050(result, a2, v29, v11)) == 0 )
    {
LABEL_15:
      v21 = *((_DWORD *)a1 + 4);
      if ( !v18 )
        goto LABEL_19;
      goto LABEL_16;
    }
    v30 = *(_QWORD *)(result + 32) & 0xFFFFFFFFFFFFFFF0LL;
    v20 = *(_QWORD *)v30;
    if ( *(_BYTE *)(*(_QWORD *)v30 + 16LL) == 26 )
      goto LABEL_37;
  }
  result = *(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(result + 16) != 26 )
    goto LABEL_15;
  result = sub_F63050(v20, a2, v19, v11);
  if ( !result )
    goto LABEL_15;
LABEL_37:
  result = *v13;
  if ( *(_BYTE *)(*v13 + 16) != 33 )
  {
    v31 = *(_QWORD *)(*(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v31 + 16) != 33 )
      BUG();
    result = sub_F63050(*v13, a2, v31, v11);
  }
LABEL_40:
  result = *(_QWORD *)(result + 32) & 0xFFFFFFFFFFFFFFF0LL;
  v18 = *(_QWORD *)result;
  if ( *(_BYTE *)(*(_QWORD *)result + 16LL) != 26 )
  {
    result = *(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(result + 16) == 26 )
    {
      result = sub_F63050(v18, a2, v19, v11);
      v18 = result;
      goto LABEL_15;
    }
LABEL_43:
    v21 = *((_DWORD *)a1 + 4);
    v18 = 0;
    if ( v21 > v3 )
      goto LABEL_20;
    return result;
  }
  v21 = *((_DWORD *)a1 + 4);
LABEL_16:
  if ( *(char *)(v18 + 19) < 0 )
  {
    result = *(unsigned __int16 *)(v18 + 22);
    if ( v21 > (unsigned int)result )
      v21 = *(unsigned __int16 *)(v18 + 22);
  }
LABEL_19:
  if ( v21 > v3 )
  {
LABEL_20:
    v22 = 0;
    v23 = 4LL * v3;
    v33 = ~v3 + v21;
    while ( !v18 || *(unsigned __int16 *)(v18 + 22) <= (unsigned int)v22 )
    {
      v25 = sub_BFBC70(*((_QWORD *)a1 + 4));
      v28 = v25;
      if ( v25
        && (*(_BYTE *)(v25 + 28) & 0x7Fu) - 34 <= 5
        && (unsigned int)sub_B76070(v25, a2, v26, v27) > (unsigned int)v22 )
      {
        a2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 + 120) + 8 * v22) + 48LL);
        goto LABEL_22;
      }
LABEL_23:
      result = v22 + 1;
      v23 += 4;
      if ( v33 == v22 )
        return result;
      ++v22;
    }
    a2 = *(_QWORD *)(v18 + 8 * v22 + 48);
LABEL_22:
    v24 = sub_BFD550(*(_QWORD *)&a1[4 * ((a1[1] & 8) != 0) + 20 + v23]);
    v4(a3, a2, v24);
    goto LABEL_23;
  }
  return result;
}
