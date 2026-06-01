__int64 __fastcall sub_153D8A0(__int64 a1, _DWORD *a2, __m128i a3, __m128 a4)
{
  int *v6; // rbx
  __int16 v7; // ax
  int v8; // r12d
  __int64 *v9; // rdi
  int *v10; // rdx
  __int64 v11; // rbx
  char v13; // al
  __int64 *v14; // rdi
  int v15; // ecx
  __int64 *v16; // rdi
  char v17; // bp
  _BYTE *v18; // rax
  char v19; // r13
  unsigned int v20; // eax
  bool v21; // zf
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int16 v30; // ax
  unsigned int v31; // r14d
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // r13
  __int16 v34; // ax
  _WORD *v35; // rax
  unsigned __int64 v36; // rdx
  __int16 v37; // ax
  _WORD *v38; // rax
  char *v39; // rsi
  int v40; // eax
  int v41; // eax
  int v42; // ebp
  int v43; // eax
  __int16 v44; // ax
  unsigned int v45; // edx
  __int64 v46; // rbp
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  _BOOL8 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdi
  int v56; // edx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rsi
  __int64 v60; // rax
  unsigned int v61; // [rsp+8h] [rbp-120h]
  char v62; // [rsp+Ch] [rbp-11Ch]
  __int64 v63; // [rsp+10h] [rbp-118h]
  int v64; // [rsp+18h] [rbp-110h]
  char v65; // [rsp+1Eh] [rbp-10Ah]
  char v66; // [rsp+1Fh] [rbp-109h]
  __int64 v67; // [rsp+20h] [rbp-108h]
  unsigned int v68; // [rsp+20h] [rbp-108h]
  _BOOL4 v69; // [rsp+28h] [rbp-100h]
  unsigned int v70; // [rsp+2Ch] [rbp-FCh]
  int v71; // [rsp+34h] [rbp-F4h] BYREF
  int v72; // [rsp+38h] [rbp-F0h] BYREF
  unsigned int v73; // [rsp+3Ch] [rbp-ECh] BYREF
  __int64 v74; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v75; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v76; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v77; // [rsp+58h] [rbp-D0h] BYREF
  __m128i v78; // [rsp+60h] [rbp-C8h] BYREF
  char v79; // [rsp+70h] [rbp-B8h]
  char v80; // [rsp+71h] [rbp-B7h]
  char v81; // [rsp+72h] [rbp-B6h]
  __int64 v82; // [rsp+80h] [rbp-A8h] BYREF
  int v83; // [rsp+88h] [rbp-A0h]
  unsigned int v84; // [rsp+8Ch] [rbp-9Ch]
  int v85; // [rsp+90h] [rbp-98h]
  int v86; // [rsp+94h] [rbp-94h]
  bool v87; // [rsp+98h] [rbp-90h]
  unsigned __int8 *v88; // [rsp+A0h] [rbp-88h] BYREF
  unsigned int v89; // [rsp+A8h] [rbp-80h]
  int v90; // [rsp+ACh] [rbp-7Ch]
  int v91; // [rsp+B0h] [rbp-78h]
  int v92; // [rsp+B4h] [rbp-74h]
  bool v93; // [rsp+B8h] [rbp-70h]

  v6 = (int *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v7 = *(_WORD *)(a1 + 32);
  v8 = *(_DWORD *)(a1 + 40);
  v61 = 0;
  if ( v7 == 162 )
  {
    v13 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL);
    if ( (v13 & 8) == 0 )
      goto LABEL_11;
    sub_1564840(&v88, a1, v6, (v13 & 0x40) == 0 ? 1957 : 2081);
    sub_AEA040((__int64)&v88);
    v14 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v14, v6);
    v7 = *(_WORD *)(a1 + 32);
    v62 = 1;
    goto LABEL_6;
  }
  if ( v7 != 41 )
  {
    if ( v7 != 173 )
    {
      if ( v7 != 3 )
      {
LABEL_5:
        v62 = 0;
LABEL_6:
        if ( v7 == 22 )
        {
          v64 = 0;
          v65 = 0;
          goto LABEL_17;
        }
LABEL_11:
        v10 = v6;
        v11 = 1;
        sub_1564840(&v88, a1, v10, 1625);
        sub_1533090(&v88, (__int64)"if");
        sub_AEA040((__int64)&v88);
        LOWORD(v88) = 63;
        sub_15680D0(a1, &v88, 1, 0);
        return v11;
      }
      v51 = 0;
      goto LABEL_79;
    }
    v64 = 0;
LABEL_16:
    v15 = -((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 2LL) & 1) == 0);
    LOBYTE(v15) = v15 & 0x71;
    sub_1564840(&v88, a1, v6, (unsigned int)(v15 + 2099));
    sub_AEA040((__int64)&v88);
    v16 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v16, v6);
    v65 = 1;
    v62 = 0;
    v61 = *(_DWORD *)(a1 + 40);
