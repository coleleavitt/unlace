unsigned __int64 __fastcall sub_391290(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, char **, void **, __int64),
        unsigned __int8 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  int v9; // ebp
  char v10; // r15
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(_QWORD, _QWORD, _QWORD, _QWORD); // r8
  size_t v15; // r14
  __int64 v16; // r14
  char *v17; // rdi
  __int64 v18; // r15
  __int64 v19; // r14
  char *v20; // r12
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // r12
  __int64 v24; // rbp
  _QWORD *v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // rdi
  unsigned int v29; // r15d
  __int64 v30; // rsi
  void *v31; // r14
  __int64 v32; // rdx
  __int64 v33; // rcx
  void (__fastcall *v34)(_QWORD, char **, void **, __int64); // r15
  size_t v35; // r14
  char *v36; // rdi
  __int64 v37; // r15
  __int64 v38; // r14
  char *v39; // r12
  __int64 v40; // rdi
  __int64 v41; // rdi
  __int64 v42; // [rsp+0h] [rbp-138h]
  unsigned int v48; // [rsp+38h] [rbp-100h]
  __int64 (__fastcall *v49)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+48h] [rbp-F0h]
  __int64 v50; // [rsp+58h] [rbp-E0h] BYREF
  void *v51; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v52; // [rsp+68h] [rbp-D0h]
  __int64 v53; // [rsp+80h] [rbp-B8h]
  __int128 v54; // [rsp+88h] [rbp-B0h]
  __int128 v55; // [rsp+98h] [rbp-A0h]
  __int64 v56; // [rsp+A8h] [rbp-90h]
  int v57; // [rsp+B0h] [rbp-88h]
  char *v58; // [rsp+C0h] [rbp-78h] BYREF
  __int128 v59; // [rsp+C8h] [rbp-70h]
  __int128 v60; // [rsp+D8h] [rbp-60h]
  __int64 v61; // [rsp+E8h] [rbp-50h]
  int v62; // [rsp+F0h] [rbp-48h]
  unsigned __int64 v63; // [rsp+F8h] [rbp-40h]

  v63 = __readfsqword(0x28u);
  v53 = 0;
  v56 = 0;
  v57 = 1;
  v54 = 0;
  v55 = 0;
  v7 = 0;
  if ( (unsigned __int8)get_tinfo_details() )
  {
    v42 = v53 + 144 * v54;
    if ( v42 != v53 )
    {
      v8 = v53;
      v9 = -1;
      while ( 1 )
      {
        ++v9;
        if ( (get_tinfo_property() & 0x2F) != 0xD )
        {
          if ( HIBYTE(v57) )
          {
            v29 = a5 + (*(_QWORD *)v8 >> 3);
            v30 = v29;
            v31 = (void *)operator new(0x40u);
            v58 = nullptr;
            sub_390AA0((__int64)v31, v29, a4, (__int64)&v58, v9);
            clear_tinfo_t();
            v34 = **a2;
            v51 = v31;
            v58 = nullptr;
            v59 = 0;
            v35 = *(_QWORD *)(v8 + 24);
            if ( v35 )
            {
              v58 = (char *)qalloc_or_throw(*(_QWORD *)(v8 + 24), v30, v32, v33);
              *((_QWORD *)&v59 + 1) = v35;
              memcpy(v58, *(const void **)(v8 + 16), v35);
              *(_QWORD *)&v59 = v35;
            }
            v34(a2, &v58, &v51, a6);
            if ( v58 )
            {
              *(_QWORD *)&v59 = 0;
              qfree((__int64)v58);
            }
            if ( v51 )
              (*(void (__fastcall **)(void *))(*(_QWORD *)v51 + 8LL))(v51);
          }
          goto LABEL_38;
        }
        v58 = nullptr;
        v61 = 0;
        v62 = 1;
        v59 = 0;
        v60 = 0;
        if ( !(unsigned __int8)get_tinfo_details() )
        {
          v36 = v58;
          if ( v58 )
          {
            v37 = v59;
            if ( (_QWORD)v59 )
            {
              v38 = 0;
              do
              {
                v39 = &v36[144 * v38];
                clear_tinfo_t();
                v40 = *((_QWORD *)v39 + 5);
                if ( v40 )
                {
                  *((_QWORD *)v39 + 6) = 0;
                  qfree(v40);
                }
                v41 = *((_QWORD *)v39 + 2);
                if ( v41 )
                {
                  *((_QWORD *)v39 + 3) = 0;
                  qfree(v41);
                }
                ++v38;
                v36 = v58;
              }
              while ( v37 != v38 );
            }
            *(_QWORD *)&v59 = 0;
            qfree((__int64)v36);
          }
          goto LABEL_38;
        }
        v10 = sub_390D10(a1, (__int64 *)&v58, a3);
        if ( !a3 || v10 )
          break;
        if ( HIBYTE(v57) )
          goto LABEL_48;
LABEL_17:
        v17 = v58;
        if ( v58 )
        {
          v18 = v59;
          if ( (_QWORD)v59 )
          {
            v19 = 0;
            do
            {
              v20 = &v17[144 * v19];
              clear_tinfo_t();
              v21 = *((_QWORD *)v20 + 5);
              if ( v21 )
              {
                *((_QWORD *)v20 + 6) = 0;
                qfree(v21);
              }
              v22 = *((_QWORD *)v20 + 2);
              if ( v22 )
              {
                *((_QWORD *)v20 + 3) = 0;
                qfree(v22);
              }
              ++v19;
              v17 = v58;
            }
            while ( v18 != v19 );
          }
          *(_QWORD *)&v59 = 0;
          v8 += 144;
          qfree((__int64)v17);
          if ( v42 == v8 )
          {
LABEL_26:
            v7 = v53;
            goto LABEL_27;
          }
        }
        else
        {
LABEL_38:
          v8 += 144;
          if ( v42 == v8 )
            goto LABEL_26;
        }
      }
      if ( HIBYTE(v57) )
LABEL_48:
        v48 = a5;
      else
        v48 = a5 + (*(_QWORD *)v8 >> 3);
      v11 = operator new(0x40u);
      sub_390AA0(v11, v48, a4, v8 + 64, v9);
      v14 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))**a2;
      v50 = v11;
      v51 = nullptr;
      v52 = 0;
      v15 = *(_QWORD *)(v8 + 24);
      if ( v15 )
      {
        v49 = v14;
        v51 = (void *)qalloc_or_throw(*(_QWORD *)(v8 + 24), v48, v12, v13);
        *((_QWORD *)&v52 + 1) = v15;
        memcpy(v51, *(const void **)(v8 + 16), v15);
        *(_QWORD *)&v52 = v15;
        v14 = v49;
      }
      v16 = v14(a2, &v51, &v50, a6);
      if ( v51 )
      {
        *(_QWORD *)&v52 = 0;
        qfree((__int64)v51);
      }
      if ( v50 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 8LL))(v50);
      if ( v10 )
        sub_391290(a1, a2, a3, v8 + 64, (int)v48, v16);
      goto LABEL_17;
    }
LABEL_27:
    if ( v7 )
    {
      v23 = v54;
      if ( (_QWORD)v54 )
      {
        v24 = 0;
        do
        {
          v25 = (_QWORD *)(v7 + 144 * v24);
          clear_tinfo_t();
          v26 = v25[5];
          if ( v26 )
          {
            v25[6] = 0;
            qfree(v26);
          }
          v27 = v25[2];
          if ( v27 )
          {
            v25[3] = 0;
            qfree(v27);
          }
          ++v24;
          v7 = v53;
        }
        while ( v23 != v24 );
      }
      *(_QWORD *)&v54 = 0;
      qfree(v7);
    }
  }
  return v63 - __readfsqword(0x28u);
}
