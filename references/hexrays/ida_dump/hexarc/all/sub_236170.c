__int64 __fastcall sub_236170(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rdx
  _QWORD *v6; // rbp
  __int64 v7; // r15
  unsigned __int64 v8; // r13
  int v9; // r14d
  __int64 v10; // rcx
  int v11; // eax
  unsigned __int64 v12; // rdx
  __int64 v13; // rdi
  int v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  unsigned __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // r14
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned int v27; // eax
  __int64 v28; // rdi
  _QWORD *v29; // rax
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // edx
  __int64 v35; // rcx
  int v36; // eax
  char tinfo_property; // al
  __int64 v38; // rsi
  __int64 v39; // rdx
  _QWORD *v40; // rcx
  int v41; // eax
  __int64 v42; // rdx
  int v43; // esi
  __int64 v44; // r14
  _QWORD *v45; // rdx
  __int64 v46; // rcx
  unsigned __int64 v47; // rsi
  __int64 v48; // rcx
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  _QWORD *v51; // rcx
  __int64 v52; // rdi
  int v53; // eax
  __int64 v54; // rdx
  _QWORD *v55; // rcx
  __int64 v56; // rsi
  unsigned __int64 v57; // r9
  int v58; // esi
  __int64 v59; // r8
  bool v60; // di
  __int64 v61; // rdx
  _QWORD *v62; // rcx
  _QWORD *v63; // rdx
  __int64 v64; // rcx
  unsigned __int64 v65; // rsi
  __int64 v66; // rdx
  _QWORD *v67; // rcx
  __int64 v68; // rcx
  _QWORD *v69; // rax
  __int64 v70; // rcx
  _QWORD *v71; // rax
  __int64 v72; // rcx
  _QWORD *v73; // rax
  __int64 v74; // [rsp+18h] [rbp-70h] BYREF
  __int64 v75; // [rsp+20h] [rbp-68h]
  __int64 v76; // [rsp+28h] [rbp-60h]
  __int64 v77; // [rsp+30h] [rbp-58h]
  int v78; // [rsp+38h] [rbp-50h]
  unsigned __int64 v79; // [rsp+48h] [rbp-40h]

  v3 = (_QWORD *)*a2;
  v4 = *(_QWORD *)(a1 + 112);
  v79 = __readfsqword(0x28u);
  v6 = v3 + 3;
  if ( v4 == *(_QWORD *)(a1 + 120) )
  {
    v16 = *((_DWORD *)v3 + 20);
    if ( (v16 & 1) != 0 )
      goto LABEL_35;
LABEL_43:
    if ( (v16 & 2) != 0 )
    {
      if ( v6[5] == -1 )
      {
        v34 = *(_DWORD *)(a1 + 296);
        if ( v34 == 2 )
        {
LABEL_51:
          if ( (v16 & 0x200) == 0 )
          {
            v29 = (_QWORD *)*a2;
            v66 = *(_QWORD *)*a2;
            if ( (v66 & 2) != 0 )
              goto LABEL_38;
            v67 = (_QWORD *)v29[2];
            if ( (*(_BYTE *)v67 & 2) == 0 )
            {
              do
              {
                v29 = v67;
                v67 = (_QWORD *)v67[1];
              }
              while ( (*(_BYTE *)v67 & 2) == 0 );
              goto LABEL_38;
            }
            v45 = (_QWORD *)(v66 & 0xFFFFFFFFFFFFFFFCLL);
            v72 = *v45;
            if ( (*v45 & 2) != 0 || (_QWORD *)v45[2] != v29 )
              goto LABEL_81;
            while ( 1 )
            {
              v73 = v45;
              v47 = v72 & 0xFFFFFFFFFFFFFFFCLL;
              v72 = *(_QWORD *)(v72 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v72 & 2) != 0 )
                goto LABEL_76;
              v45 = (_QWORD *)v47;
              if ( *(_QWORD **)(v47 + 16) != v73 )
                goto LABEL_81;
            }
          }
LABEL_52:
          v17 = *(_QWORD *)(a1 + 112);
          v35 = *(_QWORD *)(a1 + 120);
          if ( v17 != v35 )
          {
            v36 = *((_DWORD *)v6 + 14);
            if ( (v36 & 1) != 0 )
              goto LABEL_17;
            if ( (v36 & 2) == 0 )
            {
              v18 = v6[4];
              if ( (v36 & 0x20) != 0 )
              {
LABEL_107:
                v19 = v17 + 24;
                if ( v18 == *(_QWORD *)(v17 + 56) )
                  goto LABEL_18;
                goto LABEL_108;
              }
              goto LABEL_58;
            }
            if ( v6[5] == -1 )
            {
              if ( (v36 & 0x1018) == 0 )
              {
                v56 = *(_QWORD *)(a1 + 128);
                goto LABEL_101;
              }
            }
            else
            {
              tinfo_property = get_tinfo_property(v6[3], 2);
              v17 = *(_QWORD *)(a1 + 112);
              v35 = *(_QWORD *)(a1 + 120);
              if ( (tinfo_property & 0xF) == 0xB )
              {
                v18 = v6[4];
                goto LABEL_58;
              }
              v36 = *((_DWORD *)v6 + 14);
              if ( (v36 & 2) != 0 && (v36 & 0x1018) == 0 )
              {
                v56 = *(_QWORD *)(a1 + 128);
                if ( v17 == v35 )
                {
                  v58 = v56 + 1;
                  v57 = -1;
LABEL_102:
                  v59 = *((int *)v6 + 13);
                  v18 = v6[4];
                  v60 = v57 >= v18 && v59 != 0;
                  if ( v58 )
                  {
                    if ( !v60 || v59 + v18 - 1 < v57 + v58 - 1 )
                      goto LABEL_108;
                  }
                  else if ( !v60 || v59 + v18 - 1 < v57 )
                  {
                    goto LABEL_108;
                  }
LABEL_105:
                  if ( (v36 & 0x20) != 0 )
                  {
                    if ( v35 != v17 )
                      goto LABEL_107;
                    if ( v18 == -1 )
                      goto LABEL_59;
LABEL_108:
                    v29 = (_QWORD *)*a2;
                    v61 = *(_QWORD *)*a2;
                    if ( (v61 & 2) != 0 )
                      goto LABEL_38;
                    v62 = (_QWORD *)v29[2];
                    if ( (*(_BYTE *)v62 & 2) == 0 )
                    {
                      do
                      {
                        v29 = v62;
                        v62 = (_QWORD *)v62[1];
                      }
                      while ( (*(_BYTE *)v62 & 2) == 0 );
                      goto LABEL_38;
                    }
                    v45 = (_QWORD *)(v61 & 0xFFFFFFFFFFFFFFFCLL);
                    v48 = *v45;
                    if ( (*v45 & 2) != 0 || (_QWORD *)v45[2] != v29 )
                      goto LABEL_81;
                    while ( 1 )
                    {
                      v49 = v45;
                      v47 = v48 & 0xFFFFFFFFFFFFFFFCLL;
                      v48 = *(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFFCLL);
                      if ( (v48 & 2) != 0 )
                        goto LABEL_76;
                      v45 = (_QWORD *)v47;
                      if ( *(_QWORD **)(v47 + 16) != v49 )
                        goto LABEL_81;
                    }
                  }
LABEL_58:
                  if ( v35 != v17 )
                  {
                    v19 = v17 + 24;
                    goto LABEL_18;
                  }
LABEL_59:
                  v20 = -1;
                  goto LABEL_19;
                }
LABEL_101:
                v57 = *(_QWORD *)(v17 + 56);
                v58 = v56 - *(_DWORD *)(v17 + 56);
                goto LABEL_102;
              }
            }
            v18 = v6[4];
            goto LABEL_105;
          }
LABEL_35:
          v28 = *(_QWORD *)(a1 + 8);
          if ( (*(_BYTE *)(v28 + 2) & 4) == 0
            || (v38 = v6[4], v38 >= *(_QWORD *)(v28 + 128))
            || (unsigned __int8)sub_30FCC0(
                                  v28 + 848,
                                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 + 1496) + 24LL) + 16LL)
                                & (*(_QWORD *)(v28 + 1440) + v38)) )
          {
            *(_QWORD *)(a1 + 112) = *a2;
            goto LABEL_37;
          }
          if ( (v6[7] & 1) != 0 )
          {
            if ( !under_debugger )
              sub_37B760(52376);
            BUG();
          }
          v29 = (_QWORD *)*a2;
          v39 = *(_QWORD *)*a2;
          if ( (v39 & 2) != 0 )
            goto LABEL_38;
          v40 = (_QWORD *)v29[2];
          if ( (*(_BYTE *)v40 & 2) == 0 )
          {
            do
            {
              v29 = v40;
              v40 = (_QWORD *)v40[1];
            }
            while ( (*(_BYTE *)v40 & 2) == 0 );
            goto LABEL_38;
          }
          v45 = (_QWORD *)(v39 & 0xFFFFFFFFFFFFFFFCLL);
          v68 = *v45;
          if ( (*v45 & 2) != 0 || (_QWORD *)v45[2] != v29 )
          {
LABEL_81:
            v29 = v45;
            goto LABEL_38;
          }
          while ( 1 )
          {
            v69 = v45;
            v47 = v68 & 0xFFFFFFFFFFFFFFFCLL;
            v68 = *(_QWORD *)(v68 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v68 & 2) != 0 )
              break;
            v45 = (_QWORD *)v47;
            if ( *(_QWORD **)(v47 + 16) != v69 )
              goto LABEL_81;
          }
