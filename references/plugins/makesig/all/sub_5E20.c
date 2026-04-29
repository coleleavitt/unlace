__int64 __fastcall sub_5E20(__int64 a1, void (__fastcall *a2)(__int64 **), __int64 **a3, char a4, _QWORD *a5)
{
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbp
  __int64 *v10; // rax
  __int64 **v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int8 byte; // al
  unsigned __int64 v15; // rbp
  __int64 v16; // r14
  unsigned __int64 v17; // r15
  __int64 v18; // r13
  __int64 v19; // rbp
  __int64 v20; // rsi
  __int64 v21; // rbx
  unsigned __int16 v22; // bx
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // r15
  __int64 v27; // r14
  __int64 v28; // rsi
  unsigned __int64 v29; // rbx
  size_t v30; // r15
  __int64 *v31; // r13
  __int64 *i; // rbx
  const char *v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rsi
  __int64 v36; // r14
  __int64 v37; // r15
  const char *v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rax
  unsigned int v41; // ebx
  __int64 v42; // r8
  __int64 v43; // rsi
  __int64 v44; // r13
  __int64 v45; // r9
  unsigned __int64 v47; // r14
  __int64 v48; // rax
  _DWORD *v49; // r15
  unsigned __int64 bytes; // rax
  __int64 v51; // rbx
  unsigned __int64 v52; // r14
  __int64 v53; // r15
  __int64 v54; // rsi
  __int64 v55; // r14
  unsigned __int64 v56; // r13
  unsigned __int64 v57; // r14
  __int64 *v58; // rax
  __int64 **v59; // rsi
  __int64 v60; // rcx
  __int64 v61; // rdx
  unsigned __int8 v62; // al
  __int64 v63; // rdi
  unsigned __int64 v64; // rax
  __int64 v65; // r14
  size_t v66; // r13
  __int64 v67; // rsi
  __int64 v68; // r10
  __int64 v69; // rsi
  __int64 v70; // r15
  __int64 v71; // r8
  __int64 v72; // [rsp+0h] [rbp-88h]
  __int64 v73; // [rsp+0h] [rbp-88h]
  __int64 v74; // [rsp+8h] [rbp-80h]
  __int64 v75; // [rsp+8h] [rbp-80h]
  const char *v78; // [rsp+30h] [rbp-58h] BYREF
  __int128 v79; // [rsp+38h] [rbp-50h]
  unsigned __int64 v80; // [rsp+48h] [rbp-40h]

  v80 = __readfsqword(0x28u);
  if ( !*a3 || (unsigned __int64)a3[4] <= 7 )
    return 1;
  if ( a4 )
  {
    if ( a3[2] )
    {
      if ( (unsigned __int8)is_uname(a3[1]) )
        goto LABEL_4;
    }
    else if ( (unsigned __int8)is_uname(s1) )
    {
      goto LABEL_4;
    }
    return 1;
  }
LABEL_4:
  a2(a3);
  v6 = (unsigned __int64 *)*a3;
  v79 = 0;
  v78 = nullptr;
  v7 = *v6;
  v8 = v6[1];
  v9 = v7 + 32;
  if ( v7 + 32 > v8 )
    v9 = v8;
  if ( v7 < v9 )
  {
    while ( 1 )
    {
      v10 = a3[7];
      if ( v10 )
      {
        v11 = a3 + 6;
        do
        {
          while ( 1 )
          {
            v12 = v10[2];
            v13 = v10[3];
            if ( v10[4] < v7 )
              break;
            v11 = (__int64 **)v10;
            v10 = (__int64 *)v10[2];
            if ( !v12 )
              goto LABEL_12;
          }
          v10 = (__int64 *)v10[3];
        }
        while ( v13 );
LABEL_12:
        if ( a3 + 6 != v11 && v7 >= (unsigned __int64)v11[4] )
          break;
      }
      byte = get_byte(v7);
      sub_5D60((__int64 *)&v78, (__int64)"%02X", byte);
LABEL_15:
      if ( ++v7 >= v9 )
        goto LABEL_16;
    }
    v42 = v79;
    if ( (_QWORD)v79 )
    {
      v45 = v79 + 1;
      v44 = v79 + 2;
      v43 = (__int64)v78;
      v42 = v79 - 1;
      if ( *((_QWORD *)&v79 + 1) >= (unsigned __int64)(v79 + 2) )
        goto LABEL_47;
    }
    else
    {
      v43 = (__int64)v78;
      v44 = 3;
      v45 = 2;
      if ( *((_QWORD *)&v79 + 1) >= 3u )
      {
LABEL_47:
        *(_QWORD *)&v79 = v44;
        *(_BYTE *)(v43 + v45) = 0;
        *(_WORD *)&v78[v42] = 11822;
        goto LABEL_15;
      }
    }
    v72 = v42;
    v74 = v45;
    v78 = (const char *)qvector_reserve(&v78, v43, v44, 1);
    v45 = v74;
    v43 = (__int64)v78;
    v42 = v72;
    goto LABEL_47;
  }
LABEL_16:
  v15 = (unsigned __int64)a3[4];
  if ( v15 > 0x1F )
    goto LABEL_24;
  v16 = 0;
  v17 = 32 - v15;
  do
  {
    v21 = v79;
    if ( (_QWORD)v79 )
    {
      v18 = v79 + 1;
      v19 = v79 + 2;
      v20 = (__int64)v78;
      v21 = v79 - 1;
      if ( *((_QWORD *)&v79 + 1) >= (unsigned __int64)(v79 + 2) )
        goto LABEL_19;
    }
    else
    {
      v20 = (__int64)v78;
      v19 = 3;
      v18 = 2;
      if ( *((_QWORD *)&v79 + 1) >= 3u )
        goto LABEL_19;
    }
    v78 = (const char *)qvector_reserve(&v78, v20, v19, 1);
    v20 = (__int64)v78;
LABEL_19:
    *(_QWORD *)&v79 = v19;
    ++v16;
    *(_BYTE *)(v20 + v18) = 0;
    *(_WORD *)&v78[v21] = 11822;
  }
  while ( v17 != v16 );
  v15 = (unsigned __int64)a3[4];
LABEL_24:
  if ( v15 > 0x20 )
  {
    v23 = v15 - 32;
    if ( v23 > 0xFF )
      v23 = 255;
    v47 = **a3 + 32;
    if ( !a3[10] )
      goto LABEL_57;
    v63 = (__int64)a3[8];
    if ( a3 + 6 == (__int64 **)v63 )
      goto LABEL_57;
    while ( 1 )
    {
      v64 = *(_QWORD *)(v63 + 32);
      if ( v64 >= v47 )
        break;
      v63 = std::_Rb_tree_increment();
      if ( (__int64 **)v63 == a3 + 6 )
        goto LABEL_57;
    }
    if ( v64 < v23 + v47 && (v23 = v64 - v47, v64 == v47) )
    {
      v22 = 0;
    }
    else
    {
LABEL_57:
      v48 = qalloc(v23);
      v49 = (_DWORD *)v48;
      if ( !v48 )
        goto LABEL_25;
      bytes = get_bytes(v48, v23, v47, 0, 0);
      v23 = bytes;
      if ( bytes == -1 )
      {
        v22 = 0;
        v23 = 0;
      }
      else
      {
        v22 = sub_4F80(v49, bytes);
      }
      qfree(v49);
    }
  }
  else
  {
LABEL_25:
    v22 = 0;
    v23 = 0;
  }
  a3[14] = (__int64 *)v23;
  *((_WORD *)a3 + 60) = v22;
  sub_5D60((__int64 *)&v78, (__int64)" %02zX %04X", v23, v22);
  v24 = (unsigned __int64)a3[4];
  if ( v24 <= 0xFFFF )
    sub_5D60((__int64 *)&v78, (__int64)" %04zX", v24);
  else
    sub_5D60((__int64 *)&v78, (__int64)" %08zX", v24);
  v25 = v79;
  if ( !(_QWORD)v79 )
  {
    v28 = (__int64)v78;
    v27 = 12;
    v26 = 11;
    if ( *((_QWORD *)&v79 + 1) >= 0xCu )
      goto LABEL_30;
LABEL_64:
    v78 = (const char *)qvector_reserve(&v78, v28, v27, 1);
    v28 = (__int64)v78;
    goto LABEL_30;
  }
  v26 = v79 + 10;
  v27 = v79 + 11;
  v28 = (__int64)v78;
  v25 = v79 - 1;
  if ( *((_QWORD *)&v79 + 1) < (unsigned __int64)(v79 + 11) )
    goto LABEL_64;
LABEL_30:
  *(_QWORD *)&v79 = v27;
  *(_BYTE *)(v28 + v26) = 0;
  qmemcpy((void *)&v78[v25], " :00000000 ", 11);
  v29 = (unsigned __int64)a3[2];
  if ( v29 )
  {
    v30 = v29 - 1;
    if ( v29 != 1 )
    {
      v65 = v79;
      v66 = v29 - 1;
      if ( (_QWORD)v79 )
      {
        v65 = v79 - 1;
        v66 = v30 + v79 - 1;
        v29 += v79 - 1;
      }
      v67 = (__int64)v78;
      if ( *((_QWORD *)&v79 + 1) < v29 )
      {
        v78 = (const char *)qvector_reserve(&v78, v78, v29, 1);
        v67 = (__int64)v78;
      }
      *(_QWORD *)&v79 = v29;
      *(_BYTE *)(v67 + v66) = 0;
      memcpy((void *)&v78[v65], a3[1], v30);
    }
  }
  v31 = a3[11];
  for ( i = &v31[4 * (_QWORD)a3[12]]; i != v31; v31 += 4 )
  {
    v33 = s1;
    if ( v31[2] )
      v33 = (const char *)v31[1];
    sub_5D60((__int64 *)&v78, (__int64)" ^%08X %s", *v31 - *(_DWORD *)*a3, v33);
  }
  if ( a3[14] + 4 < a3[4] )
  {
    v51 = v79;
    if ( (_QWORD)v79 )
    {
      v52 = v79 + 1;
      v53 = v79;
      v51 = v79 - 1;
    }
    else
    {
      v52 = 2;
      v53 = 1;
    }
    v54 = (__int64)v78;
    if ( *((_QWORD *)&v79 + 1) < v52 )
    {
      v78 = (const char *)qvector_reserve(&v78, v78, v52, 1);
      v54 = (__int64)v78;
    }
    *(_QWORD *)&v79 = v52;
    *(_BYTE *)(v54 + v53) = 0;
    v78[v51] = 32;
    v55 = **a3;
    v56 = (unsigned __int64)a3[14] + v55 + 32;
    v57 = v55 + 0x7FFF;
    if ( v57 > (*a3)[1] )
      v57 = (*a3)[1];
    if ( v56 < v57 )
    {
      while ( 1 )
      {
        v58 = a3[7];
        if ( v58 )
        {
          v59 = a3 + 6;
          do
          {
            while ( 1 )
            {
              v60 = v58[2];
              v61 = v58[3];
              if ( v58[4] < v56 )
                break;
              v59 = (__int64 **)v58;
              v58 = (__int64 *)v58[2];
              if ( !v60 )
                goto LABEL_78;
            }
            v58 = (__int64 *)v58[3];
          }
          while ( v61 );
LABEL_78:
          if ( v59 != a3 + 6 && v56 >= (unsigned __int64)v59[4] )
            break;
        }
        v62 = get_byte(v56);
        sub_5D60((__int64 *)&v78, (__int64)"%02X", v62);
LABEL_81:
        if ( v57 == ++v56 )
          goto LABEL_37;
      }
      v68 = v79;
      if ( (_QWORD)v79 )
      {
        v71 = v79 + 1;
        v70 = v79 + 2;
        v69 = (__int64)v78;
        v68 = v79 - 1;
        if ( *((_QWORD *)&v79 + 1) >= (unsigned __int64)(v79 + 2) )
          goto LABEL_100;
      }
      else
      {
        v69 = (__int64)v78;
        v70 = 3;
        v71 = 2;
        if ( *((_QWORD *)&v79 + 1) >= 3u )
        {
LABEL_100:
          *(_QWORD *)&v79 = v70;
          *(_BYTE *)(v69 + v71) = 0;
          *(_WORD *)&v78[v68] = 11822;
          goto LABEL_81;
        }
      }
      v75 = v68;
      v73 = v71;
      v78 = (const char *)qvector_reserve(&v78, v69, v70, 1);
      v68 = v75;
      v69 = (__int64)v78;
      v71 = v73;
      goto LABEL_100;
    }
  }
LABEL_37:
  v34 = v79;
  if ( (_QWORD)v79 )
  {
    v36 = v79 + 1;
    v37 = v79;
    v35 = (__int64)v78;
    v34 = v79 - 1;
    if ( *((_QWORD *)&v79 + 1) < (unsigned __int64)(v79 + 1) )
      goto LABEL_62;
  }
  else
  {
    v35 = (__int64)v78;
    v36 = 2;
    v37 = 1;
    if ( *((_QWORD *)&v79 + 1) >= 2u )
      goto LABEL_39;
LABEL_62:
    v78 = (const char *)qvector_reserve(&v78, v35, v36, 1);
    v35 = (__int64)v78;
  }
LABEL_39:
  *(_QWORD *)&v79 = v36;
  *(_BYTE *)(v35 + v37) = 0;
  v38 = s1;
  v78[v34] = 10;
  v39 = v79;
  if ( (_QWORD)v79 )
  {
    v38 = v78;
    v39 = v79 - 1;
  }
  v40 = qfwrite(a1, v38, v39);
  v41 = 0;
  if ( v40 == ((_QWORD)v79 == 0) + (_QWORD)v79 - 1LL )
  {
    v41 = 1;
    ++*a5;
  }
  if ( v78 )
  {
    *(_QWORD *)&v79 = 0;
    qfree(v78);
  }
  return v41;
}
