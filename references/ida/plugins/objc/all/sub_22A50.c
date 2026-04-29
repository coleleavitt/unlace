__int64 __fastcall sub_22A50(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned int v5; // r14d
  __int64 v6; // rbx
  __int64 v7; // r8
  unsigned __int64 v8; // r15
  char *v9; // rsi
  char *v10; // rbx
  __int64 v11; // rbx
  unsigned __int64 v12; // r15
  __int64 v13; // r8
  char *v14; // rsi
  __int64 v15; // r15
  __int64 v16; // r8
  unsigned __int64 v17; // rbx
  char *v18; // rsi
  __m128i si128; // xmm0
  char *v20; // r15
  __int64 v21; // r15
  unsigned __int64 v22; // r14
  char *v23; // rsi
  __int64 v24; // rbx
  __int64 v25; // r8
  unsigned __int64 v26; // r15
  char *v27; // rsi
  char *v28; // rbx
  __int64 v29; // r15
  unsigned __int64 v30; // r14
  char *v31; // rsi
  __int64 v33; // r15
  __int64 v34; // r8
  unsigned __int64 v35; // rdx
  char *v36; // rsi
  __int64 v37; // rbx
  unsigned __int64 v38; // r15
  __int64 v39; // r8
  char *v40; // rsi
  __int64 v41; // rbx
  __int64 v42; // r8
  unsigned __int64 v43; // r15
  char *v44; // rsi
  unsigned __int64 v45; // r15
  __int64 v46; // r8
  char *v47; // rsi
  __int64 v48; // rbx
  __int64 v49; // r8
  unsigned __int64 v50; // r15
  char *v51; // rsi
  unsigned __int64 v52; // r15
  __int64 v53; // r8
  char *v54; // rsi
  __int64 v55; // rbx
  __int64 v56; // r8
  unsigned __int64 v57; // r15
  char *v58; // rsi
  __int64 v59; // r8
  unsigned __int64 v60; // r15
  char *v61; // rsi
  __int64 v62; // rbx
  __int64 v63; // r8
  unsigned __int64 v64; // r15
  char *v65; // rsi
  char *v66; // rbx
  __int64 v67; // r8
  unsigned __int64 v68; // r15
  char *v69; // rsi
  unsigned __int64 v70; // r15
  __int64 v71; // r8
  char *v72; // rsi
  __int64 v73; // [rsp+8h] [rbp-88h]
  __int64 v74; // [rsp+10h] [rbp-80h]
  unsigned __int64 v75; // [rsp+10h] [rbp-80h]
  __int64 v76; // [rsp+10h] [rbp-80h]
  __int64 v77; // [rsp+10h] [rbp-80h]
  __int64 v78; // [rsp+10h] [rbp-80h]
  __int64 v79; // [rsp+10h] [rbp-80h]
  __int64 v80; // [rsp+10h] [rbp-80h]
  __int64 v81; // [rsp+10h] [rbp-80h]
  __int64 v82; // [rsp+10h] [rbp-80h]
  __int64 v83; // [rsp+10h] [rbp-80h]
  __int64 v84; // [rsp+10h] [rbp-80h]
  __int64 v85; // [rsp+10h] [rbp-80h]
  __int64 v86; // [rsp+10h] [rbp-80h]
  __int64 v87; // [rsp+10h] [rbp-80h]
  __int64 v88; // [rsp+10h] [rbp-80h]
  unsigned __int8 v89; // [rsp+1Fh] [rbp-71h]
  char *v90; // [rsp+40h] [rbp-50h] BYREF
  __int128 v91; // [rsp+48h] [rbp-48h]
  unsigned __int64 v92; // [rsp+58h] [rbp-38h]

  v92 = __readfsqword(0x28u);
  v89 = print_tinfo();
  if ( !v89 )
    return v89;
  v5 = *(_DWORD *)(a3 + 24);
  v90 = 0;
  v91 = 0;
  if ( v5 || *(_QWORD *)(a3 + 72) > 1u || *(_QWORD *)(a3 + 48) > 1u )
  {
    v90 = (char *)qvector_reserve();
    *(_QWORD *)&v91 = 3;
    strcpy(v90, " (");
    if ( *(_QWORD *)(a3 + 48) > 1u )
    {
      sub_D8D0((__int64 *)&v90);
      if ( *(_QWORD *)(a3 + 72) <= 1u && !*(_DWORD *)(a3 + 24) )
        goto LABEL_6;
      v33 = v91;
      if ( (_QWORD)v91 )
      {
        v34 = v91 + 1;
        v35 = v91 + 2;
        v33 = v91 - 1;
      }
      else
      {
        v35 = 3;
        v34 = 2;
      }
      v36 = v90;
      if ( *((_QWORD *)&v91 + 1) < v35 )
      {
        v73 = v34;
        v75 = v35;
        v90 = (char *)qvector_reserve();
        v34 = v73;
        v36 = v90;
        v35 = v75;
      }
      *(_QWORD *)&v91 = v35;
      v36[v34] = 0;
      *(_WORD *)&v90[v33] = 8236;
      if ( *(_QWORD *)(a3 + 72) <= 1u )
      {
LABEL_6:
        if ( (v5 & 1) != 0 )
        {
          v48 = v91;
          if ( (_QWORD)v91 )
          {
            v49 = v91 + 7;
            v50 = v91 + 8;
            v48 = v91 - 1;
          }
          else
          {
            v50 = 9;
            v49 = 8;
          }
          v51 = v90;
          if ( *((_QWORD *)&v91 + 1) < v50 )
          {
            v74 = v49;
            v90 = (char *)qvector_reserve();
            v49 = v74;
            v51 = v90;
          }
          *(_QWORD *)&v91 = v50;
          v51[v49] = 0;
          *(_QWORD *)&v90[v48] = 0x796C6E6F64616572LL;
          v11 = v91;
          if ( v5 == 1 )
            goto LABEL_38;
          if ( (_QWORD)v91 )
          {
            v53 = v91 + 1;
            v52 = v91 + 2;
            v11 = v91 - 1;
          }
          else
          {
            v52 = 3;
            v53 = 2;
          }
          v54 = v90;
          if ( *((_QWORD *)&v91 + 1) < v52 )
          {
            v82 = v53;
            v90 = (char *)qvector_reserve();
            v53 = v82;
            v54 = v90;
          }
          *(_QWORD *)&v91 = v52;
          v54[v53] = 0;
          *(_WORD *)&v90[v11] = 8236;
        }
        if ( (v5 & 2) != 0 )
        {
          v55 = v91;
          if ( (_QWORD)v91 )
          {
            v56 = v91 + 3;
            v57 = v91 + 4;
            v55 = v91 - 1;
          }
          else
          {
            v57 = 5;
            v56 = 4;
          }
          v58 = v90;
          if ( *((_QWORD *)&v91 + 1) < v57 )
          {
            v76 = v56;
            v90 = (char *)qvector_reserve();
            v56 = v76;
            v58 = v90;
          }
          *(_QWORD *)&v91 = v57;
          v58[v56] = 0;
          *(_DWORD *)&v90[v55] = 2037411683;
          v11 = v91;
          if ( v5 <= 3 )
            goto LABEL_38;
          if ( (_QWORD)v91 )
          {
            v59 = v91 + 1;
            v60 = v91 + 2;
            v11 = v91 - 1;
          }
          else
          {
            v60 = 3;
            v59 = 2;
          }
          v61 = v90;
          if ( *((_QWORD *)&v91 + 1) < v60 )
          {
            v84 = v59;
            v90 = (char *)qvector_reserve();
            v59 = v84;
            v61 = v90;
          }
          *(_QWORD *)&v91 = v60;
          v61[v59] = 0;
          *(_WORD *)&v90[v11] = 8236;
        }
        if ( (v5 & 4) != 0 )
        {
          v62 = v91;
          if ( (_QWORD)v91 )
          {
            v63 = v91 + 5;
            v64 = v91 + 6;
            v62 = v91 - 1;
          }
          else
          {
            v64 = 7;
            v63 = 6;
          }
          v65 = v90;
          if ( *((_QWORD *)&v91 + 1) < v64 )
          {
            v81 = v63;
            v90 = (char *)qvector_reserve();
            v63 = v81;
            v65 = v90;
          }
          *(_QWORD *)&v91 = v64;
          v65[v63] = 0;
          v66 = &v90[v62];
          *(_DWORD *)v66 = 1635018098;
          *((_WORD *)v66 + 2) = 28265;
          v11 = v91;
          if ( v5 <= 7 )
            goto LABEL_38;
          if ( (_QWORD)v91 )
          {
            v67 = v91 + 1;
            v68 = v91 + 2;
            v11 = v91 - 1;
          }
          else
          {
            v68 = 3;
            v67 = 2;
          }
          v69 = v90;
          if ( *((_QWORD *)&v91 + 1) < v68 )
          {
            v88 = v67;
            v90 = (char *)qvector_reserve();
            v67 = v88;
            v69 = v90;
          }
          *(_QWORD *)&v91 = v68;
          v69[v67] = 0;
          *(_WORD *)&v90[v11] = 8236;
        }
        if ( (v5 & 8) != 0 )
        {
          v24 = v91;
          if ( (_QWORD)v91 )
          {
            v25 = v91 + 8;
            v26 = v91 + 9;
            v24 = v91 - 1;
          }
          else
          {
            v26 = 10;
            v25 = 9;
          }
          v27 = v90;
          if ( *((_QWORD *)&v91 + 1) < v26 )
          {
            v77 = v25;
            v90 = (char *)qvector_reserve();
            v25 = v77;
            v27 = v90;
          }
          *(_QWORD *)&v91 = v26;
          v27[v25] = 0;
          v28 = &v90[v24];
          *(_QWORD *)v28 = 0x696D6F74616E6F6ELL;
          v28[8] = 99;
          v11 = v91;
          if ( v5 <= 0xF )
            goto LABEL_38;
          if ( (_QWORD)v91 )
          {
            v71 = v91 + 1;
            v70 = v91 + 2;
            v11 = v91 - 1;
          }
          else
          {
            v70 = 3;
            v71 = 2;
          }
          v72 = v90;
          if ( *((_QWORD *)&v91 + 1) < v70 )
          {
            v87 = v71;
            v90 = (char *)qvector_reserve();
            v71 = v87;
            v72 = v90;
          }
          *(_QWORD *)&v91 = v70;
          v72[v71] = 0;
          *(_WORD *)&v90[v11] = 8236;
        }
        if ( (v5 & 0x10) != 0 )
        {
          v41 = v91;
          if ( (_QWORD)v91 )
          {
            v42 = v91 + 7;
            v43 = v91 + 8;
            v41 = v91 - 1;
          }
          else
          {
            v43 = 9;
            v42 = 8;
          }
          v44 = v90;
          if ( *((_QWORD *)&v91 + 1) < v43 )
          {
            v80 = v42;
            v90 = (char *)qvector_reserve();
            v42 = v80;
            v44 = v90;
          }
          *(_QWORD *)&v91 = v43;
          v44[v42] = 0;
          *(_QWORD *)&v90[v41] = 0x63696D616E796440LL;
          v11 = v91;
          if ( v5 <= 0x1F )
            goto LABEL_38;
          if ( (_QWORD)v91 )
          {
            v46 = v91 + 1;
            v45 = v91 + 2;
            v11 = v91 - 1;
          }
          else
          {
            v45 = 3;
            v46 = 2;
          }
          v47 = v90;
          if ( *((_QWORD *)&v91 + 1) < v45 )
          {
            v85 = v46;
            v90 = (char *)qvector_reserve();
            v46 = v85;
            v47 = v90;
          }
          *(_QWORD *)&v91 = v45;
          v47[v46] = 0;
          *(_WORD *)&v90[v11] = 8236;
        }
        if ( (v5 & 0x20) == 0 )
        {
LABEL_22:
          v15 = v91;
          v11 = v91;
          if ( (v5 & 0x40) != 0 )
          {
            if ( (_QWORD)v91 )
            {
              v16 = v91 + 20;
              v17 = v91 + 21;
              v15 = v91 - 1;
            }
            else
            {
              v17 = 22;
              v16 = 21;
            }
            v18 = v90;
            if ( *((_QWORD *)&v91 + 1) < v17 )
            {
              v78 = v16;
              v90 = (char *)qvector_reserve();
              v16 = v78;
              v18 = v90;
            }
            si128 = _mm_load_si128((const __m128i *)&xmmword_31C20);
            *(_QWORD *)&v91 = v17;
            v18[v16] = 0;
            v20 = &v90[v15];
            *(__m128i *)v20 = si128;
            *(_QWORD *)(v20 + 13) = 0x3E656C6261746365LL;
            v11 = v91;
            if ( v5 > 0x7F )
            {
              if ( (_QWORD)v91 )
              {
                v21 = v91 + 1;
                v22 = v91 + 2;
                v11 = v91 - 1;
              }
              else
              {
                v22 = 3;
                v21 = 2;
              }
              v23 = v90;
              if ( *((_QWORD *)&v91 + 1) < v22 )
              {
                v90 = (char *)qvector_reserve();
                v23 = v90;
              }
              *(_QWORD *)&v91 = v22;
              v23[v21] = 0;
              *(_WORD *)&v90[v11] = 8236;
              v11 = v91;
            }
          }
          goto LABEL_38;
        }
        v6 = v91;
        if ( (_QWORD)v91 )
        {
          v7 = v91 + 5;
          v8 = v91 + 6;
          v6 = v91 - 1;
        }
        else
        {
          v8 = 7;
          v7 = 6;
        }
        v9 = v90;
        if ( *((_QWORD *)&v91 + 1) < v8 )
        {
          v79 = v7;
          v90 = (char *)qvector_reserve();
          v7 = v79;
          v9 = v90;
        }
        *(_QWORD *)&v91 = v8;
        v9[v7] = 0;
        v10 = &v90[v6];
        *(_DWORD *)v10 = 1702322015;
        *((_WORD *)v10 + 2) = 27489;
        v11 = v91;
        if ( v5 > 0x3F )
        {
          if ( (_QWORD)v91 )
          {
            v13 = v91 + 1;
            v12 = v91 + 2;
            v11 = v91 - 1;
          }
          else
          {
            v12 = 3;
            v13 = 2;
          }
          v14 = v90;
          if ( *((_QWORD *)&v91 + 1) < v12 )
          {
            v86 = v13;
            v90 = (char *)qvector_reserve();
            v13 = v86;
            v14 = v90;
          }
          *(_QWORD *)&v91 = v12;
          v14[v13] = 0;
          *(_WORD *)&v90[v11] = 8236;
          goto LABEL_22;
        }
LABEL_38:
        if ( v11 )
        {
          v29 = v11 + 1;
          v30 = v11 + 2;
          v31 = v90;
          --v11;
          if ( *((_QWORD *)&v91 + 1) >= v30 )
          {
LABEL_40:
            *(_QWORD *)&v91 = v30;
            v31[v29] = 0;
            *(_WORD *)&v90[v11] = 8233;
            goto LABEL_41;
          }
        }
        else
        {
          v31 = v90;
          v30 = 3;
          v29 = 2;
          if ( *((_QWORD *)&v91 + 1) >= 3u )
            goto LABEL_40;
        }
        v90 = (char *)qvector_reserve();
        v31 = v90;
        goto LABEL_40;
      }
    }
    else if ( *(_QWORD *)(a3 + 72) <= 1u )
    {
      goto LABEL_6;
    }
    sub_D8D0((__int64 *)&v90);
    if ( *(_DWORD *)(a3 + 24) )
    {
      v37 = v91;
      if ( (_QWORD)v91 )
      {
        v39 = v91 + 1;
        v38 = v91 + 2;
        v37 = v91 - 1;
      }
      else
      {
        v38 = 3;
        v39 = 2;
      }
      v40 = v90;
      if ( *((_QWORD *)&v91 + 1) < v38 )
      {
        v83 = v39;
        v90 = (char *)qvector_reserve();
        v39 = v83;
        v40 = v90;
      }
      *(_QWORD *)&v91 = v38;
      v40[v39] = 0;
      *(_WORD *)&v90[v37] = 8236;
    }
    goto LABEL_6;
  }
LABEL_41:
  sub_D6A0(a2);
  if ( v90 )
  {
    *(_QWORD *)&v91 = 0;
    qfree();
  }
  return v89;
}
