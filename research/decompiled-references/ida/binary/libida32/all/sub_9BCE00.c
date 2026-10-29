_QWORD *__fastcall sub_9BCE00(__int64 **a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v7; // rax
  _QWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r12
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  __int64 v15; // rax
  __int64 *v16; // rdx
  unsigned __int64 v17; // rax
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r9
  _QWORD *v22; // r12
  __int64 v23; // r8
  __int64 v24; // r13
  __int64 v25; // r8
  unsigned __int64 *v26; // r13
  _QWORD *v27; // rax
  __int64 *v28; // rdi
  __int64 v29; // rax
  _QWORD *v30; // rbx
  _QWORD *v31; // rax
  __int64 *v32; // rdi
  __int64 v33; // rdx
  _QWORD *result; // rax
  __int64 v35; // r13
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  __int64 v41; // rdi
  int v42; // edx
  __int64 v43; // r12
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // r8
  __int64 v47; // r9
  int v48; // eax
  unsigned __int64 v49; // rdx
  unsigned __int64 *v50; // [rsp+0h] [rbp-98h]
  unsigned __int64 v51; // [rsp+0h] [rbp-98h]
  __int64 v52; // [rsp+8h] [rbp-90h]
  unsigned __int64 v53[4]; // [rsp+10h] [rbp-88h] BYREF
  _QWORD *v54; // [rsp+30h] [rbp-68h] BYREF
  __int64 v55; // [rsp+38h] [rbp-60h]
  unsigned __int64 v56; // [rsp+40h] [rbp-58h]
  int v57; // [rsp+48h] [rbp-50h]
  unsigned __int64 v58; // [rsp+50h] [rbp-48h]
  char v59; // [rsp+58h] [rbp-40h]

  v7 = sub_BD7F30(*(_QWORD *)(a2 + 32));
  if ( !v7 || (*(_BYTE *)(v7 + 28) & 0x7Fu) - 34 > 5 )
    goto LABEL_13;
  v11 = *(_QWORD *)(v7 + 112);
  v12 = *(_QWORD *)(v11 + 104);
  v13 = v12 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v12 & 1) == 0 )
  {
    v8 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v12 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v14 = v12 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v12 & 2) == 0 )
        goto LABEL_6;
      v35 = v8[2295];
      v36 = v11 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v35 )
      {
        v37 = v8[294];
        v8[304] += 24LL;
        v38 = (v37 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v8[295] >= v38 + 24 && v37 )
        {
          v8[294] = v38 + 24;
          v39 = (v37 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v39 = sub_962430((__int64)(v8 + 294), 24, 24, 3, v9, v10);
          v38 = v39 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v39 = v35;
        v36 = v38 | 4;
        *(_DWORD *)(v39 + 8) = 0;
        *(_QWORD *)(v39 + 16) = v11;
      }
      v13 = v36 & 0xFFFFFFFFFFFFFFFELL;
      v12 = v13 | 1;
      *(_QWORD *)(v11 + 104) = v13 | 1;
    }
  }
  v40 = v12 & 0xFFFFFFFFFFFFFFF8LL;
  v14 = v40;
  if ( v13 )
  {
    if ( (v13 & 4) != 0 )
    {
      v14 = 0;
      if ( v40 )
      {
        v41 = *(_QWORD *)v40;
        v42 = *(_DWORD *)(*(_QWORD *)v40 + 12LL);
        if ( *(_DWORD *)(v40 + 8) != v42 )
        {
          *(_DWORD *)(v40 + 8) = v42;
          v51 = v40;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v41 + 152LL))(v41, v11);
          v40 = v51;
        }
        v14 = *(_QWORD *)(v40 + 16);
      }
    }
  }
