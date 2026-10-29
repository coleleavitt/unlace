__int64 __fastcall sub_F71C00(__int16 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r14d
  void (__fastcall *v4)(__int64, __int64, unsigned __int64); // r12
  __int16 v6; // ax
  unsigned __int64 v7; // rdi
  __int64 v8; // rax
  unsigned __int8 v9; // al
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 *v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // r13
  unsigned __int64 v18; // rdx
  __int64 v19; // rdi
  unsigned int v20; // edx
  __int64 v21; // r15
  __int64 v22; // rbp
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r14
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  __int64 v31; // [rsp+18h] [rbp-40h]

  v3 = 0;
  v4 = (void (__fastcall *)(__int64, __int64, unsigned __int64))a2;
  v6 = *a1;
  v7 = *((_QWORD *)a1 + 4);
  if ( (v6 & 0x1FF) != 0x5B )
  {
LABEL_5:
    result = sub_BD7F30(v7);
    if ( !result )
      goto LABEL_43;
    goto LABEL_6;
  }
  v8 = sub_BD7F30(v7);
  if ( v8 && ((*(_BYTE *)(v8 + 28) + 93) & 0x7Fu) <= 3 )
  {
    v9 = sub_B74490((_QWORD *)v8, a2);
    v7 = *((_QWORD *)a1 + 4);
    v3 = v9 ^ 1;
    goto LABEL_5;
  }
  v3 = 0;
  result = sub_BD7F30(*((_QWORD *)a1 + 4));
  if ( !result )
    goto LABEL_43;
LABEL_6:
  if ( (*(_BYTE *)(result + 28) & 0x7Fu) - 26 > 0x1A )
    goto LABEL_43;
  v13 = (__int64 *)(*(_QWORD *)&byte_8[*(_QWORD *)(result + 48) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
  result = *v13;
  v14 = *(unsigned __int8 *)(*v13 + 16);
  v15 = *v13;
  if ( (_BYTE)v14 != 42 )
  {
    v17 = 0;
    v28 = *(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF0LL;
    a2 = *(_QWORD *)v28;
    if ( *(_BYTE *)(*(_QWORD *)v28 + 16LL) != 42 )
      goto LABEL_11;
    result = sub_F3F310(v15);
    if ( !result )
    {
      a2 = *v13;
      v17 = 0;
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
    v17 = 0;
  }
  else
  {
    v16 = sub_F44710(v15, a2, v14, v11, v12) & 0xFFFFFFFFFFFFFFF0LL;
    v17 = *(_QWORD *)v16;
    if ( *(_BYTE *)(*(_QWORD *)v16 + 16LL) != 26 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 )
        v17 = sub_F3F310(v17);
      else
        v17 = 0;
    }
    result = *v13;
    LOBYTE(v14) = *(_BYTE *)(*v13 + 16);
  }
LABEL_11:
  if ( (_BYTE)v14 == 33 )
  {
    v18 = *(_QWORD *)(result + 32) & 0xFFFFFFFFFFFFFFF0LL;
    v19 = *(_QWORD *)v18;
    if ( *(_BYTE *)(*(_QWORD *)v18 + 16LL) == 26 )
      goto LABEL_40;
  }
  else
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 33
      || (result = sub_F3F310(result)) == 0 )
    {
LABEL_15:
      v20 = *((_DWORD *)a1 + 4);
      if ( !v17 )
        goto LABEL_19;
      goto LABEL_16;
    }
    v29 = *(_QWORD *)(result + 32) & 0xFFFFFFFFFFFFFFF0LL;
    v19 = *(_QWORD *)v29;
    if ( *(_BYTE *)(*(_QWORD *)v29 + 16LL) == 26 )
      goto LABEL_37;
  }
  result = *(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(result + 16) != 26 )
    goto LABEL_15;
  result = sub_F3F310(v19);
  if ( !result )
    goto LABEL_15;
LABEL_37:
  result = *v13;
  if ( *(_BYTE *)(*v13 + 16) != 33 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 33 )
      BUG();
    result = sub_F3F310(*v13);
  }
LABEL_40:
  result = *(_QWORD *)(result + 32) & 0xFFFFFFFFFFFFFFF0LL;
  v17 = *(_QWORD *)result;
  if ( *(_BYTE *)(*(_QWORD *)result + 16LL) != 26 )
  {
    result = *(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(result + 16) == 26 )
    {
      result = sub_F3F310(v17);
      v17 = result;
      goto LABEL_15;
    }
LABEL_43:
    v20 = *((_DWORD *)a1 + 4);
    v17 = 0;
    if ( v20 > v3 )
      goto LABEL_20;
    return result;
  }
  v20 = *((_DWORD *)a1 + 4);
LABEL_16:
  if ( *(char *)(v17 + 19) < 0 )
  {
    result = *(unsigned __int16 *)(v17 + 22);
    if ( v20 > (unsigned int)result )
      v20 = *(unsigned __int16 *)(v17 + 22);
  }
LABEL_19:
  if ( v20 > v3 )
  {
LABEL_20:
    v21 = 0;
    v22 = 4LL * v3;
    v31 = ~v3 + v20;
    while ( !v17 || *(unsigned __int16 *)(v17 + 22) <= (unsigned int)v21 )
    {
      v24 = sub_BD7F30(*((_QWORD *)a1 + 4));
      v27 = v24;
      if ( v24
        && (*(_BYTE *)(v24 + 28) & 0x7Fu) - 34 <= 5
        && (unsigned int)sub_B52330(v24, a2, v25, v26) > (unsigned int)v21 )
      {
        a2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 120) + 8 * v21) + 48LL);
        goto LABEL_22;
      }
LABEL_23:
      result = v21 + 1;
      v22 += 4;
      if ( v31 == v21 )
        return result;
      ++v21;
    }
    a2 = *(_QWORD *)(v17 + 8 * v21 + 48);
LABEL_22:
    v23 = sub_BD9810(*(_QWORD *)&a1[4 * ((a1[1] & 8) != 0) + 20 + v22]);
    v4(a3, a2, v23);
    goto LABEL_23;
  }
  return result;
}

