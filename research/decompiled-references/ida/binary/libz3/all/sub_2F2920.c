__m128i *__fastcall sub_2F2920(__m128i *a1, _QWORD *a2, int *a3)
{
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // r12
  unsigned __int64 *v9; // r13
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r13
  int v16; // eax
  int v17; // r8d
  int v18; // r9d
  _DWORD *v19; // rax
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rdi
  __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // rax
  int v28; // eax
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rax
  int v32; // ecx
  int v33; // r8d
  int v34; // r9d
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rax
  int v39; // [rsp+0h] [rbp-118h]
  int *v40; // [rsp+8h] [rbp-110h]
  int *v41; // [rsp+10h] [rbp-108h]
  int *v42; // [rsp+18h] [rbp-100h]
  int v43; // [rsp+20h] [rbp-F8h]
  int v44; // [rsp+20h] [rbp-F8h]
  char v45; // [rsp+28h] [rbp-F0h]
  char v46[8]; // [rsp+28h] [rbp-F0h]
  __int64 v47; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v48; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v49; // [rsp+40h] [rbp-D8h] BYREF
  void *v50; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v51; // [rsp+50h] [rbp-C8h] BYREF
  unsigned __int64 *v52; // [rsp+58h] [rbp-C0h] BYREF
  int v53[2]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v54; // [rsp+68h] [rbp-B0h]
  __int64 v55; // [rsp+70h] [rbp-A8h]
  __int64 v56; // [rsp+78h] [rbp-A0h]
  int v57[2]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v58; // [rsp+88h] [rbp-90h]
  __int64 v59; // [rsp+90h] [rbp-88h]
  __int64 v60; // [rsp+98h] [rbp-80h]
  int v61[2]; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v62; // [rsp+A8h] [rbp-70h]
  __int64 v63; // [rsp+B0h] [rbp-68h]
  __int64 v64; // [rsp+B8h] [rbp-60h]
  _QWORD v65[2]; // [rsp+C0h] [rbp-58h] BYREF
  _QWORD v66[9]; // [rsp+D0h] [rbp-48h] BYREF

  *(_QWORD *)v53 = 0;
  v40 = v53;
  v54 = 0;
  v55 = 1;
  v56 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v53, a3);
  *(_QWORD *)v57 = 0;
  v58 = 0;
  v59 = 1;
  v60 = 0;
  v41 = v57;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v57, a3 + 8);
  *(_QWORD *)v61 = 0;
  v62 = 0;
  v63 = 1;
  v64 = 0;
  v42 = v61;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v61, a3 + 16);
  v8 = a2[1];
  v51 = v8;
  if ( !v61[0] )
  {
    if ( (v59 & 0x100000000LL) == 0 )
    {
      v5 = v59;
      v43 = v59;
      if ( (_DWORD)v59 == 1 )
      {
        if ( v53[0] )
        {
          v15 = sub_15D2CD0(a2[21], 5, 1, 0, 0);
LABEL_32:
          sub_180C5A0(v65, "oo");
          v28 = sub_15E3510(v8, v65, 0, 0, v15, 0);
          v31 = sub_15DC610(v8, v28, 0, 0, v29, v30, v39, (int)v53, (int)v57, (int)v61, v43, v45, v47, v48, v49, v50);
          if ( (v53[1] & 1) != 0 || v53[0] != 1 || (v55 & 0x100000000LL) != 0 || (_DWORD)v55 != 1 )
          {
            v35 = a2[22];
            if ( !v35 )
            {
              sub_16669E0(a2 + 21);
              v35 = a2[22];
            }
            sub_166A700(v35, (_DWORD)v40, v43, v32, v33, v34);
            v36 = sub_15E1B70(a2[21]);
            v48 = v36;
            if ( v36 )
              ++*(_DWORD *)(v36 + 8);
            v52 = nullptr;
            sub_2F13A0(&v52, &v48);
          }
          else
          {
            v47 = v31;
            if ( v31 )
              ++*(_DWORD *)(v31 + 8);
            v52 = nullptr;
            sub_2F13A0(&v52, &v47);
          }
          v5 = v57[0];
          v9 = v52;
          if ( !v57[0] )
          {
LABEL_40:
            v8 = a2[1];
            if ( !v61[0] )
              goto LABEL_23;
            goto LABEL_16;
          }
LABEL_43:
          v37 = a2[22];
          if ( !v37 )
          {
            sub_16669E0(a2 + 21);
            v37 = a2[22];
          }
          v38 = sub_166A700(v37, (_DWORD)v41, v43, v5, v6, v7);
          v49 = v38;
          if ( v38 )
            ++*(_DWORD *)(v38 + 8);
          v52 = v9;
          sub_2F13A0(&v52, &v49);
          v9 = v52;
          goto LABEL_40;
        }
        if ( v57[0] )
        {
          v9 = nullptr;
          goto LABEL_43;
        }
LABEL_5:
        v9 = nullptr;
LABEL_6:
        v65[0] = 0;
        v65[1] = 0;
        v66[0] = 1;
        v66[1] = 0;
        sub_182CBA0(qword_1C7F2C0, v66);
        v13 = a2[22];
        BYTE4(v66[0]) &= ~1u;
        LODWORD(v66[0]) = 1;
        if ( !v13 )
        {
          sub_16669E0(a2 + 21);
          v13 = a2[22];
        }
        v14 = sub_166A700(v13, (unsigned int)v65, 1, v10, v11, v12);
        a1->m128i_i64[0] = v14;
        a1->m128i_i64[1] = v8;
        if ( v14 )
          ++*(_DWORD *)(v14 + 8);
        sub_25A130((char *)v65);
        goto LABEL_28;
      }
    }
    if ( !v53[0] )
    {
      if ( !v57[0] )
        goto LABEL_5;
LABEL_42:
      v43 = 0;
      v9 = nullptr;
      goto LABEL_43;
    }
LABEL_31:
    v43 = 0;
    v15 = sub_15D2CD0(a2[21], 5, 0, 0, 0);
    goto LABEL_32;
  }
  if ( v53[0] )
    goto LABEL_31;
  v9 = nullptr;
  v43 = v57[0];
  if ( v57[0] )
    goto LABEL_42;
