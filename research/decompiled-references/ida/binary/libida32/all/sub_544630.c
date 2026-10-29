__int64 __fastcall sub_544630(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int8 v7; // cl
  _QWORD *v8; // rcx
  char v9; // si
  int v10; // eax
  _QWORD *v11; // rsi
  const char *v12; // rsi
  char v14; // cl
  _QWORD *v15; // rsi
  unsigned __int64 *v16; // r9
  __int64 v17; // rcx
  unsigned __int64 *v18; // r8
  unsigned __int64 *v19; // r10
  __int64 i; // rcx
  unsigned __int64 *v21; // rsi
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // rax

  v5 = *(_QWORD *)(a1 + 240);
  if ( v5 > 0xFFFFFFFFFFFFFFFDLL )
    goto LABEL_18;
  v6 = *(_QWORD *)(a1 + 248);
  if ( !v6 )
    goto LABEL_18;
  v7 = *(_BYTE *)(v6 + 100);
  if ( v7 == 29 )
  {
LABEL_22:
    *(_BYTE *)(a1 + 344) = 0;
    if ( *(_BYTE *)(v6 + 102) )
      goto LABEL_28;
    v14 = *(_BYTE *)(v6 + 100);
    if ( v14 == 13 )
    {
      v16 = *(unsigned __int64 **)(v6 + 32);
      v17 = 4LL * *(_QWORD *)(v6 + 40);
      v18 = v16;
      v19 = &v16[v17];
      for ( i = (v17 * 8) >> 5; i > 0; i >>= 1 )
      {
        while ( 1 )
        {
          v21 = &v18[4 * (i >> 1)];
          if ( *v21 >= v5 )
            break;
          v18 = v21 + 4;
          i = i - 1 - (i >> 1);
          if ( i <= 0 )
            goto LABEL_33;
        }
      }
LABEL_33:
      if ( v19 == v18 || (v22 = *v18, v5 < *v18) )
      {
        if ( v16 == v18 )
          goto LABEL_28;
        v22 = *(v18 - 4);
        v18 -= 4;
      }
      if ( v5 >= v22 + v18[1] || v19 == v18 )
        goto LABEL_28;
      if ( *((_BYTE *)v18 + 30) )
      {
        *(_BYTE *)(a1 + 344) = 1;
        v22 = *v18;
      }
      if ( v5 != v22 )
        goto LABEL_28;
      v5 = *((int *)v18 + 6);
      if ( (_DWORD)v5 == -1 )
        goto LABEL_28;
      v15 = *(_QWORD **)v6;
      if ( *(_QWORD *)v6 )
        goto LABEL_27;
    }
    else
    {
      if ( v14 != 29 )
        goto LABEL_28;
      v15 = *(_QWORD **)v6;
      if ( *(_QWORD *)v6 )
      {
        if ( v5 < v15[1] )
        {
LABEL_27:
          *(_QWORD *)(a1 + 264) = *v15 + (v5 << 7);
          *(_DWORD *)(a1 + 256) = get_tinfo_property4(*(_QWORD *)(v6 + 88), 297, v5, 0, 0, 0);
          goto LABEL_18;
        }
LABEL_28:
        *(_QWORD *)(a1 + 264) = 0;
        *(_DWORD *)(a1 + 256) = -1;
        goto LABEL_18;
      }
    }
    sub_53CC60();
  }
  if ( v7 > 0x1Du )
  {
    if ( v7 == 45 )
    {
      v11 = *(_QWORD **)v6;
      if ( !*(_QWORD *)v6 )
        sub_53CC80();
      if ( v5 < v11[1] )
      {
        *(_QWORD *)(a1 + 272) = *v11 + 56 * v5;
        *(_DWORD *)(a1 + 256) = get_tinfo_property4(*(_QWORD *)(v6 + 88), 299, v5, 0, 0, 0);
        goto LABEL_18;
      }
      if ( !under_debugger )
        interr(2966);
LABEL_58:
      BUG();
    }
LABEL_52:
    if ( !under_debugger )
      interr(2994);
    goto LABEL_58;
  }
  if ( v7 != 12 )
  {
    if ( v7 == 13 )
      goto LABEL_22;
    goto LABEL_52;
  }
  v8 = *(_QWORD **)v6;
  if ( !*(_QWORD *)v6 )
    sub_53CCA0(a1, a2);
  v9 = *((_BYTE *)v8 + 88);
  v10 = v9 & 0xF0;
  if ( (v9 & 0xF0) == 0xC0 )
    v10 = *((_DWORD *)v8 + 7);
  if ( v10 == 64 || v10 == 208 )
  {
    v23 = v8[1] + 1LL;
  }
  else
  {
    if ( v10 == 32 )
      goto LABEL_12;
    v23 = v8[1];
  }
  if ( v5 >= v23 )
  {
LABEL_12:
    if ( !under_debugger )
      interr(3109);
    goto LABEL_58;
  }
  v24 = 0;
  if ( v5 < v8[1] )
    v24 = *v8 + 80 * v5;
  *(_QWORD *)(a1 + 280) = v24;
  *(_DWORD *)(a1 + 256) = -1;
LABEL_18:
  sub_544100(a1);
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 224LL))(a1, a2, a3);
  v12 = haystack;
  if ( *(_QWORD *)(a1 + 224) )
    v12 = *(const char **)(a1 + 216);
  return (*(__int64 (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)a1 + 192LL))(a1, v12, 0);
}

