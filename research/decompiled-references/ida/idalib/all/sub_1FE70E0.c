void __fastcall sub_1FE70E0(char a1, __int64 a2, _QWORD *a3, _QWORD *a4, _QWORD *a5, _DWORD *a6, char a7)
{
  int v10; // eax
  __int64 v11; // r14
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  _QWORD *v15; // rax
  size_t v16; // rsi
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rax
  _QWORD *v19; // rdi
  size_t v20; // rsi
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rax
  _QWORD *v23; // rdi
  size_t v24; // r14
  _QWORD *v25; // rax
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // rdx
  size_t v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // r14
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  _QWORD *v34; // rax
  int v35; // r8d
  size_t v36; // r14
  _QWORD *v37; // rax
  unsigned __int64 v38; // r15
  unsigned __int64 v39; // rdx
  size_t v40; // rax
  _QWORD *v41; // rax
  size_t v42; // r14
  _QWORD *v43; // rax
  unsigned __int64 v44; // r15
  unsigned __int64 v45; // rdx
  _QWORD *v46; // rax
  __int64 v47; // r12
  unsigned __int64 v48; // r13
  unsigned __int64 v49; // rdx
  _QWORD *v50; // rax
  __int64 v51; // rbx
  unsigned __int64 v52; // r12
  unsigned __int64 v53; // rdx
  _QWORD *v54; // rax
  _DWORD *v55; // [rsp+8h] [rbp-60h]
  _DWORD *v56; // [rsp+8h] [rbp-60h]
  size_t n; // [rsp+18h] [rbp-50h]
  int v58; // [rsp+20h] [rbp-48h] BYREF
  char v59; // [rsp+24h] [rbp-44h]
  char v60; // [rsp+25h] [rbp-43h]

  if ( a7 )
  {
    v24 = a3[1];
    if ( 0x7FFFFFFFFFFFFFFFLL - v24 <= 2 )
      goto LABEL_74;
    v25 = (_QWORD *)*a3;
    v26 = v24 + 3;
    v27 = (_QWORD *)*a3 == a3 + 2 ? 15LL : a3[2];
    if ( v26 > v27 )
    {
      v55 = a6;
      sub_998B30((__int64)a3, v24, 0, "_rm", 3u);
      a6 = v55;
    }
    else
    {
      v28 = (size_t)v25 + v24;
      *(_WORD *)v28 = 29279;
      *(_BYTE *)(v28 + 2) = 109;
    }
    v29 = (_QWORD *)*a3;
    a3[1] = v26;
    *((_BYTE *)v29 + v24 + 3) = 0;
    v30 = a4[1];
    if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v30) <= 2 )
      goto LABEL_74;
    v31 = v30 + 3;
    if ( (_QWORD *)*a4 == a4 + 2 )
      v32 = 15;
    else
      v32 = a4[2];
    if ( v31 > v32 )
    {
      v56 = a6;
      sub_998B30((__int64)a4, a4[1], 0, "_rm", 3u);
      v34 = (_QWORD *)*a4;
      a4[1] = v31;
      a6 = v56;
    }
    else
    {
      v33 = v30 + *a4;
      *(_WORD *)v33 = 29279;
      *(_BYTE *)(v33 + 2) = 109;
      v34 = (_QWORD *)*a4;
      a4[1] = v31;
    }
    *((_BYTE *)v34 + v30 + 3) = 0;
  }
  v10 = *a6;
  if ( !a1 )
  {
    if ( v10 )
      return;
    LOWORD(v58) = 29791;
    goto LABEL_6;
  }
  if ( !v10 )
  {
    v35 = a6[1];
    v58 = 1836414047;
    if ( v35 )
    {
      v42 = a3[1];
      v43 = (_QWORD *)*a3;
      v59 = 0;
      n = 4;
      v44 = v42 + 4;
      if ( v43 == a3 + 2 )
        v45 = 15;
      else
        v45 = a3[2];
      if ( v44 > v45 )
        sub_998B30((__int64)a3, v42, 0, &v58, 4u);
      else
        *(_DWORD *)((char *)v43 + v42) = v58;
      v46 = (_QWORD *)*a3;
      a3[1] = v44;
      *((_BYTE *)v46 + v42 + 4) = 0;
    }
    else
    {
      v36 = a3[1];
      v37 = (_QWORD *)*a3;
      v59 = 117;
      n = 5;
      v60 = 0;
      v38 = v36 + 5;
      if ( v37 == a3 + 2 )
        v39 = 15;
      else
        v39 = a3[2];
      if ( v38 > v39 )
      {
        sub_998B30((__int64)a3, v36, 0, &v58, 5u);
      }
      else
      {
        v40 = (size_t)v37 + v36;
        *(_DWORD *)v40 = v58;
        *(_BYTE *)(v40 + 4) = v59;
      }
      v41 = (_QWORD *)*a3;
      a3[1] = v38;
      *((_BYTE *)v41 + v36 + 5) = 0;
    }
    goto LABEL_11;
  }
  if ( !a6[1] )
  {
    LOWORD(v58) = 27999;
LABEL_6:
    HIWORD(v58) = 117;
    n = 3;
    v11 = a3[1];
    v12 = v11 + 3;
    if ( (_QWORD *)*a3 == a3 + 2 )
      v13 = 15;
    else
      v13 = a3[2];
    if ( v12 > v13 )
    {
      sub_998B30((__int64)a3, a3[1], 0, &v58, 3u);
    }
    else
    {
      v14 = v11 + *a3;
      *(_WORD *)v14 = v58;
      *(_BYTE *)(v14 + 2) = BYTE2(v58);
    }
    v15 = (_QWORD *)*a3;
    a3[1] = v12;
    *((_BYTE *)v15 + v11 + 3) = 0;
LABEL_11:
    v16 = a4[1];
    v17 = n + v16;
    if ( (_QWORD *)*a4 == a4 + 2 )
      v18 = 15;
    else
      v18 = a4[2];
    if ( v17 > v18 )
      sub_998B30((__int64)a4, v16, 0, &v58, n);
    else
      memcpy((void *)(v16 + *a4), &v58, n);
    v19 = (_QWORD *)*a4;
    a4[1] = v17;
    *((_BYTE *)v19 + v17) = 0;
    v20 = a5[1];
    v21 = n + v20;
    if ( (_QWORD *)*a5 == a5 + 2 )
      v22 = 15;
    else
      v22 = a5[2];
    if ( v21 > v22 )
      sub_998B30((__int64)a5, v20, 0, &v58, n);
    else
      memcpy((void *)(v20 + *a5), &v58, n);
    v23 = (_QWORD *)*a5;
    a5[1] = v21;
    *((_BYTE *)v23 + v21) = 0;
    return;
  }
  v47 = a3[1];
  if ( v47 == 0x7FFFFFFFFFFFFFFFLL || v47 == 9223372036854775806LL )
    goto LABEL_74;
  v48 = v47 + 2;
  v49 = (_QWORD *)*a3 == a3 + 2 ? 15LL : a3[2];
  if ( v48 > v49 )
    sub_998B30((__int64)a3, a3[1], 0, "_m", 2u);
  else
    *(_WORD *)(*a3 + v47) = 27999;
  v50 = (_QWORD *)*a3;
  a3[1] = v48;
  *((_BYTE *)v50 + v47 + 2) = 0;
  v51 = a4[1];
  if ( v51 == 0x7FFFFFFFFFFFFFFFLL || v51 == 9223372036854775806LL )
LABEL_74:
    std::__throw_length_error("basic_string::append");
  v52 = v51 + 2;
  if ( (_QWORD *)*a4 == a4 + 2 )
    v53 = 15;
  else
    v53 = a4[2];
  if ( v52 > v53 )
    sub_998B30((__int64)a4, a4[1], 0, "_m", 2u);
  else
    *(_WORD *)(*a4 + v51) = 27999;
  v54 = (_QWORD *)*a4;
  a4[1] = v52;
  *((_BYTE *)v54 + v51 + 2) = 0;
}
