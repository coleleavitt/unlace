__int64 __fastcall sub_AADFB0(__int64 *a1, double a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rsi
  void *v8; // rdi
  char v9; // al
  char v10; // r12
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rax
  int v14; // ecx
  const char *v15; // rdi
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // r14
  unsigned int *v19; // r12
  void *v20; // rbx
  __int64 result; // rax
  __int64 *v22; // rbx
  unsigned __int64 v23; // rbp
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v27; // rax
  unsigned int v28; // eax
  int v29; // edx
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  int v36; // r9d
  int v37; // eax
  __int64 v38; // [rsp+0h] [rbp-398h]
  int v39[2]; // [rsp+0h] [rbp-398h]
  void *v40; // [rsp+8h] [rbp-390h]
  unsigned int v41; // [rsp+Ch] [rbp-38Ch]
  int v42[2]; // [rsp+10h] [rbp-388h] BYREF
  __int64 v43; // [rsp+18h] [rbp-380h] BYREF
  void *v44; // [rsp+20h] [rbp-378h] BYREF
  int v45[2]; // [rsp+28h] [rbp-370h]
  int v46[2]; // [rsp+30h] [rbp-368h] BYREF
  int v47[2]; // [rsp+38h] [rbp-360h]
  int v48[26]; // [rsp+40h] [rbp-358h] BYREF
  void *v49; // [rsp+A8h] [rbp-2F0h]
  int v50; // [rsp+B0h] [rbp-2E8h]
  __int64 v51; // [rsp+B8h] [rbp-2E0h]
  __int64 v52; // [rsp+110h] [rbp-288h]
  __int64 v53; // [rsp+118h] [rbp-280h]
  __int64 *v54; // [rsp+120h] [rbp-278h]
  __int64 (__fastcall **v55)(); // [rsp+160h] [rbp-238h]
  void *v56; // [rsp+178h] [rbp-220h]
  void *v57; // [rsp+190h] [rbp-208h]
  __int64 (__fastcall **v58)(); // [rsp+198h] [rbp-200h]
  void *v59; // [rsp+1B0h] [rbp-1E8h]
  void *v60; // [rsp+1C8h] [rbp-1D0h]
  unsigned __int8 v61; // [rsp+244h] [rbp-154h]
  char v62; // [rsp+246h] [rbp-152h]
  int v63; // [rsp+250h] [rbp-148h] BYREF
  char v64; // [rsp+254h] [rbp-144h]
  int v65; // [rsp+260h] [rbp-138h] BYREF
  char v66; // [rsp+264h] [rbp-134h]
  __int64 v67; // [rsp+298h] [rbp-100h]
  __int64 v68; // [rsp+2A0h] [rbp-F8h]
  __int64 v69; // [rsp+2A8h] [rbp-F0h]
  __int64 v70; // [rsp+2B0h] [rbp-E8h]
  __int64 v71; // [rsp+2B8h] [rbp-E0h]
  __int64 v72; // [rsp+2C8h] [rbp-D0h]
  __int64 v73; // [rsp+2D0h] [rbp-C8h]
  void *v74; // [rsp+2E0h] [rbp-B8h]
  void *v75; // [rsp+2F8h] [rbp-A0h]
  void *ptr; // [rsp+310h] [rbp-88h]
  __int64 v77; // [rsp+330h] [rbp-68h]
  __int64 v78; // [rsp+350h] [rbp-48h]

  v3 = a1[1];
  sub_15BAB00(v48, v3);
  if ( (unsigned int)sub_180B130(v48) > 0x63 )
  {
    if ( (unsigned __int8)sub_186A530(a2) )
    {
      sub_186A4C0(a2);
      v4 = sub_180B150(v48, v3);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v4, "(smt.collecting-features)\n");
    }
    else
    {
      sub_180B150(v48, v3);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  v5 = *a1;
  *(_QWORD *)v42 = 0;
  sub_C0FF90(v5 + 216, v42);
  if ( *(_QWORD *)v42 )
    v6 = *(unsigned int *)(*(_QWORD *)v42 - 4LL);
  else
    v6 = 0;
  sub_15C0810(v48, v6);
  if ( (unsigned int)sub_180B130(v48) > 0x3E7 )
  {
    if ( (unsigned __int8)sub_186A530(a2) )
    {
      sub_186A4C0(a2);
      v7 = sub_180B150(v48, v6);
      sub_15BC430(v48, v7);
      sub_186A500(v48, v7);
    }
    else
    {
      v27 = sub_180B150(v48, v6);
      sub_15BC430(v48, v27);
    }
  }
  v44 = (void *)0xFFFFFFF;
  *(_QWORD *)v45 = 0;
  *(_QWORD *)v46 = 1;
  *(_QWORD *)v47 = 0;
  sub_182CBA0(qword_1C7F2C0, v46);
  v8 = qword_1C7F2C0;
  v46[0] = 1;
  LOBYTE(v46[1]) &= ~1u;
  if ( (v66 & 1) == 0 && v65 == 1 )
  {
    if ( (v64 & 1) != 0 || (BYTE4(v44) & 1) != 0 )
    {
      v37 = sub_182C7B0(qword_1C7F2C0, &v63, &v44);
      v8 = qword_1C7F2C0;
      v10 = v37 < 0;
    }
    else
    {
      v10 = v63 < (int)v44;
    }
  }
  else
  {
    v9 = sub_1848D40(qword_1C7F2C0, &v63, &v44);
    v8 = qword_1C7F2C0;
    v10 = v9;
  }
  v38 = (__int64)v8;
  sub_182CBA0(v8, &v44);
  sub_182CBA0(v8, v46);
  v13 = a1[2];
  if ( v10 )
    v10 = *(_BYTE *)(v13 + 366);
  v14 = v61;
  if ( v61 )
  {
    v14 = 0;
  }
  else if ( !v62 )
  {
    v14 = *(unsigned __int8 *)(v13 + 367);
  }
  v15 = (const char *)a1[3];
  v16 = *(unsigned int *)(v13 + 252);
  if ( !v15 )
    goto LABEL_20;
  HIDWORD(v40) = *(_DWORD *)(v13 + 252);
  LOBYTE(v38) = v14;
  if ( (a1[3] & 7) == 1 )
  {
    sub_180CE20(
      (int)&v44,
      (_DWORD)a1 + 24,
      v16,
      v14,
      v11,
      v12,
      v38,
      v40,
      v42[0],
      v43,
      (int)v44,
      v45[0],
      v46[0],
      v47[0],
      v48[0],
      v48[2],
      v48[4],
      v48[6],
      v48[8],
      v48[10],
      v48[12],
      v48[14],
      v48[16],
      v48[18],
      v48[20],
      v48[22],
      v48[24],
      v49,
      v50,
      v51);
    LOBYTE(v14) = v38;
    v16 = v41;
    if ( *(_QWORD *)v45 != 6 || *(_DWORD *)v44 != 1281312337 || *((_WORD *)v44 + 2) != 16713 )
    {
      if ( v44 != v46 )
      {
        operator delete(v44, *(_QWORD *)v46 + 1LL);
        LOBYTE(v14) = v38;
        v16 = v41;
      }
      goto LABEL_20;
    }
    if ( v44 != v46 )
      operator delete(v44, *(_QWORD *)v46 + 1LL);
    LODWORD(v16) = *(_DWORD *)(a1[2] + 252);
  }
  else
  {
    v17 = strcmp(v15, "QF_LIA");
    LOBYTE(v14) = v38;
    v16 = HIDWORD(v40);
    if ( v17 )
    {
LABEL_20:
      v18 = *a1;
      switch ( v16 )
      {
        case 0LL:
          v19 = (unsigned int *)sub_186B270(0x40u);
          *(_QWORD *)v39 = a1[1];
          sub_180C5A0(&v43, "arith");
          v28 = sub_15DA4C0(*(_QWORD *)v39 + 560LL, &v43);
          sub_ADA4E0(v19, *a1, v28, "no arithmetic");
          break;
        case 1LL:
          *(_BYTE *)(a1[2] + 248) = 1;
          if ( v10 )
          {
            if ( (_BYTE)v14 )
            {
              v19 = (unsigned int *)sub_186B270(0x9A8u);
              sub_8C9200((__int64)v19, *a1);
            }
            else
            {
              v19 = (unsigned int *)sub_186B270(0x9C8u);
              sub_8C8730((__int64)v19, *a1);
            }
          }
          else if ( (_BYTE)v14 )
          {
            v19 = (unsigned int *)sub_186B270(0x9C0u);
            sub_8C71A0((__int64)v19, *a1);
          }
          else
          {
            v19 = (unsigned int *)sub_186B270(0x9C8u);
            sub_8C7C60((__int64)v19, *a1);
          }
          break;
        case 2LL:
          if ( !*(_BYTE *)(a1[2] + 367) || !(_BYTE)v14 )
            goto LABEL_80;
          v19 = (unsigned int *)sub_186B270(0x608u);
          sub_A51C30((__int64)v19, *a1);
          break;
        case 3LL:
          *(_BYTE *)(a1[2] + 248) = 1;
          if ( v10 )
          {
            if ( (_BYTE)v14 )
            {
              v19 = (unsigned int *)sub_186B270(0x170u);
              sub_942AD0((unsigned __int64)v19, *a1);
            }
            else
            {
              v19 = (unsigned int *)sub_186B270(0x178u);
              sub_941EE0((unsigned __int64)v19, *a1);
            }
          }
          else if ( (_BYTE)v14 )
          {
            v19 = (unsigned int *)sub_186B270(0x1A8u);
            sub_941030((unsigned __int64)v19, *a1);
          }
          else
          {
            v19 = (unsigned int *)sub_186B270(0x1E8u);
            sub_93EF40((unsigned __int64)v19, *a1);
          }
          break;
        case 4LL:
          *(_BYTE *)(a1[2] + 248) = 1;
          if ( (_BYTE)v14 )
          {
            v19 = (unsigned int *)sub_186B270(0x678u);
            sub_B889A0((_DWORD)v19, *a1, v29, v30, v31, v32, v38);
          }
          else
          {
            v19 = (unsigned int *)sub_186B270(0x680u);
            sub_B8A9A0((_DWORD)v19, *a1, v33, v34, v35, v36, v38);
          }
          break;
        case 5LL:
          v19 = (unsigned int *)sub_186B270(0x6C8u);
          sub_A5E520((__int64)v19, *a1);
          break;
        case 6LL:
          LODWORD(v16) = *(_DWORD *)(a1[2] + 252);
          goto LABEL_28;
        default:
          goto LABEL_80;
      }
      goto LABEL_30;
    }
  }
  v18 = *a1;
LABEL_28:
  if ( (_DWORD)v16 == 2 )
  {
LABEL_80:
    v19 = (unsigned int *)sub_186B270(0x668u);
    sub_A44350((__int64)v19, *a1);
  }
  else
  {
    v19 = (unsigned int *)sub_186B270(0x48u);
    sub_A75F00(v19, *a1);
  }
LABEL_30:
  sub_8F1E10(v18, v19);
  if ( *(_QWORD *)v42 )
    sub_186B220((void *)(*(_QWORD *)v42 - 8LL));
  if ( v78 )
    sub_186B220((void *)(v78 - 8));
  if ( v77 )
    sub_186B220((void *)(v77 - 8));
  if ( ptr )
    sub_186B220(ptr);
  if ( v75 )
    sub_186B220(v75);
  if ( v74 )
    sub_186B220(v74);
  if ( v73 )
    sub_186B220((void *)(v73 - 8));
  if ( v72 )
    sub_186B220((void *)(v72 - 8));
  if ( v71 )
    sub_186B220((void *)(v71 - 8));
  if ( v70 )
    sub_186B220((void *)(v70 - 8));
  if ( v69 )
    sub_186B220((void *)(v69 - 8));
  if ( v68 )
    sub_186B220((void *)(v68 - 8));
  if ( v67 )
    sub_186B220((void *)(v67 - 8));
  v20 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v63);
  sub_182CBA0(v20, &v65);
  v58 = &off_1C62200;
  if ( v60 )
    sub_186B220(v60);
  if ( v59 )
    sub_186B220(v59);
  result = (__int64)&off_1C62200;
  v55 = &off_1C62200;
  if ( v57 )
    result = sub_186B220(v57);
  if ( v56 )
    result = sub_186B220(v56);
  v22 = v54;
  if ( v54 )
  {
    result = *((unsigned int *)v54 - 1);
    v23 = (unsigned __int64)&v54[result];
    if ( (unsigned __int64)v54 >= v23 )
      goto LABEL_72;
    do
    {
      while ( 1 )
      {
        v24 = *v22;
        if ( *v22 )
        {
          v25 = v53;
          if ( (*(_DWORD *)(v24 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v22 >= v23 )
          goto LABEL_71;
      }
      result = sub_15D7BC0(v25, v24);
      ++v22;
    }
    while ( (unsigned __int64)v22 < v23 );
LABEL_71:
    v22 = v54;
    if ( v54 )
LABEL_72:
      result = sub_186B220(v22 - 1);
  }
  if ( v52 )
    return sub_186B220((void *)(v52 - 8));
  return result;
}