LABEL_6:
  if ( (*(_BYTE *)(v14 + 29) & 1) != 0 )
  {
    v15 = sub_B68690(v14);
    v16 = *(__int64 **)v15;
    v17 = *(_QWORD *)v15 + 8LL * *(unsigned int *)(v15 + 8);
    if ( (unsigned __int64)v16 < v17 )
    {
      v8 = v16;
      while ( *(_WORD *)(*v8 + 36LL) != 242 )
      {
        if ( (_QWORD *)v17 == ++v8 )
          goto LABEL_13;
      }
      if ( (_QWORD *)v17 == v8 )
        goto LABEL_13;
      goto LABEL_37;
    }
    if ( v16 != (__int64 *)v17 )
    {
      if ( *(_WORD *)(*(_QWORD *)v17 + 36LL) != 242 )
      {
        v18 = (__int64 *)(v17 + 8);
        do
        {
          v8 = v18;
          if ( v16 == v18 )
            goto LABEL_13;
          v19 = *v18++;
        }
        while ( *(_WORD *)(v19 + 36) != 242 );
      }
LABEL_37:
      while ( 1 )
      {
        v43 = *v16;
        if ( *(_WORD *)(*v16 + 36) == 242 )
          break;
        ++v16;
      }
      v44 = *(_QWORD *)(a2 + 32);
      v54 = a3;
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v58 = 0;
      v59 = 0;
      v45 = sub_BD7F30(v44);
      if ( v45 && (*(_BYTE *)(v45 + 28) & 0x7Fu) - 34 >= 6 )
        v45 = 0;
      v55 = v45;
      v48 = *(_DWORD *)(a2 + 16);
      v49 = *(_QWORD *)(v43 + 40);
      v56 = a4 & 0xFFFFFFFFFFFFFFFDLL;
      v57 = v48;
      v58 = (a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32) & 0xFFFFFFFFFFFFFFFBLL;
      sub_9BC840(v53, a1, v49, &v54, v46, v47);
      return (_QWORD *)(v53[0] & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
LABEL_13:
  v22 = sub_9BB7E0((__int64)a1, *(_QWORD *)(a2 + 32), a3, (__int64)v8);
  v23 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32;
  v24 = v23 + 8LL * *(unsigned int *)(a2 + 16);
  v25 = a2 + v23;
  v50 = (unsigned __int64 *)(a2 + v24);
  if ( a2 + v24 != v25 )
  {
    v26 = (unsigned __int64 *)v25;
    while ( 1 )
    {
      v27 = sub_9BB7E0((__int64)a1, *v26, a3, v20);
      v28 = *a1;
      v21 = (__int64)v27;
      v29 = **a1;
      v28[10] += 32;
      v30 = (_QWORD *)((v29 + 15) & 0xFFFFFFFFFFFFFFF0LL);
      if ( v28[1] >= (unsigned __int64)(v30 + 4) && v29 )
      {
        *v28 = (__int64)(v30 + 4);
        ++v26;
        *v30 = 10;
        *(_QWORD *)&byte_8[(v29 + 15) & 0xFFFFFFFFFFFFFFF0LL] = 0;
        *(_QWORD *)((char *)&word_10 + ((v29 + 15) & 0xFFFFFFFFFFFFFFF0LL)) = v22;
        *(__int64 *)((char *)&qword_18 + ((v29 + 15) & 0xFFFFFFFFFFFFFFF0LL)) = v21;
        if ( v50 == v26 )
          goto LABEL_20;
      }
      else
      {
        v52 = v21;
        v31 = (_QWORD *)sub_962430((__int64)v28, 32, 32, 4, v25, v21);
        v21 = v52;
        ++v26;
        v30 = v31;
        *v31 = 10;
        v31[1] = 0;
        v31[2] = v22;
        v31[3] = v52;
        if ( v50 == v26 )
          goto LABEL_20;
      }
      v22 = v30;
    }
  }
  v30 = v22;
LABEL_20:
  v32 = *a1;
  v33 = **a1;
  v32[10] += 32;
  result = (_QWORD *)((v33 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  if ( v32[1] >= (unsigned __int64)(result + 4) && v33 )
    *v32 = (__int64)(result + 4);
  else
    result = (_QWORD *)sub_962430((__int64)v32, 32, 32, 4, v25, v21);
  *result = 13;
  result[1] = 0;
  result[2] = v30;
  result[3] = a2;
  return result;
}

