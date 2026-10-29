__int64 __fastcall sub_1AC36C0(__int64 a1, char *a2, char a3, double a4)
{
  char *v4; // r13
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // al
  unsigned __int64 v9; // rdi
  __int64 v10; // rdi
  unsigned __int64 v11; // rdx
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rax
  _WORD **v15; // rbp
  __int64 v16; // rdx
  _WORD **v17; // r14
  _WORD *v18; // rbx
  __int16 v19; // ax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdi
  unsigned __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  void *v31; // r12
  signed __int64 v32; // rbx
  __int64 v33; // rbp
  __int32 v34; // edx
  char v35; // al
  unsigned int v37; // eax
  unsigned int v38; // ecx
  __int64 v39; // r12
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdi
  unsigned __int64 v46; // rdi
  __int64 v47; // rdi
  __int64 v48; // rdi
  __int64 v49; // rcx
  __int64 v50; // rax
  unsigned int v51; // edi
  __int64 v52; // r8
  unsigned __int64 v53; // r12
  unsigned int v54; // eax
  _BYTE *v55; // rdi
  int v56; // r10d
  char *v57; // r12
  int v58; // edi
  bool v59; // zf
  int v60; // eax
  int v61; // esi
  __int64 v63; // [rsp+10h] [rbp-158h]
  __int64 *v65; // [rsp+30h] [rbp-138h]
  bool v66; // [rsp+4Bh] [rbp-11Dh]
  char v67; // [rsp+57h] [rbp-111h] BYREF
  __int64 v68; // [rsp+58h] [rbp-110h] BYREF
  void *src; // [rsp+60h] [rbp-108h] BYREF
  __int64 v70; // [rsp+68h] [rbp-100h]
  _BYTE v71[48]; // [rsp+70h] [rbp-F8h] BYREF
  __m128 ptr; // [rsp+A0h] [rbp-C8h] BYREF
  _BYTE v73[48]; // [rsp+B0h] [rbp-B8h] BYREF
  char v74; // [rsp+E0h] [rbp-88h]

  v4 = a2;
  v5 = sub_168B6F0(a1);
  v8 = *(_BYTE *)(v5 + 8) & 0x7F;
  if ( v8 == 4 )
  {
    v9 = v5;
    do
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(sub_B8C1B0(v9) + 16);
        if ( (v10 & 4) != 0 )
          break;
        v9 = v10 & 0xFFFFFFFFFFFFFFF8LL;
        v8 = *(_BYTE *)(v9 + 8) & 0x7F;
        if ( v8 != 4 )
          goto LABEL_5;
      }
      v9 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
      v8 = *(_BYTE *)(v9 + 8) & 0x7F;
    }
    while ( v8 == 4 );
LABEL_5:
    v5 = v9;
  }
  v11 = (unsigned __int8)a2[1];
  if ( (_BYTE)v11 == 14 || (unsigned __int8)v11 <= 0x22u && (v13 = 0x401800100LL, _bittest64(&v13, v11)) )
  {
    v66 = 1;
    src = v71;
    v68 = 0;
    v70 = 0x600000000LL;
    v14 = (unsigned __int8)a2[144];
  }
  else
  {
    v66 = v8 == 0 || v8 == 24;
    if ( v66 )
    {
      sub_168B9F0((__int64)&ptr, (__int64 *)a1, *((_DWORD *)a2 + 1), 0xB48u, 0);
      LOBYTE(src) = a2[1];
      v12 = *(unsigned __int8 *)(sub_1AA5620((__int64)&ptr, (char *)&src) + 120);
      sub_15F7200(&ptr);
      return v12;
    }
    v68 = 0;
    src = v71;
    v70 = 0x600000000LL;
    v14 = (unsigned __int8)a2[144];
    if ( (_BYTE)v11 == 41 )
    {
      if ( (_BYTE)v14 == 7 )
      {
        v15 = *((_WORD ***)a2 + 3);
        v16 = *((unsigned int *)a2 + 8);
        goto LABEL_16;
      }
LABEL_96:
      abort();
    }
  }
  if ( (_BYTE)v14 != 4 )
    goto LABEL_96;
  v15 = *((_WORD ***)a2 + 2);
  v16 = *((unsigned int *)a2 + 6);
