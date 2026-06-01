unsigned __int64 __fastcall sub_1B31270(
        __int64 *a1,
        __m128i *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        double a7)
{
  __m128i *v7; // r15
  __int64 *v8; // r13
  unsigned int **v9; // r14
  char v10; // r8
  unsigned int *v11; // rbp
  unsigned int v12; // eax
  bool v13; // r12
  unsigned int v14; // ebp
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // r11d
  __int64 v19; // rax
  const char *v20; // r12
  unsigned int *v21; // r13
  unsigned int v22; // r11d
  unsigned int v23; // eax
  unsigned __int64 v24; // rbx
  __int64 v25; // rax
  unsigned int v26; // edi
  unsigned __int64 v27; // r9
  unsigned int v28; // esi
  __int64 v29; // r13
  unsigned int *v30; // rax
  void *v31; // rdi
  bool v32; // bp
  __int64 v33; // rax
  unsigned __int64 v34; // r12
  unsigned int v35; // edx
  unsigned int v36; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned int v40; // edx
  _QWORD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // r13
  __int64 v47; // rax
  _QWORD *v48; // rax
  unsigned int v49; // ebp
  __int64 v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // r10
  unsigned int v54; // esi
  __int64 v55; // rax
  __int64 v56; // rax
  unsigned int *v57; // [rsp+0h] [rbp-198h]
  unsigned int *v58; // [rsp+8h] [rbp-190h]
  __int128 v59; // [rsp+20h] [rbp-178h]
  bool v60; // [rsp+37h] [rbp-161h]
  unsigned int *v61; // [rsp+38h] [rbp-160h]
  unsigned int v62; // [rsp+40h] [rbp-158h]
  __int64 v63; // [rsp+40h] [rbp-158h]
  unsigned int *v64; // [rsp+48h] [rbp-150h]
  unsigned int *v66; // [rsp+58h] [rbp-140h]
  __m128i *v68; // [rsp+70h] [rbp-128h]
  int v71; // [rsp+8Ch] [rbp-10Ch] BYREF
  __m128i v72; // [rsp+90h] [rbp-108h] BYREF
  __int64 v73; // [rsp+A0h] [rbp-F8h] BYREF
  __m128i v74; // [rsp+B0h] [rbp-E8h] BYREF
  _BYTE v75[16]; // [rsp+C0h] [rbp-D8h] BYREF
  _QWORD v76[2]; // [rsp+D0h] [rbp-C8h] BYREF
  __int64 v77; // [rsp+E0h] [rbp-B8h]
  unsigned __int8 *v78[11]; // [rsp+F0h] [rbp-A8h] BYREF
  char v79; // [rsp+148h] [rbp-50h]
  unsigned int v80; // [rsp+150h] [rbp-48h]
  char v81; // [rsp+154h] [rbp-44h]

  v7 = (__m128i *)((char *)a2 + 8 * a3);
  v8 = a1;
  v68 = a2;
  if ( a2 == v7 )
  {
    v61 = nullptr;
    v24 = a4;
    v11 = nullptr;
    v58 = nullptr;
LABEL_25:
    v25 = sub_1AE6050(v8[1]);
    if ( v25 )
      v26 = *(_DWORD *)(v25 + 976);
    else
      v26 = 103;
    v10 = sub_FFEBC0(v26, (__int64)a2);
    if ( !v10 )
    {
      v57 = nullptr;
      goto LABEL_29;
    }
    sub_168B9F0((__int64)v76, v8, a5, 0x11E9u, 0);
    v74.m128i_i32[0] = *(_DWORD *)(sub_168B6E0((__int64)v8) + 64) > 0x31u;
    sub_1587D10((__int64)v76, v74.m128i_i32);
    sub_15F7200(v76);
    return 1;
  }
  v9 = (unsigned int **)a2;
  v10 = 0;
  v11 = nullptr;
  v57 = nullptr;
  v61 = nullptr;
  v66 = nullptr;
  v59 = 0u;
  v58 = nullptr;
  v64 = nullptr;
  do
  {
    while ( 1 )
    {
      v21 = *v9;
      v22 = (*v9)[2];
      if ( v22 == 29 )
      {
        v12 = v21[5];
        v13 = v12 == 3 || v12 == 0;
        if ( !v13 )
        {
          if ( v12 - 1 > 1 )
          {
            v58 = *v9;
            v11 = nullptr;
          }
          else
          {
            v11 = (unsigned int *)(*((_QWORD *)&v59 + 1) | v59);
            if ( v59 == 0 )
            {
              v66 = *v9;
              v59 = 0u;
            }
            else
            {
              v11 = nullptr;
              sub_168B9F0((__int64)v76, a1, *v21, 0x120Bu, 0);
              v74.m128i_i64[0] = (__int64)"doacross";
              v55 = sub_15AFC70((__int64)v76, &v74);
              a2 = &v72;
              v72.m128i_i32[0] = 1;
              sub_1587D10(v55, v72.m128i_i32);
              sub_15F7200(v76);
              v66 = v21;
              v10 = 1;
            }
            v58 = v21;
          }
          goto LABEL_17;
        }
        if ( !(_QWORD)v59 )
        {
          v11 = nullptr;
          v58 = *v9;
          *(_QWORD *)&v59 = *v9;
LABEL_10:
          if ( v66 && v13 )
            goto LABEL_12;
          goto LABEL_17;
        }
        v62 = (*v9)[2];
        v14 = *(_DWORD *)(sub_168B6E0((__int64)a1) + 64);
        sub_168B9F0((__int64)v76, a1, *v21, 0x2Du, 0);
        v15 = v14;
        v11 = nullptr;
        v72.m128i_i64[0] = sub_20EAB70(47, v15);
        v72.m128i_i64[1] = v16;
        v17 = sub_166BAF0((__int64)v76, (__int64)&v72);
        v58 = v21;
        v18 = v62;
        v60 = 0;
LABEL_6:
        v63 = v17;
        sub_1AF81E0(&v74, v18);
        v19 = sub_1682AF0(v63, (__int64)&v74);
        a2 = (__m128i *)&v71;
        v71 = 2;
        sub_1587D10(v19, &v71);
        if ( (_BYTE *)v74.m128i_i64[0] != v75 )
          operator delete((void *)v74.m128i_i64[0]);
        sub_15F7200(v76);
        if ( v60 )
        {
LABEL_12:
          v20 = "depend";
          sub_168B9F0((__int64)v76, a1, *v21, 0x120Bu, 0);
          if ( !v11 )
            v20 = "doacross";
          goto LABEL_14;
        }
        v10 = 1;
        goto LABEL_10;
      }
      if ( v22 != 22 )
      {
        if ( v22 == 101 )
        {
          v61 = *v9;
        }
        else
        {
          if ( v22 != 95 )
            v21 = v57;
          v57 = v21;
        }
        goto LABEL_17;
      }
      v23 = v21[5];
      if ( v23 != 5 )
        break;
      v60 = v64 != nullptr;
      if ( *((_QWORD *)&v59 + 1) )
      {
        v49 = *(_DWORD *)(sub_168B6E0((__int64)a1) + 64);
        v13 = 0;
        sub_168B9F0((__int64)v76, a1, *v21, 0x2Du, 0);
        v50 = v49;
        v11 = v21;
        v72.m128i_i64[0] = sub_20EAB70(47, v50);
        v72.m128i_i64[1] = v51;
        v17 = sub_166BAF0((__int64)v76, (__int64)&v72);
        v18 = 22;
        v58 = nullptr;
        goto LABEL_6;
      }
      if ( v64 )
      {
        v11 = *v9;
        v20 = "depend";
        sub_168B9F0((__int64)v76, a1, *v21, 0x120Bu, 0);
        *((_QWORD *)&v59 + 1) = v21;
        v58 = nullptr;
LABEL_14:
        if ( v79 )
        {
          sub_AE9DF0(v78, (__int64)v20, 1u);
        }
        else if ( v81 )
        {
          v46 = sub_168B9E0(v76);
          v47 = v77;
          if ( v77 )
            v47 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v77 + 32LL))(v77);
          v74.m128i_i64[0] = v47;
          v48 = sub_1587BC0(v46, v74.m128i_i64, v42, v43, v44, v45);
          sub_AE9DF0((unsigned __int8 **)(*v48 + 32LL * v80 + 8), (__int64)v20, 1u);
        }
        a2 = &v74;
        v74.m128i_i32[0] = 0;
        sub_1587D10((__int64)v76, v74.m128i_i32);
        sub_15F7200(v76);
        v10 = 1;
        goto LABEL_17;
      }
      v58 = nullptr;
      v11 = *v9;
      *((_QWORD *)&v59 + 1) = *v9;
LABEL_17:
      if ( v7 == (__m128i *)++v9 )
        goto LABEL_23;
    }
    if ( v23 == 6 )
    {
      v58 = (unsigned int *)(*((_QWORD *)&v59 + 1) | v59);
      if ( v59 == 0 )
      {
        v59 = 0u;
        v11 = *v9;
        v64 = *v9;
      }
      else
      {
        v11 = *v9;
        sub_168B9F0((__int64)v76, a1, *v21, 0x120Bu, 0);
        v74.m128i_i64[0] = (__int64)"depend";
        v56 = sub_15AFC70((__int64)v76, &v74);
        a2 = &v72;
        v72.m128i_i32[0] = 1;
        sub_1587D10(v56, v72.m128i_i32);
        sub_15F7200(v76);
        v64 = v21;
        v10 = 1;
        v58 = nullptr;
      }
      goto LABEL_17;
    }
    v58 = nullptr;
    ++v9;
    v11 = v21;
  }
  while ( v7 != (__m128i *)v9 );
