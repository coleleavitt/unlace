__int64 *__fastcall sub_15B9C20(__int64 *a1, _QWORD *a2, __int64 a3, _DWORD *a4)
{
  __int64 *v4; // rbx
  __int64 v5; // rdx
  _QWORD *v6; // r12
  unsigned int v7; // ebx
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  const void *v11; // r13
  size_t v12; // rbp
  __int64 v13; // r14
  unsigned int v14; // eax
  __int64 v15; // r8
  unsigned int v16; // r15d
  __int64 *v17; // r9
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r15
  _QWORD *v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  _QWORD *v24; // rcx
  char *v25; // rdx
  _QWORD *v26; // r11
  unsigned int v27; // eax
  __int64 v28; // rdi
  __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  _QWORD *v31; // rax
  _BYTE *v32; // rdi
  __int64 v34; // rax
  _QWORD *v35; // [rsp+8h] [rbp-D0h]
  unsigned __int64 v36; // [rsp+8h] [rbp-D0h]
  _QWORD *v37; // [rsp+10h] [rbp-C8h]
  __int64 *v38; // [rsp+20h] [rbp-B8h]
  __int64 *v39; // [rsp+20h] [rbp-B8h]
  _QWORD *v40; // [rsp+28h] [rbp-B0h]
  __int64 *v42; // [rsp+48h] [rbp-90h] BYREF
  __int64 *v43; // [rsp+50h] [rbp-88h] BYREF
  void *ptr; // [rsp+58h] [rbp-80h] BYREF
  __int64 v45; // [rsp+60h] [rbp-78h]
  _BYTE v46[112]; // [rsp+68h] [rbp-70h] BYREF

  v4 = a1;
  if ( (*(_BYTE *)(a1[1] + 74) & 1) != 0 )
    return v4;
  v5 = 2 * a3;
  v43 = a1;
  ptr = v46;
  v45 = 0x600000000LL;
  v37 = &a2[v5];
  if ( a2 == &a2[v5] )
    return v4;
  v6 = a2;
  v7 = 0;
  while ( 1 )
  {
    v11 = (const void *)*v6;
    v12 = v6[1];
    v13 = *(_QWORD *)(*(_QWORD *)(*a1 + 248) + 17504LL);
    v35 = *(_QWORD **)(*a1 + 248);
    v14 = sub_2244B30(*v6, v12);
    v16 = sub_2244CB0(v13, v11, v12, v14);
    v17 = (__int64 *)(*(_QWORD *)v13 + 8LL * v16);
    if ( *v17 )
    {
      if ( *v17 != -8 )
      {
        sub_989490(&v42, v17, 0);
        v20 = *v42;
        v21 = *(_QWORD **)(*v42 + 8);
        if ( v21 )
          goto LABEL_12;
LABEL_21:
        v28 = *(_QWORD *)(v13 + 120);
        if ( !v28
          || (v21 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, const void *, size_t))(*(_QWORD *)v28 + 16LL))(
                                v28,
                                v11,
                                v12),
              (*(_QWORD *)(v20 + 8) = v21) == 0) )
        {
          v29 = *(_QWORD *)(v13 + 24);
          *(_QWORD *)(v13 + 104) += 24LL;
          v21 = (_QWORD *)((v29 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( *(_QWORD *)(v13 + 32) >= (unsigned __int64)(v21 + 3) && v29 )
            *(_QWORD *)(v13 + 24) = v21 + 3;
          else
            v21 = (_QWORD *)sub_986170(v13 + 24, 24, 24, 3, v18, v19);
          v30 = *v21 & 0xFFFFF80000000000LL;
          v21[1] = 0;
          *v21 = v30 | 0x1FFFC05;
          *(_QWORD *)(v20 + 8) = v21;
          v21[2] = v20;
        }
        goto LABEL_12;
      }
      --*(_DWORD *)(v13 + 16);
    }
    v23 = *(_QWORD *)(v13 + 24);
    *(_QWORD *)(v13 + 104) += v12 + 17;
    v24 = (_QWORD *)((v23 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    v25 = (char *)v24 + v12 + 17;
    if ( *(_QWORD *)(v13 + 32) >= (unsigned __int64)v25 && v23 )
    {
      *(_QWORD *)(v13 + 24) = v25;
    }
    else
    {
      v39 = v17;
      v34 = sub_986170(v13 + 24, v12 + 17, v12 + 17, 3, v15, (__int64)v17);
      v17 = v39;
      v24 = (_QWORD *)v34;
    }
    v26 = v24 + 2;
    if ( v12 )
    {
      v40 = v24;
      v38 = v17;
      v31 = memcpy(v24 + 2, v11, v12);
      v24 = v40;
      v17 = v38;
      v26 = v31;
    }
    *((_BYTE *)v26 + v12) = 0;
    *v24 = v12;
    v24[1] = 0;
    *v17 = (__int64)v24;
    ++*(_DWORD *)(v13 + 12);
    v27 = sub_22450D0(v13, v16);
    sub_989490(&v42, (__int64 *)(*(_QWORD *)v13 + 8LL * v27), 0);
    v20 = *v42;
    v21 = *(_QWORD **)(*v42 + 8);
    if ( !v21 )
      goto LABEL_21;
LABEL_12:
    *(_WORD *)v21 = *(_WORD *)v21 & 0xFE00 | 5;
    v22 = *(_QWORD *)(v43[1] + 16);
    v8 = (v22 & 4) != 0 ? *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF8LL) : v22 & 0xFFFFFFFFFFFFFFF8LL;
    v9 = sub_BBE1D0(v35, v8, 0, 0, 0, v7, (__int64)v21, 1, 0, 0, 0);
    v10 = (unsigned int)v45;
    if ( (unsigned int)v45 >= (unsigned __int64)HIDWORD(v45) )
    {
      if ( HIDWORD(v45) < (unsigned __int64)(unsigned int)v45 + 1 )
      {
        v36 = v9;
        sub_2237220(&ptr, v46, (unsigned int)v45 + 1LL, 8);
        v10 = (unsigned int)v45;
        v9 = v36;
      }
      *((_QWORD *)ptr + v10) = v9;
      v7 = v45 + 1;
      LODWORD(v45) = v45 + 1;
    }
    else
    {
      v7 = v45 + 1;
      *((_QWORD *)ptr + (unsigned int)v45) = v9;
      LODWORD(v45) = v7;
    }
    v6 += 2;
    if ( v37 == v6 )
      break;
    a1 = v43;
  }
  if ( v7 )
  {
    v4 = sub_15B9AE0(&v43, a4);
    if ( (_DWORD)v45 )
      sub_15B9AE0(&v43, nullptr);
    v32 = ptr;
  }
  else
  {
    v4 = v43;
    v32 = ptr;
  }
  if ( v32 != v46 )
    free(v32);
  return v4;
}