LABEL_76:
          v29 = (_QWORD *)v47;
          goto LABEL_38;
        }
      }
      else
      {
        if ( (get_tinfo_property(v6[3], 2) & 0xF) == 0xB )
        {
          v32 = v6[4];
          v33 = *((int *)v6 + 13);
          if ( (_DWORD)v33 != -1 )
            v32 += v33;
          if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL) >= v32 )
            goto LABEL_52;
        }
        v34 = *(_DWORD *)(a1 + 296);
        if ( v34 == 2 )
        {
          v16 = *((_DWORD *)v6 + 14);
          if ( (v16 & 2) == 0 )
            goto LABEL_52;
          goto LABEL_51;
        }
      }
    }
    else
    {
      v34 = *(_DWORD *)(a1 + 296);
      if ( v34 == 2 )
        goto LABEL_52;
    }
    if ( v34 == 1 )
    {
      v53 = *((_DWORD *)v6 + 14);
      if ( (v53 & 2) != 0 && (v53 & 0x1018) == 0 )
      {
        v29 = (_QWORD *)*a2;
        v54 = *(_QWORD *)*a2;
        if ( (v54 & 2) != 0 )
          goto LABEL_38;
        v55 = (_QWORD *)v29[2];
        if ( (*(_BYTE *)v55 & 2) == 0 )
        {
          do
          {
            v29 = v55;
            v55 = (_QWORD *)v55[1];
          }
          while ( (*(_BYTE *)v55 & 2) == 0 );
          goto LABEL_38;
        }
        v45 = (_QWORD *)(v54 & 0xFFFFFFFFFFFFFFFCLL);
        v70 = *v45;
        if ( (*v45 & 2) != 0 || (_QWORD *)v45[2] != v29 )
          goto LABEL_81;
        while ( 1 )
        {
          v71 = v45;
          v47 = v70 & 0xFFFFFFFFFFFFFFFCLL;
          v70 = *(_QWORD *)(v70 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v70 & 2) != 0 )
            goto LABEL_76;
          v45 = (_QWORD *)v47;
          if ( *(_QWORD **)(v47 + 16) != v71 )
            goto LABEL_81;
        }
      }
    }
    goto LABEL_52;
  }
  v7 = *(_QWORD *)(a1 + 8);
  v8 = v3[7];
  v9 = *((_DWORD *)v3 + 19);
  if ( (signed __int64)v8 < *(_QWORD *)(v7 + 144) )
    goto LABEL_3;
  v27 = *(_DWORD *)(v7 + 72);
  if ( v27 <= 0x10 )
  {
    v41 = getinf(99);
    if ( v41 == 176 || v41 == 256 )
      goto LABEL_32;
  }
  else if ( v27 == 256 || v27 == 176 )
  {
LABEL_3:
    v10 = *(_QWORD *)(a1 + 128);
LABEL_4:
    v11 = v10 - *(_DWORD *)(v4 + 56);
    v12 = *(_QWORD *)(v4 + 56);
    v13 = v12 - 1;
    goto LABEL_5;
  }
  if ( !(unsigned __int8)getinf_flag(67, 2) )
  {
    v42 = v6[4];
    v43 = *((_DWORD *)v6 + 13);
    v44 = -*(_DWORD *)(*(_QWORD *)(v7 + 1504) + 80LL);
    v8 &= v44;
    if ( v43 != -1 )
      LODWORD(v42) = v42 + v43;
    v9 = (v42 + *(_DWORD *)(*(_QWORD *)(v7 + 1504) + 80LL) - 1 - v8) & v44;
  }
