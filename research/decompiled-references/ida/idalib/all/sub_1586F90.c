void __fastcall sub_1586F90(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned __int8 a6,
        double a7,
        char a8)
{
  __int64 v12; // rsi
  __int64 v13; // r8
  unsigned __int8 *v14; // rbx
  unsigned __int8 *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r13
  unsigned int v22; // esi
  unsigned int v23; // eax
  unsigned __int8 *v24; // rbx
  __int64 v25; // rdx
  _BYTE *v26; // r12
  __int64 v27; // rax
  unsigned int v28; // edx
  __int64 v29; // rax
  int v30; // edx
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // r15
  __int64 v36; // rdx
  __int64 v37; // r15
  void *v38; // rdi
  __int64 v39; // rbp
  __int64 v40; // rdx
  unsigned int v41; // eax
  int v42; // eax
  unsigned __int8 *v43; // rdi
  int v44; // r12d
  int v45; // eax
  bool v46; // zf
  int v47; // eax
  int v48; // r10d
  __int64 v50; // [rsp+0h] [rbp-108h]
  __int64 v51; // [rsp+0h] [rbp-108h]
  __int64 v52; // [rsp+8h] [rbp-100h]
  __int64 v53; // [rsp+18h] [rbp-F0h] BYREF
  unsigned int v54; // [rsp+20h] [rbp-E8h]
  unsigned __int64 v55; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int64 v56; // [rsp+30h] [rbp-D8h]
  int v57; // [rsp+38h] [rbp-D0h]
  unsigned __int8 *v58; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v59; // [rsp+48h] [rbp-C0h]

  sub_168B9B0(&v58, *(_QWORD *)(a1 + 8) + 8LL, a8 == 0 ? 6649 : 6687);
  sub_157E260(&v58, a2);
  v12 = a6;
  sub_157E4A0(&v58, a6);
  v13 = a5;
  v14 = v58;
  if ( !v58 )
  {
    v32 = v59;
    v33 = *(_DWORD *)(v59 + 14976);
    if ( v33 )
    {
      v34 = (unsigned int)(v33 - 1);
      *(_DWORD *)(v59 + 14976) = v34;
      v14 = *(unsigned __int8 **)(v32 + 8 * v34 + 14848);
      v35 = *((unsigned int *)v14 + 134);
      *v14 = 0;
      v36 = *((_QWORD *)v14 + 66);
      *((_DWORD *)v14 + 106) = 0;
      v37 = v36 + (v35 << 6);
      while ( v36 != v37 )
      {
        while ( 1 )
        {
          v37 -= 64;
          v38 = *(void **)(v37 + 24);
          if ( v38 == (void *)(v37 + 40) )
            break;
          v52 = v36;
          v51 = v13;
          operator delete(v38);
          v36 = v52;
          v13 = v51;
          if ( v52 == v37 )
            goto LABEL_22;
        }
      }
LABEL_22:
      *((_DWORD *)v14 + 134) = 0;
    }
    else
    {
      v50 = v13;
      v14 = (unsigned __int8 *)operator new(0x3A0u);
      *v14 = 0;
      *((_QWORD *)v14 + 12) = v14 + 112;
      *((_QWORD *)v14 + 16) = v14 + 144;
      *((_QWORD *)v14 + 20) = v14 + 176;
      *((_QWORD *)v14 + 24) = v14 + 208;
      *((_QWORD *)v14 + 28) = v14 + 240;
      *((_QWORD *)v14 + 32) = v14 + 272;
      *((_QWORD *)v14 + 36) = v14 + 304;
      *((_QWORD *)v14 + 40) = v14 + 336;
      *((_QWORD *)v14 + 44) = v14 + 368;
      *((_QWORD *)v14 + 48) = v14 + 400;
      *((_QWORD *)v14 + 52) = v14 + 432;
      *((_QWORD *)v14 + 13) = 0;
      v14[112] = 0;
      *((_QWORD *)v14 + 17) = 0;
      v14[144] = 0;
      *((_QWORD *)v14 + 21) = 0;
      v14[176] = 0;
      *((_QWORD *)v14 + 25) = 0;
      v14[208] = 0;
      *((_QWORD *)v14 + 29) = 0;
      v14[240] = 0;
      *((_QWORD *)v14 + 33) = 0;
      v14[272] = 0;
      *((_QWORD *)v14 + 37) = 0;
      v14[304] = 0;
      *((_QWORD *)v14 + 41) = 0;
      v14[336] = 0;
      *((_QWORD *)v14 + 45) = 0;
      v14[368] = 0;
      *((_QWORD *)v14 + 49) = 0;
      v14[400] = 0;
      *((_QWORD *)v14 + 53) = 0x800000000LL;
      v13 = v50;
      *((_QWORD *)v14 + 66) = v14 + 544;
      *((_QWORD *)v14 + 67) = 0x600000000LL;
    }
    v58 = v14;
  }
  v14[*v14 + 1] = 3;
  v15 = v58;
  v16 = *v58;
  *v58 = v16 + 1;
  *(_QWORD *)&v15[8 * v16 + 16] = v13;
  v54 = sub_EEB7E0(a4, v12, a7);
  sub_1582CA0((__int64)&v55, &v58);
  if ( v58 && v59 )
    sub_1580C40(v59, (unsigned __int64)v58);
  if ( (*(_BYTE *)(a3 + 28) & 0x7F) != 8 )
  {
    sub_168CDE0(&v58, *(_QWORD *)(a1 + 8) + 8LL, v54, &v55, 0);
    sub_15F7200(&v58);
    v31 = v55;
    goto LABEL_12;
  }
  v21 = *(_QWORD *)(a1 + 16);
  v53 = a3;
  v22 = *(_DWORD *)(v21 + 16);
  if ( !v22 )
  {
    v58 = nullptr;
    goto LABEL_27;
  }
  v23 = (v22 - 1) & (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4));
  v24 = (unsigned __int8 *)(*(_QWORD *)v21 + 88LL * v23);
  v25 = *(_QWORD *)v24;
  if ( a3 != *(_QWORD *)v24 )
  {
    v19 = 1;
    v20 = 0;
    if ( v25 != -4096 )
    {
      while ( 1 )
      {
        if ( !v20 && v25 == -8192 )
          v20 = (__int64)v24;
        v48 = v19 + 1;
        v23 = (v22 - 1) & (v19 + v23);
        v19 = 5LL * v23;
        v24 = (unsigned __int8 *)(*(_QWORD *)v21 + 88LL * v23);
        v25 = *(_QWORD *)v24;
        if ( a3 == *(_QWORD *)v24 )
          goto LABEL_8;
        if ( v25 == -4096 )
        {
          if ( v20 )
            v24 = (unsigned __int8 *)v20;
          break;
        }
        LODWORD(v19) = v48;
      }
    }
    v47 = *(_DWORD *)(v21 + 8);
    v17 = 3 * v22;
    v58 = v24;
    v45 = v47 + 1;
    v18 = (unsigned int)(4 * v45);
    if ( (unsigned int)v18 < (unsigned int)v17 )
    {
      v17 = v22 - *(_DWORD *)(v21 + 12) - v45;
      v18 = v22 >> 3;
      if ( (unsigned int)v17 > (unsigned int)v18 )
        goto LABEL_29;
      goto LABEL_28;
    }
LABEL_27:
    v22 *= 2;
LABEL_28:
    sub_1586BB0((__int64 **)v21, v22, v17, v18, v19, v20);
    sub_1581940((__int64 *)v21, &v53, &v58);
    a3 = v53;
    v24 = v58;
    v45 = *(_DWORD *)(v21 + 8) + 1;
LABEL_29:
    v46 = *(_QWORD *)v24 == -4096;
    *(_DWORD *)(v21 + 8) = v45;
    if ( !v46 )
      --*(_DWORD *)(v21 + 12);
    *(_QWORD *)v24 = a3;
    v26 = v24 + 8;
    *((_QWORD *)v24 + 1) = v24 + 24;
    *((_QWORD *)v24 + 2) = 0x200000000LL;
    v27 = 0;
    goto LABEL_9;
  }
