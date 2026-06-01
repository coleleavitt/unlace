void __fastcall sub_B88110(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // r14
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 *v15; // rbp
  unsigned __int64 v16; // rax
  __int64 *v17; // r15
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbp
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  const void *v27; // r15
  __int64 v28; // rax
  size_t v29; // r8
  __int64 v30; // rbx
  unsigned __int64 v31; // rdx
  _BYTE *v32; // r14
  __int64 v33; // rbp
  unsigned int v34; // ebx
  unsigned __int64 v35; // rbp
  void *v36; // rax
  __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r13
  void *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 *v45; // [rsp+0h] [rbp-98h]
  void *src; // [rsp+10h] [rbp-88h] BYREF
  __int64 v47; // [rsp+18h] [rbp-80h]
  _BYTE v48[120]; // [rsp+20h] [rbp-78h] BYREF

  v6 = (__int64 *)a2;
  v9 = *(_QWORD *)(a1 + 120);
  v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_BYTE *)((v9 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) != 0 )
  {
    sub_B84BC0(a1);
    v9 = *(_QWORD *)(a1 + 120);
    v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
  }
  if ( !*(_DWORD *)(v10 + 48) )
  {
    a6 = *(unsigned int *)(v10 + 24);
    if ( !(_DWORD)a6 )
    {
      *(_QWORD *)(v10 + 40) = 0;
      if ( a3 )
      {
        v39 = a4[294];
        v40 = 8LL * a3;
        a4[304] += v40;
        v41 = (void *)((v39 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( a4[295] >= (unsigned __int64)v41 + v40 && v39 )
          a4[294] = (__int64)v41 + v40;
        else
          v41 = (void *)sub_962430((__int64)(a4 + 294), 8LL * a3, 8LL * a3, 3, a5, a6);
        *(_QWORD *)(v10 + 40) = v41;
        *(_DWORD *)(v10 + 48) = a3;
        memcpy(v41, (const void *)a2, 8LL * a3);
      }
      return;
    }
  }
  src = v48;
  v47 = 0x800000000LL;
  if ( !a3 )
    return;
  v11 = a3 - 1;
  v12 = *(_QWORD *)a2;
  v13 = a2 + 8 * v11 + 8;
  v45 = (__int64 *)v13;
  if ( !v9 )
    goto LABEL_22;
LABEL_7:
  v14 = v9 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v9 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
LABEL_23:
    while ( v9 )
    {
LABEL_24:
      v18 = (unsigned int)v47;
      v13 = HIDWORD(v47);
      v19 = (unsigned int)v47 + 1LL;
      if ( v19 > HIDWORD(v47) )
      {
        a2 = (__int64)v48;
        sub_22134E0(&src, v48, v19, 8);
        v18 = (unsigned int)v47;
      }
      v11 = (__int64)src;
      ++v6;
      *((_QWORD *)src + v18) = v12;
      LODWORD(v47) = v47 + 1;
      if ( v45 == v6 )
        goto LABEL_27;
LABEL_21:
      v9 = *(_QWORD *)(a1 + 120);
      v12 = *v6;
      if ( v9 )
        goto LABEL_7;
LABEL_22:
      a2 = *(_QWORD *)(a1 + 96);
      sub_A557A0((__int64 *)(a2 + 88), a2, v11, v13, a5, a6);
      v9 = *(_QWORD *)(a1 + 120);
      v14 = v9 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v9 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        goto LABEL_8;
    }
    v15 = nullptr;
    goto LABEL_44;
  }
LABEL_8:
  if ( (*(_BYTE *)(v14 + 72) & 1) != 0 )
  {
    sub_B84BC0(a1);
    v9 = *(_QWORD *)(a1 + 120);
    v14 = v9 & 0xFFFFFFFFFFFFFFF8LL;
    v13 = *(unsigned int *)((v9 & 0xFFFFFFFFFFFFFFF8LL) + 48);
    if ( (_DWORD)v13 )
      goto LABEL_10;
    if ( v9 )
    {
      if ( !v14 )
        goto LABEL_24;
    }
    else
    {
      a2 = *(_QWORD *)(a1 + 96);
      sub_A557A0((__int64 *)(a2 + 88), a2, v14, v13, a5, a6);
      v9 = *(_QWORD *)(a1 + 120);
      v14 = v9 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v9 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        goto LABEL_23;
    }
  }
  else
  {
    v13 = *(unsigned int *)(v14 + 48);
    if ( (_DWORD)v13 )
    {
LABEL_10:
      v14 = *(_QWORD *)(v14 + 40);
      v15 = (__int64 *)(v14 + 8 * v13);
      goto LABEL_11;
    }
  }
  v13 = v14;
  if ( (*(_BYTE *)(v14 + 72) & 1) != 0 )
  {
    sub_B84BC0(a1);
    v9 = *(_QWORD *)(a1 + 120);
    v13 = v9 & 0xFFFFFFFFFFFFFFF8LL;
  }
  a2 = *(unsigned int *)(v13 + 24);
  v14 = *(_QWORD *)(v13 + 16);
  v15 = (__int64 *)(v14 + 8 * a2);
LABEL_11:
  if ( v9 )
  {
    v16 = v9 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v16 )
      goto LABEL_13;
LABEL_45:
    v13 = 0;
    goto LABEL_16;
  }