LABEL_32:
  v10 = *(_QWORD *)(a1 + 128);
  v4 = *(_QWORD *)(a1 + 112);
  if ( v4 != *(_QWORD *)(a1 + 120) )
    goto LABEL_4;
  v11 = v10 + 1;
  v13 = -2;
  v12 = -1;
LABEL_5:
  if ( v11 <= 0 )
    v11 = 1;
  if ( v13 + v11 < v8 )
    return sub_235E30(a1, a2);
  v15 = 1;
  if ( v9 > 0 )
    v15 = v9;
  if ( v8 + v15 - 1 < v12 || (*(_BYTE *)(a1 + 203) & 0x20) != 0 && v6[4] >= v10 )
    return sub_235E30(a1, a2);
  if ( (unsigned __int8)sub_222060(a1, (__int64)a2) )
  {
    v50 = *(_QWORD **)(a1 + 112);
    if ( (*v50 & 2) == 0 )
    {
      v51 = (_QWORD *)v50[2];
      if ( (*(_BYTE *)v51 & 2) != 0 )
      {
        v63 = (_QWORD *)(*v50 & 0xFFFFFFFFFFFFFFFCLL);
        v64 = *v63;
        if ( (*v63 & 2) == 0 )
        {
          while ( (_QWORD *)v63[2] == v50 )
          {
            v50 = v63;
            v65 = v64 & 0xFFFFFFFFFFFFFFFCLL;
            v64 = *(_QWORD *)(v64 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v64 & 2) != 0 )
            {
              v50 = (_QWORD *)v65;
              goto LABEL_85;
            }
            v63 = (_QWORD *)v65;
          }
        }
        v50 = v63;
      }
      else
      {
        do
        {
          v50 = v51;
          v51 = (_QWORD *)v51[1];
        }
        while ( (*(_BYTE *)v51 & 2) == 0 );
      }
    }
