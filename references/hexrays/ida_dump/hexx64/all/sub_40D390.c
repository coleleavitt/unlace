__int64 __fastcall sub_40D390(_DWORD *a1, __int64 *a2, int a3, int a4, double a5)
{
  int v6; // edx
  int v8; // ebx
  __int64 v10; // rax
  int v11; // r15d
  unsigned __int16 v12; // r13
  unsigned int v13; // r10d
  void *v14; // rdi
  size_t v15; // rax
  __int64 v16; // r9
  unsigned int v17; // r10d
  size_t v18; // r11
  __int64 v19; // rax
  __int64 v21; // r13
  _BYTE *v22; // rsi
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  size_t v25; // r9
  size_t v26; // rdx
  bool (__fastcall *v27)(_DWORD *, int); // rax
  __int64 v28; // r13
  __int64 v29; // rsi
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  size_t v32; // r9
  __int64 v33; // rax
  __int64 v34; // r13
  _BYTE *v35; // rsi
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  size_t v38; // r9
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  __int64 v41; // r9
  _BYTE *v42; // rsi
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned int v47; // [rsp+8h] [rbp-60h]
  __int64 ph; // [rsp+8h] [rbp-60h]
  size_t v49; // [rsp+8h] [rbp-60h]
  size_t v50; // [rsp+8h] [rbp-60h]
  __int64 v51; // [rsp+8h] [rbp-60h]
  __int64 v52; // [rsp+8h] [rbp-60h]
  __int64 v53; // [rsp+8h] [rbp-60h]
  unsigned __int64 v54; // [rsp+8h] [rbp-60h]
  __int64 v55; // [rsp+10h] [rbp-58h]
  __int64 v56; // [rsp+10h] [rbp-58h]
  size_t v57; // [rsp+10h] [rbp-58h]
  size_t v58; // [rsp+10h] [rbp-58h]
  size_t v59; // [rsp+10h] [rbp-58h]
  __int64 v60; // [rsp+10h] [rbp-58h]
  void *src; // [rsp+18h] [rbp-50h]
  unsigned int v62; // [rsp+24h] [rbp-44h]
  unsigned int v63; // [rsp+24h] [rbp-44h]
  size_t v64; // [rsp+28h] [rbp-40h]

  if ( a3 < 0 )
  {
    if ( !under_debugger )
      sub_383060(0xCD19u, (__int64)a2, a5);
    BUG();
  }
  v6 = 1;
  if ( a2 )
    v6 = a4;
  v8 = a4;
  v10 = sub_40A3A0((__int64)a1, a3, v6);
  v11 = a3 - *(_DWORD *)(v10 + 28);
  v12 = *(_WORD *)(v10 + 18);
  if ( v11 )
    v12 = *(_WORD *)(v10 + 16);
  v13 = v8 + v11;
  if ( v12 < (unsigned int)(v8 + v11) )
  {
    v8 = v12 - v11;
    if ( v8 <= 0 )
      v8 = 1;
  }
  v47 = v13;
  if ( a2 )
  {
    v55 = v10;
    v14 = (void *)(v10 + 8);
    src = (void *)(v10 + 8);
    v15 = strlen((const char *)(v10 + 8));
    v16 = v55;
    v17 = v47;
    v18 = v15;
    if ( v15 )
    {
      v14 = (void *)*a2;
      v26 = v15 + 1;
      if ( a2[2] < v15 + 1 )
      {
        v63 = v47;
        v50 = v15 + 1;
        v64 = v15;
        v33 = qvector_reserve(a2, *a2, v26, 1);
        v18 = v64;
        v17 = v63;
        *a2 = v33;
        v16 = v55;
        v14 = (void *)v33;
        v26 = v50;
      }
      a2[1] = v26;
      v62 = v17;
      v56 = v16;
      v49 = v18;
      memmove(v14, src, v18);
      v16 = v56;
      v17 = v62;
      *(_BYTE *)(*a2 + v49) = 0;
    }
    else
    {
      a2[1] = 0;
    }
    if ( a3 <= 7 || a1[120] <= a3 )
    {
      ph = get_ph(v14);
      if ( (unsigned __int8)getinf(66) )
        v19 = (unsigned __int8)getinf(66);
      else
        v19 = *(_QWORD *)(ph + 120);
      if ( v8 != v19 )
        goto LABEL_15;
      if ( v8 == 8 )
        goto LABEL_16;
      v27 = *(bool (__fastcall **)(_DWORD *, int))(*(_QWORD *)a1 + 200LL);
      if ( v27 == sub_3E9F80 )
      {
        if ( a3 < a1[123] || a3 >= a1[130] + a1[112] )
          goto LABEL_15;
      }
      else if ( !v27(a1, a3) )
      {
        goto LABEL_15;
      }
      v28 = a2[1];
      v29 = *a2;
      v30 = a2[2];
      if ( v28 )
      {
        v31 = v28 + 1;
        v32 = v28 - 1;
        if ( v30 >= v28 + 1 )
          goto LABEL_52;
      }
      else
      {
        if ( v30 > 1 )
        {
          a2[1] = 2;
          *(_BYTE *)(v29 + 1) = 0;
LABEL_54:
          *(_BYTE *)*a2 = 102;
          goto LABEL_15;
        }
        v32 = 0;
        v28 = 1;
        v31 = 2;
      }
      v58 = v32;
      v52 = v31;
      v43 = qvector_reserve(a2, v29, v31, 1);
      v32 = v58;
      v31 = v52;
      *a2 = v43;
      v29 = v43;
LABEL_52:
      a2[1] = v31;
      *(_BYTE *)(v29 + v28) = 0;
      if ( v32 )
        memmove((void *)(*a2 + 1), (const void *)*a2, v32);
      goto LABEL_54;
    }
    if ( v17 == 1 )
    {
      if ( *(_BYTE *)(*a2 + 1) == 120 )
        *(_BYTE *)(*a2 + 1) = 108;
      goto LABEL_15;
    }
    if ( v17 <= 2 )
    {
LABEL_15:
      if ( v8 != 16 )
      {
LABEL_16:
        if ( a1[140] <= a3 && a1[155] >= a3 )
          sub_FAAD0(a2, (__int64)"_%d", v8);
        if ( a1[21] != 8 || v8 == 32 )
          goto LABEL_21;
        goto LABEL_43;
      }
      if ( a1[21] != 8 )
      {
LABEL_21:
        if ( v11 )
          sub_FAAD0(a2, (__int64)"^%d", v11);
        return (unsigned int)v8;
      }
LABEL_43:
      if ( a1[156] <= a3 && a1[171] >= a3 )
        sub_FAAD0(a2, (__int64)"_%d", v8);
      goto LABEL_21;
    }
    if ( v12 == 4 || v12 > 4u && v17 <= 4 )
    {
      v21 = a2[1];
      if ( a1[103] <= a3 && a1[110] + a1[20] > a3 )
      {
        if ( v21 )
        {
          v40 = v21 + 1;
          v41 = a2[1];
          --v21;
        }
        else
        {
          v41 = 1;
          v40 = 2;
        }
        v42 = (_BYTE *)*a2;
        if ( a2[2] < v40 )
        {
          v60 = v41;
          v54 = v40;
          v46 = qvector_reserve(a2, v42, v40, 1);
          v41 = v60;
          v40 = v54;
          *a2 = v46;
          v42 = (_BYTE *)v46;
        }
        a2[1] = v40;
        v42[v21] = 100;
        *(_BYTE *)(*a2 + v41) = 0;
        goto LABEL_15;
      }
      v22 = (_BYTE *)*a2;
      v23 = a2[2];
      if ( v21 )
      {
        v24 = v21 + 1;
        v25 = v21 - 1;
        if ( v23 >= v21 + 1 )
          goto LABEL_36;
      }
      else
      {
        if ( v23 > 1 )
        {
          a2[1] = 2;
          v22[1] = 0;
LABEL_38:
          *(_BYTE *)*a2 = 101;
          goto LABEL_15;
        }
        v25 = 0;
        v21 = 1;
        v24 = 2;
      }
      v57 = v25;
      v51 = v24;
      v39 = qvector_reserve(a2, v22, v24, 1);
      v25 = v57;
      v24 = v51;
      *a2 = v39;
      v22 = (_BYTE *)v39;
LABEL_36:
      a2[1] = v24;
      v22[v21] = 0;
      if ( v25 )
        memmove((void *)(*a2 + 1), (const void *)*a2, v25);
      goto LABEL_38;
    }
    if ( v12 <= 4u )
      goto LABEL_15;
    if ( a1[21] == 8 )
    {
      v44 = *(_DWORD *)(v16 + 28);
      if ( v44 >= a1[103] && v44 <= a1[110] )
      {
        if ( v8 != 16 )
          goto LABEL_16;
        goto LABEL_43;
      }
    }
    v34 = a2[1];
    v35 = (_BYTE *)*a2;
    v36 = a2[2];
    if ( v34 )
    {
      v37 = v34 + 1;
      v38 = v34 - 1;
      if ( v36 >= v34 + 1 )
        goto LABEL_62;
    }
    else
    {
      if ( v36 > 1 )
      {
        a2[1] = 2;
        v35[1] = 0;
LABEL_64:
        *(_BYTE *)*a2 = 114;
        goto LABEL_15;
      }
      v38 = 0;
      v34 = 1;
      v37 = 2;
    }
    v59 = v38;
    v53 = v37;
    v45 = qvector_reserve(a2, v35, v37, 1);
    v38 = v59;
    v37 = v53;
    *a2 = v45;
    v35 = (_BYTE *)v45;
LABEL_62:
    a2[1] = v37;
    v35[v34] = 0;
    if ( v38 )
      memmove((void *)(*a2 + 1), (const void *)*a2, v38);
    goto LABEL_64;
  }
  return (unsigned int)v8;
}