LABEL_8:
  v26 = v24 + 8;
  v27 = *((unsigned int *)v24 + 4);
  if ( *((_DWORD *)v24 + 5) > (unsigned int)v27 )
  {
LABEL_9:
    v28 = v54;
    v29 = *(_QWORD *)v26 + 32 * v27;
    *(_QWORD *)(v29 + 16) = 0;
    *(_DWORD *)v29 = v28;
    v30 = v57;
    *(_QWORD *)(v29 + 8) = 0;
    *(_DWORD *)(v29 + 24) = v30;
    *(_QWORD *)(v29 + 16) = v56;
    *(_QWORD *)(v29 + 8) = v55;
    ++*((_DWORD *)v26 + 2);
    return;
  }
  v39 = sub_2237400(v24 + 8, v24 + 24, 0, 32, &v58);
  v40 = v39 + 32LL * *((unsigned int *)v24 + 4);
  v41 = v54;
  *(_QWORD *)(v40 + 16) = 0;
  *(_DWORD *)v40 = v41;
  v42 = v57;
  *(_QWORD *)(v40 + 8) = 0;
  *(_DWORD *)(v40 + 24) = v42;
  *(_QWORD *)(v40 + 16) = v56;
  *(_QWORD *)(v40 + 8) = v55;
  v55 = 0;
  sub_15825A0((__int64)(v24 + 8), v39);
  v43 = *((unsigned __int8 **)v24 + 1);
  v44 = (int)v58;
  if ( v24 + 24 != v43 )
    free(v43);
  *((_QWORD *)v24 + 1) = v39;
  v31 = v55;
  *((_DWORD *)v24 + 5) = v44;
  ++*((_DWORD *)v24 + 4);
LABEL_12:
  if ( v31 )
  {
    if ( v56 )
      sub_1580C40(v56, v31);
  }
}