LABEL_85:
    *(_QWORD *)(a1 + 112) = v50;
    *a2 = (__int64)v50;
    v52 = *(_QWORD *)(a1 + 144);
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 128) = -1;
    *(_DWORD *)(a1 + 136) = 0;
    *(_DWORD *)(a1 + 296) = 0;
    v74 = 0;
    v75 = -1;
    v76 = -1;
    v77 = 0xFFFFFFFFLL;
    v78 = 0;
    if ( v52 )
    {
      *(_QWORD *)(a1 + 152) = 0;
      qfree(v52);
    }
    *(_QWORD *)(a1 + 144) = 0;
    *(_OWORD *)(a1 + 152) = 0;
    copy_tinfo_t(a1 + 168, &v74);
    *(_QWORD *)(a1 + 176) = v75;
    *(_QWORD *)(a1 + 184) = v76;
    *(_QWORD *)(a1 + 192) = v77;
    *(_DWORD *)(a1 + 200) = v78;
    clear_tinfo_t(&v74);
    if ( !*(_DWORD *)(a1 + 296) )
      *(_DWORD *)(a1 + 300) = 1;
    return 1;
  }
  v16 = *((_DWORD *)v6 + 14);
  if ( (v16 & 1) == 0 )
    goto LABEL_43;
  v17 = *(_QWORD *)(a1 + 112);
  if ( v17 == *(_QWORD *)(a1 + 120) )
    goto LABEL_35;
LABEL_17:
  v18 = v6[4];
  v19 = v17 + 24;
LABEL_18:
  v20 = *(_QWORD *)(v19 + 32);
LABEL_19:
  v21 = *(_QWORD *)(a1 + 8);
  v22 = *(_QWORD *)(v21 + 936);
  if ( v22 )
  {
    v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 40LL))(v22);
    v24 = *(_QWORD *)(v21 + 144);
    v25 = v23;
    if ( v24 <= v23 )
      v25 = *(_QWORD *)(v21 + 144);
    if ( v23 != -1 )
      v24 = v25;
  }
  else
  {
    v24 = *(_QWORD *)(v21 + 144);
  }
  if ( v20 < v24 != v24 > (__int64)v18 )
    return sub_235E30(a1, a2);
  if ( (*((_BYTE *)v6 + 59) & 0x10) != 0 )
  {
    v26 = v6[4];
    if ( v26 != *(_QWORD *)(a1 + 176) )
    {
      *(_QWORD *)(a1 + 128) = v26;
      return sub_235E30(a1, a2);
    }
  }
LABEL_37:
  sub_222800(a1, *a2);
  v29 = (_QWORD *)*a2;
  v30 = *(_QWORD *)*a2;
  if ( (v30 & 2) == 0 )
  {
    v31 = (_QWORD *)v29[2];
    if ( (*(_BYTE *)v31 & 2) == 0 )
    {
      do
      {
        v29 = v31;
        v31 = (_QWORD *)v31[1];
      }
      while ( (*(_BYTE *)v31 & 2) == 0 );
      goto LABEL_38;
    }
    v45 = (_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
    v46 = *v45;
    if ( (*v45 & 2) == 0 )
    {
      while ( (_QWORD *)v45[2] == v29 )
      {
        v29 = v45;
        v47 = v46 & 0xFFFFFFFFFFFFFFFCLL;
        v46 = *(_QWORD *)(v46 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v46 & 2) != 0 )
          goto LABEL_76;
        v45 = (_QWORD *)v47;
      }
    }
    goto LABEL_81;
  }
LABEL_38:
  *a2 = (__int64)v29;
  return 1;
}