LABEL_44:
  a2 = *(_QWORD *)(a1 + 96);
  sub_A557A0((__int64 *)(a2 + 88), a2, v14, v13, a5, a6);
  v16 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v16 )
    goto LABEL_45;
LABEL_13:
  if ( (*(_BYTE *)(v16 + 72) & 1) != 0 )
  {
    sub_B84BC0(a1);
    v16 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
    a5 = *(unsigned int *)(v16 + 48);
    if ( (_DWORD)a5 )
      goto LABEL_15;
    if ( !*(_QWORD *)(a1 + 120) )
    {
      a2 = *(_QWORD *)(a1 + 96);
      sub_A557A0((__int64 *)(a2 + 88), a2, 0, v37, a5, a6);
      v16 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
    }
    v13 = 0;
    if ( !v16 )
      goto LABEL_16;
LABEL_56:
    v38 = v16;
    if ( (*(_BYTE *)(v16 + 72) & 1) != 0 )
    {
      sub_B84BC0(a1);
      v38 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
    }
    v13 = *(_QWORD *)(v38 + 16);
    goto LABEL_16;
  }
  if ( !*(_DWORD *)(v16 + 48) )
    goto LABEL_56;
LABEL_15:
  v13 = *(_QWORD *)(v16 + 40);
LABEL_16:
  if ( (__int64 *)v13 == v15 )
    goto LABEL_24;
  v17 = (__int64 *)v13;
  while ( 1 )
  {
    a2 = v12;
    if ( (unsigned __int8)sub_A5B5E0((__int64)a4, v12, *v17, v13, a5, a6) )
      break;
    if ( v15 == ++v17 )
      goto LABEL_24;
  }
  if ( v45 != ++v6 )
    goto LABEL_21;
LABEL_27:
  if ( (_DWORD)v47 )
  {
    v22 = sub_B88040(a1, a2, v11, v13, a5, a6);
    v25 = *(_QWORD *)(a1 + 120);
    if ( !v25 )
    {
      sub_A557A0((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), v20, v21, v23, v24);
      v25 = *(_QWORD *)(a1 + 120);
    }
    v26 = v25 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v26 )
    {
      if ( (*(_BYTE *)(v26 + 72) & 1) == 0 )
      {
        if ( *(_DWORD *)(v26 + 48) )
        {
LABEL_33:
          v27 = *(const void **)(v26 + 40);
LABEL_34:
          v28 = (unsigned int)v47;
          v29 = v22 - (_QWORD)v27;
          v30 = (v22 - (__int64)v27) >> 3;
          v31 = v30 + (unsigned int)v47;
          if ( v31 > HIDWORD(v47) )
          {
            sub_22134E0(&src, v48, v31, 8);
            v28 = (unsigned int)v47;
            v29 = v22 - (_QWORD)v27;
          }
          v32 = src;
          if ( (const void *)v22 != v27 )
          {
            memcpy((char *)src + 8 * v28, v27, v29);
            v32 = src;
            LODWORD(v28) = v47;
          }
          v33 = *(_QWORD *)(a1 + 120);
          v34 = v28 + v30;
          LODWORD(v47) = v34;
          v35 = v33 & 0xFFFFFFFFFFFFFFF8LL;
          *(_QWORD *)(v35 + 40) = 0;
          if ( v34 )
          {
            v36 = (void *)sub_B85C20(a4 + 294, 8LL * v34, 3u);
            *(_DWORD *)(v35 + 48) = v34;
            *(_QWORD *)(v35 + 40) = v36;
            memcpy(v36, v32, 8LL * v34);
            v32 = src;
          }
          if ( v32 != v48 )
            free(v32);
          return;
        }
        goto LABEL_70;
      }
      sub_B84BC0(a1);
      v26 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_DWORD *)(v26 + 48) )
        goto LABEL_33;
      if ( !*(_QWORD *)(a1 + 120) )
      {
        sub_A557A0((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), 0, v42, v43, v44);
        v26 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
      }
      if ( v26 )
      {
LABEL_70:
        if ( (*(_BYTE *)(v26 + 72) & 1) != 0 )
        {
          sub_B84BC0(a1);
          v26 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
        }
        v27 = *(const void **)(v26 + 16);
        goto LABEL_34;
      }
    }
    v27 = nullptr;
    goto LABEL_34;
  }
  if ( src != v48 )
    free(src);
}

