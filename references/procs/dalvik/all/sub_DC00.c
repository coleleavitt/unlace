__int64 __fastcall sub_DC00(__int64 a1, int a2, int a3, unsigned int *a4)
{
  __int64 v5; // rax
  size_t v6; // rbp
  __int64 v7; // r13
  unsigned __int64 v8; // r14
  __int64 v9; // rax
  size_t v10; // rbp
  __int64 v11; // r14
  unsigned __int64 v12; // r15
  __int64 v13; // rbp
  const char *v14; // rsi
  _BYTE *v15; // rdi
  int v16; // r15d
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  size_t v21; // r14
  __int64 v22; // r8
  unsigned __int64 v23; // r9
  __int64 v24; // r14
  __int64 v25; // rbp
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // r9
  __int64 v29; // rax
  size_t v30; // r15
  unsigned __int64 v31; // r10
  unsigned __int64 v32; // rax
  unsigned int v33; // ebx
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rax
  unsigned __int64 v41; // [rsp+0h] [rbp-88h]
  __int64 v42; // [rsp+8h] [rbp-80h]
  __int64 v43; // [rsp+10h] [rbp-78h]
  int v44; // [rsp+18h] [rbp-70h]
  int v45; // [rsp+1Ch] [rbp-6Ch]
  __int64 v46; // [rsp+20h] [rbp-68h] BYREF
  __int128 v47; // [rsp+28h] [rbp-60h]
  _BYTE src[3]; // [rsp+43h] [rbp-45h] BYREF
  _BYTE v49[2]; // [rsp+46h] [rbp-42h] BYREF
  unsigned __int64 v50[8]; // [rsp+48h] [rbp-40h] BYREF

  v43 = a1;
  v44 = a2;
  v45 = a3;
  v50[0] = __readfsqword(0x28u);
  v47 = 0;
  v46 = 0;
  v5 = pack_dd(src, v50, *a4) - (_QWORD)src;
  v6 = v5;
  if ( v5 )
  {
    v7 = v47;
    v8 = v47 + v5;
    if ( __CFADD__((_QWORD)v47, v5) )
    {
      if ( (unsigned __int64)v47 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v47 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v47 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v7 + v46), src, v6);
        goto LABEL_7;
      }
      v8 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v39 = v46;
    v40 = v47;
    if ( *((_QWORD *)&v47 + 1) < v8 )
    {
      v46 = qvector_reserve(&v46, v46, v8, 1);
      v39 = v46;
      v40 = v47;
    }
    memset((void *)(v39 + v40), 0, v8 - v40);
    *(_QWORD *)&v47 = v8;
    goto LABEL_6;
  }
LABEL_7:
  v9 = pack_dw(src, v49, *((unsigned __int16 *)a4 + 2)) - (_QWORD)src;
  v10 = v9;
  if ( !v9 )
    goto LABEL_13;
  v11 = v47;
  v12 = v47 + v9;
  if ( !__CFADD__((_QWORD)v47, v9) )
    goto LABEL_40;
  if ( (unsigned __int64)v47 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v12 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_40:
    v35 = v46;
    v36 = v47;
    if ( *((_QWORD *)&v47 + 1) < v12 )
    {
      v46 = qvector_reserve(&v46, v46, v12, 1);
      v35 = v46;
      v36 = v47;
    }
    memset((void *)(v35 + v36), 0, v12 - v36);
    *(_QWORD *)&v47 = v12;
    goto LABEL_12;
  }
  if ( (_QWORD)v47 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v47 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_12:
  memcpy((void *)(v11 + v46), src, v10);
LABEL_13:
  v13 = *((_QWORD *)a4 + 2);
  v14 = v49;
  v15 = src;
  v16 = (unsigned __int16)v13;
  v17 = pack_dw(src, v49, (unsigned __int16)v13) - (_QWORD)src;
  v21 = v17;
  if ( !v17 )
    goto LABEL_19;
  v22 = v47;
  v23 = v47 + v17;
  if ( !__CFADD__((_QWORD)v47, v17) )
    goto LABEL_44;
  if ( (unsigned __int64)v47 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v23 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_44:
    v37 = v46;
    v38 = v47;
    if ( *((_QWORD *)&v47 + 1) < v23 )
    {
      v41 = v23;
      v42 = v47;
      v46 = qvector_reserve(&v46, v46, v23, 1);
      v37 = v46;
      v22 = v42;
      v38 = v47;
      v23 = v41;
    }
    v42 = v22;
    v41 = v23;
    memset((void *)(v37 + v38), 0, v23 - v38);
    v22 = v42;
    *(_QWORD *)&v47 = v41;
    goto LABEL_18;
  }
  if ( (_QWORD)v47 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v47 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_18:
  v14 = src;
  v15 = (_BYTE *)(v22 + v46);
  memcpy((void *)(v22 + v46), src, v21);
LABEL_19:
  v24 = 0;
  v25 = 2LL * (unsigned __int16)v13;
  if ( v16 )
  {
    do
    {
      v14 = v49;
      v15 = src;
      v29 = pack_dw(src, v49, *(unsigned __int16 *)(*((_QWORD *)a4 + 1) + v24)) - (_QWORD)src;
      v30 = v29;
      if ( !v29 )
        goto LABEL_24;
      v28 = v47;
      v31 = v47 + v29;
      if ( __CFADD__((_QWORD)v47, v29) )
      {
        if ( (unsigned __int64)v47 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v47 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v47 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_23;
        }
        v26 = v46;
        v27 = v47;
        v31 = 0x7FFFFFFFFFFFFFFFLL;
        if ( *((_QWORD *)&v47 + 1) < 0x7FFFFFFFFFFFFFFFuLL )
        {
LABEL_37:
          v41 = v31;
          v42 = v47;
          v46 = qvector_reserve(&v46, v26, v31, 1);
          v26 = v46;
          v28 = v42;
          v27 = v47;
          v31 = v41;
        }
      }
      else
      {
        v26 = v46;
        v27 = v47;
        if ( *((_QWORD *)&v47 + 1) < v31 )
          goto LABEL_37;
      }
      v42 = v28;
      v41 = v31;
      memset((void *)(v26 + v27), 0, v31 - v27);
      v28 = v42;
      *(_QWORD *)&v47 = v41;
LABEL_23:
      v14 = src;
      v15 = (_BYTE *)(v28 + v46);
      memcpy((void *)(v28 + v46), src, v30);
LABEL_24:
      v24 += 2;
    }
    while ( v24 != v25 );
  }
  if ( (unsigned __int64)v47 > 0x400 )
  {
    v33 = 0;
  }
  else
  {
    v32 = (unsigned int)(v44 - 1);
    if ( v32 >= *(_QWORD *)(v43 + 56) )
      sub_BBD0((__int64)v15, (int)v14, v18, v47, v19, v20, v41);
    v14 = (const char *)(unsigned __int16)v45;
    v33 = netnode_supset(*(_QWORD *)(*(_QWORD *)(v43 + 48) + 8 * v32), (unsigned __int16)v45, v46, v47, 80);
  }
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    qfree(v46, v14);
  }
  return v33;
}
