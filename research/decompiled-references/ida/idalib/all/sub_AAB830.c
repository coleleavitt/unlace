__int64 __fastcall sub_AAB830(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rbx
  __int64 (__fastcall *v15)(__int64); // rax
  __int64 v16; // r13
  __int64 (__fastcall *v17)(__int64); // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 (__fastcall *v20)(__int64); // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD *i; // rax
  __int64 v24; // r13
  __int64 (__fastcall *v25)(__int64); // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  __int64 v37; // r13
  __int64 v38; // rbx
  __int64 *v39; // r13
  __int64 *v40; // rbx
  char v41; // di
  __int64 v42; // r13
  __int64 v43; // rax
  __int64 *v44; // r13
  __int64 v45; // r13
  __int64 v46; // rax
  char *v47; // r14
  char *v48; // r15
  char *v49; // rax
  char *v50; // rbx
  char *v51; // rax
  char *v52; // rax
  __int64 *v54; // r13
  __int64 v55; // rdx
  __int64 v56; // r14
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 *v60; // [rsp+0h] [rbp-C8h]
  __int64 *v61; // [rsp+0h] [rbp-C8h]
  __int64 v62; // [rsp+8h] [rbp-C0h]
  __int64 v63; // [rsp+10h] [rbp-B8h]
  __int64 v65; // [rsp+20h] [rbp-A8h]
  __int64 *v66; // [rsp+28h] [rbp-A0h]
  void *ptr; // [rsp+30h] [rbp-98h] BYREF
  __int64 v68; // [rsp+38h] [rbp-90h]
  int v69; // [rsp+40h] [rbp-88h]
  char v70; // [rsp+44h] [rbp-84h]
  __int64 v71; // [rsp+48h] [rbp-80h] BYREF

  v65 = a2;
  v63 = a3;
  v6 = (_QWORD *)sub_9C7D40(a2, a2, a3, a4, a5);
  v10 = sub_9C7D40(a3, a2, v7, v8, v9);
  if ( !v10 )
    return 0;
  v14 = (_QWORD *)v10;
  if ( (_QWORD *)v10 != v6 )
  {
    do
    {
      v15 = *(__int64 (__fastcall **)(__int64))(*v6 + 32LL);
      if ( v15 == sub_A55E60 )
        v16 = v6[12];
      else
        v16 = v15((__int64)v6);
      v17 = *(__int64 (__fastcall **)(__int64))(*v14 + 32LL);
      if ( v17 == sub_A55E60 )
        v18 = v14[12];
      else
        v18 = v17((__int64)v14);
      if ( v16 == v18 )
        break;
      v19 = sub_BAB630(v14);
      v14 = (_QWORD *)v19;
      if ( !v19 )
        return 0;
    }
    while ( v6 != (_QWORD *)v19 );
  }
  if ( *(_BYTE *)(a2 + 19) >> 2 )
  {
    v68 = 8;
    v69 = 0;
    ptr = &v71;
    v70 = 1;
    a2 = sub_9C7D40(v63, a2, v11, v12, v13);
    sub_A798C0(a1, a2, (__int64)&ptr, v31, v32, v33);
    v36 = v63;
    v37 = (*(_WORD *)(v63 + 18) & 0x3F8) + 48LL;
    v38 = v37 + 8LL * (*(_BYTE *)(v63 + 19) >> 2);
    v39 = (__int64 *)(v63 + v37);
    v40 = (__int64 *)(v63 + v38);
    while ( v40 != v39 )
    {
      a2 = *v39++;
      sub_A798C0(a1, a2, (__int64)&ptr, v36, v34, v35);
    }
    v41 = v70;
    if ( HIDWORD(v68) != v69 )
    {
      v42 = (*(_WORD *)(v65 + 18) & 0x3F8) + 48LL;
      v43 = v42 + 8LL * (*(_BYTE *)(v65 + 19) >> 2);
      v44 = (__int64 *)(v65 + v42);
      v66 = (__int64 *)(v65 + v43);
      if ( (__int64 *)(v65 + v43) == v44 )
      {
LABEL_55:
        if ( !v41 )
          free(ptr);
        goto LABEL_11;
      }
      v60 = v44;
      while ( 1 )
      {
        v45 = *v60;
        if ( v41 )
        {
          v46 = HIDWORD(v68);
          v47 = (char *)ptr + 8 * HIDWORD(v68);
          if ( ptr == v47 )
            break;
        }
        else
        {
          v46 = (unsigned int)v68;
          v47 = (char *)ptr + 8 * (unsigned int)v68;
          if ( ptr == v47 )
            goto LABEL_58;
        }
        v48 = (char *)ptr;
        if ( (unsigned __int64)(*(_QWORD *)ptr + 2LL) <= 1 )
        {
          v49 = (char *)ptr + 8;
          while ( 1 )
          {
            v48 = v49;
            if ( v49 == v47 )
              break;
            v49 += 8;
            if ( *(_QWORD *)v48 < 0xFFFFFFFFFFFFFFFELL )
              goto LABEL_39;
          }
          v48 = v47;
LABEL_39:
          if ( v41 )
            v46 = HIDWORD(v68);
          else
            v46 = (unsigned int)v68;
        }
        v50 = (char *)ptr + 8 * v46;
        if ( v48 == v50 )
          break;
        while ( 1 )
        {
          a2 = *(_QWORD *)(v45 + 40) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v45 + 40) & 7) != 0 )
            a2 = 0;
          if ( sub_BAA8E0(*(_QWORD *)v48, a2) )
            break;
          v51 = v48 + 8;
          if ( v47 == v48 + 8 )
          {
            v48 = v47;
            if ( v50 == v47 )
              goto LABEL_51;
          }
          else if ( *((_QWORD *)v48 + 1) < 0xFFFFFFFFFFFFFFFELL )
          {
            v48 += 8;
            if ( v50 == v51 )
              goto LABEL_51;
          }
          else
          {
            v52 = v48 + 16;
            do
            {
              v48 = v52;
              if ( v47 == v52 )
                break;
              v52 += 8;
            }
            while ( *(_QWORD *)v48 >= 0xFFFFFFFFFFFFFFFELL );
            if ( v50 == v48 )
            {
LABEL_51:
              v41 = v70;
              goto LABEL_52;
            }
          }
        }
        ++v60;
        v41 = v70;
        if ( v66 == v60 )
          goto LABEL_55;
      }
    }