LABEL_16:
  v17 = &v15[v16];
  if ( v17 == v15 )
  {
    LODWORD(v33) = 0;
    LODWORD(v32) = 0;
    ptr.m128_i32[3] = 6;
    ptr.m128_u64[0] = (unsigned __int64)v73;
    goto LABEL_34;
  }
  v63 = v5;
  v65 = (__int64 *)(a1 + 168);
  do
  {
    v18 = *v15;
    v19 = **v15 & 0x1FF;
    if ( v19 != 109 && v19 != 69 )
    {
      if ( v19 == 46 )
      {
        v20 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v18 + 3) + 32LL))(*((_QWORD *)v18 + 3));
        v25 = *(_QWORD *)(v20 + 16);
        v68 = v20;
        if ( (v25 & 4) != 0 )
          v26 = *(_QWORD *)((v25 & 0xFFFFFFFFFFFFFFF8LL) + 8);
        else
          v26 = v25 & 0xFFFFFFFFFFFFFFF8LL;
        v27 = sub_B91570(v26, (__int64)a2, v21, v22, v23, v24);
        if ( (*(_BYTE *)(v27 + 8) & 0x7F) == 4 )
        {
          do
          {
            while ( 1 )
            {
              v28 = *(_QWORD *)(sub_B8C1B0(v27) + 16);
              if ( (v28 & 4) != 0 )
                break;
              v27 = v28 & 0xFFFFFFFFFFFFFFF8LL;
              if ( (*(_BYTE *)(v27 + 8) & 0x7F) != 4 )
                goto LABEL_26;
            }
            v27 = *(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF8LL);
          }
          while ( (*(_BYTE *)(v27 + 8) & 0x7F) == 4 );
          if ( v63 != v27 )
          {
LABEL_47:
            v37 = sub_BFE3C0((__int64)v18);
            goto LABEL_48;
          }
        }
        else
        {
LABEL_26:
          if ( v63 != v27 )
            goto LABEL_47;
        }
        goto LABEL_27;
      }
      v39 = *((_QWORD *)v18 + 2);
      if ( (*(_BYTE *)(v39 + 28) & 0x7Fu) - 40 <= 6 )
      {
        v40 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v39 + 32LL))(*((_QWORD *)v18 + 2));
        v45 = *(_QWORD *)(v39 + 16);
        v68 = v40;
        if ( (v45 & 4) != 0 )
          v46 = *(_QWORD *)((v45 & 0xFFFFFFFFFFFFFFF8LL) + 8);
        else
          v46 = v45 & 0xFFFFFFFFFFFFFFF8LL;
        v47 = sub_B91570(v46, (__int64)a2, v41, v42, v43, v44);
        if ( (*(_BYTE *)(v47 + 8) & 0x7F) == 4 )
        {
          do
          {
            while ( 1 )
            {
              v48 = *(_QWORD *)(sub_B8C1B0(v47) + 16);
              if ( (v48 & 4) != 0 )
                break;
              v47 = v48 & 0xFFFFFFFFFFFFFFF8LL;
              if ( (*(_BYTE *)(v47 + 8) & 0x7F) != 4 )
                goto LABEL_56;
            }
            v47 = *(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF8LL);
          }
          while ( (*(_BYTE *)(v47 + 8) & 0x7F) == 4 );
          if ( v47 != v63 )
          {
LABEL_70:
            v37 = sub_EEB7E0((unsigned __int64)v18, (__int64)a2, a4);
LABEL_48:
            v38 = 2891;
LABEL_49:
            sub_168B9F0((__int64)&ptr, (__int64 *)a1, v37, v38, 0);
            a2 = &v67;
            v67 = v4[1];
            sub_1AA5620((__int64)&ptr, &v67);
            sub_15F7200(&ptr);
            goto LABEL_30;
          }
        }
        else
        {
LABEL_56:
          if ( v47 != v63 )
            goto LABEL_70;
        }
        if ( !v66 && (*(_BYTE *)(v39 + 96) & 5) == 1 )
        {
          v37 = sub_EEB7E0((unsigned __int64)v18, (__int64)a2, a4);
          v38 = 2889;
          goto LABEL_49;
        }
      }
      v49 = v68;
      if ( !v68 )
        goto LABEL_27;
      v50 = *(unsigned int *)(a1 + 184);
      if ( (_DWORD)v50 )
      {
        v16 = *(_QWORD *)(a1 + 168);
        v51 = (v50 - 1) & (((unsigned int)v68 >> 9) ^ ((unsigned int)v68 >> 4));
        a2 = (char *)(v16 + 16LL * v51);
        v52 = *(_QWORD *)a2;
        if ( v68 == *(_QWORD *)a2 )
          goto LABEL_64;
        v56 = 1;
        v57 = nullptr;
        if ( v52 != -4096 )
        {
          while ( 1 )
          {
            if ( v52 == -8192 && !v57 )
              v57 = a2;
            v51 = (v50 - 1) & (v56 + v51);
            a2 = (char *)(v16 + 16LL * v51);
            v52 = *(_QWORD *)a2;
            if ( v68 == *(_QWORD *)a2 )
              break;
            if ( v52 == -4096 )
            {
              if ( v57 )
                a2 = v57;
              goto LABEL_78;
            }
            ++v56;
          }
LABEL_64:
          sub_1AC2F60(&ptr, a2, (_QWORD *)(16 * v50 + v16), (__int64)v65, 1);
          v53 = ptr.m128_u64[0];
          v54 = sub_EEB7E0((unsigned __int64)v18, (__int64)a2, a4);
          sub_168B9F0((__int64)&ptr, (__int64 *)a1, v54, 0xB66u, 0);
          v67 = v4[1];
          sub_1AA5620((__int64)&ptr, &v67);
          sub_15F7200(&ptr);
          a2 = (char *)a1;
          sub_168B9F0((__int64)&ptr, (__int64 *)a1, *(_DWORD *)(v53 + 8), 0x1677u, 0);
          sub_15F7200(&ptr);
          goto LABEL_30;
        }
LABEL_78:
        v6 = (unsigned int)(3 * v50);
        ptr.m128_u64[0] = (unsigned __int64)a2;
        v58 = *(_DWORD *)(a1 + 176) + 1;
        v7 = (unsigned int)(4 * v58);
        if ( (unsigned int)v7 < (unsigned int)v6 )
        {
          v7 = (unsigned int)v50 >> 3;
          v6 = (unsigned int)(v50 - *(_DWORD *)(a1 + 180) - v58);
          if ( (unsigned int)v6 > (unsigned int)v7 )
          {
LABEL_80:
            v59 = *(_QWORD *)a2 == -4096;
            *(_DWORD *)(a1 + 176) = v58;
            if ( !v59 )
              --*(_DWORD *)(a1 + 180);
            *((_DWORD *)a2 + 2) = 0;
            *(_QWORD *)a2 = v49;
            sub_1AC2F60(&ptr, a2, (_QWORD *)(16LL * *(unsigned int *)(a1 + 184) + v16), (__int64)v65, 1);
            v60 = sub_EEB7E0((unsigned __int64)v18, (__int64)a2, a4);
            *(_DWORD *)(ptr.m128_u64[0] + 8) = v60;
            goto LABEL_27;
          }
          v61 = v50;
LABEL_85:
          sub_1AC3370(v65, v61, v16, v68, v6, v7);
          sub_1AC2D30(v65, &v68, &ptr);
          v49 = v68;
          a2 = (char *)ptr.m128_u64[0];
          v16 = *(_QWORD *)(a1 + 168);
          v58 = *(_DWORD *)(a1 + 176) + 1;
          goto LABEL_80;
        }
      }
      else
      {
        ptr.m128_u64[0] = 0;
      }
      v61 = 2 * v50;
      goto LABEL_85;
    }
