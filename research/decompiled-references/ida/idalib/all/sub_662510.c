__int64 __fastcall sub_662510(
        _DWORD *a1,
        unsigned __int64 *a2,
        char a3,
        const char *a4,
        const char *a5,
        const char *a6,
        unsigned __int8 a7)
{
  int v7; // eax
  unsigned __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // rdx
  _BYTE *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  _BYTE *v17; // rsi
  size_t v18; // rax
  __int64 v19; // r8
  size_t v20; // r9
  size_t v21; // r10
  _BYTE *v22; // rsi
  size_t v23; // rdx
  __int64 v24; // r12
  __int64 v25; // rdx
  _BYTE *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // r12
  _BYTE *v29; // rsi
  unsigned int v30; // ebx
  char v32; // r11
  unsigned __int64 v33; // rdx
  __int64 v34; // r8
  _BYTE *v35; // rsi
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned __int64 v38; // rdx
  _BYTE *v39; // rsi
  unsigned __int64 v40; // rdx
  _DWORD *v41; // r8
  __int64 v42; // r8
  _BYTE *v43; // rsi
  unsigned __int64 v44; // rdx
  __int64 v45; // r8
  _BYTE *v46; // rsi
  unsigned __int64 v47; // rdx
  __int64 v48; // r8
  _BYTE *v49; // rsi
  _BYTE *v50; // rcx
  __int64 v51; // r12
  unsigned __int64 v52; // rdx
  _BYTE *v53; // rsi
  __int64 v54; // rax
  __int64 v56; // [rsp+10h] [rbp-78h]
  char v58; // [rsp+10h] [rbp-78h]
  __int64 v59; // [rsp+10h] [rbp-78h]
  __int64 v60; // [rsp+10h] [rbp-78h]
  __int64 v61; // [rsp+10h] [rbp-78h]
  __int64 v62; // [rsp+10h] [rbp-78h]
  unsigned __int64 v63; // [rsp+10h] [rbp-78h]
  unsigned __int64 v64; // [rsp+10h] [rbp-78h]
  unsigned __int64 v65; // [rsp+10h] [rbp-78h]
  unsigned __int64 v66; // [rsp+10h] [rbp-78h]
  unsigned __int64 v67; // [rsp+10h] [rbp-78h]
  size_t v68; // [rsp+10h] [rbp-78h]
  unsigned __int64 v69; // [rsp+10h] [rbp-78h]
  char v70; // [rsp+10h] [rbp-78h]
  __int64 v71; // [rsp+18h] [rbp-70h]
  __int64 v72; // [rsp+18h] [rbp-70h]
  __int64 v73; // [rsp+18h] [rbp-70h]
  __int64 v74; // [rsp+18h] [rbp-70h]
  __int64 v75; // [rsp+18h] [rbp-70h]
  __int64 v76; // [rsp+18h] [rbp-70h]
  __int64 v77; // [rsp+18h] [rbp-70h]
  size_t v78; // [rsp+18h] [rbp-70h]
  char v79; // [rsp+20h] [rbp-68h]
  char v80; // [rsp+20h] [rbp-68h]
  __int64 v81; // [rsp+20h] [rbp-68h]
  char v82; // [rsp+20h] [rbp-68h]
  char v83; // [rsp+20h] [rbp-68h]
  __int64 v84; // [rsp+20h] [rbp-68h]
  char v85; // [rsp+28h] [rbp-60h]
  size_t v86; // [rsp+28h] [rbp-60h]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v88; // [rsp+38h] [rbp-50h]
  unsigned __int64 v89; // [rsp+48h] [rbp-40h]

  v7 = a1[8];
  v89 = __readfsqword(0x28u);
  if ( (v7 & 0x20000) != 0 )
    return 1;
  ptr = nullptr;
  v88 = 0;
  if ( (v7 & 2) != 0 )
  {
    ptr = (void *)qvector_reserve(&ptr, 0, 2, 1);
    v32 = a3;
    v33 = 2;
    *(_QWORD *)&v88 = 2;
    *(_BYTE *)ptr = 1;
    *((_BYTE *)ptr + 1) = 0;
    v34 = v88;
    if ( (_QWORD)v88 )
    {
      v33 = v88 + 1;
      v34 = v88 - 1;
    }
    v35 = ptr;
    if ( *((_QWORD *)&v88 + 1) < v33 )
    {
      v80 = a3;
      v74 = v34;
      v64 = v33;
      ptr = (void *)qvector_reserve(&ptr, ptr, v33, 1);
      v32 = v80;
      v35 = ptr;
      v34 = v74;
      v33 = v64;
    }
    *(_QWORD *)&v88 = v33;
    v35[v34] = 32;
    *((_BYTE *)ptr + v34 + 1) = 0;
    v36 = v88;
    if ( (_QWORD)v88 )
    {
      v37 = v88 + 6;
      v38 = v88 + 7;
      v36 = v88 - 1;
    }
    else
    {
      v38 = 8;
      v37 = 7;
    }
    v39 = ptr;
    if ( *((_QWORD *)&v88 + 1) < v38 )
    {
      v85 = v32;
      v81 = v37;
      v75 = v36;
      v65 = v38;
      ptr = (void *)qvector_reserve(&ptr, ptr, v38, 1);
      v32 = v85;
      v39 = ptr;
      v37 = v81;
      v36 = v75;
      v38 = v65;
    }
    *(_QWORD *)&v88 = v38;
    v40 = 2;
    v39[v37] = 0;
    v41 = (char *)ptr + v36;
    *v41 = 1701869940;
    *(_DWORD *)((char *)v41 + 3) = 1717920869;
    v42 = v88;
    if ( (_QWORD)v88 )
    {
      v40 = v88 + 1;
      v42 = v88 - 1;
    }
    v43 = ptr;
    if ( *((_QWORD *)&v88 + 1) < v40 )
    {
      v83 = v32;
      v77 = v42;
      v67 = v40;
      ptr = (void *)qvector_reserve(&ptr, ptr, v40, 1);
      v32 = v83;
      v43 = ptr;
      v42 = v77;
      v40 = v67;
    }
    *(_QWORD *)&v88 = v40;
    v44 = 2;
    v43[v42] = 2;
    *((_BYTE *)ptr + v42 + 1) = 0;
    v45 = v88;
    if ( (_QWORD)v88 )
    {
      v44 = v88 + 1;
      v45 = v88 - 1;
    }
    v46 = ptr;
    if ( *((_QWORD *)&v88 + 1) < v44 )
    {
      v82 = v32;
      v76 = v45;
      v66 = v44;
      ptr = (void *)qvector_reserve(&ptr, ptr, v44, 1);
      v32 = v82;
      v46 = ptr;
      v45 = v76;
      v44 = v66;
    }
    *(_QWORD *)&v88 = v44;
    v47 = 2;
    v46[v45] = 32;
    *((_BYTE *)ptr + v45 + 1) = 0;
    v48 = v88;
    if ( (_QWORD)v88 )
    {
      v47 = v88 + 1;
      v48 = v88 - 1;
    }
    v49 = ptr;
    if ( *((_QWORD *)&v88 + 1) < v47 )
    {
      v79 = v32;
      v73 = v48;
      v63 = v47;
      ptr = (void *)qvector_reserve(&ptr, ptr, v47, 1);
      v32 = v79;
      v49 = ptr;
      v48 = v73;
      v47 = v63;
    }
    *(_QWORD *)&v88 = v47;
    v49[v48] = 32;
    *((_BYTE *)ptr + v48 + 1) = 0;
    if ( (unsigned __int8)v32 > 0x3Fu )
    {
      v58 = v32;
      sub_65EEB0((__int64 *)&ptr, v32, 1);
      v32 = v58;
    }
    if ( (v32 & 0xF) == 0xD )
    {
      v50 = nullptr;
      if ( (v32 & 0x3F) == 0xD )
      {
        v70 = v32;
        v54 = sub_534260(*(_QWORD *)(*(_QWORD *)a1 + 1824LL), *a2);
        v32 = v70;
        v50 = (_BYTE *)v54;
      }
      sub_660460((__int64)a1, (__int64 *)&ptr, v32, v50);
    }
  }
  else
  {
    v11 = *a2;
    if ( (unsigned __int8)v11 > 0x3Fu )
      sub_65EEB0((__int64 *)&ptr, v11, 1);
  }
  sub_662480(*(_QWORD *)(*(_QWORD *)a1 + 1824LL), (__int64 *)&ptr, a2, 2055);
  if ( *a4 )
  {
    v12 = v88;
    v13 = 2;
    if ( (_QWORD)v88 )
    {
      v13 = v88 + 1;
      v14 = ptr;
      v12 = v88 - 1;
      if ( *((_QWORD *)&v88 + 1) >= (unsigned __int64)(v88 + 1) )
        goto LABEL_8;
    }
    else
    {
      v14 = ptr;
      if ( *((_QWORD *)&v88 + 1) >= 2u )
        goto LABEL_8;
    }
    v71 = v12;
    v59 = v13;
    ptr = (void *)qvector_reserve(&ptr, v14, v13, 1);
    v12 = v71;
    v14 = ptr;
    v13 = v59;
LABEL_8:
    *(_QWORD *)&v88 = v13;
    v15 = 2;
    v14[v12] = 1;
    *((_BYTE *)ptr + v12 + 1) = 0;
    v16 = v88;
    if ( (_QWORD)v88 )
    {
      v15 = v88 + 1;
      v17 = ptr;
      v16 = v88 - 1;
      if ( *((_QWORD *)&v88 + 1) >= (unsigned __int64)(v88 + 1) )
        goto LABEL_10;
    }
    else
    {
      v17 = ptr;
      if ( *((_QWORD *)&v88 + 1) >= 2u )
        goto LABEL_10;
    }
    v72 = v16;
    v62 = v15;
    ptr = (void *)qvector_reserve(&ptr, v17, v15, 1);
    v16 = v72;
    v17 = ptr;
    v15 = v62;
LABEL_10:
    *(_QWORD *)&v88 = v15;
    v17[v16] = 23;
    *((_BYTE *)ptr + v16 + 1) = 0;
    if ( a4 )
    {
      v56 = v88;
      v18 = strlen(a4);
      v19 = v56;
      v20 = v18;
      v21 = v18;
      if ( v56 )
      {
        v19 = v56 - 1;
        v21 = v18 + v56 - 1;
      }
      v22 = ptr;
      v23 = v21 + 1;
      if ( *((_QWORD *)&v88 + 1) < v21 + 1 )
      {
        v86 = v18;
        v84 = v19;
        v78 = v21;
        v68 = v21 + 1;
        ptr = (void *)qvector_reserve(&ptr, ptr, v23, 1);
        v20 = v86;
        v22 = ptr;
        v19 = v84;
        v21 = v78;
        v23 = v68;
      }
      *(_QWORD *)&v88 = v23;
      v22[v21] = 0;
      memmove((char *)ptr + v19, a4, v20);
    }
    v24 = v88;
    v25 = 2;
    if ( (_QWORD)v88 )
    {
      v25 = v88 + 1;
      v26 = ptr;
      v24 = v88 - 1;
      if ( *((_QWORD *)&v88 + 1) >= (unsigned __int64)(v88 + 1) )
        goto LABEL_18;
    }
    else
    {
      v26 = ptr;
      if ( *((_QWORD *)&v88 + 1) >= 2u )
        goto LABEL_18;
    }
    v61 = v25;
    ptr = (void *)qvector_reserve(&ptr, v26, v25, 1);
    v25 = v61;
    v26 = ptr;
LABEL_18:
    *(_QWORD *)&v88 = v25;
    v27 = 2;
    v26[v24] = 2;
    *((_BYTE *)ptr + v24 + 1) = 0;
    v28 = v88;
    if ( (_QWORD)v88 )
    {
      v27 = v88 + 1;
      v29 = ptr;
      v28 = v88 - 1;
      if ( *((_QWORD *)&v88 + 1) >= (unsigned __int64)(v88 + 1) )
        goto LABEL_20;
    }
    else
    {
      v29 = ptr;
      if ( *((_QWORD *)&v88 + 1) >= 2u )
      {
LABEL_20:
        *(_QWORD *)&v88 = v27;
        v29[v28] = 23;
        *((_BYTE *)ptr + v28 + 1) = 0;
        goto LABEL_21;
      }
    }
    v60 = v27;
    ptr = (void *)qvector_reserve(&ptr, v29, v27, 1);
    v27 = v60;
    v29 = ptr;
    goto LABEL_20;
  }
LABEL_21:
  if ( a5 && *a5 )
  {
    v51 = v88;
    v52 = 2;
    if ( (_QWORD)v88 )
    {
      v52 = v88 + 1;
      v51 = v88 - 1;
    }
    v53 = ptr;
    if ( *((_QWORD *)&v88 + 1) < v52 )
    {
      v69 = v52;
      ptr = (void *)qvector_reserve(&ptr, ptr, v52, 1);
      v52 = v69;
      v53 = ptr;
    }
    *(_QWORD *)&v88 = v52;
    v53[v51] = 32;
    *((_BYTE *)ptr + v51 + 1) = 0;
    if ( *a5 )
      sub_65E8C0((__int64 *)&ptr, a5, 37);
  }
  if ( (a1[8] & 8) != 0 )
    sub_65F4F0((__int64 *)&ptr, 59);
  v30 = sub_6602F0((__int64)a1, (const char *)ptr, a6, a7, 1u);
  if ( ptr )
  {
    *(_QWORD *)&v88 = 0;
    qfree(ptr);
  }
  return v30;
}
