__int64 *__fastcall tiplace_t__print(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r13d
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // r13
  const char *v9; // r14
  size_t v10; // rax
  __int64 v11; // r15
  size_t v12; // r8
  size_t v13; // r9
  char *v14; // rsi
  unsigned __int64 v15; // rdx
  bool v16; // zf
  char *v18; // rsi
  __int64 v19; // rax
  unsigned __int64 v20; // r14
  __int64 v21; // r13
  bool v22; // sf
  char *v23; // r14
  __int64 v24; // rbp
  unsigned __int64 v25; // r15
  __int64 v26; // r8
  char *v27; // rsi
  char v28; // dl
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // [rsp+8h] [rbp-60h]
  __int64 v33; // [rsp+8h] [rbp-60h]
  size_t v34; // [rsp+10h] [rbp-58h]
  size_t v35; // [rsp+18h] [rbp-50h]
  int v36; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v37; // [rsp+28h] [rbp-40h]

  v4 = *(_DWORD *)(a1 + 12);
  v37 = __readfsqword(0x28u);
  v6 = (_QWORD *)sub_540BA0(*(_QWORD *)(qword_2CA1698 + 1464), (__int64 *)a3);
  v7 = sub_5467E0(v6, (__int64 *)a3, v4, 1);
  if ( !v7 )
    return (__int64 *)sub_3573A0((char **)a2);
  v8 = v7;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a3 + 80LL))(a3) )
  {
    *(_QWORD *)(a2 + 8) = 0;
    if ( (*(_BYTE *)(a3 + 112) & 2) != 0 )
    {
      v9 = haystack;
      if ( !*(_QWORD *)(v8 + 16) )
        goto LABEL_5;
    }
    else
    {
      v9 = haystack;
      sub_3573A0((char **)a2);
      if ( !*(_QWORD *)(v8 + 16) )
      {
LABEL_5:
        if ( !haystack )
        {
LABEL_9:
          if ( *(_QWORD *)(a1 + 16) <= 0xFFFFFFFFFFFFFFFDLL )
          {
            v16 = *(_BYTE *)(v8 + 100) == 13;
            v36 = -1;
            if ( v16 )
              (*(void (__fastcall **)(__int64, __int64, _QWORD, int *))(*(_QWORD *)a1 + 176LL))(a1, a3, 0, &v36);
            sub_357520((__int64 *)a2);
            if ( v36 >= 0 )
              sub_357520((__int64 *)a2);
          }
          return (__int64 *)(v37 - __readfsqword(0x28u));
        }
LABEL_6:
        v10 = strlen(v9);
        v11 = *(_QWORD *)(a2 + 8);
        v12 = v10;
        v13 = v10;
        if ( v11 )
        {
          --v11;
          v14 = *(char **)a2;
          v13 = v10 + v11;
          v15 = v10 + v11 + 1;
          if ( *(_QWORD *)(a2 + 16) >= v15 )
            goto LABEL_8;
        }
        else
        {
          v14 = *(char **)a2;
          v15 = v10 + 1;
          if ( *(_QWORD *)(a2 + 16) >= v10 + 1 )
          {
LABEL_8:
            *(_QWORD *)(a2 + 8) = v15;
            v14[v13] = 0;
            memmove((void *)(v11 + *(_QWORD *)a2), v9, v12);
            goto LABEL_9;
          }
        }
        v35 = v10;
        v34 = v13;
        v32 = v15;
        v29 = qvector_reserve(a2, v14, v15, 1);
        v12 = v35;
        v13 = v34;
        *(_QWORD *)a2 = v29;
        v15 = v32;
        v14 = (char *)v29;
        goto LABEL_8;
      }
    }
    v9 = *(const char **)(v8 + 8);
    if ( !v9 )
      goto LABEL_9;
    goto LABEL_6;
  }
  v18 = *(char **)a2;
  if ( *(_QWORD *)(a2 + 16) <= 2u )
  {
    v30 = qvector_reserve(a2, v18, 3, 1);
    *(_QWORD *)a2 = v30;
    v18 = (char *)v30;
  }
  *(_QWORD *)(a2 + 8) = 3;
  *(_WORD *)v18 = 20563;
  *(_BYTE *)(*(_QWORD *)a2 + 2LL) = 0;
  v19 = *(_QWORD *)(a1 + 16);
  if ( v19 == -2 )
  {
    v23 = "+";
    v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 72LL))(a3);
  }
  else
  {
    if ( v19 == -1 )
    {
      if ( !*(_QWORD *)v8 )
        sub_53CC60();
      v20 = *(_QWORD *)(*(_QWORD *)v8 + 24LL);
    }
    else
    {
      v20 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 176LL))(
                                a1,
                                a3,
                                0,
                                0) >> 3;
    }
    v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 72LL))(a3);
    v22 = (v20 & 0x80000000) != 0LL;
    v23 = "+";
    if ( v22 )
      v23 = "-";
  }
  v24 = *(_QWORD *)(a2 + 8);
  if ( v24 )
  {
    v25 = v24 + 1;
    v26 = *(_QWORD *)(a2 + 8);
    --v24;
  }
  else
  {
    v25 = 2;
    v26 = 1;
  }
  v27 = *(char **)a2;
  if ( *(_QWORD *)(a2 + 16) < v25 )
  {
    v33 = v26;
    v31 = qvector_reserve(a2, v27, v25, 1);
    v26 = v33;
    *(_QWORD *)a2 = v31;
    v27 = (char *)v31;
  }
  *(_QWORD *)(a2 + 8) = v25;
  v28 = *v23;
  v27[v26] = 0;
  *(_BYTE *)(*(_QWORD *)a2 + v24) = v28;
  get_func_bitness(v21);
  return sub_357520((__int64 *)a2);
}

