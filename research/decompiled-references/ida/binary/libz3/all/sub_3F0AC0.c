__int64 __fastcall sub_3F0AC0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, double a7)
{
  int v7; // r11d
  _QWORD *v8; // rax
  __int64 v12; // r13
  __int64 v13; // r15
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rax
  unsigned int v18; // r15d
  void *v19; // rbx
  _DWORD *v21; // rax
  int v22; // edx
  __int64 v23; // r13
  int v24; // r9d
  unsigned int v25; // eax
  __int64 v26; // rdi
  __int64 v27; // rax
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rax
  __int64 v32; // rbx
  char v33; // al
  int v34; // r9d
  char v35; // al
  unsigned int v36; // r13d
  char v37; // al
  __int64 v38; // r13
  int v39; // r9d
  __int64 v40; // rbx
  void *v41; // [rsp+0h] [rbp-C8h]
  void *v42; // [rsp+0h] [rbp-C8h]
  int v44; // [rsp+8h] [rbp-C0h]
  int v45; // [rsp+8h] [rbp-C0h]
  int v46; // [rsp+8h] [rbp-C0h]
  int v47[2]; // [rsp+10h] [rbp-B8h]
  int v48; // [rsp+10h] [rbp-B8h]
  void *v49; // [rsp+10h] [rbp-B8h]
  int v50; // [rsp+18h] [rbp-B0h]
  int v51; // [rsp+18h] [rbp-B0h]
  int v52; // [rsp+20h] [rbp-A8h]
  int v53; // [rsp+20h] [rbp-A8h]
  int v54; // [rsp+28h] [rbp-A0h]
  int v55; // [rsp+28h] [rbp-A0h]
  char v56; // [rsp+2Dh] [rbp-9Bh] BYREF
  char v57; // [rsp+2Eh] [rbp-9Ah] BYREF
  char v58; // [rsp+2Fh] [rbp-99h] BYREF
  __int64 v59; // [rsp+30h] [rbp-98h] BYREF
  __int64 v60; // [rsp+38h] [rbp-90h] BYREF
  int v61[2]; // [rsp+40h] [rbp-88h] BYREF
  int v62[2]; // [rsp+48h] [rbp-80h]
  int v63[2]; // [rsp+50h] [rbp-78h] BYREF
  int v64[2]; // [rsp+58h] [rbp-70h]
  int v65[2]; // [rsp+60h] [rbp-68h] BYREF
  char v66; // [rsp+68h] [rbp-60h]
  _BYTE v67[88]; // [rsp+70h] [rbp-58h] BYREF

  v7 = a4;
  v8 = (_QWORD *)a1[13];
  *(_QWORD *)v61 = 0;
  *(_QWORD *)v62 = 0;
  *(_QWORD *)v63 = 1;
  *(_QWORD *)v64 = 0;
  if ( a3 == *v8 )
  {
    if ( *(_DWORD *)a2 )
    {
      if ( *(_DWORD *)a4 )
      {
        if ( (*(_BYTE *)(a4 + 20) & 1) != 0
          || *(_DWORD *)(a4 + 16) != 1
          || (*(_BYTE *)(a2 + 20) & 1) != 0
          || *(_DWORD *)(a2 + 16) != 1 )
        {
          sub_1851D20(qword_1C7F2C0, a4, a2, a4);
        }
        else
        {
          v49 = qword_1C7F2C0;
          sub_1831A80(qword_1C7F2C0, a4, a2, a4);
          sub_182CBA0(v49, a4 + 16);
          *(_BYTE *)(a4 + 20) &= ~1u;
          *(_DWORD *)(a4 + 16) = 1;
        }
      }
      else
      {
        sub_27B950((__int64)qword_1C7F2C0, a4, (int *)a2);
      }
    }
    else
    {
      sub_27B950((__int64)qword_1C7F2C0, a4, (int *)a4);
    }
LABEL_8:
    v18 = 1;
    goto LABEL_9;
  }
  if ( *(_WORD *)(a3 + 4) )
  {
    v12 = (__int64)(a1 + 1);
    goto LABEL_4;
  }
  v12 = (__int64)(a1 + 1);
  v21 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
  if ( v21 && *v21 == 5 )
  {
    if ( v21[1] == 9 && *(_DWORD *)(a3 + 24) == 2 )
    {
      v44 = a4;
      *(_QWORD *)v47 = *(_QWORD *)(a3 + 40);
      v33 = sub_1666AE0(a1 + 1, *(_QWORD *)(a3 + 32), v61, &v56);
      v7 = v44;
      if ( v33 )
        goto LABEL_47;
      if ( *(_WORD *)(a3 + 4) )
        goto LABEL_4;
      v21 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
      if ( !v21 || *v21 != 5 )
        goto LABEL_4;
    }
    if ( v21[1] != 9 || *(_DWORD *)(a3 + 24) != 2 )
    {
LABEL_14:
      v22 = v21[1];
      if ( v22 == 6 )
      {
        v36 = 0;
        while ( v36 < *(_DWORD *)(a3 + 24) )
        {
          v37 = sub_3F0AC0(
                  (int)a1,
                  a2,
                  *(_QWORD *)(a3 + 8LL * v36++ + 32),
                  v7,
                  a5,
                  a6,
                  v41,
                  v7,
                  v47[0],
                  v50,
                  v52,
                  v54,
                  v59,
                  v60,
                  v61[0],
                  v62[0],
                  v63[0],
                  v64[0],
                  v65[0],
                  v66);
          v7 = v45;
          if ( !v37 )
            goto LABEL_27;
        }
        goto LABEL_8;
      }
      if ( v22 == 7 && *(_DWORD *)(a3 + 24) == 2 )
      {
        v38 = *(_QWORD *)(a3 + 40);
        v18 = sub_3F0AC0(
                (int)a1,
                a2,
                *(_QWORD *)(a3 + 32),
                v7,
                a5,
                a6,
                v41,
                v7,
                v47[0],
                v50,
                v52,
                v54,
                v59,
                v60,
                v61[0],
                v62[0],
                v63[0],
                v64[0],
                v65[0],
                v66);
        if ( !(_BYTE)v18 )
          goto LABEL_9;
        sub_3EBD70((__int64)v65, a2);
        v25 = sub_3F0AC0(
                (int)a1,
                (int)v65,
                v38,
                v46,
                a5,
                v39,
                v42,
                (int)v65,
                v46,
                v51,
                v53,
                v55,
                v59,
                v60,
                v61[0],
                v62[0],
                v63[0],
                v64[0],
                v65[0],
                v66);
      }
      else
      {
        v12 = (__int64)(a1 + 1);
        if ( v21[1] != 8 || *(_DWORD *)(a3 + 24) != 1 )
          goto LABEL_4;
        v23 = *(_QWORD *)(a3 + 32);
        v48 = v7;
        sub_3EBD70((__int64)v65, a2);
        v25 = sub_3F0AC0(
                (int)a1,
                (int)v65,
                v23,
                v48,
                a5,
                v24,
                v41,
                (int)v65,
                v48,
                v50,
                v52,
                v54,
                v59,
                v60,
                v61[0],
                v62[0],
                v63[0],
                v64[0],
                v65[0],
                v66);
      }
LABEL_19:
      v18 = v25;
      sub_25A130((char *)v65);
      goto LABEL_9;
    }
    v12 = (__int64)(a1 + 1);
    v44 = v7;
    *(_QWORD *)v47 = *(_QWORD *)(a3 + 32);
    v35 = sub_1666AE0(a1 + 1, *(_QWORD *)(a3 + 40), v61, &v57);
    v7 = v44;
    if ( !v35 )
    {
      if ( *(_WORD *)(a3 + 4) )
        goto LABEL_4;
      v21 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
      if ( !v21 || *v21 != 5 )
        goto LABEL_4;
      goto LABEL_14;
    }
LABEL_47:
    sub_3EBE30((__int64)v65, a2, (__int64)v61);
    v25 = sub_3F0AC0(
            (int)a1,
            (int)v65,
            v47[0],
            v44,
            a5,
            v34,
            v41,
            (int)v65,
            v47[0],
            v44,
            v52,
            v54,
            v59,
            v60,
            v61[0],
            v62[0],
            v63[0],
            v64[0],
            v65[0],
            v66);
    goto LABEL_19;
  }
LABEL_4:
  if ( (unsigned __int8)sub_1666AE0(v12, a3, v61, &v58) )
  {
    v13 = sub_15D1F10(a3);
    sub_3EBE30((__int64)v65, a2, (__int64)v61);
    v17 = sub_3EC140(v12, (int)v65, v13, v14, v15, v16);
    v59 = v17;
    if ( v17 )
      ++*(_DWORD *)(v17 + 8);
    sub_3E6950((unsigned int **)(a5 + 8), &v59);
    sub_25A130((char *)v65);
    goto LABEL_8;
  }
  v26 = a1[13] + 32LL;
  if ( !(unsigned __int8)sub_168D740(v26, a3) )
  {
    if ( (*(_BYTE *)(a2 + 4) & 1) != 0
      || *(_DWORD *)a2 != 1
      || (*(_BYTE *)(a2 + 20) & 1) != 0
      || *(_DWORD *)(a2 + 16) != 1 )
    {
      v27 = sub_15D1F10(a3);
      sub_3EC140(v12, a2, v27, v28, v29, v30);
      v31 = sub_15E1B70(a1[1]);
      *(_QWORD *)v65 = v31;
      if ( v31 )
        ++*(_DWORD *)(v31 + 8);
      sub_3E6950((unsigned int **)(a5 + 8), v65);
    }
    else
    {
      ++*(_DWORD *)(a3 + 8);
      v60 = a3;
      sub_3E6950((unsigned int **)(a5 + 8), &v60);
    }
    goto LABEL_8;
  }
  if ( (unsigned int)sub_180B130(v26) > 1 )
  {
    if ( (unsigned __int8)sub_186A530(a7) )
    {
      sub_186A4C0(a7);
      v32 = sub_180B150(v26, a3);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v65, a3, *a1, 0, 0, 0);
      sub_160E8B0(v32, v65);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_18572D0(v67);
      sub_186A500(v67, "\n");
    }
    else
    {
      v40 = sub_180B150(v26, a3);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v65, a3, *a1, 0, 0, 0);
      sub_160E8B0(v40, v65);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_18572D0(v67);
    }
  }
LABEL_27:
  v18 = 0;
LABEL_9:
  v19 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v61);
  sub_182CBA0(v19, v63);
  return v18;
}

