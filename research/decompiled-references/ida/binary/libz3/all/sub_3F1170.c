__int64 __fastcall sub_3F1170(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        char *a6,
        double a7,
        _BYTE *a8,
        _BYTE *a9)
{
  __int64 v11; // rbp
  void *v13; // r13
  __int64 v14; // rax
  bool v15; // zf
  _DWORD *v16; // rax
  __int64 *v17; // rdi
  int *v18; // rsi
  int v19; // r9d
  _DWORD *v20; // rax
  _DWORD *v21; // rax
  int v22; // r9d
  _DWORD *v23; // rax
  _DWORD *v24; // rax
  unsigned int v25; // ebx
  __int64 v27; // rbx
  int v28; // eax
  char v29; // al
  int v30; // r9d
  __int64 v31; // rbp
  int v32; // ecx
  __int64 v33; // rbx
  __int64 v34; // rbx
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  __int64 v38; // rax
  __int64 v39; // rbx
  char v40; // al
  int v41; // r9d
  int v42; // r9d
  __int64 v43; // rbx
  _QWORD *v44; // rdi
  __int64 v45; // rbx
  int v46; // r9d
  __int64 v47; // rbx
  __int64 v48; // rbx
  char v49; // [rsp+10h] [rbp-148h]
  __int64 v50; // [rsp+10h] [rbp-148h]
  __int64 v52; // [rsp+18h] [rbp-140h]
  char v53; // [rsp+20h] [rbp-138h]
  __int64 v54; // [rsp+20h] [rbp-138h]
  __int64 v55; // [rsp+20h] [rbp-138h]
  __int64 v57; // [rsp+28h] [rbp-130h]
  __int64 v58; // [rsp+28h] [rbp-130h]
  void *v59; // [rsp+30h] [rbp-128h]
  __int64 v60; // [rsp+48h] [rbp-110h]
  char v61; // [rsp+5Eh] [rbp-FAh] BYREF
  char v62; // [rsp+5Fh] [rbp-F9h] BYREF
  int v63[2]; // [rsp+60h] [rbp-F8h] BYREF
  char v64[8]; // [rsp+68h] [rbp-F0h]
  int v65[2]; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v66; // [rsp+78h] [rbp-E0h]
  _QWORD v67[2]; // [rsp+80h] [rbp-D8h] BYREF
  int v68[2]; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v69; // [rsp+98h] [rbp-C0h]
  __int64 v70; // [rsp+A0h] [rbp-B8h]
  __int64 v71; // [rsp+A8h] [rbp-B0h]
  _QWORD v72[4]; // [rsp+B0h] [rbp-A8h] BYREF
  int v73[2]; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v74; // [rsp+D8h] [rbp-80h]
  __int64 v75; // [rsp+E0h] [rbp-78h]
  __int64 v76; // [rsp+E8h] [rbp-70h]
  int v77[2]; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v78; // [rsp+F8h] [rbp-60h]
  _QWORD v79[11]; // [rsp+100h] [rbp-58h] BYREF

  v11 = a2;
  v13 = qword_1C7F2C0;
  sub_182CEF0(qword_1C7F2C0, a3);
  sub_182CBA0(v13, a3 + 16);
  v14 = *a1;
  *(_BYTE *)(a3 + 20) &= ~1u;
  v15 = *(_WORD *)(a2 + 4) == 0;
  *(_DWORD *)(a3 + 16) = 1;
  *(_QWORD *)v63 = v14;
  *(_QWORD *)v64 = 0;
  if ( v15 )
  {
    v53 = 1;
    v49 = 0;
    v16 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v16 && !*v16 && v16[1] == 8 && *(_DWORD *)(a2 + 24) == 1 )
    {
      v53 = 0;
      v11 = *(_QWORD *)(a2 + 32);
      v49 = 1;
    }
  }
  else
  {
    v53 = 1;
    v49 = 0;
  }
  v17 = (__int64 *)qword_1C7F2C0;
  v18 = (int *)v67;
  *(_QWORD *)v65 = 1;
  v66 = 0;
  v67[0] = 1;
  v67[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v67);
  BYTE4(v67[0]) &= ~1u;
  LODWORD(v67[0]) = 1;
  if ( v49 )
  {
    v17 = (__int64 *)qword_1C7F2C0;
    v18 = v65;
    sub_1831620(qword_1C7F2C0, v65);
  }
  if ( *(_WORD *)(v11 + 4) )
    goto LABEL_24;
  v20 = *(_DWORD **)(*(_QWORD *)(v11 + 16) + 24LL);
  if ( !v20 )
    goto LABEL_24;
  if ( *v20 == 5 )
  {
    v28 = v20[1];
    if ( v28 == 2 )
    {
      if ( *(_DWORD *)(v11 + 24) != 2 )
        goto LABEL_24;
      v55 = *(_QWORD *)(v11 + 32);
      v58 = *(_QWORD *)(v11 + 40);
      v40 = sub_3F0AC0(a1, (__int64)v65, v55, a3, (__int64)v63, v19, a7);
    }
    else
    {
      if ( v28 != 3 )
      {
        if ( v28 == 4 )
        {
          if ( *(_DWORD *)(v11 + 24) != 2 )
            goto LABEL_24;
          v50 = *(_QWORD *)(v11 + 32);
          v57 = *(_QWORD *)(v11 + 40);
          v29 = sub_3F0AC0(a1, (__int64)v65, v50, a3, (__int64)v63, v19, a7);
        }
        else
        {
          if ( v28 != 5 || *(_DWORD *)(v11 + 24) != 2 )
          {
LABEL_24:
            if ( (unsigned int)sub_180B130(v17) > 1 )
            {
              if ( (unsigned __int8)sub_186A530(a7) )
              {
                sub_186A4C0(a7);
                v27 = sub_180B150(v17, v18);
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_1606360(v77, v11, *a1, 0, 0, 0);
                sub_160E8B0(v27, v77);
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_18572D0(v79);
                sub_186A500(v79, "\n");
              }
              else
              {
                v34 = sub_180B150(v17, v18);
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_1606360(v77, v11, *a1, 0, 0, 0);
                sub_160E8B0(v34, v77);
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_18572D0(v79);
              }
            }
            goto LABEL_22;
          }
          v57 = *(_QWORD *)(v11 + 32);
          v50 = *(_QWORD *)(v11 + 40);
          v29 = sub_3F0AC0(a1, (__int64)v65, v50, a3, (__int64)v63, v19, a7);
        }
        if ( !v29 )
          goto LABEL_22;
        sub_3EBD70((__int64)v77, (__int64)v65);
        if ( (unsigned __int8)sub_3F0AC0(a1, (__int64)v77, v57, a3, (__int64)v63, v30, a7) )
        {
          sub_25A130((char *)v77);
          v31 = sub_15D1F10(v50);
          *a6 = v53;
LABEL_40:
          if ( !*(_QWORD *)v64 || (v32 = *(_DWORD *)(*(_QWORD *)v64 - 4LL)) == 0 )
          {
            *(_QWORD *)v77 = 0;
            v78 = 0;
            v79[0] = 1;
            v79[1] = 0;
            sub_182CBA0(qword_1C7F2C0, v79);
            BYTE4(v79[0]) &= ~1u;
            LODWORD(v79[0]) = 1;
            v38 = sub_3EC140((__int64)(a1 + 1), (int)v77, v31, v35, v36, v37);
            v39 = v38;
            if ( v38 )
              ++*(_DWORD *)(v38 + 8);
            sub_3E5D20(*a4, a4[1]);
            *a4 = v39;
            sub_25A130((char *)v77);
            goto LABEL_46;
          }
          if ( v32 == 1 )
          {
            v33 = **(_QWORD **)v64;
            if ( !**(_QWORD **)v64 )
            {
LABEL_45:
              sub_3E5D20(*a4, a4[1]);
              *a4 = v33;
LABEL_46:
              v25 = 1;
              goto LABEL_23;
            }
          }
          else
          {
            v33 = sub_15E1AF0(a1[1]);
            if ( !v33 )
              goto LABEL_45;
          }
          ++*(_DWORD *)(v33 + 8);
          goto LABEL_45;
        }
        goto LABEL_53;
      }
      if ( *(_DWORD *)(v11 + 24) != 2 )
        goto LABEL_24;
      v58 = *(_QWORD *)(v11 + 32);
      v55 = *(_QWORD *)(v11 + 40);
      v40 = sub_3F0AC0(a1, (__int64)v65, v55, a3, (__int64)v63, v19, a7);
    }
    if ( !v40 )
      goto LABEL_22;
    sub_3EBD70((__int64)v77, (__int64)v65);
    if ( (unsigned __int8)sub_3F0AC0(a1, (__int64)v77, v58, a3, (__int64)v63, v41, a7) )
    {
      sub_25A130((char *)v77);
      v31 = sub_15D1F10(v55);
      *a6 = v49;
      goto LABEL_40;
    }
LABEL_53:
    sub_25A130((char *)v77);
    goto LABEL_22;
  }
  if ( *v20 )
    goto LABEL_24;
  if ( v20[1] != 2 )
    goto LABEL_24;
  if ( *(_DWORD *)(v11 + 24) != 2 )
    goto LABEL_24;
  v17 = *(__int64 **)(v11 + 32);
  v52 = (__int64)v17;
  v54 = *(_QWORD *)(v11 + 40);
  v21 = *(_DWORD **)(sub_15D1F10(v17) + 24);
  if ( !v21 || *v21 != 5 )
    goto LABEL_24;
  *(_QWORD *)v68 = 0;
  v70 = 1;
  v72[0] = 0;
  v72[2] = 1;
  *(_QWORD *)v73 = 0;
  v75 = 1;
  v15 = *((_WORD *)v17 + 2) == 0;
  v69 = 0;
  v71 = 0;
  v72[1] = 0;
  v72[3] = 0;
  v74 = 0;
  v76 = 0;
  if ( v15 )
  {
    v23 = *(_DWORD **)(v17[2] + 24);
    if ( v23 )
    {
      if ( *v23 == 5 && v23[1] == 16 && *((_DWORD *)v17 + 6) == 2 )
      {
        v60 = v17[4];
        v44 = a1 + 1;
        if ( (unsigned __int8)sub_1666AE0(a1 + 1, *(_QWORD *)(v52 + 40), v68, &v61) )
        {
          if ( v61 && (unsigned __int8)sub_1666AE0(v44, v54, v73, &v62) && !v73[0] )
          {
            if ( !v68[0] )
            {
              if ( !(unsigned int)sub_180B130(v44) )
                goto LABEL_21;
              if ( (unsigned __int8)sub_186A530(a7) )
              {
                sub_186A4C0(a7);
                v45 = sub_180B150(v44, v54);
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_1606360(v77, v11, *a1, 0, 0, 0);
                sub_160E8B0(v45, v77);
                std::__ostream_insert<char,std::char_traits<char>>();
                goto LABEL_80;
              }
              v47 = sub_180B150(v44, v54);
              std::__ostream_insert<char,std::char_traits<char>>();
              sub_1606360(v77, v11, *a1, 0, 0, 0);
              sub_160E8B0(v47, v77);
              std::__ostream_insert<char,std::char_traits<char>>();
              goto LABEL_94;
            }
            goto LABEL_91;
          }
        }
      }
    }
  }
  if ( !*(_WORD *)(v54 + 4)
    && (v24 = *(_DWORD **)(*(_QWORD *)(v54 + 16) + 24LL)) != nullptr
    && *v24 == 5
    && v24[1] == 16
    && *(_DWORD *)(v54 + 24) == 2
    && (v60 = *(_QWORD *)(v54 + 32), (unsigned __int8)sub_1666AE0(a1 + 1, *(_QWORD *)(v54 + 40), v68, &v61))
    && (v59 = a1 + 1, v61)
    && (unsigned __int8)sub_1666AE0(v59, v52, v73, v77)
    && !v73[0] )
  {
    if ( v68[0] )
    {
LABEL_91:
      sub_27B950((__int64)qword_1C7F2C0, a5, v68);
      if ( !(unsigned __int8)sub_3F0AC0(a1, (__int64)v65, v60, a3, (__int64)v63, v46, a7) )
        goto LABEL_21;
      goto LABEL_68;
    }
    if ( (unsigned int)sub_180B130(v59) )
    {
      if ( (unsigned __int8)sub_186A530(a7) )
      {
        sub_186A4C0(a7);
        v43 = sub_180B150(v59, v52);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(v77, v11, *a1, 0, 0, 0);
        sub_160E8B0(v43, v77);
        std::__ostream_insert<char,std::char_traits<char>>();
LABEL_80:
        sub_18572D0(v79);
        sub_186A500(v79, "\n");
        goto LABEL_21;
      }
      v48 = sub_180B150(v59, v52);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v77, v11, *a1, 0, 0, 0);
      sub_160E8B0(v48, v77);
      std::__ostream_insert<char,std::char_traits<char>>();
LABEL_94:
      sub_18572D0(v79);
    }
  }
  else if ( (unsigned __int8)sub_3F0AC0(a1, (__int64)v65, v52, a3, (__int64)v63, v22, a7) )
  {
    sub_3EBD70((__int64)v77, (__int64)v65);
    if ( (unsigned __int8)sub_3F0AC0(a1, (__int64)v77, v54, a3, (__int64)v63, v42, a7) )
    {
      sub_25A130((char *)v77);
      if ( v49 )
        *a9 = 1;
      else
        *a8 = 1;
LABEL_68:
      v31 = sub_15D1F10(v52);
      sub_25A130((char *)v73);
      sub_25A130((char *)v72);
      sub_25A130((char *)v68);
      goto LABEL_40;
    }
    sub_25A130((char *)v77);
  }
LABEL_21:
  sub_25A130((char *)v73);
  sub_25A130((char *)v72);
  sub_25A130((char *)v68);
LABEL_22:
  v25 = 0;
LABEL_23:
  sub_25A130((char *)v65);
  sub_2334C0((__int64 *)v63);
  return v25;
}

