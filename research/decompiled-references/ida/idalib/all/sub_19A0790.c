__int64 __fastcall sub_19A0790(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  unsigned __int64 v13; // rax
  __int64 result; // rax
  unsigned __int64 v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rbx
  __int64 v18; // rcx
  bool v19; // zf
  unsigned __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // r15
  __int64 *v23; // r14
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int16 v27; // dx
  unsigned __int64 *v28; // rdx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // [rsp+8h] [rbp-50h]
  _QWORD v33[8]; // [rsp+18h] [rbp-40h] BYREF

  v4 = a2;
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 56) = a3;
  v5 = *(_QWORD *)(a2 + 16);
  if ( (v5 & 4) != 0 )
    v6 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v6 = v5 & 0xFFFFFFFFFFFFFFF8LL;
  v7 = v6 - 64;
  if ( (*(_BYTE *)(v6 + 8) & 0x7Fu) - 58 >= 4 )
    v7 = 0;
  v8 = sub_B8E970(v7 + 64);
  v12 = v8;
  if ( !v8 )
  {
LABEL_10:
    if ( *(_BYTE *)(a1 + 58) )
      goto LABEL_22;
    result = 2;
    if ( *(_DWORD *)(a1 + 16) )
      return result;
    if ( (*(_BYTE *)(v4 + 68) & 0xC) == 0xC || (*(_BYTE *)(v4 + 68) & 0xC) == 0 )
      return 0;
    v15 = sub_B780B0(*(_QWORD *)a1);
    if ( !v15 )
    {
LABEL_22:
      result = 3;
      if ( !*(_BYTE *)(a1 + 57) )
        return result;
    }
    else
    {
      v16 = (_QWORD *)sub_199F930(v15);
      v17 = v16;
      if ( v16 && ((*v16 & 0x100000LL) != 0) != *(_BYTE *)(a1 + 56) )
      {
        v18 = *(unsigned int *)(a1 + 16);
        if ( v18 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 20) )
        {
          sub_2237220(a1 + 8, a1 + 24, v18 + 1, 8);
          v18 = *(unsigned int *)(a1 + 16);
        }
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v18) = v17;
        result = 2;
        ++*(_DWORD *)(a1 + 16);
        return result;
      }
    }
    return 0;
  }
  if ( (*(_BYTE *)(v8 + 28) & 0x7F) != 0x26 )
  {
    do
    {
      v13 = *(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v12 = v13;
      if ( !v13 )
        goto LABEL_10;
    }
    while ( (*(_BYTE *)(v13 + 28) & 0x7F) != 0x26 );
  }
LABEL_24:
  if ( (*(_BYTE *)(v12 + 29) & 2) != 0 )
    goto LABEL_43;
  v19 = (*(_BYTE *)(v12 + 82) & 0x40) == 0;
  v20 = *(_QWORD *)(v12 + 80);
  v33[0] = v12;
  if ( !v19 && (v20 & 0x2000000) == 0 || (v20 & 0x2000000) != 0 )
    goto LABEL_27;
  if ( (*(_BYTE *)(v12 + 83) & 8) == 0 )
  {
    v21 = v12;
    if ( (*(_BYTE *)(v12 + 128) & 1) != 0 || *(_QWORD *)(v12 + 128) )
    {
LABEL_28:
      v22 = sub_B98F20(v21) + 8LL * (unsigned __int16)(*(_DWORD *)(v21 + 84) >> 13);
      v23 = (__int64 *)sub_B98F20(v21);
      if ( (__int64 *)v22 == v23 )
      {
LABEL_43:
        while ( 1 )
        {
          v29 = *(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v12 = v29;
          if ( !v29 )
            goto LABEL_10;
          if ( (*(_BYTE *)(v29 + 28) & 0x7F) == 0x26 )
            goto LABEL_24;
        }
      }
      while ( 1 )
      {
        v9 = *v23;
        v24 = *(_QWORD *)*v23;
        v25 = v24 & 0xFFFFFFFFFFFFFFF8LL;
        if ( ((v24 >> 1) & 3) != 1 )
          v25 = 0;
        if ( *(_QWORD *)a1 != v25 )
          goto LABEL_30;
        v26 = sub_BFBAE0(*(_QWORD *)(v9 + 8));
        v27 = *(_WORD *)v26 & 0x1FF;
        if ( v27 == 53 )
        {
          v28 = *(unsigned __int64 **)(v26 + 16);
          if ( (unsigned int)((__int64)(*(_QWORD *)(v26 + 24) - (_QWORD)v28) >> 3) != 1 )
            goto LABEL_30;
          v26 = sub_BFBAE0(*v28);
          v27 = *(_WORD *)v26 & 0x1FF;
        }
        if ( v27 == 106 )
        {
          if ( ((*(_QWORD *)v26 & 0x100000LL) != 0) == *(_BYTE *)(a1 + 56) )
            return 0;
          v9 = *(unsigned int *)(a1 + 16);
          a2 = *(unsigned int *)(a1 + 20);
          if ( v9 + 1 > a2 )
          {
            a2 = a1 + 24;
            v32 = v26;
            sub_2237220(a1 + 8, a1 + 24, v9 + 1, 8);
            v9 = *(unsigned int *)(a1 + 16);
            v26 = v32;
          }
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v9) = v26;
          ++*(_DWORD *)(a1 + 16);
        }
LABEL_30:
        if ( (__int64 *)v22 == ++v23 )
          goto LABEL_43;
      }
    }
  }
  if ( (*(_BYTE *)(v12 + 83) & 0x40) != 0 )
  {
LABEL_27:
    v21 = v12;
    goto LABEL_28;
  }
  v30 = HIDWORD(v20);
  v21 = v12;
  if ( (v30 & 0x20) != 0 || (v30 & 0x40) != 0 )
    goto LABEL_28;
  if ( sub_B8CF80(v12, a2, *(_BYTE *)(v12 + 83) & 0x40, v9, v10, v11)
    || (a2 = (unsigned __int64)v33, (unsigned __int8)sub_B7D390(v12, (__int64)v33, 0, v31)) )
  {
    v21 = v33[0];
    goto LABEL_28;
  }
  v19 = *(_BYTE *)(a1 + 57) == 0;
  *(_BYTE *)(a1 + 58) = 1;
  if ( v19 )
    goto LABEL_43;
  return 0;
}
