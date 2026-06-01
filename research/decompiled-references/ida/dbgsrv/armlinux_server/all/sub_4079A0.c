/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4079A0
// Address: 0x00000000004079A0

//----- (00000000004079A0) ----------------------------------------------------
__int64 __fastcall sub_4079A0(__int64 a1, char **a2)
{
  char *v4; // x0
  char *v5; // x22
  char *i; // x21
  char *v7; // x20
  void *v8; // x0
  void *v9; // x0
  int v10; // w20
  unsigned int v11; // w0
  size_t v12; // x0
  size_t v13; // x26
  int v14; // w0
  const char *v15; // x25
  unsigned __int64 v16; // x28
  size_t v17; // x26
  void *v18; // x0
  FILE *v19; // x0
  FILE *v20; // x26
  int v21; // w0
  int v22; // w25
  __int64 v23; // x20
  unsigned __int64 v24; // x25
  unsigned __int64 v25; // x26
  _BYTE *v26; // x0
  size_t v27; // x25
  unsigned __int64 v28; // x28
  size_t v29; // x26
  void *v30; // x0
  size_t v31; // x20
  size_t v32; // x20
  char *v33; // x0
  unsigned __int64 v34; // x23
  unsigned __int64 v35; // x2
  char *v36; // x0
  char *v37; // x25
  char *v38; // x28
  char *v39; // x20
  char *v40; // x23
  __int64 v41; // x28
  char *v42; // x26
  void *v43; // x0
  void *v44; // x0
  char *v45; // x1
  void *v46; // x0
  void *v47; // x0
  char *v48; // x19
  unsigned __int64 v50; // x25
  void *v51; // x0
  unsigned __int64 v52; // x28
  void *v53; // x0
  size_t v54; // x28
  unsigned __int64 v55; // x25
  void *v56; // x0
  size_t v57; // x0
  size_t v58; // x23
  size_t v59; // x25
  __int64 v60; // x25
  unsigned __int64 v61; // [xsp+70h] [xbp-5510h]
  size_t v62; // [xsp+70h] [xbp-5510h]
  __pid_t v63; // [xsp+80h] [xbp-5500h]
  int v64; // [xsp+84h] [xbp-54FCh]
  unsigned __int64 v65; // [xsp+98h] [xbp-54E8h]
  void *ptr; // [xsp+A0h] [xbp-54E0h] BYREF
  unsigned __int64 v67; // [xsp+A8h] [xbp-54D8h]
  __int64 v68; // [xsp+B0h] [xbp-54D0h]
  unsigned int v69; // [xsp+B8h] [xbp-54C8h]
  void *src; // [xsp+C0h] [xbp-54C0h] BYREF
  size_t v71; // [xsp+C8h] [xbp-54B8h]
  unsigned __int64 v72; // [xsp+D0h] [xbp-54B0h]
  int v73; // [xsp+D8h] [xbp-54A8h]
  void *dest; // [xsp+E0h] [xbp-54A0h] BYREF
  unsigned __int64 v75; // [xsp+E8h] [xbp-5498h]
  unsigned __int64 v76; // [xsp+F0h] [xbp-5490h]
  unsigned int v77; // [xsp+F8h] [xbp-5488h]
  void *v78; // [xsp+100h] [xbp-5480h]
  size_t v79; // [xsp+108h] [xbp-5478h]
  size_t v80; // [xsp+110h] [xbp-5470h]
  int v81; // [xsp+118h] [xbp-5468h]
  void *v82; // [xsp+120h] [xbp-5460h]
  size_t v83; // [xsp+128h] [xbp-5458h]
  size_t v84; // [xsp+130h] [xbp-5450h]
  _BYTE v85[4]; // [xsp+138h] [xbp-5448h] BYREF
  char v86[8228]; // [xsp+13Ch] [xbp-5444h] BYREF
  __int64 v87; // [xsp+2160h] [xbp-3420h]
  int v88; // [xsp+216Ch] [xbp-3414h]
  char v89[1024]; // [xsp+4178h] [xbp-1408h] BYREF
  char v90[4096]; // [xsp+4578h] [xbp-1008h] BYREF

  v63 = getpid();
  v4 = *a2;
  if ( *a2 )
  {
    v5 = a2[1];
    if ( v5 )
    {
      for ( i = nullptr; i != v5; ++i )
      {
        v7 = &v4[64 * (_QWORD)i];
        v8 = *((void **)v7 + 5);
        if ( v8 )
        {
          *((_QWORD *)v7 + 6) = 0;
          j__free(v8);
        }
        v9 = *((void **)v7 + 1);
        if ( v9 )
        {
          *((_QWORD *)v7 + 2) = 0;
          j__free(v9);
        }
        v4 = *a2;
      }
    }
    a2[1] = nullptr;
    j__free(v4);
    *a2 = nullptr;
    a2[2] = nullptr;
  }
  v87 = 0;
  v88 = 0;
  if ( !(unsigned int)sub_48EBA8("/proc/*", (__int64)v85, 0x4000) )
  {
    while ( 1 )
    {
      v10 = v86[0] & 0x80;
      if ( v86[0] < 0 || (unsigned int)(unsigned __int8)v86[0] - 48 > 9 )
        goto LABEL_53;
      src = nullptr;
      v71 = 0;
      v72 = 0;
      dest = nullptr;
      v75 = 0;
      v76 = 0;
      v11 = strtol(v86, nullptr, 10);
      v69 = v11;
      if ( v63 != v11 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, char *, __int64))(*(_QWORD *)a1 + 656LL))(
               a1,
               v11,
               v89,
               1024) )
        {
          break;
        }
      }
      if ( dest )
      {
        v75 = 0;
        j__free(dest);
      }
      v47 = src;
      if ( !src )
        goto LABEL_53;
