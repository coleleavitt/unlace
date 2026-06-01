__int64 __fastcall sub_1E0D0B0(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  _BYTE *v3; // r13
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // r14
  unsigned __int8 *v15; // rbp
  unsigned __int8 *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  void *v19; // rsi
  __int64 v20; // rax
  unsigned __int8 **v21; // r12
  unsigned __int8 *v22; // rdi
  __int64 v23; // rax
  unsigned __int8 *v24; // rbp
  __int64 v25; // rax
  size_t v26; // rdx
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // r15
  __int64 v32; // r14
  void *v33; // rdi
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // r15
  __int64 v38; // rdx
  __int64 v39; // r15
  void *v40; // rdi
  __int64 v41; // [rsp+8h] [rbp-100h]
  __int64 v42; // [rsp+18h] [rbp-F0h] BYREF
  void *src; // [rsp+20h] [rbp-E8h] BYREF
  size_t n; // [rsp+28h] [rbp-E0h]
  _QWORD v45[2]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v46[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v48; // [rsp+60h] [rbp-A8h]
  __int64 v49; // [rsp+68h] [rbp-A0h]
  char v50; // [rsp+B8h] [rbp-50h]
  unsigned int v51; // [rsp+C0h] [rbp-48h]
  char v52; // [rsp+C4h] [rbp-44h]

  v2 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 232LL) + 64LL);
  sub_168B9F0((__int64)v46, (__int64 *)(*(_QWORD *)a1 + 8LL), *(_DWORD *)(a2 + 12), 0x119Cu, 0);
  v3 = (_BYTE *)sub_20EAB70(*(unsigned int *)(a2 + 8), v2);
  v5 = v4;
  if ( v50 )
  {
    v24 = v48;
    if ( !v48 )
    {
      v27 = v49;
      v28 = *(_DWORD *)(v49 + 14976);
      if ( v28 )
      {
        v29 = (unsigned int)(v28 - 1);
        *(_DWORD *)(v49 + 14976) = v29;
        v24 = *(unsigned __int8 **)(v27 + 8 * v29 + 14848);
        v30 = *((unsigned int *)v24 + 134);
        *v24 = 0;
        v31 = *((_QWORD *)v24 + 66);
        *((_DWORD *)v24 + 106) = 0;
        v32 = v31 + (v30 << 6);
        while ( v31 != v32 )
        {
          while ( 1 )
          {
            v32 -= 64;
            v33 = *(void **)(v32 + 24);
            if ( v33 == (void *)(v32 + 40) )
              break;
            operator delete(v33);
            if ( v31 == v32 )
              goto LABEL_27;
          }
        }
LABEL_27:
        *((_DWORD *)v24 + 134) = 0;
      }
      else
      {
        v24 = (unsigned __int8 *)operator new(0x3A0u);
        *v24 = 0;
        *((_QWORD *)v24 + 12) = v24 + 112;
        *((_QWORD *)v24 + 16) = v24 + 144;
        *((_QWORD *)v24 + 20) = v24 + 176;
        *((_QWORD *)v24 + 24) = v24 + 208;
        *((_QWORD *)v24 + 28) = v24 + 240;
        *((_QWORD *)v24 + 32) = v24 + 272;
        *((_QWORD *)v24 + 36) = v24 + 304;
        *((_QWORD *)v24 + 40) = v24 + 336;
        *((_QWORD *)v24 + 44) = v24 + 368;
        *((_QWORD *)v24 + 48) = v24 + 400;
        *((_QWORD *)v24 + 52) = v24 + 432;
        *((_QWORD *)v24 + 13) = 0;
        v24[112] = 0;
        *((_QWORD *)v24 + 17) = 0;
        v24[144] = 0;
        *((_QWORD *)v24 + 21) = 0;
        v24[176] = 0;
        *((_QWORD *)v24 + 25) = 0;
        v24[208] = 0;
        *((_QWORD *)v24 + 29) = 0;
        v24[240] = 0;
        *((_QWORD *)v24 + 33) = 0;
        v24[272] = 0;
        *((_QWORD *)v24 + 37) = 0;
        v24[304] = 0;
        *((_QWORD *)v24 + 41) = 0;
        v24[336] = 0;
        *((_QWORD *)v24 + 45) = 0;
        v24[368] = 0;
        *((_QWORD *)v24 + 49) = 0;
        v24[400] = 0;
        *((_QWORD *)v24 + 53) = 0x800000000LL;
        *((_QWORD *)v24 + 66) = v24 + 544;
        *((_QWORD *)v24 + 67) = 0x600000000LL;
      }
      v48 = v24;
    }
    v24[*v24 + 1] = 0;
    src = v45;
    sub_1DFEDF0(&src, v3, (__int64)&v3[v5]);
    v16 = v48;
    v25 = *v48;
    *v48 = v25 + 1;
    v18 = (unsigned __int8)v25;
    v19 = src;
    v20 = 32 * (v25 + 3);
    v21 = (unsigned __int8 **)&v16[v20];
    v22 = *(unsigned __int8 **)&v16[v20];
    if ( src != v45 )
      goto LABEL_8;
LABEL_15:
    v26 = n;
    if ( n )
    {
      if ( n == 1 )
        *v22 = v45[0];
      else
        memcpy(v22, v19, n);
      v26 = n;
      v22 = *v21;
    }
    v21[1] = (unsigned __int8 *)v26;
    v22[v26] = 0;
    v22 = (unsigned __int8 *)src;
    goto LABEL_11;
  }
  if ( !v52 )
    goto LABEL_3;
  v9 = sub_168B9E0(v46);
  v12 = v47;
  if ( v47 )
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 32LL))(v47);
  v42 = v12;
  v13 = sub_1587BC0(v9, &v42, v7, v8, v10, v11);
  v14 = *v13 + 32LL * v51;
  v15 = *(unsigned __int8 **)(v14 + 8);
  if ( !v15 )
  {
    v34 = *(_QWORD *)(v14 + 16);
    v35 = *(_DWORD *)(v34 + 14976);
    if ( v35 )
    {
      v36 = (unsigned int)(v35 - 1);
      *(_DWORD *)(v34 + 14976) = v36;
      v15 = *(unsigned __int8 **)(v34 + 8 * v36 + 14848);
      v37 = *((unsigned int *)v15 + 134);
      *v15 = 0;
      v38 = *((_QWORD *)v15 + 66);
      *((_DWORD *)v15 + 106) = 0;
      v39 = v38 + (v37 << 6);
      while ( v38 != v39 )
      {
        while ( 1 )
        {
          v39 -= 64;
          v40 = *(void **)(v39 + 24);
          if ( v40 == (void *)(v39 + 40) )
            break;
          v41 = v38;
          operator delete(v40);
          v38 = v41;
          if ( v41 == v39 )
            goto LABEL_38;
        }
      }
LABEL_38:
      *((_DWORD *)v15 + 134) = 0;
    }
    else
    {
      v15 = (unsigned __int8 *)operator new(0x3A0u);
      *v15 = 0;
      *((_QWORD *)v15 + 12) = v15 + 112;
      *((_QWORD *)v15 + 16) = v15 + 144;
      *((_QWORD *)v15 + 20) = v15 + 176;
      *((_QWORD *)v15 + 24) = v15 + 208;
      *((_QWORD *)v15 + 28) = v15 + 240;
      *((_QWORD *)v15 + 32) = v15 + 272;
      *((_QWORD *)v15 + 36) = v15 + 304;
      *((_QWORD *)v15 + 40) = v15 + 336;
      *((_QWORD *)v15 + 44) = v15 + 368;
      *((_QWORD *)v15 + 48) = v15 + 400;
      *((_QWORD *)v15 + 52) = v15 + 432;
      *((_QWORD *)v15 + 13) = 0;
      v15[112] = 0;
      *((_QWORD *)v15 + 17) = 0;
      v15[144] = 0;
      *((_QWORD *)v15 + 21) = 0;
      v15[176] = 0;
      *((_QWORD *)v15 + 25) = 0;
      v15[208] = 0;
      *((_QWORD *)v15 + 29) = 0;
      v15[240] = 0;
      *((_QWORD *)v15 + 33) = 0;
      v15[272] = 0;
      *((_QWORD *)v15 + 37) = 0;
      v15[304] = 0;
      *((_QWORD *)v15 + 41) = 0;
      v15[336] = 0;
      *((_QWORD *)v15 + 45) = 0;
      v15[368] = 0;
      *((_QWORD *)v15 + 49) = 0;
      v15[400] = 0;
      *((_QWORD *)v15 + 53) = 0x800000000LL;
      *((_QWORD *)v15 + 66) = v15 + 544;
      *((_QWORD *)v15 + 67) = 0x600000000LL;
    }
    *(_QWORD *)(v14 + 8) = v15;
  }
  v15[*v15 + 1] = 0;
  src = v45;
  sub_1DFEDF0(&src, v3, (__int64)&v3[v5]);
  v16 = *(unsigned __int8 **)(v14 + 8);
  v17 = *v16;
  *v16 = v17 + 1;
  v18 = (unsigned __int8)v17;
  v19 = src;
  v20 = 32 * (v17 + 3);
  v21 = (unsigned __int8 **)&v16[v20];
  v22 = *(unsigned __int8 **)&v16[v20];
  if ( src == v45 )
    goto LABEL_15;
LABEL_8:
  if ( v22 == &v16[v20 + 16] )
  {
    *v21 = (unsigned __int8 *)v19;
    v21[1] = (unsigned __int8 *)n;
    v21[2] = (unsigned __int8 *)v45[0];
  }
  else
  {
    v23 = *(_QWORD *)&v16[32 * v18 + 112];
    *v21 = (unsigned __int8 *)v19;
    v21[1] = (unsigned __int8 *)n;
    v21[2] = (unsigned __int8 *)v45[0];
    if ( v22 )
    {
      src = v22;
      v45[0] = v23;
      goto LABEL_11;
    }
  }
  v22 = (unsigned __int8 *)v45;
  src = v45;
LABEL_11:
  n = 0;
  *v22 = 0;
  if ( src != v45 )
    operator delete(src);
LABEL_3:
  sub_15F7200(v46);
  return 1;
}
