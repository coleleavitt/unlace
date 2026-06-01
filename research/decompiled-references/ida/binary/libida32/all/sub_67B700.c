unsigned __int64 __fastcall sub_67B700(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  size_t v7; // rbx
  __int64 v8; // r15
  unsigned __int64 v9; // r13
  __int64 v10; // rax
  char v11; // bl
  __int64 v12; // rax
  _BYTE *v13; // rsi
  __int64 v14; // rax
  char v15; // bl
  _BYTE *v16; // rsi
  char v17; // r15
  __int64 v18; // r15
  __int64 v19; // rax
  size_t v20; // rbx
  __int64 v21; // r13
  unsigned __int64 v22; // r14
  char *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // r15
  __int64 v27; // r14
  char v28; // r13
  __int64 v29; // rax
  size_t v30; // r10
  __int64 v31; // r11
  unsigned __int64 v32; // r8
  char *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  size_t v36; // r9
  __int64 v37; // r8
  unsigned __int64 v38; // r10
  char *v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v43; // rax
  char v44; // dl
  int v45; // r13d
  __int64 *v46; // r14
  __int64 v47; // rax
  size_t v48; // rbx
  __int64 v49; // r15
  unsigned __int64 v50; // r13
  char *v51; // rsi
  __int64 v52; // rax
  char *v53; // rsi
  __int64 v54; // rax
  __int64 *p_ptr; // [rsp+0h] [rbp-A8h]
  unsigned int v56; // [rsp+Ch] [rbp-9Ch]
  _QWORD *v57; // [rsp+10h] [rbp-98h]
  __int64 v58; // [rsp+18h] [rbp-90h]
  unsigned __int64 v59; // [rsp+20h] [rbp-88h]
  size_t n; // [rsp+28h] [rbp-80h]
  __int64 v61; // [rsp+30h] [rbp-78h]
  _QWORD *v62; // [rsp+38h] [rbp-70h]
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __int128 v64; // [rsp+48h] [rbp-60h]
  _BYTE src[3]; // [rsp+63h] [rbp-45h] BYREF
  _BYTE v66[2]; // [rsp+66h] [rbp-42h] BYREF
  _QWORD v67[8]; // [rsp+68h] [rbp-40h] BYREF

  v4 = a3;
  v62 = a1;
  v56 = a2;
  v58 = a4;
  v67[0] = __readfsqword(0x28u);
  p_ptr = (__int64 *)&ptr;
  ptr = nullptr;
  v64 = 0;
  v5 = 0xAAAAAAAAAAAAAAABLL * ((a4 - a3) >> 5);
  ptr = (void *)qvector_reserve(&ptr, 0, 1, 1);
  v57 = v67;
  *((_BYTE *)ptr + v64) = 1;
  *(_QWORD *)&v64 = v64 + 1;
  v6 = pack_dd(src, v67, (unsigned int)v5) - (_QWORD)src;
  v7 = v6;
  if ( v6 )
  {
    v8 = v64;
    v9 = v64 + v6;
    if ( __CFADD__((_QWORD)v64, v6) )
    {
      if ( (unsigned __int64)v64 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v64 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v64 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((char *)ptr + v8, src, v7);
        goto LABEL_7;
      }
      v9 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v53 = (char *)ptr;
    v54 = v64;
    if ( *((_QWORD *)&v64 + 1) < v9 )
    {
      ptr = (void *)qvector_reserve(p_ptr, ptr, v9, 1);
      v53 = (char *)ptr;
      v54 = v64;
    }
    memset(&v53[v54], 0, v9 - v54);
    *(_QWORD *)&v64 = v9;
    goto LABEL_6;
  }
LABEL_7:
  if ( v58 != v4 )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(v4 + 8);
      v11 = 0;
      if ( (_DWORD)v10 )
      {
        v11 = 3;
        if ( (int)v10 <= 1 )
          v11 = (*(_DWORD *)(*(_QWORD *)v4 + 4LL) != -1) + 1;
      }
      v12 = v64;
      v13 = ptr;
      if ( *((_QWORD *)&v64 + 1) < (unsigned __int64)(v64 + 1) )
      {
        ptr = (void *)qvector_reserve(p_ptr, ptr, v64 + 1, 1);
        v13 = ptr;
        v12 = v64;
      }
      v13[v12] = v11;
      *(_QWORD *)&v64 = v64 + 1;
      sub_679790(p_ptr, v11, v4, v56);
      v14 = v64;
      v15 = *(_BYTE *)(v4 + 89);
      v16 = ptr;
      if ( *((_QWORD *)&v64 + 1) < (unsigned __int64)(v64 + 1) )
      {
        ptr = (void *)qvector_reserve(p_ptr, ptr, v64 + 1, 1);
        v16 = ptr;
        v14 = v64;
      }
      v16[v14] = v15;
      *(_QWORD *)&v64 = v64 + 1;
      v17 = *(_BYTE *)(v4 + 89);
      if ( v17 != 1 )
        break;
      v43 = *(_QWORD *)(v4 + 64);
      v44 = v43;
      if ( (_DWORD)v43 )
      {
        if ( (int)v43 > 1 )
        {
          v44 = 48;
          v17 = 3;
        }
        else
        {
          v44 = 16;
          if ( *(_DWORD *)(*(_QWORD *)(v4 + 56) + 4LL) != -1 )
          {
            v44 = 32;
            v17 = 2;
          }
        }
      }
      else
      {
        v17 = 0;
      }
      v45 = v56;
      v46 = p_ptr;
      sub_6798F0(p_ptr, v56, v44, v4 + 24);
      sub_679790(v46, v17, v4 + 56, v45);
      if ( !*(_QWORD *)(v4 + 64) )
      {
        v47 = pack_dd(src, v57, *(_DWORD *)(v4 + 80) - v56) - (_QWORD)src;
        v48 = v47;
        if ( v47 )
        {
          v49 = v64;
          v50 = v64 + v47;
          if ( !__CFADD__((_QWORD)v64, v47) )
            goto LABEL_58;
          if ( (unsigned __int64)v64 <= 0x7FFFFFFFFFFFFFFELL )
          {
            v50 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_58:
            v51 = (char *)ptr;
            v52 = v64;
            if ( *((_QWORD *)&v64 + 1) < v50 )
            {
              ptr = (void *)qvector_reserve(p_ptr, ptr, v50, 1);
              v51 = (char *)ptr;
              v52 = v64;
            }
            memset(&v51[v52], 0, v50 - v52);
            *(_QWORD *)&v64 = v50;
          }
          else if ( (_QWORD)v64 != 0x7FFFFFFFFFFFFFFFLL )
          {
            *(_QWORD *)&v64 = 0x7FFFFFFFFFFFFFFFLL;
          }
          v4 += 96;
          memcpy((char *)ptr + v49, src, v48);
          goto LABEL_41;
        }
      }
LABEL_40:
      v4 += 96;
LABEL_41:
      if ( v58 == v4 )
        goto LABEL_42;
    }
    v18 = *(_QWORD *)(v4 + 32);
    v19 = pack_dw(src, v66, (unsigned __int16)v18) - (_QWORD)src;
    v20 = v19;
    if ( !v19 )
    {
LABEL_22:
      if ( (int)v18 > 0 )
      {
        v25 = 0;
        v26 = 8 * (5LL * (unsigned int)(v18 - 1) + 5);
        while ( 1 )
        {
LABEL_26:
          v27 = v25 + *(_QWORD *)(v4 + 24);
          v28 = 16 * (*(_DWORD *)(v27 + 36) != -1);
          if ( *(_DWORD *)(v27 + 32) != -1 )
            v28 |= 0x20u;
          sub_6798F0(p_ptr, v56, v28, v25 + *(_QWORD *)(v4 + 24));
          if ( (v28 & 0x10) != 0 )
          {
            v29 = pack_dd(src, v57, *(unsigned int *)(v27 + 36)) - (_QWORD)src;
            v30 = v29;
            if ( v29 )
              break;
          }
          if ( (v28 & 0x20) != 0 )
            goto LABEL_35;
LABEL_25:
          v25 += 40;
          if ( v25 == v26 )
            goto LABEL_40;
        }
        v31 = v64;
        v32 = v64 + v29;
        if ( __CFADD__((_QWORD)v64, v29) )
        {
          if ( (unsigned __int64)v64 <= 0x7FFFFFFFFFFFFFFELL )
          {
            v32 = 0x7FFFFFFFFFFFFFFFLL;
            goto LABEL_31;
          }
          if ( (_QWORD)v64 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v64 = 0x7FFFFFFFFFFFFFFFLL;
        }
        else
        {
LABEL_31:
          v33 = (char *)ptr;
          v34 = v64;
          if ( *((_QWORD *)&v64 + 1) < v32 )
          {
            v61 = v64;
            n = v30;
            v59 = v32;
            ptr = (void *)qvector_reserve(p_ptr, ptr, v32, 1);
            v33 = (char *)ptr;
            v31 = v61;
            v34 = v64;
            v30 = n;
            v32 = v59;
          }
          v61 = v31;
          n = v30;
          v59 = v32;
          memset(&v33[v34], 0, v32 - v34);
          v30 = n;
          v31 = v61;
          *(_QWORD *)&v64 = v59;
        }
        memcpy((char *)ptr + v31, src, v30);
        if ( (v28 & 0x20) == 0 )
          goto LABEL_25;
LABEL_35:
        v35 = pack_dd(src, v57, *(unsigned int *)(v27 + 32)) - (_QWORD)src;
        v36 = v35;
        if ( !v35 )
          goto LABEL_25;
        v37 = v64;
        v38 = v64 + v35;
        if ( __CFADD__((_QWORD)v64, v35) )
        {
          if ( (unsigned __int64)v64 > 0x7FFFFFFFFFFFFFFELL )
          {
            if ( (_QWORD)v64 != 0x7FFFFFFFFFFFFFFFLL )
              *(_QWORD *)&v64 = 0x7FFFFFFFFFFFFFFFLL;
            goto LABEL_39;
          }
          v39 = (char *)ptr;
          v40 = v64;
          v38 = 0x7FFFFFFFFFFFFFFFLL;
          if ( *((_QWORD *)&v64 + 1) < 0x7FFFFFFFFFFFFFFFuLL )
          {
LABEL_67:
            v61 = v64;
            n = v36;
            v59 = v38;
            ptr = (void *)qvector_reserve(p_ptr, v39, v38, 1);
            v39 = (char *)ptr;
            v37 = v61;
            v40 = v64;
            v36 = n;
            v38 = v59;
          }
        }
        else
        {
          v39 = (char *)ptr;
          v40 = v64;
          if ( *((_QWORD *)&v64 + 1) < v38 )
            goto LABEL_67;
        }
        v61 = v37;
        n = v36;
        v59 = v38;
        memset(&v39[v40], 0, v38 - v40);
        v36 = n;
        v37 = v61;
        *(_QWORD *)&v64 = v59;
LABEL_39:
        v25 += 40;
        memcpy((char *)ptr + v37, src, v36);
        if ( v25 == v26 )
          goto LABEL_40;
        goto LABEL_26;
      }
      goto LABEL_40;
    }
    v21 = v64;
    v22 = v64 + v19;
    if ( __CFADD__((_QWORD)v64, v19) )
    {
      if ( (unsigned __int64)v64 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v64 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v64 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_21;
      }
      v22 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v23 = (char *)ptr;
    v24 = v64;
    if ( *((_QWORD *)&v64 + 1) < v22 )
    {
      ptr = (void *)qvector_reserve(p_ptr, ptr, v22, 1);
      v23 = (char *)ptr;
      v24 = v64;
    }
    memset(&v23[v24], 0, v22 - v24);
    *(_QWORD *)&v64 = v22;
LABEL_21:
    memcpy((char *)ptr + v21, src, v20);
    goto LABEL_22;
  }
LABEL_42:
  sub_79BB40(v62 + 1, *v62, ptr, v64, v56, 340);
  sub_67AAA0(v62, v56, v41);
  if ( ptr )
  {
    *(_QWORD *)&v64 = 0;
    qfree(ptr);
  }
  return v67[0] - __readfsqword(0x28u);
}

