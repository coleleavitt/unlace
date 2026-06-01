unsigned __int64 __fastcall sub_6AA870(unsigned __int64 a1, unsigned int a2, double a3, double a4)
{
  __int64 *v4; // rbp
  bool v5; // zf
  __int64 v7; // rax
  __int64 v8; // rax
  void *idati; // rax
  const char *v10; // r13
  unsigned int v11; // ebx
  __int64 tinfo_property; // rbx
  char *v13; // rdi
  char *v14; // rsi
  char *v15; // rdi
  __int64 v16; // r15
  __int64 v17; // r14
  char *v18; // rbp
  void *v19; // rdi
  void *v20; // rdi
  _QWORD *v21; // rbp
  void *v22; // rdi
  char *v23; // rdx
  __int64 v24; // rbp
  char *v25; // rax
  void *v26; // rdi
  _QWORD *v28; // r8
  unsigned __int64 v29; // r9
  _QWORD *v30; // rax
  _QWORD *v31; // rsi
  unsigned int v32; // eax
  __int64 v33; // rsi
  unsigned int v34; // r13d
  _DWORD *v35; // rsi
  const char *v36; // rax
  void *v37; // rdx
  const char *v38; // rsi
  unsigned int tinfo_tid; // eax
  __int64 v40; // [rsp+0h] [rbp-118h] BYREF
  __int64 v41; // [rsp+8h] [rbp-110h] BYREF
  void *v42; // [rsp+10h] [rbp-108h] BYREF
  __int128 v43; // [rsp+18h] [rbp-100h]
  void *v44; // [rsp+30h] [rbp-E8h] BYREF
  __int128 v45; // [rsp+38h] [rbp-E0h]
  int v46; // [rsp+48h] [rbp-D0h]
  __int16 v47; // [rsp+4Ch] [rbp-CCh]
  char v48; // [rsp+4Eh] [rbp-CAh]
  void *v49; // [rsp+50h] [rbp-C8h]
  __int128 v50; // [rsp+58h] [rbp-C0h]
  void *s; // [rsp+68h] [rbp-B0h]
  __int64 v52; // [rsp+70h] [rbp-A8h]
  void *v53; // [rsp+78h] [rbp-A0h]
  __int64 v54; // [rsp+80h] [rbp-98h]
  int v55; // [rsp+88h] [rbp-90h]
  __int64 v56; // [rsp+90h] [rbp-88h]
  void *v57[2]; // [rsp+98h] [rbp-80h] BYREF
  __int128 v58; // [rsp+A8h] [rbp-70h]
  void *ptr; // [rsp+B8h] [rbp-60h]
  __int128 v60; // [rsp+C0h] [rbp-58h]
  unsigned __int64 v61; // [rsp+D8h] [rbp-40h]

  v4 = (__int64 *)a1;
  v5 = *(_QWORD *)(a1 + 176) == 0;
  v61 = __readfsqword(0x28u);
  if ( !v5 )
  {
    a1 = *(_QWORD *)(a1 + 160);
    v28 = *(_QWORD **)(v4[19] + 8 * (a2 % a1));
    v29 = a2 % a1;
    if ( v28 )
    {
      v30 = (_QWORD *)*v28;
      if ( *(_DWORD *)(*v28 + 8LL) == a2 )
      {
LABEL_45:
        if ( v28 && *v28 )
          return v61 - __readfsqword(0x28u);
      }
      else
      {
        while ( 1 )
        {
          v31 = (_QWORD *)*v30;
          if ( !*v30 )
            break;
          v28 = v30;
          if ( v29 != *((unsigned int *)v31 + 2) % a1 )
            break;
          v30 = (_QWORD *)*v30;
          if ( *((_DWORD *)v31 + 2) == a2 )
            goto LABEL_45;
        }
      }
    }
    goto LABEL_3;
  }
  v7 = *(_QWORD *)(a1 + 168);
  if ( !v7 )
  {
LABEL_3:
    v8 = *v4;
    v40 = 0;
    idati = *(void **)(v8 + 8);
    WORD4(v45) = 257;
    *(_QWORD *)&v45 = a2;
    if ( !idati )
      idati = (void *)get_idati(a1, 257);
    v44 = idati;
    if ( (unsigned __int8)create_tinfo(&v40, 61, 189, &v44) )
    {
      v10 = (const char *)sub_6309B0(*v4, *(_QWORD *)(*v4 + 8), a2, nullptr);
      v11 = sub_518590(*(_QWORD *)(*(_QWORD *)*v4 + 1680LL), (__int64)v10);
      if ( (unsigned int)sub_517CB0(*(_QWORD *)(*(_QWORD *)*v4 + 1680LL), v11) == -1 )
      {
        v35 = sub_518BB0(*(_QWORD *)(*(_QWORD *)*v4 + 1680LL), v11);
        if ( v35 )
          sub_518560(*(_QWORD *)(*(_QWORD *)*v4 + 1680LL), (__int64)v35, 1408);
      }
      tinfo_property = get_tinfo_property(v40, 288);
      if ( tinfo_property )
      {
        v32 = sub_698F20((_QWORD *)*v4, v10, 1, 1u);
        v33 = v40;
        v34 = v32;
        v42 = nullptr;
        v41 = 0;
        v43 = 0;
        if ( (v40 & 0x100) != 0 && get_tinfo_pdata(&v42, v40, 1) )
        {
          v36 = haystack;
          if ( (_QWORD)v43 )
            v36 = (const char *)v42;
          if ( v36 )
          {
            v37 = *(void **)(*v4 + 8);
            WORD4(v45) = 256;
            *(_QWORD *)&v45 = v36;
            if ( !v37 )
              v37 = (void *)get_idati(&v42, v33);
            v44 = v37;
            if ( (unsigned __int8)create_tinfo(&v41, 61, 61, &v44)
              && (get_tinfo_property(v41, 288) || (get_tinfo_property(v41, 2) & 0xF) == 0xD) )
            {
              if ( (unsigned int)get_tinfo_property(v41, 7) )
              {
                v38 = haystack;
                if ( (_QWORD)v43 )
                  v38 = (const char *)v42;
                tinfo_tid = sub_698F20((_QWORD *)*v4, v38, 1, 1u);
              }
              else
              {
                tinfo_tid = get_tinfo_tid(&v41, 1);
              }
              if ( tinfo_tid != -1 )
                sub_3FE080(*v4, v34, tinfo_tid, 3u);
            }
          }
        }
        clear_tinfo_t(&v41);
        if ( v42 )
        {
          *(_QWORD *)&v43 = 0;
          qfree(v42);
        }
      }
      else if ( (get_tinfo_property(v40, 2) & 0x2F) == 0xD )
      {
        v13 = (char *)*v4;
        v47 = 0;
        v44 = nullptr;
        v46 = -1;
        v48 = 0;
        v49 = nullptr;
        s = v57;
        v52 = 1;
        v53 = nullptr;
        v54 = 0;
        v55 = 1065353216;
        v56 = 0;
        ptr = nullptr;
        v45 = 0;
        v50 = 0;
        *(_OWORD *)v57 = 0;
        v58 = 0;
        v60 = 0;
        if ( (unsigned __int8)sub_6A1230(v13, (__int64)&v44, &v40, 0, 0.0, a4) )
        {
          v14 = (char *)haystack;
          if ( (_QWORD)v45 )
            v14 = (char *)v44;
          sub_69BD10((__int64 *)*v4, v14, (__int64)&v44, 0);
        }
        v15 = (char *)ptr;
        if ( ptr )
        {
          v16 = v60;
          v17 = 0;
          if ( (_QWORD)v60 )
          {
            do
            {
              v18 = &v15[128 * v17];
              clear_tinfo_t(v18 + 64);
              v19 = *((void **)v18 + 5);
              if ( v19 )
              {
                *((_QWORD *)v18 + 6) = 0;
                qfree(v19);
              }
              v20 = *((void **)v18 + 2);
              if ( v20 )
              {
                *((_QWORD *)v18 + 3) = 0;
                qfree(v20);
              }
              ++v17;
              v15 = (char *)ptr;
            }
            while ( v16 != v17 );
          }
          *(_QWORD *)&v60 = 0;
          qfree(v15);
        }
        if ( v57[1] )
        {
          *(_QWORD *)&v58 = 0;
          qfree(v57[1]);
        }
        v21 = v53;
        if ( v53 )
        {
          do
          {
            v22 = v21;
            v21 = (_QWORD *)*v21;
            operator delete(v22, 0x20u);
          }
          while ( v21 );
        }
        memset(s, 0, 8 * v52);
        v54 = 0;
        v53 = nullptr;
        if ( s != v57 )
          operator delete(s, 8 * v52);
        v23 = (char *)v49;
        if ( v49 )
        {
          v24 = v50;
          if ( (_QWORD)v50 )
          {
            do
            {
              v25 = &v23[32 * tinfo_property];
              v26 = *(void **)v25;
              if ( *(_QWORD *)v25 )
              {
                *((_QWORD *)v25 + 1) = 0;
                qfree(v26);
                v23 = (char *)v49;
              }
              ++tinfo_property;
            }
            while ( v24 != tinfo_property );
          }
          *(_QWORD *)&v50 = 0;
          qfree(v23);
        }
        if ( v44 )
        {
          *(_QWORD *)&v45 = 0;
          qfree(v44);
        }
      }
    }
    clear_tinfo_t(&v40);
    return v61 - __readfsqword(0x28u);
  }
  while ( *(_DWORD *)(v7 + 8) != a2 )
  {
    v7 = *(_QWORD *)v7;
    if ( !v7 )
      goto LABEL_3;
  }
  return v61 - __readfsqword(0x28u);
}