LABEL_52:
    if ( !v41 )
LABEL_58:
      free(ptr);
    return 0;
  }
LABEL_11:
  if ( !(unsigned __int8)sub_F65FA0(v65) )
    return 1;
LABEL_12:
  for ( i = (_QWORD *)sub_9C7D40(v63, a2, (__int64)v20, v21, v22); ; i = (_QWORD *)sub_9C7D40(v63, a2, v28, v29, v30) )
  {
    if ( i && v6 )
    {
      if ( i == v6 )
        break;
      v20 = *(__int64 (__fastcall **)(__int64))(*i + 32LL);
      v24 = v20 == sub_A55E60 ? i[12] : v20((__int64)i);
      v25 = *(__int64 (__fastcall **)(__int64))(*v6 + 32LL);
      v26 = v25 == sub_A55E60 ? v6[12] : v25((__int64)v6);
      if ( v24 == v26 )
        break;
    }
    v27 = *(_QWORD *)(v63 + 32);
    if ( (v27 & 8) == 0 )
    {
      sub_F69C40(v63);
      v27 = *(_QWORD *)(v63 + 32);
    }
    v63 = *(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v63 + 16) - 35 <= 1 )
      goto LABEL_12;
    v63 = sub_F63050(v63, a2, v20, v21);
  }
  if ( !(unsigned __int8)sub_F65FA0(v63) )
    return 1;
  v54 = (__int64 *)sub_F672B0(v63);
  v56 = v55;
  v61 = (__int64 *)sub_F672B0(v65);
  v62 = v57;
  v59 = sub_9C7D40(v65, a2, v57, v57, v58);
  return sub_AAB6B0(a1, v59, v61, v62, v54, v56);
}