LABEL_52:
      v71 = 0;
      j__free(v47);
LABEL_53:
      if ( (unsigned int)sub_48EAF0((__int64)v85) )
        goto LABEL_54;
    }
    v12 = strlen(v89);
    v13 = v12;
    if ( v12 )
    {
      v50 = v12 + 1;
      v51 = src;
      if ( v50 > v72 )
      {
        v51 = sub_491288((__int64)&src, src, v50, 1u);
        src = v51;
      }
      v71 = v50;
      memmove(v51, v89, v13);
      *((_BYTE *)src + v13) = 0;
    }
    else
    {
      v71 = 0;
    }
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 664LL))(a1, v69);
    v73 = v14;
    if ( v14 == 4 )
    {
      v16 = 5;
      v17 = 4;
      v15 = "[32]";
    }
    else if ( v14 == 8 )
    {
      v16 = 5;
      v15 = "[64]";
      v17 = 4;
    }
    else
    {
      v15 = "[x]";
      v16 = 4;
      v17 = 3;
    }
    v18 = dest;
    if ( v16 > v76 )
    {
      v18 = sub_491288((__int64)&dest, dest, v16, 1u);
      dest = v18;
    }
    v75 = v16;
    memcpy(v18, v15, v17);
    *((_BYTE *)dest + v17) = 0;
    sub_49B748(v90, 0x1000u, "/proc/%u/cmdline", v69);
    v19 = sub_48DCD0(v90, (unsigned __int8 *)"r");
    v20 = v19;
    if ( !v19 || (v21 = sub_4904B8(v19, v90, 0x1000u), v64 = v21, (v22 = v21) == 0) )
    {
      v23 = v75;
      if ( v75 )
      {
        v24 = v75 + 1;
        v25 = v75 - 1;
        v26 = dest;
        if ( v76 >= v75 + 1 )
        {
LABEL_26:
          v75 = v24;
          v26[v23] = 0;
          *((_BYTE *)dest + v25) = aAutohide[8];
          if ( !v71 )
          {
            v77 = v69;
            v78 = nullptr;
            v79 = 0;
            v80 = 0;
            goto LABEL_46;
          }
          v27 = v71 - 1;
          if ( v71 == 1 )
          {
            v31 = 1;
          }
          else
          {
            if ( v75 )
            {
              v28 = v75 - 1;
              v29 = v27 + v75 - 1;
            }
            else
            {
              v29 = v71 - 1;
              v28 = 0;
            }
            v30 = dest;
            if ( v29 + 1 > v76 )
            {
              v30 = sub_491288((__int64)&dest, dest, v29 + 1, 1u);
              dest = v30;
            }
            v75 = v29 + 1;
            *((_BYTE *)v30 + v29) = 0;
            memcpy((char *)dest + v28, src, v27);
            v31 = v71;
          }
LABEL_33:
          v77 = v69;
          v78 = nullptr;
          v79 = 0;
          v80 = 0;
          if ( v31 )
          {
            v78 = sub_491248(v31);
            v80 = v31;
            memcpy(v78, src, v31);
            v79 = v31;
            v32 = v75;
            v81 = v73;
            v82 = nullptr;
            v83 = 0;
            v84 = 0;
            if ( v75 )
              goto LABEL_35;
            goto LABEL_47;
          }
LABEL_46:
          v32 = v75;
          v81 = v73;
          v82 = nullptr;
          v83 = 0;
          v84 = 0;
          if ( v75 )
          {
LABEL_35:
            v82 = sub_491248(v32);
            v84 = v32;
            memcpy(v82, dest, v32);
            v83 = v32;
            v33 = a2[1];
            v34 = (unsigned __int64)a2[2];
            v35 = (unsigned __int64)(v33 + 1);
            if ( (unsigned __int64)(v33 + 1) > v34 )
            {
LABEL_36:
              v36 = (char *)sub_491288((__int64)a2, nullptr, v35, 0x40u);
              v38 = a2[1];
              v37 = a2[2];
              a2[2] = (char *)v34;
              v39 = v36;
              v40 = *a2;
              v41 = (__int64)(v38 - 1);
              if ( v41 >= 0 )
              {
                v42 = v36;
                do
                {
                  *(_DWORD *)v42 = *(_DWORD *)v40;
                  *((_QWORD *)v42 + 1) = *((_QWORD *)v40 + 1);
                  *((_QWORD *)v40 + 1) = 0;
                  *((_QWORD *)v42 + 2) = *((_QWORD *)v40 + 2);
                  *((_QWORD *)v40 + 2) = 0;
                  *((_QWORD *)v42 + 3) = *((_QWORD *)v40 + 3);
                  *((_QWORD *)v40 + 3) = 0;
                  *((_DWORD *)v42 + 8) = *((_DWORD *)v40 + 8);
                  *((_QWORD *)v42 + 5) = *((_QWORD *)v40 + 5);
                  *((_QWORD *)v40 + 5) = 0;
                  *((_QWORD *)v42 + 6) = *((_QWORD *)v40 + 6);
                  *((_QWORD *)v40 + 6) = 0;
                  *((_QWORD *)v42 + 7) = *((_QWORD *)v40 + 7);
                  *((_QWORD *)v40 + 7) = 0;
                  v43 = *((void **)v40 + 5);
                  if ( v43 )
                  {
                    *((_QWORD *)v40 + 6) = 0;
                    j__free(v43);
                  }
                  v44 = *((void **)v40 + 1);
                  if ( v44 )
                  {
                    *((_QWORD *)v40 + 2) = 0;
                    j__free(v44);
                  }
                  --v41;
                  v40 += 64;
                  v42 += 64;
                }
                while ( v41 != -1 );
                v40 = *a2;
              }
              j__free(v40);
              v33 = a2[1];
              *a2 = v39;
              a2[2] = v37;
LABEL_49:
              v45 = &v39[64 * (_QWORD)v33];
              *(_DWORD *)v45 = v77;
              *((_QWORD *)v45 + 1) = v78;
              *((_QWORD *)v45 + 2) = v79;
              *((_QWORD *)v45 + 3) = v80;
              *((_DWORD *)v45 + 8) = v81;
              *((_QWORD *)v45 + 5) = v82;
              *((_QWORD *)v45 + 6) = v83;
              v46 = dest;
              *((_QWORD *)v45 + 7) = v84;
              ++a2[1];
              if ( v46 )
              {
                v75 = 0;
                j__free(v46);
              }
              v47 = src;
              if ( !src )
                goto LABEL_53;
              goto LABEL_52;
            }
LABEL_48:
            v39 = *a2;
            goto LABEL_49;
          }
LABEL_47:
          v33 = a2[1];
          v34 = (unsigned __int64)a2[2];
          v35 = (unsigned __int64)(v33 + 1);
          if ( (unsigned __int64)(v33 + 1) > v34 )
            goto LABEL_36;
          goto LABEL_48;
        }
      }
      else
      {
        v24 = 2;
        v23 = 1;
        v25 = 0;
        v26 = dest;
        if ( v76 >= 2 )
          goto LABEL_26;
      }
      v26 = sub_491288((__int64)&dest, v26, v24, 1u);
      dest = v26;
      goto LABEL_26;
    }
    v90[v21] = 0;
    sub_4906A0(v20);
    if ( v22 <= 0 )
    {
LABEL_81:
      v31 = v71;
      goto LABEL_33;
    }
    while ( 1 )
    {
      ptr = nullptr;
      v67 = 0;
      v68 = 0;
      v57 = strlen(&v90[v10]);
      v58 = v57 + 1;
      v59 = v57;
      ptr = sub_491288((__int64)&ptr, nullptr, v57 + 1, 1u);
      v67 = v58;
      memmove(ptr, &v90[v10], v59);
      *((_BYTE *)ptr + v59) = 0;
      sub_480C80((const char **)&ptr);
      v60 = v75;
      if ( v75 )
      {
        v61 = v75 - 1;
        v52 = v75 + 1;
        v53 = dest;
        if ( v75 + 1 > v76 )
          goto LABEL_80;
      }
      else
      {
        v52 = 2;
        v61 = 0;
        v60 = 1;
        v53 = dest;
        if ( v76 < 2 )
        {
LABEL_80:
          v53 = sub_491288((__int64)&dest, v53, v52, 1u);
          dest = v53;
        }
      }
      v75 = v52;
      *((_BYTE *)v53 + v60) = 0;
      *((_BYTE *)dest + v61) = aAutohide[8];
      if ( !v67 )
        goto LABEL_75;
      v54 = v67 - 1;
      if ( v67 == 1 )
        goto LABEL_75;
      if ( v75 )
      {
        v65 = v75 - 1;
        v62 = v54 + v75 - 1;
        v55 = v54 + v75;
        v56 = dest;
        if ( v54 + v75 > v76 )
          goto LABEL_83;
      }
      else
      {
        v62 = v67 - 1;
        v65 = 0;
        v55 = v67;
        v56 = dest;
        if ( v67 > v76 )
        {
LABEL_83:
          v56 = sub_491288((__int64)&dest, v56, v55, 1u);
          dest = v56;
        }
      }
      v75 = v55;
      *((_BYTE *)v56 + v62) = 0;
      memcpy((char *)dest + v65, ptr, v54);
LABEL_75:
      v10 += 1 + strlen(&v90[v10]);
      if ( ptr )
      {
        v67 = 0;
        j__free(ptr);
      }
      if ( v64 <= v10 )
        goto LABEL_81;
    }
  }
LABEL_54:
  v48 = a2[1];
  sub_48EBF0((__int64)v85);
  return (unsigned int)v48;
}