LABEL_27:
    v29 = (unsigned int)v70;
    v30 = (unsigned int)v70 + 1LL;
    if ( v30 > HIDWORD(v70) )
    {
      a2 = v71;
      sub_2237220(&src, v71, v30, 8);
      v29 = (unsigned int)v70;
    }
    v16 = (__int64)src;
    *((_QWORD *)src + v29) = v18;
    LODWORD(v70) = v70 + 1;
LABEL_30:
    ++v15;
  }
  while ( v17 != v15 );
  v31 = src;
  ptr.m128_u64[0] = (unsigned __int64)v73;
  v32 = 8LL * (unsigned int)v70;
  ptr.m128_u64[1] = 0x600000000LL;
  v33 = v32 >> 3;
  if ( (unsigned __int64)v32 > 0x30 )
  {
    sub_2237220(&ptr, v73, (8LL * (unsigned int)v70) >> 3, 8);
    v55 = (_BYTE *)(ptr.m128_u64[0] + 8LL * ptr.m128_u32[2]);
  }
  else
  {
    if ( !v32 )
      goto LABEL_33;
    v55 = v73;
  }
  memcpy(v55, v31, v32);
  LODWORD(v32) = ptr.m128_i32[2];
LABEL_33:
  v14 = (unsigned __int8)v4[144];
LABEL_34:
  v34 = v33 + v32;
  ptr.m128_i32[2] = v33 + v32;
  v74 = a3;
  if ( (_BYTE)v14 == 0xFF )
  {
LABEL_37:
    *((_QWORD *)v4 + 2) = v4 + 32;
    *((_QWORD *)v4 + 3) = 0x600000000LL;
    if ( v34 )
      sub_1576230((char ***)v4 + 2, (char ***)&ptr);
    v35 = v74;
    v4[144] = 4;
    v4[80] = v35;
  }
  else
  {
    if ( (_BYTE)v14 != 4 )
    {
      funcs_1576A39[v14]();
      v34 = ptr.m128_i32[2];
      goto LABEL_37;
    }
    sub_1576230((char ***)v4 + 2, (char ***)&ptr);
    v4[80] = v74;
  }
  if ( (_BYTE *)ptr.m128_u64[0] != v73 )
    free((void *)ptr.m128_u64[0]);
  v12 = 0;
  if ( src != v71 )
    free(src);
  return v12;
}
