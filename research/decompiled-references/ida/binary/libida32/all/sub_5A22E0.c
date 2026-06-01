__int64 __fastcall sub_5A22E0(__int64 *a1, int *a2, int a3, unsigned __int16 a4, unsigned int a5, char a6)
{
  unsigned int v7; // r12d
  int v13; // esi
  unsigned int v14; // eax
  int v15; // eax
  unsigned int v16; // ecx
  unsigned __int16 v17; // ax
  int v18; // r14d
  __int64 v19; // r14
  __int64 v20; // r14
  int v21; // eax
  bool v22; // r14
  unsigned int v23; // r14d
  char i; // al
  int v25; // eax
  char v26; // al
  __int64 v27; // r15
  int v28; // eax
  bool v29; // r15
  unsigned int v30; // r9d
  int v31; // eax
  __int64 v32; // rsi
  void *v33; // rdi
  unsigned int v34; // r8d
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rsi
  void *v38; // rdi
  unsigned __int64 v39; // rcx
  int v40; // eax
  void *v41; // rdi
  char v42; // [rsp+0h] [rbp-198h]
  int v43; // [rsp+0h] [rbp-198h]
  __int64 v44; // [rsp+0h] [rbp-198h]
  bool v45; // [rsp+0h] [rbp-198h]
  int v46; // [rsp+0h] [rbp-198h]
  int v47; // [rsp+0h] [rbp-198h]
  unsigned __int64 v48; // [rsp+0h] [rbp-198h]
  unsigned __int64 v49; // [rsp+0h] [rbp-198h]
  unsigned int v50; // [rsp+10h] [rbp-188h]
  char v51; // [rsp+1Fh] [rbp-179h]
  int v52; // [rsp+20h] [rbp-178h]
  int v53; // [rsp+24h] [rbp-174h]
  int v54; // [rsp+24h] [rbp-174h]
  int v55; // [rsp+24h] [rbp-174h]
  unsigned int v56; // [rsp+28h] [rbp-170h]
  unsigned int v57; // [rsp+30h] [rbp-168h]
  unsigned __int64 v58; // [rsp+30h] [rbp-168h]
  int v59; // [rsp+38h] [rbp-160h]
  int tinfo_udt_member; // [rsp+3Ch] [rbp-15Ch]
  unsigned __int64 v61; // [rsp+40h] [rbp-158h] BYREF
  __int64 v62; // [rsp+48h] [rbp-150h] BYREF
  __int128 v63; // [rsp+50h] [rbp-148h] BYREF
  void *v64; // [rsp+60h] [rbp-138h]
  __int128 v65; // [rsp+68h] [rbp-130h]
  void *v66; // [rsp+78h] [rbp-120h]
  __int128 v67; // [rsp+80h] [rbp-118h]
  __int128 v68; // [rsp+90h] [rbp-108h] BYREF
  __int64 v69; // [rsp+B0h] [rbp-E8h]
  int v70; // [rsp+B8h] [rbp-E0h]
  __int64 v71; // [rsp+C0h] [rbp-D8h]
  char v72; // [rsp+C8h] [rbp-D0h]
  unsigned __int64 v73; // [rsp+D0h] [rbp-C8h] BYREF
  __int64 v74; // [rsp+D8h] [rbp-C0h]
  void *v75; // [rsp+E0h] [rbp-B8h]
  __int128 v76; // [rsp+E8h] [rbp-B0h]
  void *ptr; // [rsp+F8h] [rbp-A0h]
  __int128 v78; // [rsp+100h] [rbp-98h]
  _OWORD v79[2]; // [rsp+110h] [rbp-88h] BYREF
  __int64 v80; // [rsp+130h] [rbp-68h]
  int v81; // [rsp+138h] [rbp-60h]
  __int64 v82; // [rsp+140h] [rbp-58h]
  char v83; // [rsp+148h] [rbp-50h]
  unsigned __int64 v84; // [rsp+158h] [rbp-40h]

  v84 = __readfsqword(0x28u);
  if ( a2 && *((char *)a2 + 9) >= 0 && ((a5 | a3) & 0x80000000) == 0 && (a4 & 0x8000u) == 0 )
  {
    v51 = 0;
    if ( a2[4] != -1 )
    {
LABEL_8:
      v13 = *a2;
      v42 = a6;
      v61 = 0;
      v14 = sub_3B90A0(a1, v13);
      if ( v14 == -1 || (v7 = sub_532DA0(a1, &v61, v14), !(_BYTE)v7) )
      {
        v7 = 0;
LABEL_43:
        clear_tinfo_t(&v61);
        return v7;
      }
      v15 = *(_DWORD *)(a1[2] + 8);
      v69 = 1;
      v16 = a2[5];
      v63 = 0;
      v65 = 0;
      v52 = v15 & 0x8000;
      v64 = nullptr;
      v66 = nullptr;
      v70 = -1;
      v71 = 0;
      v72 = 0;
      v67 = 0;
      v68 = 0;
      if ( v16 == a3 )
      {
        v17 = *((_WORD *)a2 + 12);
        if ( a4 == v17 )
        {
          v23 = a2[7];
          if ( a5 == v23 )
          {
            if ( !v42 )
              goto LABEL_39;
            goto LABEL_32;
          }
          goto LABEL_30;
        }
        goto LABEL_12;
      }
      v50 = v16;
      v54 = a3 - v16;
      v62 = 0;
      get_frame_part(&v62, a2, 3);
      if ( v54 >= 0 )
      {
        if ( v52 )
          v44 = 8LL * HIDWORD(v62);
        else
          v44 = 8LL * (unsigned int)v62;
        goto LABEL_48;
      }
      if ( v52 )
        v30 = HIDWORD(v62) + v54;
      else
        v30 = v62;
      v80 = 1;
      v74 = 0;
      v44 = 8LL * v30;
      v73 = v44;
      v57 = v30;
      v75 = nullptr;
      ptr = nullptr;
      v81 = -1;
      v82 = 0;
      v83 = 0;
      v76 = 0;
      v78 = 0;
      v79[0] = 0;
      tinfo_udt_member = find_tinfo_udt_member((int)&v73);
      if ( tinfo_udt_member == -1 || v73 >= 8 * (unsigned __int64)(v57 + v50 - a3) )
      {
        clear_tinfo_t(v79);
        if ( ptr )
        {
          *(_QWORD *)&v78 = 0;
          qfree(ptr);
        }
        v33 = v75;
        if ( v75 )
          goto LABEL_84;
      }
      else
      {
        v73 = 8LL * (v57 + v50 - a3);
        v58 = v73;
        v31 = find_tinfo_udt_member((int)&v73);
        v32 = -1;
        if ( v31 != -1 )
        {
          if ( v73 < v58 )
            ++v31;
          v32 = v31;
        }
        set_tinfo_property4(&v61, 10, tinfo_udt_member, v32, 0, 0);
        clear_tinfo_t(v79);
        if ( ptr )
        {
          *(_QWORD *)&v78 = 0;
          qfree(ptr);
        }
        v33 = v75;
        if ( v75 )
        {
LABEL_84:
          *(_QWORD *)&v76 = 0;
          qfree(v33);
        }
      }
LABEL_48:
      v74 = 0;
      v80 = 1;
      v75 = nullptr;
      ptr = nullptr;
      v81 = -1;
      v82 = 0;
      v83 = 0;
      v73 = v44;
      v76 = 0;
      v78 = 0;
      v79[0] = 0;
      v25 = find_tinfo_udt_member((int)&v73);
      v45 = v7;
      if ( v25 != -1 )
        v45 = (unsigned int)set_tinfo_property4(&v61, 15, v25, v54, 0, 0) == 0;
      clear_tinfo_t(v79);
      if ( ptr )
      {
        *(_QWORD *)&v78 = 0;
        qfree(ptr);
      }
      if ( v75 )
      {
        *(_QWORD *)&v76 = 0;
        qfree(v75);
      }
      if ( !v45 )
        goto LABEL_68;
      v17 = *((_WORD *)a2 + 12);
      a2[5] = a3;
      if ( a4 == v17 )
      {
        v23 = a2[7];
        if ( v23 != a5 )
          goto LABEL_30;
        goto LABEL_32;
      }
LABEL_12:
      v18 = v17;
      v53 = a4 - v17;
      v62 = 0;
      get_frame_part(&v62, a2, 2);
      if ( v53 < 0 )
      {
        if ( v52 )
          v34 = HIDWORD(v62) + v53;
        else
          v34 = v62;
        v74 = 0;
        v56 = v34;
        v47 = v18 - a4;
        v80 = 1;
        v20 = 8LL * v34;
        v75 = nullptr;
        ptr = nullptr;
        v81 = -1;
        v82 = 0;
        v83 = 0;
        v73 = v20;
        v76 = 0;
        v78 = 0;
        v79[0] = 0;
        v59 = find_tinfo_udt_member((int)&v73);
        if ( v59 == -1 || (v35 = v47 + v56, v73 >= 8 * v35) )
        {
          clear_tinfo_t(v79);
          if ( ptr )
          {
            *(_QWORD *)&v78 = 0;
            qfree(ptr);
          }
          v38 = v75;
          if ( !v75 )
            goto LABEL_17;
        }
        else
        {
          v48 = 8 * v35;
          v73 = 8 * v35;
          v36 = find_tinfo_udt_member((int)&v73);
          v37 = -1;
          if ( v36 != -1 )
          {
            if ( v73 < v48 )
              ++v36;
            v37 = v36;
          }
          set_tinfo_property4(&v61, 10, v59, v37, 0, 0);
          clear_tinfo_t(v79);
          if ( ptr )
          {
            *(_QWORD *)&v78 = 0;
            qfree(ptr);
          }
          v38 = v75;
          if ( !v75 )
            goto LABEL_17;
        }
        *(_QWORD *)&v76 = 0;
        qfree(v38);
      }
      else
      {
        v19 = (unsigned int)v62;
        if ( v52 )
          v19 = HIDWORD(v62);
        *(_QWORD *)&v63 = 8LL * (unsigned int)v62;
        v43 = find_tinfo_udt_member((int)&v63);
        v20 = 8 * v19;
        if ( v43 == -1 || (v71 & 0x200000000000LL) != 0 )
        {
LABEL_18:
          v74 = 0;
          v75 = nullptr;
          ptr = nullptr;
          v80 = 1;
          v81 = -1;
          v82 = 0;
          v83 = 0;
          v73 = v20;
          v76 = 0;
          v78 = 0;
          v79[0] = 0;
          v21 = find_tinfo_udt_member((int)&v73);
          v22 = v7;
          if ( v21 != -1 )
            v22 = (unsigned int)set_tinfo_property4(&v61, 15, v21, v53, 0, 0) == 0;
          clear_tinfo_t(v79);
          if ( ptr )
          {
            *(_QWORD *)&v78 = 0;
            qfree(ptr);
          }
          if ( v75 )
          {
            *(_QWORD *)&v76 = 0;
            qfree(v75);
          }
          if ( !v22 )
            goto LABEL_68;
          if ( a4 )
          {
            if ( v43 != -1 )
              set_tinfo_property4(&v61, 10, v43, v43 + 1LL, 0, 0);
            sub_59D260((__int64)a1, (__int64)&v61, v62, a4, 0x2000);
          }
          v23 = a2[7];
          *((_WORD *)a2 + 12) = a4;
          if ( a5 != v23 )
          {
LABEL_30:
            if ( !v52 )
            {
LABEL_31:
              a2[7] = a5;
              goto LABEL_32;
            }
            v73 = 0;
            get_frame_part(&v73, a2, 0);
            v46 = v73;
            v27 = 8LL * (unsigned int)v73;
            if ( (int)(a5 - v23) >= 0 )
              goto LABEL_61;
            v74 = 0;
            v75 = nullptr;
            ptr = nullptr;
            v80 = 1;
            v81 = -1;
            v82 = 0;
            v83 = 0;
            v73 = 8LL * (unsigned int)v73;
            v76 = 0;
            v78 = 0;
            v79[0] = 0;
            v55 = find_tinfo_udt_member((int)&v73);
            if ( v55 == -1 || (v39 = 8LL * (v23 + v46 - a5), v73 >= v39) )
            {
              clear_tinfo_t(v79);
              if ( ptr )
              {
                *(_QWORD *)&v78 = 0;
                qfree(ptr);
              }
              v41 = v75;
              if ( v75 )
                goto LABEL_115;
            }
            else
            {
              v49 = 8LL * (v23 + v46 - a5);
              v73 = v39;
              v40 = find_tinfo_udt_member((int)&v73);
              if ( v40 != -1 )
                v40 += v73 < v49;
              set_tinfo_property4(&v61, 10, v55, v40, 0, 0);
              clear_tinfo_t(v79);
              if ( ptr )
              {
                *(_QWORD *)&v78 = 0;
                qfree(ptr);
              }
              v41 = v75;
              if ( v75 )
              {
LABEL_115:
                *(_QWORD *)&v76 = 0;
                qfree(v41);
              }
            }
LABEL_61:
            v74 = 0;
            v75 = nullptr;
            ptr = nullptr;
            v80 = 1;
            v81 = -1;
            v82 = 0;
            v83 = 0;
            v73 = v27;
            v76 = 0;
            v78 = 0;
            v79[0] = 0;
            v28 = find_tinfo_udt_member((int)&v73);
            v29 = v7;
            if ( v28 != -1 )
              v29 = (unsigned int)set_tinfo_property4(&v61, 15, v28, (int)(a5 - v23), 0, 0) == 0;
            clear_tinfo_t(v79);
            if ( ptr )
            {
              *(_QWORD *)&v78 = 0;
              qfree(ptr);
            }
            if ( v75 )
            {
              *(_QWORD *)&v76 = 0;
              qfree(v75);
            }
            if ( v29 )
              goto LABEL_31;
LABEL_68:
            v7 = 0;
LABEL_39:
            clear_tinfo_t(&v68);
            if ( v66 )
            {
              *(_QWORD *)&v67 = 0;
              qfree(v66);
            }
            if ( v64 )
            {
              *(_QWORD *)&v65 = 0;
              qfree(v64);
            }
            goto LABEL_43;
          }
LABEL_32:
          if ( v51 )
            sub_5B18C0(a1, a2, 0, 0xFFFFFFFFLL, 0);
          else
            sub_5A0AC0((__int64)a1, (__int64)a2);
          if ( (unsigned __int8)sub_5ACD60(a1, a2, 0) )
          {
            if ( a5 != v23 )
            {
              for ( i = xrefblk_t_first_to(&v73, (unsigned int)*a2, 0); i; i = xrefblk_t_next_to(&v73) )
                sub_5B2990(a1, (unsigned int)v73);
            }
            goto LABEL_39;
          }
          goto LABEL_68;
        }
      }
LABEL_17:
      v43 = -1;
      goto LABEL_18;
    }
    v26 = sub_5A20F0(a1, (__int64)a2, a3, a4);
    a6 = v26;
    if ( v26 )
    {
      v51 = v26;
      goto LABEL_8;
    }
  }
  return 0;
}

