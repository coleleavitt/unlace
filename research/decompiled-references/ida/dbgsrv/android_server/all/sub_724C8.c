/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_724C8
// Address: 0x00000000000724C8

//----- (00000000000724C8) ----------------------------------------------------
__int64 __fastcall sub_724C8(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        pthread_mutex_t *a7)
{
  __int64 v10; // x8
  unsigned __int64 v11; // x9
  __int64 v13; // x25
  pthread_mutex_t *v16; // x0
  _DWORD *align; // x0
  char v18; // w21
  __int64 v19; // x23
  __int64 v20; // x0
  unsigned __int64 v21; // x25
  size_t v22; // x24
  void *v23; // x0
  char *v24; // x8
  const char *v25; // x2
  int v26; // w8
  double v27; // d0
  char *v28; // x2
  __int64 v29; // x0
  __int64 v30; // x8
  size_t v31; // x24
  __int64 v32; // x26
  __int64 v33; // x28
  unsigned __int64 v34; // x25
  __int64 v35; // x0
  char *v36; // x23
  __int64 v37; // x0
  __int64 v38; // x8
  size_t v39; // x23
  __int64 v40; // x25
  __int64 v41; // x26
  unsigned __int64 v42; // x24
  __int64 v43; // x0
  const char *v44; // x1
  size_t v45; // x2
  void *v46; // x0
  size_t v47; // x0
  __int64 v48; // x8
  size_t v49; // x24
  __int64 v50; // x26
  size_t v51; // x28
  unsigned __int64 v52; // x25
  __int64 v53; // x0
  void *v55; // [xsp+140h] [xbp-E8h] BYREF
  void *ptr; // [xsp+148h] [xbp-E0h]
  __int64 v57; // [xsp+150h] [xbp-D8h]
  __int64 v58; // [xsp+158h] [xbp-D0h]
  unsigned __int8 v59[8]; // [xsp+160h] [xbp-C8h] BYREF
  char *s; // [xsp+168h] [xbp-C0h]
  unsigned __int64 v61; // [xsp+170h] [xbp-B8h]
  __int64 v62; // [xsp+178h] [xbp-B0h]
  char v63[8]; // [xsp+180h] [xbp-A8h] BYREF
  void *v64; // [xsp+188h] [xbp-A0h]
  __int64 v65; // [xsp+190h] [xbp-98h]
  __int64 v66; // [xsp+198h] [xbp-90h]
  char v67[8]; // [xsp+1A0h] [xbp-88h] BYREF
  void *v68; // [xsp+1A8h] [xbp-80h]
  __int64 v69; // [xsp+1B0h] [xbp-78h]
  __int64 v70; // [xsp+1B8h] [xbp-70h]
  __int64 v71; // [xsp+1C0h] [xbp-68h]

  v71 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v10 = *(_QWORD *)(a1 + 80);
  v11 = *(_QWORD *)(a1 + 88);
  LODWORD(v13) = a4;
  v16 = (pthread_mutex_t *)(a1 + 72);
  if ( v11 >= v10 + 1 )
  {
    align = (_DWORD *)v16->__align;
  }
  else
  {
    align = qvector_reserve(v16, *(void **)(a1 + 72), v10 + 1, 4u);
    v10 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 72) = align;
  }
  align[v10] = 0;
  ++*(_QWORD *)(a1 + 80);
  if ( (int)v13 >= 1 )
  {
    v13 = (unsigned int)v13;
    do
    {
      sub_65CA4((pthread_mutex_t *)(a1 + 24), a5);
      --v13;
      a5 += 32;
    }
    while ( v13 );
  }
  v18 = sub_73704((_QWORD *)a1, (__int64)a6, a2, a3);
  if ( (v18 & 1) == 0 )
  {
    if ( !a7 )
      goto LABEL_83;
    v19 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32;
    v20 = __strlen_chk("Runtime error", 14);
    if ( v20 )
    {
      v21 = v20 + 1;
      v22 = v20;
      if ( *(&a7->__align + 2) >= (unsigned __int64)(v20 + 1) )
      {
        v23 = (void *)a7->__align;
      }
      else
      {
        v23 = qvector_reserve(a7, (void *)a7->__align, v21, 1u);
        a7->__align = (__int64)v23;
      }
      *(&a7->__align + 1) = v21;
      memmove(v23, "Runtime error", v22);
      *(_BYTE *)(a7->__align + v22) = 0;
    }
    else
    {
      *(&a7->__align + 1) = 0;
    }
    v67[0] = 2;
    v69 = 0;
    v70 = 0;
    v68 = nullptr;
    v63[0] = 2;
    v65 = 0;
    v66 = 0;
    v64 = nullptr;
    get_idcv_attr((__int64)v63, v19, "line", 0);
    get_idcv_attr((__int64)v67, v19, "file", 0);
    if ( v63[0] == 2 && (__int64)v64 >= 1 && v67[0] == 7 )
    {
      if ( v69 )
        v24 = (char *)v68;
      else
        v24 = &byte_F154B;
      if ( *v24 )
        v25 = v24;
      else
        v25 = "<unknown>";
      sub_4C730(a7, " on %s:%d", v25, (_DWORD)v64);
      goto LABEL_41;
    }
    v59[0] = 2;
    v61 = 0;
    v62 = 0;
    s = nullptr;
    get_idcv_attr((__int64)v59, v19, "func", 0);
    v26 = v59[0];
    if ( v59[0] == 7 )
    {
      if ( v61 < 2 )
      {
LABEL_38:
        if ( s )
        {
          v61 = 0;
          qfree(s);
          s = nullptr;
          v62 = 0;
        }
LABEL_41:
        v29 = __strlen_chk(": ", 3);
        v30 = *(&a7->__align + 1);
        v31 = v29;
        if ( v30 )
          v32 = v30 - 1;
        else
          v32 = 0;
        v33 = v32 + v29;
        v34 = v32 + v29 + 1;
        if ( *(&a7->__align + 2) >= v34 )
        {
          v35 = a7->__align;
        }
        else
        {
          v35 = (__int64)qvector_reserve(a7, (void *)a7->__align, v34, 1u);
          a7->__align = v35;
        }
        *(&a7->__align + 1) = v34;
        *(_BYTE *)(v35 + v33) = 0;
        memmove((void *)(a7->__align + v32), ": ", v31);
        v59[0] = 2;
        v61 = 0;
        v62 = 0;
        s = nullptr;
        get_idcv_attr((__int64)v59, v19, "description", 0);
        if ( v59[0] == 7 )
        {
          if ( v61 )
          {
            v36 = s;
            if ( !s )
            {
LABEL_67:
              if ( v59[0] == 5 )
              {
                sub_6F17C((__int64)s, v59);
              }
              else if ( v59[0] == 7 && s )
              {
                v61 = 0;
                qfree(s);
                s = nullptr;
                v62 = 0;
              }
              if ( v63[0] == 5 )
              {
                sub_6F17C((__int64)v64, (unsigned __int8 *)v63);
              }
              else if ( v63[0] == 7 && v64 )
              {
                v65 = 0;
                qfree(v64);
                v64 = nullptr;
                v66 = 0;
              }
              if ( v67[0] == 5 )
              {
                sub_6F17C((__int64)v68, (unsigned __int8 *)v67);
              }
              else if ( v67[0] == 7 && v68 )
              {
                v69 = 0;
                qfree(v68);
                v68 = nullptr;
                v70 = 0;
                if ( !a6 )
                  goto LABEL_85;
LABEL_84:
                sub_7748C((__int64 *)(a1 + 24), a6);
                goto LABEL_85;
              }
LABEL_83:
              if ( !a6 )
                goto LABEL_85;
              goto LABEL_84;
            }
          }
          else
          {
            v36 = &byte_F154B;
          }
          v47 = strlen(v36);
          v48 = *(&a7->__align + 1);
          v49 = v47;
          if ( v48 )
            v50 = v48 - 1;
          else
            v50 = 0;
          v51 = v50 + v47;
          v52 = v50 + v47 + 1;
          if ( *(&a7->__align + 2) >= v52 )
          {
            v53 = a7->__align;
          }
          else
          {
            v53 = (__int64)qvector_reserve(a7, (void *)a7->__align, v52, 1u);
            a7->__align = v53;
          }
          *(&a7->__align + 1) = v52;
          *(_BYTE *)(v53 + v51) = 0;
          v44 = v36;
          v45 = v49;
          v46 = (void *)(a7->__align + v50);
        }
        else
        {
          v37 = __strlen_chk("Unhandled exception", 20);
          v38 = *(&a7->__align + 1);
          v39 = v37;
          if ( v38 )
            v40 = v38 - 1;
          else
            v40 = 0;
          v41 = v40 + v37;
          v42 = v40 + v37 + 1;
          if ( *(&a7->__align + 2) >= v42 )
          {
            v43 = a7->__align;
          }
          else
          {
            v43 = (__int64)qvector_reserve(a7, (void *)a7->__align, v42, 1u);
            a7->__align = v43;
          }
          *(&a7->__align + 1) = v42;
          *(_BYTE *)(v43 + v41) = 0;
          v44 = "Unhandled exception";
          v45 = v39;
          v46 = (void *)(a7->__align + v40);
        }
        memmove(v46, v44, v45);
        goto LABEL_67;
      }
      LOBYTE(v55) = 2;
      v57 = 0;
      v58 = 0;
      ptr = nullptr;
      get_idcv_attr((__int64)&v55, v19, byte_104400, 0);
      if ( v61 )
        v28 = s;
      else
        v28 = &byte_F154B;
      sub_4C730(a7, " at %s+0x%a", v28, v27);
      if ( (unsigned __int8)v55 == 5 )
      {
        sub_6F17C((__int64)ptr, (unsigned __int8 *)&v55);
      }
      else if ( (unsigned __int8)v55 == 7 && ptr )
      {
        v57 = 0;
        qfree(ptr);
        ptr = nullptr;
        v58 = 0;
      }
      v26 = v59[0];
    }
    if ( v26 == 5 )
    {
      sub_6F17C((__int64)s, v59);
      goto LABEL_41;
    }
    if ( v26 != 7 )
      goto LABEL_41;
    goto LABEL_38;
  }
LABEL_85:
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 124LL) )
  {
    callui(24, 10, 0);
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 124LL) = 0;
  }
  return v18 & 1;
}
// 72744: variable 'v27' is possibly undefined
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// F154B: using guessed type char byte_F154B;
// 166908: using guessed type __int64 (__fastcall *callui)(_QWORD, _QWORD, _QWORD);