LABEL_17:
    v17 = 1;
    v18 = *(_BYTE **)(*(_QWORD *)(a1 + 8) + 56LL);
    if ( (*v18 & 1) == 0 )
      v17 = (v18[1] & 8) != 0;
    sub_146B5E0(&v74, a1, 0x18u, v17, 0);
    v75 = 0;
    v78 = 0u;
    v79 = 0;
    v81 = 0;
    v71 = 0;
    v72 = 0;
    if ( !v65 )
    {
      if ( v62 )
      {
        if ( !(unsigned __int8)sub_1537490((const __m128i *)a1, &v75, &v78, v8, 1, &v71, a3, a4, &v72) )
        {
          v66 = v80;
          v19 = v81;
          goto LABEL_23;
        }
LABEL_60:
        v11 = 1;
LABEL_61:
        if ( v74 )
          sub_1564F70(v74);
        return v11;
      }
      if ( (unsigned __int8)sub_1537490((const __m128i *)a1, &v75, &v78, v8, 0, &v71, a3, a4, &v72) )
        goto LABEL_60;
    }
    v19 = 0;
    v66 = 0;
LABEL_23:
    v69 = *(_WORD *)(a1 + 32) == 24;
    sub_146B5E0(&v76, a1, 8u, v17, *(_WORD *)(a1 + 32) == 24);
    v20 = *(_DWORD *)(a1 + 16);
    v21 = *(_WORD *)(a1 + 32) == 24;
    v82 = a1;
    v83 = v8;
    v70 = v20;
    v84 = v20;
    v22 = *(_QWORD *)(a1 + 8);
    v86 = 0;
    LODWORD(v22) = *(_DWORD *)(v22 + 2296);
    v87 = v21;
    v85 = v22;
    if ( *(_DWORD *)(a1 + 2544) )
    {
      v23 = *(_DWORD *)(a1 + 2544);
      *(_DWORD *)(a1 + 2544) = 0;
      v83 = v23;
    }
    v73 = 0;
    if ( !v19 || v66 )
    {
      if ( v64 || !v65 )
      {
        v63 = sub_153D810(a1, &v73, 0, a3, a4);
LABEL_29:
        if ( *(_WORD *)(a1 + 32) != 85 )
          sub_15358C0(&v82, (__int64)&v73, v26, v27, v28, v29);
        if ( v76 )
        {
          sub_1564F70(v76);
          v76 = 0;
        }
        v30 = *(_WORD *)(a1 + 32);
        v68 = 0;
        if ( v30 != 85 )
        {
          if ( v30 == 3 )
          {
            v57 = *(_QWORD *)(a1 + 8);
            if ( *(_QWORD *)(v57 + 760) )
            {
              *(_BYTE *)(v57 + 968) = 1;
              *(_BYTE *)(*(_QWORD *)(v57 + 48) + 6LL) = 1;
            }
            v58 = *(_QWORD *)(a1 + 96);
            v11 = 1;
            *(_WORD *)(a1 + 32) = 1;
            sub_172DA60(*(_QWORD *)(v58 + 656), *(_QWORD *)(v58 + 608), v69);
            goto LABEL_91;
          }
          v31 = v73;
          v32 = 0;
          if ( v73 )
          {
            v31 = 0;
            sub_1564820(&v88, a1, v73, 2134);
            sub_AEA040((__int64)&v88);
          }
LABEL_37:
          if ( v74 )
          {
            sub_1564F70(v74);
            v74 = 0;
          }
          if ( v63 == 1 )
          {
            if ( v32 == 1 || (v32 & 0xFFFFFFFFFFFFFFFELL) == 0 )
              goto LABEL_90;
            if ( v65 )
              goto LABEL_88;
            v54 = sub_1C36210(*(_QWORD *)(a1 + 96), v70, 0);
            v55 = *(_QWORD *)(a1 + 96);
            v33 = v54 & 0xFFFFFFFFFFFFFFFELL;
          }
          else
          {
            v33 = v63 & 0xFFFFFFFFFFFFFFFELL;
            if ( (v63 & 0xFFFFFFFFFFFFFFFELL) != 0 )
            {
              if ( v65 )
              {
                v34 = *(_WORD *)v33 & 0x1FF;
                if ( v34 == 130 )
                {
                  v35 = *(_WORD **)(v33 + 8);
                  if ( !v35 )
                    goto LABEL_88;
                  v34 = *v35 & 0x1FF;
                }
                if ( v34 == 249 )
                {
                  if ( !v32 )
                  {
LABEL_113:
                    v55 = *(_QWORD *)(a1 + 96);
                    v56 = 1;
                    if ( !v62 )
                      v56 = (v64 != 0) + 2;
                    goto LABEL_87;
                  }
                  v36 = v32 & 0xFFFFFFFFFFFFFFFELL;
                  if ( (v32 & 0xFFFFFFFFFFFFFFFELL) != 0 )
                  {
                    v37 = *(_WORD *)v36 & 0x1FF;
                    if ( v37 != 130 )
                      goto LABEL_51;
                    v38 = *(_WORD **)(v36 + 8);
                    if ( v38 )
                    {
                      v37 = *v38 & 0x1FF;
LABEL_51:
                      if ( v37 != 249 )
                        goto LABEL_52;
                      goto LABEL_113;
                    }
                  }
LABEL_52:
                  sub_1564820(&v88, a1, v31, 15);
                  v39 = (char *)"else";
LABEL_89:
                  sub_1533090(&v88, (__int64)v39);
                  sub_1533090(&v88, (__int64)"{");
                  sub_AEA040((__int64)&v88);
LABEL_90:
                  v11 = 1;
LABEL_91:
                  if ( v76 )
                    sub_1564F70(v76);
                  goto LABEL_61;
                }
LABEL_88:
                sub_1564820(&v88, a1, v61, 15);
                v39 = "consteval";
                goto LABEL_89;
              }
              v55 = *(_QWORD *)(a1 + 96);
              if ( v32 == 1 )
              {
                v60 = sub_1C36210(v55, v68, 0);
                v55 = *(_QWORD *)(a1 + 96);
                v32 = v60;
              }
            }
            else
            {
              if ( v32 == 1 )
                goto LABEL_90;
              if ( v65 )
                goto LABEL_88;
              v55 = *(_QWORD *)(a1 + 96);
              v33 = 0;
            }
          }
          v56 = v62 & 1;
LABEL_87:
          v11 = sub_1C3A020(
                  v55,
                  v8,
                  v56,
                  v71,
                  (unsigned int)v75 & 0xFFFFFFFE,
                  v72,
                  v78.m128i_i64[0],
                  v78.m128i_i64[1],
                  v79,
                  v33,
                  v31,
                  v32 & 0xFFFFFFFFFFFFFFFELL);
          goto LABEL_91;
        }
        v40 = *(_DWORD *)(a1 + 16);
        if ( a2 )
        {
          *a2 = v40;
          v40 = *(_DWORD *)(a1 + 16);
        }
        *(_DWORD *)(a1 + 40) = v40;
        sub_14634E0(*(__int64 **)(a1 + 8), v6);
        v31 = *(_DWORD *)(a1 + 40);
        v68 = *(_DWORD *)(a1 + 16);
        sub_146B5E0(&v77, a1, 8u, v17, *(_WORD *)(a1 + 32) == 24);
        v41 = *(_DWORD *)(a1 + 16);
        v88 = (unsigned __int8 *)a1;
        v89 = v31;
        v42 = *(_DWORD *)(a1 + 2544);
        v90 = v41;
        v43 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 2296LL);
        v92 = 1;
        v91 = v43;
        v44 = *(_WORD *)(a1 + 32);
        v93 = v44 == 24;
        if ( v42 )
        {
          v45 = *(_DWORD *)(a1 + 2544);
          *(_DWORD *)(a1 + 2544) = 0;
          v89 = v45;
        }
        if ( v44 != 24 )
          *(_DWORD *)(a1 + 2544) = v31;
        v46 = *(_QWORD *)(a1 + 96);
        if ( v19 )
        {
          v19 = v66;
          if ( v66 )
          {
            v59 = 2;
            if ( v64 )
              v59 = v65 == 0 ? 2 : 5;
            goto LABEL_99;
          }
          if ( !v64 )
            goto LABEL_71;
          v19 = v65;
          if ( !v65 )
            goto LABEL_71;
        }
        else
        {
          if ( !v64 )
            goto LABEL_71;
          v19 = v65;
          if ( !v65 )
            goto LABEL_71;
        }
        v59 = 5;
LABEL_99:
        v19 = 1;
        sub_18C74E0(*(_QWORD *)(a1 + 96), v59, 0, 4);
LABEL_71:
        v32 = sub_153D810(a1, nullptr, 0, a3, a4);
        if ( v32 > 1 )
          sub_15358C0(&v88, 0, v47, v48, v49, v50);
        if ( v77 )
        {
          sub_1564F70(v77);
          v77 = 0;
        }
        if ( v19 )
        {
          sub_190D5E0(v46);
          if ( v77 )
            sub_1564F70(v77);
        }
        goto LABEL_37;
      }
      v24 = *(_QWORD *)(a1 + 96);
    }
    else
    {
      v24 = *(_QWORD *)(a1 + 96);
      v25 = 2;
      if ( v64 || !v65 )
        goto LABEL_28;
    }
    v25 = 5;
LABEL_28:
    v67 = v24;
    sub_18C74E0(v24, v25, 0, 4);
    v63 = sub_153D810(a1, &v73, 0, a3, a4);
    sub_190D5E0(v67);
    goto LABEL_29;
  }
  v9 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v9, v6);
  v64 = *(_DWORD *)(a1 + 40);
  v7 = *(_WORD *)(a1 + 32);
  if ( v7 == 173 )
    goto LABEL_16;
  if ( v7 != 3 )
  {
    if ( v64 )
      goto LABEL_11;
    goto LABEL_5;
  }
  v51 = v64 != 0;
LABEL_79:
  v52 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v52 + 760) )
  {
    *(_BYTE *)(v52 + 968) = 1;
    *(_BYTE *)(*(_QWORD *)(v52 + 48) + 6LL) = 1;
  }
  v53 = *(_QWORD *)(a1 + 96);
  v11 = 1;
  *(_WORD *)(a1 + 32) = 1;
  sub_170A550(*(_QWORD *)(v53 + 656), v51);
  return v11;
}
