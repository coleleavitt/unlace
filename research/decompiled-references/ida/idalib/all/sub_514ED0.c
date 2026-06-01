unsigned __int64 __fastcall sub_514ED0(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  __int64 v7; // rax
  size_t v8; // r15
  __int64 v9; // r14
  unsigned __int64 v10; // r8
  __int64 v11; // r15
  __int64 v12; // rax
  size_t v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // r10
  __int64 v16; // rax
  size_t v17; // r15
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  __int64 v20; // rax
  size_t v21; // r15
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r9
  __int64 v24; // rax
  char v25; // bp
  _BYTE *v26; // rsi
  __int64 v27; // rax
  size_t v28; // r12
  __int64 v29; // rbp
  unsigned __int64 v30; // r14
  __int64 v31; // rax
  _BYTE *v32; // rsi
  char *v34; // rsi
  __int64 v35; // rax
  char *v36; // rsi
  __int64 v37; // rax
  char *v38; // rsi
  __int64 v39; // rax
  char *v40; // rsi
  __int64 v41; // rax
  char *v42; // rsi
  __int64 v43; // rax
  unsigned __int64 v44; // [rsp+0h] [rbp-88h]
  unsigned __int64 v45; // [rsp+8h] [rbp-80h]
  size_t v46; // [rsp+10h] [rbp-78h]
  __int64 v47; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int128 v49; // [rsp+28h] [rbp-60h]
  _BYTE src[5]; // [rsp+3Eh] [rbp-4Ah] BYREF
  char v51[5]; // [rsp+43h] [rbp-45h] BYREF
  _QWORD v52[8]; // [rsp+48h] [rbp-40h] BYREF

  v52[0] = __readfsqword(0x28u);
  if ( !(unsigned __int8)must_journal(a1, a2, a3) || a2[2] == a3 && *((_BYTE *)a2 + 24) == a4 )
    return v52[0] - __readfsqword(0x28u);
  v49 = 0;
  ptr = nullptr;
  v7 = pack_dd(src, v51, (unsigned int)a1) - (_QWORD)src;
  v8 = v7;
  if ( v7 )
  {
    v9 = v49;
    v10 = v49 + v7;
    if ( __CFADD__((_QWORD)v49, v7) )
    {
      if ( (unsigned __int64)v49 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v49 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v49 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_9:
        memcpy((char *)ptr + v9, src, v8);
        goto LABEL_10;
      }
      v10 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v34 = (char *)ptr;
    v35 = v49;
    if ( *((_QWORD *)&v49 + 1) < v10 )
    {
      v44 = v10;
      ptr = (void *)qvector_reserve(&ptr, ptr, v10, 1);
      v34 = (char *)ptr;
      v10 = v44;
      v35 = v49;
    }
    v44 = v10;
    memset(&v34[v35], 0, v10 - v35);
    *(_QWORD *)&v49 = v44;
    goto LABEL_9;
  }
LABEL_10:
  v11 = *a2;
  v44 = a2[1];
  v12 = pack_dq(src, v52, *a2) - (_QWORD)src;
  v13 = v12;
  if ( !v12 )
    goto LABEL_16;
  v14 = v49;
  v15 = v49 + v12;
  if ( !__CFADD__((_QWORD)v49, v12) )
    goto LABEL_58;
  if ( (unsigned __int64)v49 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v15 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_58:
    v42 = (char *)ptr;
    v43 = v49;
    if ( *((_QWORD *)&v49 + 1) < v15 )
    {
      v47 = v49;
      v46 = v13;
      v45 = v15;
      ptr = (void *)qvector_reserve(&ptr, ptr, v15, 1);
      v42 = (char *)ptr;
      v14 = v47;
      v43 = v49;
      v13 = v46;
      v15 = v45;
    }
    v47 = v14;
    v46 = v13;
    v45 = v15;
    memset(&v42[v43], 0, v15 - v43);
    v13 = v46;
    v14 = v47;
    *(_QWORD *)&v49 = v45;
    goto LABEL_15;
  }
  if ( (_QWORD)v49 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v49 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_15:
  memcpy((char *)ptr + v14, src, v13);
LABEL_16:
  v16 = pack_dq(src, v52, v44 - v11) - (_QWORD)src;
  v17 = v16;
  if ( !v16 )
    goto LABEL_22;
  v18 = v49;
  v19 = v49 + v16;
  if ( !__CFADD__((_QWORD)v49, v16) )
    goto LABEL_54;
  if ( (unsigned __int64)v49 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v19 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_54:
    v40 = (char *)ptr;
    v41 = v49;
    if ( *((_QWORD *)&v49 + 1) < v19 )
    {
      v44 = v19;
      v45 = v49;
      ptr = (void *)qvector_reserve(&ptr, ptr, v19, 1);
      v40 = (char *)ptr;
      v18 = v45;
      v41 = v49;
      v19 = v44;
    }
    v45 = v18;
    v44 = v19;
    memset(&v40[v41], 0, v19 - v41);
    v18 = v45;
    *(_QWORD *)&v49 = v44;
    goto LABEL_21;
  }
  if ( (_QWORD)v49 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v49 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_21:
  memcpy((char *)ptr + v18, src, v17);
LABEL_22:
  v20 = pack_dq(src, v52, a2[2]) - (_QWORD)src;
  v21 = v20;
  if ( !v20 )
    goto LABEL_28;
  v22 = v49;
  v23 = v49 + v20;
  if ( !__CFADD__((_QWORD)v49, v20) )
    goto LABEL_46;
  if ( (unsigned __int64)v49 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v23 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_46:
    v36 = (char *)ptr;
    v37 = v49;
    if ( *((_QWORD *)&v49 + 1) < v23 )
    {
      v44 = v23;
      v45 = v49;
      ptr = (void *)qvector_reserve(&ptr, ptr, v23, 1);
      v36 = (char *)ptr;
      v22 = v45;
      v37 = v49;
      v23 = v44;
    }
    v45 = v22;
    v44 = v23;
    memset(&v36[v37], 0, v23 - v37);
    v22 = v45;
    *(_QWORD *)&v49 = v44;
    goto LABEL_27;
  }
  if ( (_QWORD)v49 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v49 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_27:
  memcpy((char *)ptr + v22, src, v21);
LABEL_28:
  v24 = v49;
  v25 = *((_BYTE *)a2 + 24);
  v26 = ptr;
  if ( *((_QWORD *)&v49 + 1) < (unsigned __int64)(v49 + 1) )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v49 + 1, 1);
    v26 = ptr;
    v24 = v49;
  }
  v26[v24] = v25;
  *(_QWORD *)&v49 = v49 + 1;
  v27 = pack_dq(src, v52, a3) - (_QWORD)src;
  v28 = v27;
  if ( !v27 )
    goto LABEL_36;
  v29 = v49;
  v30 = v49 + v27;
  if ( !__CFADD__((_QWORD)v49, v27) )
    goto LABEL_50;
  if ( (unsigned __int64)v49 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v30 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_50:
    v38 = (char *)ptr;
    v39 = v49;
    if ( *((_QWORD *)&v49 + 1) < v30 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v30, 1);
      v38 = (char *)ptr;
      v39 = v49;
    }
    memset(&v38[v39], 0, v30 - v39);
    *(_QWORD *)&v49 = v30;
    goto LABEL_35;
  }
  if ( (_QWORD)v49 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v49 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_35:
  memcpy((char *)ptr + v29, src, v28);
LABEL_36:
  v31 = v49;
  v32 = ptr;
  if ( *((_QWORD *)&v49 + 1) < (unsigned __int64)(v49 + 1) )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v49 + 1, 1);
    v32 = ptr;
    v31 = v49;
  }
  v32[v31] = a4;
  *(_QWORD *)&v49 = v49 + 1;
  add_undo_record(187, ptr, v49);
  if ( ptr )
  {
    *(_QWORD *)&v49 = 0;
    qfree(ptr);
  }
  return v52[0] - __readfsqword(0x28u);
}
