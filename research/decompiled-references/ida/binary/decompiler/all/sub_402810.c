__int64 __fastcall sub_402810(_DWORD *a1, __int64 *a2, int a3, int a4)
{
  int v5; // edx
  int v7; // ebx
  __int64 v9; // rax
  int v10; // r15d
  unsigned __int16 v11; // r13
  unsigned int v12; // r10d
  size_t v13; // rax
  __int64 v14; // r9
  unsigned int v15; // r10d
  size_t v16; // r11
  __int64 v17; // rax
  __int64 v19; // r13
  _BYTE *v20; // rsi
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  size_t v23; // r9
  _BYTE *v24; // rdi
  size_t v25; // rdx
  bool (__fastcall *v26)(_DWORD *, int); // rax
  __int64 v27; // r13
  _BYTE *v28; // rsi
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  size_t v31; // r9
  __int64 v32; // rax
  __int64 v33; // r13
  _BYTE *v34; // rsi
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  size_t v37; // r9
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  __int64 v40; // r9
  _BYTE *v41; // rsi
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int v46; // [rsp+8h] [rbp-60h]
  __int64 ph; // [rsp+8h] [rbp-60h]
  size_t v48; // [rsp+8h] [rbp-60h]
  size_t v49; // [rsp+8h] [rbp-60h]
  __int64 v50; // [rsp+8h] [rbp-60h]
  __int64 v51; // [rsp+8h] [rbp-60h]
  __int64 v52; // [rsp+8h] [rbp-60h]
  unsigned __int64 v53; // [rsp+8h] [rbp-60h]
  __int64 v54; // [rsp+10h] [rbp-58h]
  __int64 v55; // [rsp+10h] [rbp-58h]
  size_t v56; // [rsp+10h] [rbp-58h]
  size_t v57; // [rsp+10h] [rbp-58h]
  size_t v58; // [rsp+10h] [rbp-58h]
  __int64 v59; // [rsp+10h] [rbp-58h]
  void *src; // [rsp+18h] [rbp-50h]
  unsigned int v61; // [rsp+24h] [rbp-44h]
  unsigned int v62; // [rsp+24h] [rbp-44h]
  size_t v63; // [rsp+28h] [rbp-40h]

  if ( a3 < 0 )
  {
    if ( !under_debugger )
      sub_37EA20(52505);
    BUG();
  }
  v5 = 1;
  if ( a2 )
    v5 = a4;
  v7 = a4;
  v9 = sub_3FF820((__int64)a1, a3, v5);
  v10 = a3 - *(_DWORD *)(v9 + 28);
  v11 = *(_WORD *)(v9 + 18);
  if ( v10 )
    v11 = *(_WORD *)(v9 + 16);
  v12 = v7 + v10;
  if ( v11 < (unsigned int)(v7 + v10) )
  {
    v7 = v11 - v10;
    if ( v7 <= 0 )
      v7 = 1;
  }
  v46 = v12;
  if ( a2 )
  {
    v54 = v9;
    src = (void *)(v9 + 8);
    v13 = strlen((const char *)(v9 + 8));
    v14 = v54;
    v15 = v46;
    v16 = v13;
    if ( v13 )
    {
      v24 = (_BYTE *)*a2;
      v25 = v13 + 1;
      if ( a2[2] < v13 + 1 )
      {
        v62 = v46;
        v49 = v13 + 1;
        v63 = v13;
        v32 = qvector_reserve();
        v16 = v63;
        v15 = v62;
        *a2 = v32;
        v14 = v54;
        v24 = (_BYTE *)v32;
        v25 = v49;
      }
      a2[1] = v25;
      v61 = v15;
      v55 = v14;
      v48 = v16;
      memmove(v24, src, v16);
      v14 = v55;
      v15 = v61;
      *(_BYTE *)(*a2 + v48) = 0;
    }
    else
    {
      a2[1] = 0;
    }
    if ( a3 <= 7 || a1[120] <= a3 )
    {
      ph = get_ph();
      if ( (unsigned __int8)getinf() )
        v17 = (unsigned __int8)getinf();
      else
        v17 = *(_QWORD *)(ph + 120);
      if ( v7 != v17 )
        goto LABEL_15;
      if ( v7 == 8 )
        goto LABEL_16;
      v26 = *(bool (__fastcall **)(_DWORD *, int))(*(_QWORD *)a1 + 200LL);
      if ( v26 == sub_3DF310 )
      {
        if ( a3 < a1[123] || a3 >= a1[130] + a1[112] )
          goto LABEL_15;
      }
      else if ( !v26(a1, a3) )
      {
        goto LABEL_15;
      }
      v27 = a2[1];
      v28 = (_BYTE *)*a2;
      v29 = a2[2];
      if ( v27 )
      {
        v30 = v27 + 1;
        v31 = v27 - 1;
        if ( v29 >= v27 + 1 )
          goto LABEL_52;
      }
      else
      {
        if ( v29 > 1 )
        {
          a2[1] = 2;
          v28[1] = 0;
LABEL_54:
          *(_BYTE *)*a2 = 102;
          goto LABEL_15;
        }
        v31 = 0;
        v27 = 1;
        v30 = 2;
      }
      v57 = v31;
      v51 = v30;
      v42 = qvector_reserve();
      v31 = v57;
      v30 = v51;
      *a2 = v42;
      v28 = (_BYTE *)v42;
LABEL_52:
      a2[1] = v30;
      v28[v27] = 0;
      if ( v31 )
        memmove((void *)(*a2 + 1), (const void *)*a2, v31);
      goto LABEL_54;
    }
    if ( v15 == 1 )
    {
      if ( *(_BYTE *)(*a2 + 1) == 120 )
        *(_BYTE *)(*a2 + 1) = 108;
      goto LABEL_15;
    }
    if ( v15 <= 2 )
    {
LABEL_15:
      if ( v7 != 16 )
      {
LABEL_16:
        if ( a1[140] <= a3 && a1[155] >= a3 )
          sub_F3E30(a2);
        if ( a1[21] != 8 || v7 == 32 )
          goto LABEL_21;
        goto LABEL_43;
      }
      if ( a1[21] != 8 )
      {
LABEL_21:
        if ( v10 )
          sub_F3E30(a2);
        return (unsigned int)v7;
      }
LABEL_43:
      if ( a1[156] <= a3 && a1[171] >= a3 )
        sub_F3E30(a2);
      goto LABEL_21;
    }
    if ( v11 == 4 || v11 > 4u && v15 <= 4 )
    {
      v19 = a2[1];
      if ( a1[103] <= a3 && a1[110] + a1[20] > a3 )
      {
        if ( v19 )
        {
          v39 = v19 + 1;
          v40 = a2[1];
          --v19;
        }
        else
        {
          v40 = 1;
          v39 = 2;
        }
        v41 = (_BYTE *)*a2;
        if ( a2[2] < v39 )
        {
          v59 = v40;
          v53 = v39;
          v45 = qvector_reserve();
          v40 = v59;
          v39 = v53;
          *a2 = v45;
          v41 = (_BYTE *)v45;
        }
        a2[1] = v39;
        v41[v19] = 100;
        *(_BYTE *)(*a2 + v40) = 0;
        goto LABEL_15;
      }
      v20 = (_BYTE *)*a2;
      v21 = a2[2];
      if ( v19 )
      {
        v22 = v19 + 1;
        v23 = v19 - 1;
        if ( v21 >= v19 + 1 )
          goto LABEL_36;
      }
      else
      {
        if ( v21 > 1 )
        {
          a2[1] = 2;
          v20[1] = 0;
LABEL_38:
          *(_BYTE *)*a2 = 101;
          goto LABEL_15;
        }
        v23 = 0;
        v19 = 1;
        v22 = 2;
      }
      v56 = v23;
      v50 = v22;
      v38 = qvector_reserve();
      v23 = v56;
      v22 = v50;
      *a2 = v38;
      v20 = (_BYTE *)v38;
LABEL_36:
      a2[1] = v22;
      v20[v19] = 0;
      if ( v23 )
        memmove((void *)(*a2 + 1), (const void *)*a2, v23);
      goto LABEL_38;
    }
    if ( v11 <= 4u )
      goto LABEL_15;
    if ( a1[21] == 8 )
    {
      v43 = *(_DWORD *)(v14 + 28);
      if ( v43 >= a1[103] && v43 <= a1[110] )
      {
        if ( v7 != 16 )
          goto LABEL_16;
        goto LABEL_43;
      }
    }
    v33 = a2[1];
    v34 = (_BYTE *)*a2;
    v35 = a2[2];
    if ( v33 )
    {
      v36 = v33 + 1;
      v37 = v33 - 1;
      if ( v35 >= v33 + 1 )
        goto LABEL_62;
    }
    else
    {
      if ( v35 > 1 )
      {
        a2[1] = 2;
        v34[1] = 0;
LABEL_64:
        *(_BYTE *)*a2 = 114;
        goto LABEL_15;
      }
      v37 = 0;
      v33 = 1;
      v36 = 2;
    }
    v58 = v37;
    v52 = v36;
    v44 = qvector_reserve();
    v37 = v58;
    v36 = v52;
    *a2 = v44;
    v34 = (_BYTE *)v44;
LABEL_62:
    a2[1] = v36;
    v34[v33] = 0;
    if ( v37 )
      memmove((void *)(*a2 + 1), (const void *)*a2, v37);
    goto LABEL_64;
  }
  return (unsigned int)v7;
}
