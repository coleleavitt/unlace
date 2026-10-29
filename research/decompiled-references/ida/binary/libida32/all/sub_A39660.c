__int64 __fastcall sub_A39660(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // r13
  unsigned __int8 v7; // al
  int v8; // edx
  unsigned __int64 v9; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // eax
  int v14; // r15d
  _QWORD *v15; // rdi
  int v16; // eax
  int v17; // esi
  unsigned int v18; // ebp
  _BYTE *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  size_t v23; // rdx
  int v24; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int64 v26; // [rsp+18h] [rbp-50h]
  _BYTE v27[72]; // [rsp+20h] [rbp-48h] BYREF

  v3 = (void *)(a1 + 16);
  if ( (*(_BYTE *)(a2 + 29) & 2) != 0 )
    goto LABEL_21;
  v7 = *(_BYTE *)(a2 + 28) & 0x7F;
  v8 = v7;
  if ( (unsigned int)v7 - 34 <= 5 )
  {
    if ( (unsigned int)sub_B53FE0(a2) == 1 )
      goto LABEL_21;
    v7 = *(_BYTE *)(a2 + 28) & 0x7F;
    v8 = v7;
  }
  if ( (unsigned int)(v8 - 40) <= 6 && v7 != 43 )
  {
    v9 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v9 = *(_QWORD *)v9;
    if ( ((*(_BYTE *)(v9 + 8) + 70) & 0x7Fu) > 3 )
    {
LABEL_10:
      if ( (unsigned int)(v8 - 60) <= 1 )
        goto LABEL_11;
LABEL_28:
      if ( v7 != 62 )
      {
LABEL_15:
        if ( (unsigned int)(v8 - 58) > 4 )
          goto LABEL_18;
        goto LABEL_16;
      }
LABEL_13:
      if ( (unsigned int)sub_B54A90(a2) != 1 )
      {
        v7 = *(_BYTE *)(a2 + 28) & 0x7F;
        v8 = v7;
        goto LABEL_15;
      }
LABEL_21:
      *(_QWORD *)a1 = v3;
      *(_QWORD *)(a1 + 8) = 0x200000000LL;
      return a1;
    }
    if ( (unsigned int)sub_B50370(a2) == 1 )
      goto LABEL_21;
    v7 = *(_BYTE *)(a2 + 28) & 0x7F;
    v8 = v7;
  }
  if ( (unsigned int)(v8 - 59) > 2 )
    goto LABEL_10;
  if ( (unsigned int)sub_B73520(a2) == 1 )
    goto LABEL_21;
  v7 = *(_BYTE *)(a2 + 28) & 0x7F;
  v8 = v7;
  if ( (unsigned int)v7 - 60 > 1 )
    goto LABEL_28;
LABEL_11:
  if ( (*(_BYTE *)(a2 + 180) & 7u) <= 1 )
    goto LABEL_21;
  if ( v7 == 62 )
    goto LABEL_13;
LABEL_16:
  if ( (*(_QWORD *)(a2 + 72) & 0x40000LL) != 0 && ((*(_QWORD *)(a2 + 72) >> 16) & 1) == 0 )
    goto LABEL_21;
LABEL_18:
  if ( v7 == 43 || ((v7 + 61) & 0x7Fu) <= 1 || v7 == 47 )
    goto LABEL_21;
  v11 = (v7 + 110) & 0x7F;
  v26 = 0x200000000LL;
  ptr = v27;
  if ( (unsigned __int8)v11 <= 0x39u && (v12 = 0x2784C000000003FLL, _bittest64(&v12, v11)) )
  {
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
    v14 = v13;
    if ( *(int *)(a2 + 24) < 0 )
    {
LABEL_33:
      v15 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
        v15 = (_QWORD *)*v15;
      if ( !v15 || *(int *)(sub_B68470(v15) + 24) >= 0 )
      {
        if ( v14 < 0 )
          v14 = sub_FFD560(a3, (unsigned int)v14);
        sub_A33AC0((__int64 *)&ptr, v14);
      }
      v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
      v17 = v16;
      if ( v16 < 0 )
        v17 = sub_FFDE50(a3, (unsigned int)v16);
      sub_A33AC0((__int64 *)&ptr, v17);
      v18 = v26;
      v19 = ptr;
      goto LABEL_43;
    }
    v21 = (unsigned int)v26;
    v20 = (unsigned int)v26;
    if ( (unsigned int)v26 >= (unsigned __int64)HIDWORD(v26) )
    {
      if ( HIDWORD(v26) < (unsigned __int64)(unsigned int)v26 + 1 )
      {
        v24 = v13;
        sub_22134E0(&ptr, v27, (unsigned int)v26 + 1LL, 4);
        v21 = (unsigned int)v26;
        v13 = v24;
      }
      *((_DWORD *)ptr + v21) = v13;
      v19 = ptr;
      v18 = v26 + 1;
      LODWORD(v26) = v26 + 1;
      goto LABEL_43;
    }
  }
  else
  {
    v14 = *(_DWORD *)(a2 + 24);
    if ( v14 < 0 )
      goto LABEL_33;
    v20 = 0;
  }
  v19 = ptr;
  *((_DWORD *)ptr + v20) = v14;
  v18 = v26 + 1;
  LODWORD(v26) = v26 + 1;
LABEL_43:
  *(_QWORD *)a1 = v3;
  *(_QWORD *)(a1 + 8) = 0x200000000LL;
  if ( v18 )
  {
    if ( v19 != v27 )
    {
      v22 = HIDWORD(v26);
      *(_QWORD *)a1 = v19;
      *(_DWORD *)(a1 + 8) = v18;
      *(_DWORD *)(a1 + 12) = v22;
      return a1;
    }
    v23 = 4LL * v18;
    if ( v18 <= 2uLL
      || (sub_22134E0(a1, v3, v18, 4), v3 = *(void **)a1, v19 = ptr, (v23 = 4LL * (unsigned int)v26) != 0) )
    {
      memcpy(v3, v19, v23);
      v19 = ptr;
    }
    *(_DWORD *)(a1 + 8) = v18;
  }
  if ( v19 != v27 )
    free(v19);
  return a1;
}

