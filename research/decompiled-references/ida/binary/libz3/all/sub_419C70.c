__int64 __fastcall sub_419C70(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v5; // rbp
  char *v6; // rsi
  bool v7; // zf
  char *v8; // r12
  __int64 *v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // edx
  char v13; // al
  char v14; // al
  _DWORD *v15; // rbp
  char *v16; // rax
  char *v17; // rdi
  unsigned int v18; // ebp
  __int64 v19; // r15
  __int64 v20; // rdi
  char **v21; // rax
  char *v22; // rbp
  unsigned int v23; // edx
  unsigned int v24; // ecx
  __int64 v25; // rdi
  unsigned int v26; // ecx
  __int64 v27; // r15
  void **v28; // r13
  void **v29; // r14
  __int64 v31; // rax
  __int64 v32; // rdi
  unsigned int v33; // eax
  int v34; // eax
  char *v35; // r12
  char *v36; // r15
  __int64 v37; // rax
  unsigned int v38; // edx
  unsigned int v39; // ecx
  char v40; // dl
  char *v41; // rcx
  char **v42; // rdi
  unsigned int v43; // edx
  unsigned int v44; // esi
  void **v45; // rbp
  void **v46; // r15
  char *v47; // r12
  char *v48; // r15
  char *v49; // rdx
  char v50; // al
  char *v51; // [rsp+8h] [rbp-110h]
  __int64 v52; // [rsp+18h] [rbp-100h]
  unsigned int v53; // [rsp+24h] [rbp-F4h]
  unsigned int v54; // [rsp+28h] [rbp-F0h]
  unsigned int v55; // [rsp+2Ch] [rbp-ECh]
  char v56[8]; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v57; // [rsp+40h] [rbp-D8h] BYREF
  char *v58; // [rsp+48h] [rbp-D0h] BYREF
  void *v59; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v60; // [rsp+58h] [rbp-C0h]
  _BYTE v61[184]; // [rsp+60h] [rbp-B8h] BYREF

  v52 = a1 + 48;
  if ( !*(_BYTE *)(a1 + 64) )
  {
    v31 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1);
    *(_BYTE *)(a1 + 64) = 1;
    *(_QWORD *)(a1 + 48) = v31;
  }
  v5 = sub_180B150(a1, a2);
  v6 = (char *)((unsigned int)sub_180B130(a1) != 0);
  sub_1841000(v56, v6, "spacer::context::check_reachability", v5);
  v7 = *(_BYTE *)(a1 + 654) == 0;
  v59 = v61;
  v60 = 0x1000000000LL;
  if ( !v7 )
    sub_3FE030((__int64 *)(a1 + 312), a3);
  v8 = nullptr;
  v53 = *(_DWORD *)(a1 + 568);
  v54 = *(_DWORD *)(a1 + 684);
  v9 = *(__int64 **)(a1 + 328);
  if ( v9 == *(__int64 **)(a1 + 336) )
    goto LABEL_48;
  v55 = 1;
  while ( 2 )
  {
    v10 = *v9;
    v11 = *(_DWORD *)(a1 + 320);
    v12 = *(unsigned __int16 *)(v10 + 72);
    if ( v11 < v12 || v12 == v11 && *(_DWORD *)(a1 + 324) < (unsigned int)*(unsigned __int16 *)(v10 + 74) )
      goto LABEL_48;
    sub_EE4F40(*(_QWORD *)(a1 + 152));
    if ( v8 )
    {
      sub_EE4F40(*(_QWORD *)(a1 + 152));
      ++*(_DWORD *)v8;
      sub_41CD50(v8);
      if ( *(char **)(a1 + 312) != v8 )
      {
        while ( 1 )
        {
          v6 = *((char **)v8 + 1);
          v13 = v8[78] & 0x48;
          if ( (v6[78] & 0x48) != 0 )
          {
            if ( !v13 )
              goto LABEL_24;
          }
          else if ( v13 )
          {
            goto LABEL_24;
          }
          v14 = sub_417D10(a1, (unsigned __int16 *)v6);
          v15 = *((_DWORD **)v8 + 1);
          if ( !v14 )
          {
            if ( (*((_BYTE *)v15 + 78) & 1) != 0 )
              ++v15[20];
            goto LABEL_24;
          }
          if ( !v15 )
            break;
          ++*v15;
          if ( (*((_BYTE *)v15 + 78) & 1) != 0 )
            sub_400AD0((__int64)v15);
          sub_EE4F40(*(_QWORD *)(a1 + 152));
          ++*v15;
          sub_41CD50(v8);
          v8 = (char *)v15;
          sub_41CD50(v15);
          if ( *(_DWORD **)(a1 + 312) == v15 )
            goto LABEL_18;
        }
LABEL_33:
        BUG();
      }
LABEL_18:
      v16 = nullptr;
LABEL_19:
      v17 = v8;
      v18 = 1;
      v8 = v16;
      goto LABEL_20;
    }
LABEL_24:
    v21 = *(char ***)(a1 + 328);
    if ( *(char ***)(a1 + 336) == v21 )
      goto LABEL_33;
    while ( 1 )
    {
      v22 = *v21;
      v23 = *(_DWORD *)(a1 + 320);
      v24 = *((unsigned __int16 *)*v21 + 36);
      if ( v23 < v24 )
        goto LABEL_33;
      if ( v24 != v23 )
      {
        if ( (v22[78] & 1) != 0 )
          break;
LABEL_28:
        ++*(_DWORD *)v22;
        goto LABEL_29;
      }
      v26 = *((unsigned __int16 *)v22 + 37);
      if ( *(_DWORD *)(a1 + 324) < v26 )
        goto LABEL_33;
      if ( (v22[78] & 1) != 0 )
        break;
      if ( *(_DWORD *)(a1 + 324) >= v26 )
        goto LABEL_28;
      v22 = nullptr;
LABEL_29:
      v25 = a1 + 312;
      sub_3FDE60(a1 + 312, a3);
      if ( (unsigned int)sub_180B130(a1 + 312) )
      {
        if ( (unsigned __int8)sub_186A530(a3) )
        {
          sub_186A4C0(a3);
          v19 = sub_180B150(v25, v6);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_39A600(v19, *(const char **)(*(_QWORD *)(*((_QWORD *)v22 + 2) + 24LL) + 16LL));
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          v20 = std::ostream::_M_insert<unsigned long>();
          v6 = "\n";
          std::operator<<<std::char_traits<char>>();
          sub_186A500(v20, "\n");
          if ( v22 == *(char **)(a1 + 312) )
            goto LABEL_43;
        }
        else
        {
          v27 = sub_180B150(v25, v6);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_39A600(v27, *(const char **)(*(_QWORD *)(*((_QWORD *)v22 + 2) + 24LL) + 16LL));
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          v6 = "\n";
          std::operator<<<std::char_traits<char>>();
          if ( v22 == *(char **)(a1 + 312) )
            goto LABEL_43;
        }
LABEL_23:
        sub_41CD50(v22);
        goto LABEL_24;
      }
      if ( *(char **)(a1 + 312) == v22 )
      {
        if ( v22 )
LABEL_43:
          sub_41CD50(v22);
        v18 = 1;
        goto LABEL_45;
      }
      if ( v22 )
        goto LABEL_23;
      v21 = *(char ***)(a1 + 328);
      if ( *(char ***)(a1 + 336) == v21 )
        goto LABEL_33;
    }
    if ( *(_BYTE *)(a1 + 644) && v54 < *(_DWORD *)(a1 + 568) - v53 )
    {
      ++*(_DWORD *)(a1 + 572);
      v54 = *(_DWORD *)(a1 + 684) * sub_1856050(++v55);
      if ( (unsigned int)sub_180B130(v55) )
      {
        if ( (unsigned __int8)sub_186A530(a3) )
        {
          sub_186A4C0(a3);
          sub_180B150(v55, v53);
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          v32 = std::ostream::_M_insert<unsigned long>();
          std::operator<<<std::char_traits<char>>();
          sub_186A500(v32, ")\n");
        }
        else
        {
          sub_180B150(v55, v53);
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::operator<<<std::char_traits<char>>();
        }
      }
      while ( 1 )
      {
        v42 = *(char ***)(a1 + 336);
        v21 = *(char ***)(a1 + 328);
        if ( v42 == v21
          || (v41 = *v21, v43 = *(_DWORD *)(a1 + 320), v44 = *((unsigned __int16 *)*v21 + 36), v43 < v44)
          || v44 == v43 && *(_DWORD *)(a1 + 324) < (unsigned int)*((unsigned __int16 *)v41 + 37) )
        {
          v41 = nullptr;
        }
        if ( *(char **)(a1 + 312) == v41 )
          break;
        sub_3FDE60(a1 + 312, a3);
      }
      v53 = *(_DWORD *)(a1 + 568);
      if ( v42 != v21 )
      {
        v23 = *(_DWORD *)(a1 + 320);
        goto LABEL_69;
      }
LABEL_97:
      v51 = nullptr;
    }
    else
    {
LABEL_69:
      v51 = *v21;
      v33 = *((unsigned __int16 *)*v21 + 36);
      if ( v23 < v33 || v33 == v23 && *(_DWORD *)(a1 + 324) < (unsigned int)*((unsigned __int16 *)v51 + 37) )
        goto LABEL_97;
      ++*(_DWORD *)v51;
    }
    if ( v8 )
      sub_41CD50(v8);
    sub_3FDE60(a1 + 312, a3);
    v6 = v51;
    v34 = sub_4185C0(a1, (__int64)v51, (__int64)&v59, a3, a4);
    if ( !v34 )
    {
      if ( (v51[78] & 0x48) != 0 )
      {
        if ( (_DWORD)v60 )
        {
          v47 = (char *)v59;
          v48 = (char *)v59 + 8 * (unsigned int)v60;
        }
        else
        {
          ++*(_DWORD *)v51;
          v6 = (char *)&v58;
          v58 = v51;
          sub_405E40(a1, (_DWORD **)&v58);
          sub_41CD50(v51);
          v47 = (char *)v59;
          v48 = (char *)v59 + 8 * (unsigned int)v60;
          if ( v48 == v59 )
            goto LABEL_120;
        }
      }
      else
      {
        v47 = (char *)v59;
        v48 = (char *)v59 + 8 * (unsigned int)v60;
        if ( v59 == v48 )
          goto LABEL_120;
      }
      do
      {
        v49 = *(char **)v47;
        v50 = *(_BYTE *)(*(_QWORD *)v47 + 78LL);
        if ( (v50 & 4) == 0 )
        {
          v6 = (char *)&v58;
          v49[78] = v50 | 4;
          v58 = v49;
          sub_41D8A0(a1 + 328, &v58);
        }
        v47 += 8;
      }
      while ( v48 != v47 );
      v45 = (void **)v59;
      v8 = nullptr;
      v46 = (void **)((char *)v59 + 8 * (unsigned int)v60);
      if ( v59 < v46 )
        goto LABEL_102;
LABEL_120:
      LODWORD(v60) = 0;
      v8 = nullptr;
      goto LABEL_106;
    }
    if ( v34 == 1 )
    {
      if ( (v51[78] & 1) != 0 )
        sub_400AD0((__int64)v51);
      v16 = *(char **)(a1 + 312);
      ++*(_DWORD *)v51;
      if ( v51 == v16 )
      {
        v8 = v16;
        goto LABEL_19;
      }
      v45 = (void **)v59;
      v8 = v51;
      v46 = (void **)((char *)v59 + 8 * (unsigned int)v60);
      if ( v59 >= v46 )
      {
        LODWORD(v60) = 0;
        goto LABEL_106;
      }
      do
      {
LABEL_102:
        if ( *v45 )
          sub_41CD50(*v45);
        ++v45;
      }
      while ( v45 < v46 );
      goto LABEL_105;
    }
    if ( v34 != -1 )
      goto LABEL_110;
    v35 = (char *)v59;
    v36 = (char *)v59 + 8 * (unsigned int)v60;
    if ( v36 == v59 )
    {
      v8 = *(char **)(a1 + 312);
      if ( v51 != v8 )
        goto LABEL_128;
    }
    else
    {
      do
      {
        v37 = *(_QWORD *)v35;
        v38 = *(unsigned __int16 *)(*(_QWORD *)v35 + 72LL);
        if ( *(unsigned __int16 *)(*(_QWORD *)v35 + 76LL) >= v38
          || *(_BYTE *)(a1 + 655) && ((v39 = *(_DWORD *)(a1 + 320), v38 >= v39) || *(_DWORD *)(a1 + 676) >= v39 - v38) )
        {
          v40 = *(_BYTE *)(v37 + 78);
          if ( (v40 & 4) == 0 )
          {
            v6 = (char *)&v57;
            *(_BYTE *)(v37 + 78) = v40 | 4;
            v57 = v37;
            sub_41D8A0(a1 + 328, &v57);
          }
        }
        v35 += 8;
      }
      while ( v36 != v35 );
      v8 = *(char **)(a1 + 312);
      if ( v51 != v8 )
      {
LABEL_110:
        v45 = (void **)v59;
        v46 = (void **)((char *)v59 + 8 * (unsigned int)v60);
        if ( v59 < v46 )
        {
          v8 = nullptr;
          goto LABEL_102;
        }
LABEL_128:
        v8 = nullptr;
LABEL_105:
        LODWORD(v60) = 0;
        if ( v51 )
LABEL_106:
          sub_41CD50(v51);
        v9 = *(__int64 **)(a1 + 328);
        if ( *(__int64 **)(a1 + 336) == v9 )
        {
LABEL_48:
          sub_1872CE0("");
          sub_1873130(114, 3292);
        }
        continue;
      }
    }
    break;
  }
  v18 = 0;
LABEL_45:
  if ( v8 )
  {
    v17 = v8;
    v8 = nullptr;
LABEL_20:
    sub_41CD50(v17);
  }
  v28 = (void **)v59;
  v29 = (void **)((char *)v59 + 8 * (unsigned int)v60);
  if ( v59 < v29 )
  {
    do
    {
      if ( *v28 )
        sub_41CD50(*v28);
      ++v28;
    }
    while ( v28 < v29 );
    v28 = (void **)v59;
  }
  if ( v28 && v28 != (void **)v61 )
    sub_186B220(v28);
  if ( v8 )
    sub_41CD50(v8);
  sub_18410E0(v56);
  if ( *(_BYTE *)(a1 + 64) )
    sub_3FCC40(v52);
  return v18;
}

