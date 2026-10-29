void __fastcall sub_6F52D0(const __m128i *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 *v6; // rbx
  char v7; // al
  __int64 *v8; // rbp
  __int64 *v9; // r14
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // r14d
  __int64 v13; // r8
  int v14; // r9d
  _DWORD *v15; // rdx
  _DWORD *v16; // rax
  bool v17; // al
  int v18; // r14d
  int v19; // eax
  __int64 v20; // rax
  _QWORD *v21; // r14
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rsi
  unsigned __int64 v26; // r13
  __int32 v27; // eax
  __int64 v28; // rax
  __int64 v29; // rdx
  char *v30; // r8
  unsigned int *v31; // r15
  __int64 v32; // rax
  int v33; // edi
  __int64 v34; // r15
  __int32 v35; // eax
  __int32 v36; // eax
  __int64 v37; // rdi
  int v38; // r10d
  __int64 *v39; // r9
  __int64 v40; // rsi
  __int64 *v41; // rdx
  __int64 v42; // r8
  unsigned __int64 v43; // r8
  __int64 v44; // rax
  _DWORD *v45; // rax
  _DWORD *v46; // rdx
  char v47; // dl
  __int64 v48; // rax
  unsigned __int64 v49; // r10
  __int64 v50; // rax
  __int64 v51; // rax
  _DWORD *v52; // rax
  unsigned __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 *v56; // rax
  _DWORD *v57; // rax
  _DWORD *v58; // rdx
  _DWORD *v59; // rax
  _DWORD *v60; // rdx
  __int64 v61; // [rsp+0h] [rbp-98h]
  unsigned int *v62; // [rsp+0h] [rbp-98h]
  __int64 v63; // [rsp+0h] [rbp-98h]
  __int64 v64; // [rsp+0h] [rbp-98h]
  __int64 v65; // [rsp+0h] [rbp-98h]
  __int64 v66; // [rsp+0h] [rbp-98h]
  __int64 v67; // [rsp+0h] [rbp-98h]
  __int64 v68; // [rsp+0h] [rbp-98h]
  _QWORD *v70; // [rsp+10h] [rbp-88h]
  int v71; // [rsp+10h] [rbp-88h]
  char v72; // [rsp+10h] [rbp-88h]
  int v73; // [rsp+10h] [rbp-88h]
  int v74; // [rsp+18h] [rbp-80h]
  __int64 *v75; // [rsp+18h] [rbp-80h]
  char v76; // [rsp+18h] [rbp-80h]
  __int64 *v77; // [rsp+20h] [rbp-78h]
  int v78; // [rsp+2Ch] [rbp-6Ch]
  __int64 v79; // [rsp+38h] [rbp-60h] BYREF
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v81; // [rsp+48h] [rbp-50h]
  char v82; // [rsp+50h] [rbp-48h] BYREF

  v6 = a2;
  v7 = sub_AA5B80(&a1[1139]);
  if ( !a3 )
    return;
  if ( v7 )
    return;
  v8 = &a2[a3];
  if ( v8 == a2 )
    return;
  v9 = a2;
  while ( 1 )
  {
    if ( *(char *)(*v9 + 28) >= 0 )
    {
      v10 = *(_DWORD *)(sub_6A68B0(*v9) + 24);
      if ( v10 )
        break;
    }
    if ( v8 == ++v9 )
      return;
  }
  v11 = a1[134].m128i_i64[1];
  v12 = v10 & 0x7FFFFFFF;
  v13 = *(int *)(v11 + 408);
  v14 = v13 + 1;
  if ( (unsigned int)(v13 + 1) <= 1 )
  {
    v15 = *(_DWORD **)(v11 + 184);
    if ( v12 < (*v15 & 0x7FFFFFFFu) )
      goto LABEL_18;
    goto LABEL_12;
  }
  if ( (int)v13 >= 0 )
  {
    v15 = *(_DWORD **)(v11 + 184);
    if ( v12 < (v15[6 * v13] & 0x7FFFFFFFu) )
      goto LABEL_18;
LABEL_12:
    if ( *(_DWORD *)(v11 + 192) != v14 )
    {
      v16 = &v15[6 * v14];
LABEL_14:
      v17 = v12 < (*v16 & 0x7FFFFFFFu);
      goto LABEL_15;
    }
    goto LABEL_37;
  }
  v49 = (unsigned int)(-2 - v13);
  v50 = *(_QWORD *)(*(_QWORD *)(v11 + 256) + 8LL * ((unsigned int)(-2 - v13) >> 6));
  if ( _bittest64(&v50, v49) )
  {
    v51 = *(_QWORD *)(*(_QWORD *)(v11 + 208) + 8 * ((unsigned __int64)(int)v49 >> 5));
    if ( !v51 )
    {
      v78 = v13 + 1;
      v77 = (__int64 *)(*(_QWORD *)(v11 + 208) + 8 * ((unsigned __int64)(int)v49 >> 5));
      v76 = -2 - v13;
      v73 = *(_DWORD *)(v11 + 408);
      v68 = a1[134].m128i_i64[1];
      v59 = (_DWORD *)sub_6A7810(*(_QWORD *)(v11 + 224) & 0xFFFFFFFFFFFFFFF8LL, 768, 3);
      v14 = v78;
      LOBYTE(v49) = v76;
      LODWORD(v13) = v73;
      v60 = v59 + 192;
      *v77 = (__int64)v59;
      v11 = v68;
      do
      {
        *v59 = 0;
        v59 += 6;
        *((_OWORD *)v59 - 1) = 0;
      }
      while ( v59 != v60 );
      v51 = *v77;
    }
    v52 = (_DWORD *)(v51 + 24 * (v49 & 0x1F));
  }
  else
  {
    v74 = v13 + 1;
    v71 = *(_DWORD *)(v11 + 408);
    v64 = a1[134].m128i_i64[1];
    v52 = (_DWORD *)sub_CA9380(v64, (unsigned int)v49, 0);
    v11 = v64;
    LODWORD(v13) = v71;
    v14 = v74;
  }
  if ( v12 < (*v52 & 0x7FFFFFFFu) )
    goto LABEL_18;
  if ( (_DWORD)v13 == -2 )
    goto LABEL_16;
  if ( v14 != *(_DWORD *)(v11 + 192) )
  {
    v53 = (unsigned int)(-2 - v14);
    v54 = *(_QWORD *)(*(_QWORD *)(v11 + 256) + 8LL * ((unsigned int)(-2 - v14) >> 6));
    if ( _bittest64(&v54, v53) )
    {
      v55 = *(_QWORD *)(*(_QWORD *)(v11 + 208) + 8 * ((unsigned __int64)(int)v53 >> 5));
      if ( !v55 )
      {
        v75 = (__int64 *)(*(_QWORD *)(v11 + 208) + 8 * ((unsigned __int64)(int)v53 >> 5));
        v72 = -2 - v14;
        v67 = v11;
        v57 = (_DWORD *)sub_6A7810(*(_QWORD *)(v11 + 224) & 0xFFFFFFFFFFFFFFF8LL, 768, 3);
        LOBYTE(v53) = v72;
        v11 = v67;
        v58 = v57 + 192;
        *v75 = (__int64)v57;
        do
        {
          *v57 = 0;
          v57 += 6;
          *((_OWORD *)v57 - 1) = 0;
        }
        while ( v57 != v58 );
        v55 = *v75;
      }
      v16 = (_DWORD *)(v55 + 24 * (v53 & 0x1F));
    }
    else
    {
      v66 = v11;
      v16 = (_DWORD *)sub_CA9380(v11, (unsigned int)v53, 0);
      v11 = v66;
    }
    goto LABEL_14;
  }
LABEL_37:
  v17 = v12 < *(_DWORD *)(v11 + 248);
LABEL_15:
  if ( v17 )
  {
LABEL_16:
    v18 = *(_DWORD *)(v11 + 408);
    goto LABEL_19;
  }
LABEL_18:
  v61 = v11;
  v19 = sub_CA9700(v11, v12);
  v11 = v61;
  v18 = v19;
LABEL_19:
  LOBYTE(ptr) = 0;
  if ( (unsigned int)(v18 + 1) <= 1 )
    return;
  if ( v18 >= 0 )
    goto LABEL_21;
  v43 = (unsigned int)(-2 - v18);
  v44 = *(_QWORD *)(*(_QWORD *)(v11 + 256) + 8LL * ((unsigned int)(-2 - v18) >> 6));
  if ( !_bittest64(&v44, v43) )
  {
    v48 = sub_CA9380(v11, (unsigned int)v43, &ptr);
    v47 = (char)ptr;
    goto LABEL_50;
  }
  if ( !*(_QWORD *)(*(_QWORD *)(v11 + 208) + 8 * ((unsigned __int64)(int)v43 >> 5)) )
  {
    v70 = (_QWORD *)(*(_QWORD *)(v11 + 208) + 8 * ((unsigned __int64)(int)v43 >> 5));
    v45 = (_DWORD *)sub_6A7810(*(_QWORD *)(v11 + 224) & 0xFFFFFFFFFFFFFFF8LL, 768, 3);
    v46 = v45 + 192;
    *v70 = v45;
    do
    {
      *v45 = 0;
      v45 += 6;
      *((_OWORD *)v45 - 1) = 0;
    }
    while ( v45 != v46 );
    v47 = (char)ptr;
    v48 = *v70 + 24LL * ((-2 - (_BYTE)v18) & 0x1F);
LABEL_50:
    if ( v47 || !v48 )
      return;
  }
LABEL_21:
  v20 = sub_AA5AF0(&a1[1139], (unsigned int)v18);
  v21 = (_QWORD *)v20;
  if ( v20 && *(_QWORD *)(v20 + 40) && (*(_BYTE *)(*(_QWORD *)(std::_Rb_tree_decrement() + 40) + 32LL) & 0x20) == 0 )
  {
    while ( 1 )
    {
      if ( *(char *)(*v6 + 28) >= 0 )
      {
        v22 = sub_6A68B0(*v6);
        v25 = a1[1144].m128i_i64[1];
        v26 = v22;
        v27 = a1[1145].m128i_i32[2];
        if ( !v27 )
          goto LABEL_29;
        v23 = (unsigned int)(v27 - 1);
        LODWORD(v28) = v23 & (((unsigned int)v26 >> 9) ^ ((unsigned int)v26 >> 4));
        v29 = *(_QWORD *)(v25 + 16LL * (unsigned int)v28);
        if ( v26 != v29 )
          break;
      }
LABEL_27:
      if ( v8 == ++v6 )
        return;
    }
    v33 = 1;
    while ( v29 != -4096 )
    {
      v24 = (unsigned int)(v33 + 1);
      v28 = (unsigned int)v23 & ((_DWORD)v28 + v33);
      v29 = *(_QWORD *)(v25 + 16 * v28);
      if ( v26 == v29 )
        goto LABEL_27;
      ++v33;
    }
LABEL_29:
    sub_6A83C0(&ptr, v26, a1[134].m128i_i64[1], v23, v24);
    v30 = (char *)ptr;
    v62 = (unsigned int *)((char *)ptr + 4 * v81);
    if ( v62 == ptr )
    {
LABEL_35:
      if ( v30 != &v82 )
        free(v30);
      goto LABEL_27;
    }
    v31 = (unsigned int *)ptr;
    while ( 1 )
    {
      if ( (int)*v31 > 0 )
      {
        v32 = sub_6B3230((__int64)a1, v26, *v31, v21);
        if ( v32 )
          break;
      }
      if ( v62 == ++v31 )
      {
        v30 = (char *)ptr;
        goto LABEL_35;
      }
    }
    v63 = v32;
    sub_6B3CC0(a1, v26, v32);
    v34 = sub_AA5910(v63, a1, a4, v26);
    v79 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v26 + 32LL))(v26);
    v35 = a1[1150].m128i_i32[0];
    if ( v35 )
    {
      v36 = v35 - 1;
      v37 = a1[1149].m128i_i64[0];
      v38 = 1;
      v39 = nullptr;
      LODWORD(v40) = v36 & (((unsigned int)v79 >> 9) ^ ((unsigned int)v79 >> 4));
      v41 = (__int64 *)(v37 + 16LL * (unsigned int)v40);
      v42 = *v41;
      if ( v79 == *v41 )
      {
LABEL_44:
        v41[1] = v34;
        v30 = (char *)ptr;
        goto LABEL_35;
      }
      while ( v42 != -4096 )
      {
        if ( v42 == -8192 && !v39 )
          v39 = v41;
        v40 = v36 & (unsigned int)(v40 + v38);
        v41 = (__int64 *)(v37 + 16 * v40);
        v42 = *v41;
        if ( v79 == *v41 )
          goto LABEL_44;
        ++v38;
      }
      if ( v39 )
        v41 = v39;
    }
    else
    {
      v41 = nullptr;
    }
    v65 = v79;
    v56 = sub_6F4D20((__int64)a1[1149].m128i_i64, &v79, v41);
    v56[1] = 0;
    v41 = v56;
    *v56 = v65;
    goto LABEL_44;
  }
}