LABEL_23:
  v8 = a1;
  v24 = (unsigned __int64)v11 | a4;
  if ( v10 != 1 && !v57 )
    goto LABEL_25;
LABEL_29:
  v27 = (unsigned __int64)v11 | (unsigned __int64)v58;
  if ( !((unsigned __int64)v11 | (unsigned __int64)v58) )
  {
    v32 = v61 != nullptr;
    if ( a3 && !v61 || (v33 = sub_1AE6050(v8[1])) == 0 )
    {
      if ( !v24 )
        return 1;
      goto LABEL_64;
    }
    if ( *(_BYTE *)(v33 + 1072) )
      goto LABEL_56;
    goto LABEL_104;
  }
  if ( !((unsigned __int64)v61 | (unsigned __int64)v57) )
  {
    v52 = sub_1AE6050(v8[1]);
    if ( !v52 || !*(_BYTE *)(v52 + 1072) || !*(_QWORD *)(v52 + 1056) )
    {
      if ( v11 )
      {
        sub_168B9F0((__int64)v76, v8, *v11, 0x11D9u, 0);
        v54 = 22;
      }
      else
      {
        sub_168B9F0((__int64)v76, v8, *v58, 0x11D9u, 0);
        v54 = 29;
      }
      sub_1AF81E0(&v74, v54);
      sub_1682AF0((__int64)v76, (__int64)&v74);
      v31 = (void *)v74.m128i_i64[0];
      if ( (_BYTE *)v74.m128i_i64[0] != v75 )
        goto LABEL_38;
      goto LABEL_60;
    }
    if ( !a3 )
    {
      v32 = 0;
      v33 = sub_1AE6050(v53);
      if ( *(_BYTE *)(v33 + 1072) )
      {
LABEL_56:
        v34 = *(_QWORD *)(v33 + 1056);
        if ( v34 )
        {
          v35 = a5;
          if ( v32 )
            v35 = *v61;
          sub_168B9F0((__int64)v76, v8, v35, 0x11D8u, 0);
          v74.m128i_i8[0] = v32;
          sub_1588420((__int64)v76, (unsigned __int8 *)&v74);
          sub_15F7200(v76);
          v36 = sub_EEB7E0(v34, (__int64)&v74, a7);
          sub_168B9F0((__int64)v76, v8, v36, 0x1826u, 0);
          v74.m128i_i32[0] = 1;
          sub_1587D10((__int64)v76, v74.m128i_i32);
          goto LABEL_60;
        }
      }
    }
LABEL_104:
    if ( !v24 )
    {
      if ( !v58 || v10 )
        return 1;
      goto LABEL_79;
    }
LABEL_64:
    if ( v10 )
      return 1;
    if ( !v27 )
    {
      v38 = sub_1AE6050(v8[1]);
      if ( v38 )
      {
        if ( *(_DWORD *)(v38 + 1116) )
        {
          sub_168B9F0((__int64)v76, v8, a5, 0x1204u, 0);
          if ( v79 )
          {
            sub_AE9DF0(v78, (__int64)"ordered", 1u);
          }
          else if ( v81 )
          {
            sub_1B132F0((__int64)v76, (__int64)"ordered");
          }
          sub_15F7200(v76);
          v39 = sub_1AE6050(v8[1]);
          v40 = 0;
          if ( v39 )
            v40 = *(_DWORD *)(v39 + 1116);
          sub_168B9F0((__int64)v76, v8, v40, 0x182Cu, 0);
          if ( v79 )
          {
            sub_AE9DF0(v78, (__int64)"ordered", 1u);
          }
          else if ( v81 )
          {
            sub_1B132F0((__int64)v76, (__int64)"ordered");
          }
          goto LABEL_60;
        }
        *(_DWORD *)(v38 + 1116) = a5;
      }
    }
    if ( a4 )
      sub_15F2480(*v8);
LABEL_79:
    v41 = (_QWORD *)sub_168B6C0((__int64)v8);
    return sub_F01280(v41, a5, a6, v68, a3, a4);
  }
  if ( v11 )
  {
    sub_168B9F0((__int64)v76, v8, *v11, 0x1173u, 0);
    v28 = 22;
  }
  else
  {
    sub_168B9F0((__int64)v76, v8, *v58, 0x1173u, 0);
    v28 = 29;
  }
  sub_1AF81E0(&v72, v28);
  v29 = sub_1682AF0((__int64)v76, (__int64)&v72);
  v30 = v61;
  if ( !v61 )
    v30 = v57;
  sub_1AF81E0(&v74, v30[2]);
  sub_1682AF0(v29, (__int64)&v74);
  if ( (_BYTE *)v74.m128i_i64[0] != v75 )
    operator delete((void *)v74.m128i_i64[0]);
  v31 = (void *)v72.m128i_i64[0];
  if ( (__int64 *)v72.m128i_i64[0] != &v73 )
LABEL_38:
    operator delete(v31);
LABEL_60:
  sub_15F7200(v76);
  return 1;
}
