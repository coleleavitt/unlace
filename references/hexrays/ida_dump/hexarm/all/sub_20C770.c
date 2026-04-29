__int64 __fastcall sub_20C770(_QWORD *a1, __int64 a2, double a3, __m128 a4, __m128 a5)
{
  _QWORD *v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 *v8; // rsi
  __int64 v9; // rax
  int v10; // eax
  __m128 v11; // xmm0
  __int64 v12; // rax
  unsigned __int64 *v13; // rdx
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 *v16; // rsi
  unsigned __int64 v17; // rcx
  __int64 result; // rax
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rbp
  __int64 v21; // r13
  __int64 v22; // r13
  _QWORD *v23; // rdi
  _QWORD *v24; // rdi
  _QWORD *v25; // rdi
  _QWORD *v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rdi
  _QWORD *v30; // [rsp+8h] [rbp-1B0h]
  int v31; // [rsp+8h] [rbp-1B0h]
  unsigned int v32; // [rsp+8h] [rbp-1B0h]
  int v33; // [rsp+8h] [rbp-1B0h]
  int v34; // [rsp+8h] [rbp-1B0h]
  int v35; // [rsp+8h] [rbp-1B0h]
  int v36; // [rsp+8h] [rbp-1B0h]
  int v37; // [rsp+8h] [rbp-1B0h]
  int v38; // [rsp+8h] [rbp-1B0h]
  int v39; // [rsp+8h] [rbp-1B0h]
  int v40; // [rsp+8h] [rbp-1B0h]
  int v41; // [rsp+8h] [rbp-1B0h]
  int v42; // [rsp+8h] [rbp-1B0h]
  int v43; // [rsp+8h] [rbp-1B0h]
  int v44; // [rsp+8h] [rbp-1B0h]
  int v45; // [rsp+8h] [rbp-1B0h]
  _QWORD *v46; // [rsp+10h] [rbp-1A8h]
  _QWORD *v47; // [rsp+18h] [rbp-1A0h] BYREF
  __int64 v48; // [rsp+20h] [rbp-198h]
  _QWORD *v49; // [rsp+28h] [rbp-190h]
  __int64 (__fastcall ***v50)(); // [rsp+30h] [rbp-188h]
  unsigned __int64 *v51; // [rsp+38h] [rbp-180h]
  unsigned __int64 *v52; // [rsp+40h] [rbp-178h]
  __m128i *v53; // [rsp+48h] [rbp-170h]
  __m128i v54; // [rsp+50h] [rbp-168h] BYREF
  _DWORD v55[4]; // [rsp+60h] [rbp-158h] BYREF
  __int64 v56; // [rsp+70h] [rbp-148h]
  __int64 (__fastcall **v57)(); // [rsp+80h] [rbp-138h] BYREF
  __int64 v58; // [rsp+88h] [rbp-130h]
  __int64 v59; // [rsp+90h] [rbp-128h]
  char v60; // [rsp+98h] [rbp-120h]
  _QWORD v61[5]; // [rsp+A0h] [rbp-118h] BYREF
  char v62; // [rsp+C8h] [rbp-F0h]
  __m128 v63; // [rsp+D0h] [rbp-E8h]
  __int64 v64; // [rsp+E0h] [rbp-D8h]
  __int64 v65; // [rsp+E8h] [rbp-D0h] BYREF
  int v66; // [rsp+F0h] [rbp-C8h]
  __int16 v67; // [rsp+F4h] [rbp-C4h]
  __int64 (__fastcall **v68)(); // [rsp+F8h] [rbp-C0h]
  __int64 v69; // [rsp+100h] [rbp-B8h]
  __int64 v70; // [rsp+108h] [rbp-B0h]
  __int64 v71; // [rsp+110h] [rbp-A8h]
  __int64 v72; // [rsp+118h] [rbp-A0h]
  char v73; // [rsp+120h] [rbp-98h]
  _DWORD v74[4]; // [rsp+128h] [rbp-90h] BYREF
  __int64 v75; // [rsp+138h] [rbp-80h]
  _QWORD *v76; // [rsp+140h] [rbp-78h]
  _QWORD *v77; // [rsp+148h] [rbp-70h]
  __int64 *v78; // [rsp+150h] [rbp-68h]
  __int64 v79; // [rsp+158h] [rbp-60h]
  int v80; // [rsp+160h] [rbp-58h]
  _QWORD *v81; // [rsp+168h] [rbp-50h]
  unsigned __int64 v82; // [rsp+178h] [rbp-40h]

  v48 = a2;
  v82 = __readfsqword(0x28u);
  v53 = &v54;
  v54 = 0u;
  sub_20BEE0(&v54, a1, nullptr, a3, a4, a5);
  v51 = (unsigned __int64 *)v54.m128i_i64[0];
  if ( v54.m128i_i64[1] )
  {
    if ( v51 )
    {
      v52 = (unsigned __int64 *)v51[1];
      if ( v52 == v51 )
      {
LABEL_21:
        LODWORD(result) = 0;
      }
      else
      {
        while ( 1 )
        {
          v5 = (_QWORD *)v52[5];
          v46 = v52 + 3;
          v6 = v52[6];
          v30 = v52 + 5;
          v47 = a1 + 54;
          v49 = &v5[3 * v6];
          if ( v49 != v5 )
            break;
LABEL_13:
          if ( (*v52 & 2) != 0 )
          {
LABEL_20:
            if ( v52 == v51 )
              goto LABEL_21;
          }
          else
          {
            v13 = (unsigned __int64 *)v52[2];
            if ( (*(_BYTE *)v13 & 2) != 0 )
            {
              v14 = (unsigned __int64 *)(*v52 & 0xFFFFFFFFFFFFFFFCLL);
              v15 = *v14;
              if ( (*v14 & 2) == 0 )
              {
                v16 = v52;
                while ( (unsigned __int64 *)v14[2] == v16 )
                {
                  v16 = v14;
                  v17 = v15 & 0xFFFFFFFFFFFFFFFCLL;
                  v15 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v15 & 2) != 0 )
                  {
                    v52 = (unsigned __int64 *)v17;
                    goto LABEL_20;
                  }
                  v14 = (unsigned __int64 *)v17;
                }
              }
            }
            else
            {
              do
              {
                v14 = v13;
                v13 = (unsigned __int64 *)v13[1];
              }
              while ( (*(_BYTE *)v13 & 2) == 0 );
            }
            v52 = v14;
            if ( v14 == v51 )
              goto LABEL_21;
          }
        }
        while ( 1 )
        {
          v58 = 0;
          v60 = 0;
          v64 = v48;
          v11 = _mm_loadh_ps((const double *)&v47);
          v59 = 0;
          v57 = off_4D9620;
          memset(&v61[2], 0, 24);
          v62 = 0;
          v65 = -1;
          v66 = -1;
          v67 = 0;
          v61[1] = a1;
          v61[0] = off_4D95F8;
          v55[0] = 0;
          v63 = v11;
          copy_argloc(v55, v46);
          v56 = -1;
          v69 = 0;
          v70 = 0;
          v71 = 0;
          v72 = 0;
          v73 = 0;
          v68 = (__int64 (__fastcall **)())&unk_4E7FE0;
          v74[0] = 0;
          copy_argloc(v74, v55);
          v77 = v5;
          v79 = 0;
          v75 = v56;
          v76 = v30;
          v78 = &v65;
          v80 = 0x10000;
          if ( v5 )
          {
            v12 = v5[1];
            if ( v12 )
              v7 = *(_QWORD *)(v12 + 24);
            else
              v7 = *(_QWORD *)(*v5 + 32LL);
            v75 = v7;
            v65 = v7;
          }
          cleanup_argloc(v55);
          v8 = (__int64 *)a1[98];
          v68 = off_4D95C8;
          v81 = v61;
          v9 = *v5;
          v50 = &v57;
          v10 = sub_6EFD0((__int64 *)&v57, v8, *(_DWORD *)(v9 + 72), 0);
          if ( v10 )
            break;
          v57 = off_4D9620;
          v68 = (__int64 (__fastcall **)())&unk_4E7FE0;
          v61[0] = off_4D95F8;
          v5 = v77 + 3;
          cleanup_argloc(v74);
          v57 = off_4D61D8;
          qfree(v58);
          if ( v5 == v49 )
            goto LABEL_13;
        }
        v31 = v10;
        v68 = (__int64 (__fastcall **)())&unk_4E7FE0;
        v57 = off_4D9620;
        v61[0] = off_4D95F8;
        cleanup_argloc(v74);
        v57 = off_4D61D8;
        qfree(v58);
        LODWORD(result) = v31;
      }
      v19 = *v51;
      v20 = *v51 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v20 & 2) != 0 )
        goto LABEL_24;
      v21 = *(_QWORD *)(v20 + 8);
      if ( (*(_BYTE *)v21 & 2) != 0 )
      {
        v22 = *(_QWORD *)(v20 + 16);
        if ( (*(_BYTE *)v22 & 2) != 0 )
          goto LABEL_51;
        goto LABEL_33;
      }
      v25 = *(_QWORD **)(v21 + 8);
      if ( (*(_BYTE *)v25 & 2) != 0 )
      {
        v26 = *(_QWORD **)(v21 + 16);
        if ( (*(_BYTE *)v26 & 2) != 0 )
        {
LABEL_55:
          v28 = *(_QWORD *)(v21 + 40);
          if ( v28 )
          {
            *(_QWORD *)(v21 + 48) = 0;
            v42 = result;
            qfree(v28);
            LODWORD(result) = v42;
          }
          v43 = result;
          cleanup_argloc(v21 + 24);
          *(_QWORD *)v21 |= 2uLL;
          LODWORD(result) = v43;
LABEL_47:
          if ( v21 )
          {
            v39 = result;
            qfree(v21);
            LODWORD(result) = v39;
          }
          v22 = *(_QWORD *)(v20 + 16);
          if ( (*(_BYTE *)v22 & 2) != 0 )
          {
LABEL_39:
            if ( (*(_BYTE *)v20 & 2) != 0 )
            {
LABEL_40:
              if ( v19 > 3 )
              {
                v36 = result;
                qfree(v20);
                LODWORD(result) = v36;
              }
              goto LABEL_24;
            }
LABEL_51:
            v27 = *(_QWORD *)(v20 + 40);
            if ( v27 )
            {
              *(_QWORD *)(v20 + 48) = 0;
              v40 = result;
              qfree(v27);
              LODWORD(result) = v40;
            }
            v41 = result;
            cleanup_argloc(v20 + 24);
            *(_QWORD *)v20 |= 2uLL;
            LODWORD(result) = v41;
            goto LABEL_40;
          }
LABEL_33:
          v23 = *(_QWORD **)(v22 + 8);
          if ( (*(_BYTE *)v23 & 2) != 0 )
          {
            v24 = *(_QWORD **)(v22 + 16);
            if ( (*(_BYTE *)v24 & 2) != 0 )
              goto LABEL_59;
          }
          else
          {
            v33 = result;
            sub_20A950(v23);
            v24 = *(_QWORD **)(v22 + 16);
            LODWORD(result) = v33;
            if ( (*(_BYTE *)v24 & 2) != 0 )
              goto LABEL_36;
          }
          v34 = result;
          sub_20A950(v24);
          LODWORD(result) = v34;
LABEL_36:
          if ( (*(_BYTE *)v22 & 2) != 0 )
          {
LABEL_37:
            if ( v22 )
            {
              v35 = result;
              qfree(v22);
              LODWORD(result) = v35;
            }
            goto LABEL_39;
          }
LABEL_59:
          v29 = *(_QWORD *)(v22 + 40);
          if ( v29 )
          {
            *(_QWORD *)(v22 + 48) = 0;
            v44 = result;
            qfree(v29);
            LODWORD(result) = v44;
          }
          v45 = result;
          cleanup_argloc(v22 + 24);
          *(_QWORD *)v22 |= 2uLL;
          LODWORD(result) = v45;
          goto LABEL_37;
        }
      }
      else
      {
        v37 = result;
        sub_20A950(v25);
        v26 = *(_QWORD **)(v21 + 16);
        LODWORD(result) = v37;
        if ( (*(_BYTE *)v26 & 2) != 0 )
          goto LABEL_46;
      }
      v38 = result;
      sub_20A950(v26);
      LODWORD(result) = v38;
LABEL_46:
      if ( (*(_BYTE *)v21 & 2) != 0 )
        goto LABEL_47;
      goto LABEL_55;
    }
    return 0;
  }
  else
  {
    result = 0;
    if ( v51 )
    {
LABEL_24:
      v32 = result;
      qfree(v51);
      return v32;
    }
  }
  return result;
}
