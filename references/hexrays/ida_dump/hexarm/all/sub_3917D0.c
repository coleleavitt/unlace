unsigned __int64 __fastcall sub_3917D0(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, char **, void **, __int64),
        unsigned __int8 a3,
        __int64 *a4,
        signed int a5,
        __int64 a6)
{
  __int64 v6; // rdi
  char tinfo_details; // al
  __int64 v8; // rdi
  __int64 v9; // rbx
  int v10; // ebp
  char v11; // r15
  __int64 v12; // r14
  __int64 (__fastcall *v13)(_QWORD, _QWORD, _QWORD, _QWORD); // r8
  size_t v14; // r14
  __int64 v15; // r14
  char *v16; // rdi
  __int64 v17; // r15
  __int64 v18; // r14
  char *v19; // r12
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // r12
  __int64 v23; // rbp
  _QWORD *v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rdi
  unsigned int v28; // r15d
  void *v29; // r14
  void (__fastcall *v30)(_QWORD, char **, void **, __int64); // r15
  size_t v31; // r14
  char *v32; // rdi
  __int64 v33; // r15
  __int64 v34; // r14
  char *v35; // r12
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // r12
  __int64 v39; // rbp
  _QWORD *v40; // rbx
  __int64 v41; // rdi
  __int64 v42; // rdi
  __int64 v43; // [rsp+0h] [rbp-138h]
  signed int v49; // [rsp+38h] [rbp-100h]
  __int64 (__fastcall *v50)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+48h] [rbp-F0h]
  __int64 v51; // [rsp+58h] [rbp-E0h] BYREF
  void *v52; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v53; // [rsp+68h] [rbp-D0h]
  __int64 v54; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v55; // [rsp+88h] [rbp-B0h]
  __int128 v56; // [rsp+98h] [rbp-A0h]
  __int64 v57; // [rsp+A8h] [rbp-90h]
  int v58; // [rsp+B0h] [rbp-88h]
  char *v59; // [rsp+C0h] [rbp-78h] BYREF
  __int128 v60; // [rsp+C8h] [rbp-70h]
  __int128 v61; // [rsp+D8h] [rbp-60h]
  __int64 v62; // [rsp+E8h] [rbp-50h]
  int v63; // [rsp+F0h] [rbp-48h]
  unsigned __int64 v64; // [rsp+F8h] [rbp-40h]

  v6 = *a4;
  v64 = __readfsqword(0x28u);
  v54 = 0;
  v57 = 0;
  v58 = 1;
  v55 = 0;
  v56 = 0;
  tinfo_details = get_tinfo_details(v6, 13, &v54);
  v8 = v54;
  if ( tinfo_details )
  {
    v43 = v54 + 144 * v55;
    if ( v43 != v54 )
    {
      v9 = v54;
      v10 = -1;
      while ( 1 )
      {
        ++v10;
        if ( (get_tinfo_property(*(_QWORD *)(v9 + 64), 2) & 0x2F) != 0xD )
        {
          if ( HIBYTE(v58) )
          {
            v28 = a5 + (*(_QWORD *)v9 >> 3);
            v29 = (void *)operator new(0x40u);
            v59 = nullptr;
            sub_390FE0((__int64)v29, v28, (__int64)a4, (__int64)&v59, v10);
            clear_tinfo_t(&v59);
            v30 = **a2;
            v52 = v29;
            v59 = nullptr;
            v60 = 0;
            v31 = *(_QWORD *)(v9 + 24);
            if ( v31 )
            {
              v59 = (char *)qalloc_or_throw(*(_QWORD *)(v9 + 24));
              *((_QWORD *)&v60 + 1) = v31;
              memcpy(v59, *(const void **)(v9 + 16), v31);
              *(_QWORD *)&v60 = v31;
            }
            v30(a2, &v59, &v52, a6);
            if ( v59 )
            {
              *(_QWORD *)&v60 = 0;
              qfree(v59);
            }
            if ( v52 )
              (*(void (__fastcall **)(void *))(*(_QWORD *)v52 + 8LL))(v52);
          }
          goto LABEL_38;
        }
        v59 = nullptr;
        v62 = 0;
        v63 = 1;
        v60 = 0;
        v61 = 0;
        if ( !(unsigned __int8)get_tinfo_details(*(_QWORD *)(v9 + 64), 13, &v59) )
        {
          v32 = v59;
          if ( v59 )
          {
            v33 = v60;
            if ( (_QWORD)v60 )
            {
              v34 = 0;
              do
              {
                v35 = &v32[144 * v34];
                clear_tinfo_t(v35 + 64);
                v36 = *((_QWORD *)v35 + 5);
                if ( v36 )
                {
                  *((_QWORD *)v35 + 6) = 0;
                  qfree(v36);
                }
                v37 = *((_QWORD *)v35 + 2);
                if ( v37 )
                {
                  *((_QWORD *)v35 + 3) = 0;
                  qfree(v37);
                }
                ++v34;
                v32 = v59;
              }
              while ( v33 != v34 );
            }
            *(_QWORD *)&v60 = 0;
            qfree(v32);
          }
          goto LABEL_38;
        }
        v11 = sub_391250(a1, (__int64 *)&v59, a3);
        if ( !a3 || v11 )
          break;
        if ( HIBYTE(v58) )
          goto LABEL_48;
LABEL_17:
        v16 = v59;
        if ( v59 )
        {
          v17 = v60;
          if ( (_QWORD)v60 )
          {
            v18 = 0;
            do
            {
              v19 = &v16[144 * v18];
              clear_tinfo_t(v19 + 64);
              v20 = *((_QWORD *)v19 + 5);
              if ( v20 )
              {
                *((_QWORD *)v19 + 6) = 0;
                qfree(v20);
              }
              v21 = *((_QWORD *)v19 + 2);
              if ( v21 )
              {
                *((_QWORD *)v19 + 3) = 0;
                qfree(v21);
              }
              ++v18;
              v16 = v59;
            }
            while ( v17 != v18 );
          }
          *(_QWORD *)&v60 = 0;
          v9 += 144;
          qfree(v16);
          if ( v43 == v9 )
          {
LABEL_26:
            v8 = v54;
            goto LABEL_27;
          }
        }
        else
        {
LABEL_38:
          v9 += 144;
          if ( v43 == v9 )
            goto LABEL_26;
        }
      }
      if ( HIBYTE(v58) )
LABEL_48:
        v49 = a5;
      else
        v49 = a5 + (*(_QWORD *)v9 >> 3);
      v12 = operator new(0x40u);
      sub_390FE0(v12, v49, (__int64)a4, v9 + 64, v10);
      v13 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))**a2;
      v51 = v12;
      v52 = nullptr;
      v53 = 0;
      v14 = *(_QWORD *)(v9 + 24);
      if ( v14 )
      {
        v50 = v13;
        v52 = (void *)qalloc_or_throw(*(_QWORD *)(v9 + 24));
        *((_QWORD *)&v53 + 1) = v14;
        memcpy(v52, *(const void **)(v9 + 16), v14);
        *(_QWORD *)&v53 = v14;
        v13 = v50;
      }
      v15 = v13(a2, &v52, &v51, a6);
      if ( v52 )
      {
        *(_QWORD *)&v53 = 0;
        qfree(v52);
      }
      if ( v51 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 8LL))(v51);
      if ( v11 )
        sub_3917D0(a1, a2, a3, v9 + 64, v49, v15);
      goto LABEL_17;
    }
LABEL_27:
    if ( v8 )
    {
      v22 = v55;
      if ( (_QWORD)v55 )
      {
        v23 = 0;
        do
        {
          v24 = (_QWORD *)(v8 + 144 * v23);
          clear_tinfo_t(v24 + 8);
          v25 = v24[5];
          if ( v25 )
          {
            v24[6] = 0;
            qfree(v25);
          }
          v26 = v24[2];
          if ( v26 )
          {
            v24[3] = 0;
            qfree(v26);
          }
          ++v23;
          v8 = v54;
        }
        while ( v22 != v23 );
      }
      *(_QWORD *)&v55 = 0;
      qfree(v8);
    }
  }
  else if ( v54 )
  {
    v38 = v55;
    if ( (_QWORD)v55 )
    {
      v39 = 0;
      do
      {
        v40 = (_QWORD *)(v8 + 144 * v39);
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
        v8 = v54;
      }
      while ( v38 != v39 );
    }
    *(_QWORD *)&v55 = 0;
    qfree(v8);
  }
  return v64 - __readfsqword(0x28u);
}