LABEL_16:
  *(_QWORD *)v46 = sub_15D2CD0(a2[21], 5, 0, 0, 0);
  sub_180C5A0(v65, "epsilon");
  v16 = sub_15E3510(v8, v65, 0, 0, *(_QWORD *)v46, 0);
  v19 = (_DWORD *)sub_15DC610(
                    v8,
                    v16,
                    0,
                    0,
                    v17,
                    v18,
                    v39,
                    (int)v40,
                    (int)v41,
                    (int)v42,
                    v43,
                    v46[0],
                    v47,
                    v48,
                    v49,
                    v50);
  if ( (v61[1] & 1) != 0 || v61[0] != 1 || (v63 & 0x100000000LL) != 0 || (_DWORD)v63 != 1 )
  {
    v23 = a2[22];
    if ( !v23 )
    {
      sub_16669E0(a2 + 21);
      v23 = a2[22];
    }
    sub_166A700(v23, (_DWORD)v42, v44, v20, v21, v22);
    v24 = sub_15E1B70(a2[21]);
    v65[0] = v24;
    if ( v24 )
      ++*(_DWORD *)(v24 + 8);
    v52 = v9;
    sub_2F13A0(&v52, v65);
  }
  else
  {
    v50 = v19;
    if ( v19 )
      ++v19[2];
    v52 = v9;
    sub_2F13A0(&v52, &v50);
  }
  v9 = v52;
  v8 = a2[1];
LABEL_23:
  if ( !v9 )
    goto LABEL_6;
  v25 = *((_DWORD *)v9 - 1);
  if ( !v25 )
    goto LABEL_6;
  if ( v25 == 1 )
  {
    v26 = *v9;
    *a1 = _mm_unpacklo_epi64((__m128i)*v9, (__m128i)(unsigned __int64)v8);
    if ( !v26 )
      goto LABEL_28;
    goto LABEL_27;
  }
  v26 = sub_15E1AF0(a2[21]);
  a1->m128i_i64[0] = v26;
  a1->m128i_i64[1] = v8;
  if ( v26 )
LABEL_27:
    ++*(_DWORD *)(v26 + 8);
LABEL_28:
  v52 = v9;
  sub_2334C0(&v51);
  sub_25A130((char *)v42);
  sub_25A130((char *)v41);
  sub_25A130((char *)v40);
  return a1;
}

