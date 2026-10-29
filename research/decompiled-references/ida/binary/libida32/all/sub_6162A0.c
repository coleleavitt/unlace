unsigned __int64 __fastcall sub_6162A0(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned int v3; // r13d
  unsigned int v5; // esi
  __int64 v6; // rax
  char v7; // bp
  _BYTE *v8; // rsi
  char v9; // bp
  _BYTE *v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  char v13; // bp
  _BYTE *v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  char v17; // bp
  _BYTE *v18; // rsi
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  char v21; // bp
  _BYTE *v22; // rsi
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  char v25; // bp
  _BYTE *v26; // rsi
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rax
  size_t v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // r10
  __int64 v34; // rax
  __int64 v35; // r9
  size_t v36; // r8
  __int64 v37; // r15
  unsigned __int64 v38; // r9
  char *v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rax
  char v42; // bl
  _BYTE *v43; // rsi
  size_t v44; // rcx
  char *v46; // rsi
  __int64 v47; // rax
  unsigned __int64 v48; // [rsp+0h] [rbp-A0h]
  size_t n; // [rsp+8h] [rbp-98h]
  __int64 v50; // [rsp+10h] [rbp-90h]
  void *ptr; // [rsp+18h] [rbp-88h] BYREF
  __int128 v52; // [rsp+20h] [rbp-80h]
  __int64 v53; // [rsp+38h] [rbp-68h] BYREF
  int v54; // [rsp+40h] [rbp-60h]
  __int64 v55; // [rsp+48h] [rbp-58h]
  _BYTE src[3]; // [rsp+5Dh] [rbp-43h] BYREF
  _QWORD v57[8]; // [rsp+60h] [rbp-40h] BYREF

  v3 = 75 - a3;
  v57[0] = __readfsqword(0x28u);
  v5 = *(_DWORD *)a1;
  v52 = 0;
  ptr = nullptr;
  sub_407AD0((__int64 *)&ptr, v5);
  v6 = v52;
  v7 = *(_BYTE *)(a1 + 4);
  v8 = ptr;
  if ( *((_QWORD *)&v52 + 1) < (unsigned __int64)(v52 + 1) )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v52 + 1, 1);
    v8 = ptr;
    v6 = v52;
  }
  v8[v6] = v7;
  v9 = *(_BYTE *)(a1 + 5);
  v10 = ptr;
  v11 = v52 + 1;
  v12 = v52 + 2;
  *(_QWORD *)&v52 = v52 + 1;
  if ( *((_QWORD *)&v52 + 1) < v12 )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v12, 1);
    v10 = ptr;
    v11 = v52;
  }
  v10[v11] = v9;
  v13 = *(_BYTE *)(a1 + 6);
  v14 = ptr;
  v15 = v52 + 1;
  v16 = v52 + 2;
  *(_QWORD *)&v52 = v52 + 1;
  if ( *((_QWORD *)&v52 + 1) < v16 )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v16, 1);
    v14 = ptr;
    v15 = v52;
  }
  v14[v15] = v13;
  v17 = *(_BYTE *)(a1 + 7);
  v18 = ptr;
  v19 = v52 + 1;
  v20 = v52 + 2;
  *(_QWORD *)&v52 = v52 + 1;
  if ( *((_QWORD *)&v52 + 1) < v20 )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v20, 1);
    v18 = ptr;
    v19 = v52;
  }
  v18[v19] = v17;
  v21 = *(_BYTE *)(a1 + 8);
  v22 = ptr;
  v23 = v52 + 1;
  v24 = v52 + 2;
  *(_QWORD *)&v52 = v52 + 1;
  if ( *((_QWORD *)&v52 + 1) < v24 )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v24, 1);
    v22 = ptr;
    v23 = v52;
  }
  v22[v23] = v21;
  v25 = *(_BYTE *)(a1 + 9);
  v26 = ptr;
  v27 = v52 + 1;
  v28 = v52 + 2;
  *(_QWORD *)&v52 = v52 + 1;
  if ( *((_QWORD *)&v52 + 1) < v28 )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v28, 1);
    v26 = ptr;
    v27 = v52;
  }
  v26[v27] = v25;
  v29 = *(unsigned __int16 *)(a1 + 10);
  *(_QWORD *)&v52 = v52 + 1;
  v30 = pack_dw(src, v57, v29) - (_QWORD)src;
  v31 = v30;
  if ( v30 )
  {
    v32 = v52;
    v33 = v52 + v30;
    if ( __CFADD__((_QWORD)v52, v30) )
    {
      if ( (unsigned __int64)v52 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v52 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v52 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_18:
        memcpy((char *)ptr + v32, src, v31);
        goto LABEL_19;
      }
      v33 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v46 = (char *)ptr;
    v47 = v52;
    if ( *((_QWORD *)&v52 + 1) < v33 )
    {
      v50 = v52;
      n = v31;
      v48 = v33;
      ptr = (void *)qvector_reserve(&ptr, ptr, v33, 1);
      v46 = (char *)ptr;
      v32 = v50;
      v47 = v52;
      v31 = n;
      v33 = v48;
    }
    v50 = v32;
    n = v31;
    v48 = v33;
    memset(&v46[v47], 0, v33 - v47);
    v31 = n;
    v32 = v50;
    *(_QWORD *)&v52 = v48;
    goto LABEL_18;
  }
LABEL_19:
  v34 = pack_dw(src, v57, *(unsigned __int16 *)(a1 + 12)) - (_QWORD)src;
  v36 = v34;
  if ( !v34 )
    goto LABEL_25;
  v37 = v52;
  v38 = v34 + v52;
  if ( __CFADD__(v34, (_QWORD)v52) )
  {
    if ( (unsigned __int64)v52 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v52 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v52 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_24;
    }
    v38 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v39 = (char *)ptr;
  v40 = v52;
  if ( *((_QWORD *)&v52 + 1) < v38 )
  {
    n = v36;
    v48 = v38;
    ptr = (void *)qvector_reserve(&ptr, ptr, v38, 1);
    v39 = (char *)ptr;
    v36 = n;
    v40 = v52;
    v38 = v48;
  }
  n = v36;
  v48 = v38;
  memset(&v39[v40], 0, v38 - v40);
  v36 = n;
  *(_QWORD *)&v52 = v48;
LABEL_24:
  memcpy((char *)ptr + v37, src, v36);
LABEL_25:
  v41 = v52;
  v42 = *(_BYTE *)(a1 + 14);
  v43 = ptr;
  if ( *((_QWORD *)&v52 + 1) < (unsigned __int64)(v52 + 1) )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v52 + 1, 1);
    v43 = ptr;
    v41 = v52;
  }
  v43[v41] = v42;
  v53 = a2;
  v44 = v52 + 1;
  *(_QWORD *)&v52 = v52 + 1;
  if ( a2 )
    v54 = *(_DWORD *)(a2 + 1332);
  else
    v54 = -1;
  v55 = a2 + 552;
  sub_615C80((const char *)&v53, (__int64)&qword_2B0AD60[8 * (unsigned __int64)v3], (const char *)ptr, v44, v3, v35);
  if ( ptr )
  {
    *(_QWORD *)&v52 = 0;
    qfree(ptr);
  }
  return v57[0] - __readfsqword(0x28u);
}

