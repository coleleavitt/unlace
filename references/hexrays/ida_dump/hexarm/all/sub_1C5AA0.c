__int64 __fastcall sub_1C5AA0(__int64 a1, _QWORD *a2, _DWORD *a3, unsigned int a4)
{
  __int64 v5; // rdi
  unsigned int v7; // r15d
  char v8; // al
  unsigned int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rbx
  _QWORD *v13; // r13
  __int64 v14; // rdi
  __int64 v15; // rdi
  int tinfo_property; // eax
  unsigned int v17; // ebp
  unsigned int v19; // eax
  __int64 v20; // rdi
  unsigned int v21; // r13d
  int v22; // eax
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  char v25; // dl
  __int64 v26; // rdi
  __int64 v27; // r12
  __int64 v28; // rbp
  _QWORD *v29; // rbx
  __int64 v30; // rdi
  __int64 v31; // rdi
  unsigned int v32; // eax
  __int64 v33; // rdi
  unsigned int v34; // ebx
  int v35; // eax
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r12
  __int64 v39; // rbp
  _QWORD *v40; // rbx
  __int64 v41; // rdi
  __int64 v42; // rdi
  char v43; // al
  __int64 v45; // [rsp+8h] [rbp-F0h]
  __int64 v46; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v47; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v48; // [rsp+48h] [rbp-B0h]
  __int64 v49; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v50; // [rsp+58h] [rbp-A0h]
  __int64 v51; // [rsp+68h] [rbp-90h]
  __int64 v52; // [rsp+70h] [rbp-88h] BYREF
  __int64 v53; // [rsp+78h] [rbp-80h] BYREF
  __int128 v54; // [rsp+80h] [rbp-78h]
  __int64 v55; // [rsp+90h] [rbp-68h]
  __int128 v56; // [rsp+98h] [rbp-60h]
  char v57; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v58; // [rsp+B8h] [rbp-40h]

  v5 = *a2;
  v58 = __readfsqword(0x28u);
  if ( (get_tinfo_property(v5, 2) & 0x3F) == 1 )
    return 1;
  if ( !*a3 )
    return 0;
  if ( a4 > 0x10 )
  {
    v7 = a4;
    if ( a4 - 208 > 0x2F )
      goto LABEL_5;
    goto LABEL_29;
  }
  v32 = getinf(99);
  a4 = v32;
  if ( v32 - 208 <= 0x2F )
  {
LABEL_29:
    v7 = 16;
LABEL_30:
    a4 = getinf(99);
    goto LABEL_5;
  }
  v7 = v32;
  if ( v32 <= 0x10 )
    goto LABEL_30;
LABEL_5:
  if ( a4 == 176 )
  {
    if ( (unsigned __int64)getinf(88) > 0x397
      || (unsigned __int8)getinf_flag(3, 4)
      && (netnode_check(&v49, "$ golang", 0, 0), v33 = v49, v34 = netnode_altval(v49, 0, 65), v34 > 0x74)
      && ((v35 = *(_DWORD *)(get_ph(v33) + 4)) == 0
       || (v36 = (unsigned int)(v35 - 13), (unsigned int)v36 <= 0x3B)
       && (v37 = 0x800000000000005LL, _bittest64(&v37, v36))
       && v34 != 117) )
    {
LABEL_7:
      v47 = 0;
      v48 = 0;
      v50 = 0;
      v8 = v7;
      v49 = 0;
      v51 = 0;
      v52 = 0;
      v53 = 0;
      v55 = 0;
      v54 = 0;
      v56 = 0;
      if ( v7 == 192 || (v7 & 0xFFFFFF0F) != 0 )
      {
        HIDWORD(v51) = v7;
        v8 = -64;
      }
      v57 = v8;
      copy_tinfo_t(&v52, a2);
      v9 = calc_retloc(&v49);
      if ( (_BYTE)v9 )
      {
        v10 = v54;
        *(_QWORD *)&v54 = v48;
        v48 = v10;
        LODWORD(v10) = v53;
        LODWORD(v53) = v47;
        LODWORD(v47) = v10;
      }
      if ( v55 )
      {
        *(_QWORD *)&v56 = 0;
        qfree(v55);
      }
      cleanup_argloc(&v53);
      clear_tinfo_t(&v52);
      v11 = v49;
      if ( v49 )
      {
        v45 = v50;
        if ( (_QWORD)v50 )
        {
          v12 = 0;
          do
          {
            v13 = (_QWORD *)(v11 + 80 * v12);
            clear_tinfo_t(v13 + 8);
            v14 = v13[5];
            if ( v14 )
            {
              v13[6] = 0;
              qfree(v14);
            }
            v15 = v13[2];
            if ( v15 )
            {
              v13[3] = 0;
              qfree(v15);
            }
            ++v12;
            cleanup_argloc(v13);
            v11 = v49;
          }
          while ( v45 != v12 );
        }
        *(_QWORD *)&v50 = 0;
        qfree(v11);
      }
      if ( (_BYTE)v9 )
      {
        if ( (_DWORD)v47 == 2 )
          tinfo_property = get_tinfo_property(*a2, 15);
        else
          tinfo_property = get_tinfo_size(0, *a2, 0);
        v17 = tinfo_property;
        sub_1C5430((__int64)&v49, a1, (__int64)&v47, tinfo_property, 0);
        v9 = sub_1C3940((__int64)&v49, (__int64)a3, v17, v17);
        cleanup_argloc(&v49);
      }
      else
      {
        v19 = v7;
        if ( v7 <= 0x10 )
          v19 = getinf(99);
        if ( v19 != 176 )
          goto LABEL_26;
        if ( (unsigned __int64)getinf(88) <= 0x397 )
        {
          if ( !(unsigned __int8)getinf_flag(3, 4) )
            goto LABEL_26;
          netnode_check(&v46, "$ golang", 0, 0);
          v20 = v46;
          v21 = netnode_altval(v46, 0, 65);
          if ( v21 <= 0x74 )
            goto LABEL_26;
          v22 = *(_DWORD *)(get_ph(v20) + 4);
          if ( v22 )
          {
            v23 = (unsigned int)(v22 - 13);
            if ( (unsigned int)v23 > 0x3B )
              goto LABEL_26;
            v24 = 0x800000000000005LL;
            if ( !_bittest64(&v24, v23) || v21 == 117 )
              goto LABEL_26;
          }
        }
        v49 = 0;
        v51 = 0;
        v52 = 0;
        v53 = 0;
        v55 = 0;
        v57 = 16;
        v50 = 0;
        v54 = 0;
        v56 = 0;
        copy_tinfo_t(&v52, a2);
        v25 = v57 & 0xF | 0xC0;
        if ( v7 != 192 && (v7 & 0xFFFFFF0F) == 0 )
        {
          v43 = v7 | v57 & 0xF;
          v7 = 0;
          v25 = v43;
        }
        HIDWORD(v51) = v7;
        v57 = v25;
        if ( (unsigned __int8)calc_arglocs(&v49) )
        {
          v9 = sub_1C2E40(nullptr, nullptr, (__int64)a3, 1);
          if ( v55 )
          {
            *(_QWORD *)&v56 = 0;
            qfree(v55);
          }
          cleanup_argloc(&v53);
          clear_tinfo_t(&v52);
          v26 = v49;
          if ( !v49 )
            goto LABEL_26;
          v27 = v50;
          if ( (_QWORD)v50 )
          {
            v28 = 0;
            do
            {
              v29 = (_QWORD *)(v26 + 80 * v28);
              clear_tinfo_t(v29 + 8);
              v30 = v29[5];
              if ( v30 )
              {
                v29[6] = 0;
                qfree(v30);
              }
              v31 = v29[2];
              if ( v31 )
              {
                v29[3] = 0;
                qfree(v31);
              }
              ++v28;
              cleanup_argloc(v29);
              v26 = v49;
            }
            while ( v27 != v28 );
          }
        }
        else
        {
          if ( v55 )
          {
            *(_QWORD *)&v56 = 0;
            qfree(v55);
          }
          cleanup_argloc(&v53);
          clear_tinfo_t(&v52);
          v26 = v49;
          if ( !v49 )
            goto LABEL_26;
          v38 = v50;
          v39 = 0;
          if ( (_QWORD)v50 )
          {
            do
            {
              v40 = (_QWORD *)(v26 + 80 * v39);
              clear_tinfo_t(v40 + 8);
              v41 = v40[5];
              if ( v41 )
              {
                v40[6] = 0;
                qfree(v41);
              }
              v42 = v40[2];
              if ( v42 )
              {
                v40[3] = 0;
                qfree(v42);
              }
              ++v39;
              cleanup_argloc(v40);
              v26 = v49;
            }
            while ( v38 != v39 );
          }
        }
        *(_QWORD *)&v50 = 0;
        qfree(v26);
      }
LABEL_26:
      cleanup_argloc(&v47);
      return v9;
    }
  }
  else if ( a4 != 256 )
  {
    goto LABEL_7;
  }
  return sub_1C2E40(nullptr, nullptr, (__int64)a3, 1);
}
