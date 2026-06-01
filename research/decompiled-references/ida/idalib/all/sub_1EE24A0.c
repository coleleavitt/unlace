__int64 __fastcall sub_1EE24A0(__int64 a1, char *a2, __int64 a3)
{
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64); // rax
  int v8; // eax
  unsigned __int8 *v9; // r9
  unsigned __int8 *v10; // rax
  int v11; // edi
  int v12; // esi
  __int64 v13; // rax
  __int64 v14; // rax
  __m128 v15; // xmm0
  __int64 *v16; // r8
  __int64 *v17; // r14
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // rcx
  _BYTE *v21; // rax
  __int64 *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rcx
  int v26; // r12d
  __int64 v27; // rax
  __int64 v29; // rdi
  char v30; // al
  void **p_ptr; // rcx
  int v32; // ebp
  int *v33; // rax
  int v34; // r15d
  int v35; // r13d
  __int64 v36; // rax
  int v37; // r11d
  unsigned int v38; // ecx
  char *v39; // r13
  size_t v40; // r10
  int v41; // eax
  unsigned int v42; // r9d
  __int64 *v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rdi
  char **p_s1; // [rsp+0h] [rbp-118h] BYREF
  __int64 *v47; // [rsp+8h] [rbp-110h]
  __int64 v48; // [rsp+10h] [rbp-108h]
  __int64 v49; // [rsp+18h] [rbp-100h]
  void **v50; // [rsp+20h] [rbp-F8h]
  unsigned int v51; // [rsp+2Ch] [rbp-ECh]
  size_t v52; // [rsp+30h] [rbp-E8h]
  unsigned int v53; // [rsp+38h] [rbp-E0h]
  int v54; // [rsp+3Ch] [rbp-DCh]
  void *s1; // [rsp+48h] [rbp-D0h] BYREF
  _QWORD v56[3]; // [rsp+50h] [rbp-C8h] BYREF
  char v57; // [rsp+68h] [rbp-B0h]
  void *s2; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v59; // [rsp+78h] [rbp-A0h]
  int v60; // [rsp+80h] [rbp-98h]
  unsigned int v61; // [rsp+84h] [rbp-94h]
  __m128 v62; // [rsp+88h] [rbp-90h]
  _BYTE *v63; // [rsp+98h] [rbp-80h]
  void *ptr; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v65; // [rsp+A8h] [rbp-70h]
  char *v66; // [rsp+B0h] [rbp-68h]
  int v67; // [rsp+B8h] [rbp-60h] BYREF
  __int64 *v68; // [rsp+C0h] [rbp-58h]

  v5 = a1 + 24;
  v6 = a1;
  v7 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 24) + 184LL);
  if ( v7 == sub_1EA8950 )
  {
    v8 = *(_DWORD *)(a1 + 9408) + 1;
    *(_DWORD *)(a1 + 9408) = v8;
    if ( v8 == 1 )
    {
      v45 = *(_QWORD *)(a1 + 496);
      if ( v45 )
        sub_224E010(v45);
    }
  }
  else
  {
    v7(a1 + 24);
  }
  v9 = (unsigned __int8 *)&a2[a3];
  s2 = a2;
  p_s1 = (char **)(v6 + 9328);
  v59 = a3;
  if ( &a2[a3] == a2 )
  {
    v11 = 5381;
  }
  else
  {
    v10 = (unsigned __int8 *)a2;
    v11 = 5381;
    do
    {
      v12 = *v10++;
      v11 += v12 + 32 * v11;
    }
    while ( v9 != v10 );
  }
  p_s1 = (char **)(v6 + 9332);
  v13 = *(_QWORD *)(v6 + 136);
  v60 = v11;
  v61 = 0;
  v14 = *(_QWORD *)(v13 + 56);
  v15 = _mm_loadh_ps((const double *)&p_s1);
  v63 = nullptr;
  v62 = v15;
  if ( (*(_BYTE *)(v14 + 1) & 8) == 0 )
  {
    v29 = *(_QWORD *)(v6 + 520);
    v65 = 4;
    BYTE4(v66) = 1;
    ptr = &v67;
    LODWORD(v66) = 0;
    if ( !v29 )
    {
      if ( (unsigned __int8)sub_1EBF210(v6) )
        goto LABEL_23;
      v29 = *(_QWORD *)(v6 + 520);
    }
    v30 = sub_1FD1440(v29, a2, a3);
    p_ptr = &ptr;
    if ( v30 )
    {
LABEL_19:
      sub_1FDD8F0(v6 + 160, sub_1EE3570, &s2, p_ptr);
      if ( !BYTE4(v66) )
        free(ptr);
      v19 = (__int64)v63;
      goto LABEL_16;
    }
LABEL_23:
    p_ptr = nullptr;
    goto LABEL_19;
  }
  v16 = *(__int64 **)(v6 + 192);
  v17 = &v16[*(unsigned int *)(v6 + 200)];
  if ( v16 == v17 )
  {
    v19 = 0;
    goto LABEL_16;
  }
  v18 = *v16;
  v19 = 0;
  if ( *(_DWORD *)(*v16 + 412) )
  {
    v48 = v5;
    v20 = v18;
    p_s1 = (char **)&s1;
    v21 = nullptr;
    v47 = v56;
    v50 = &ptr;
    v49 = v6;
    v22 = v16 + 1;
LABEL_10:
    v23 = *(_QWORD *)(v20 + 1704);
    if ( !v23 )
      goto LABEL_13;
    v24 = *(_QWORD *)(v23 + 24);
    v56[2] = v21;
    v56[1] = v20;
    v56[0] = v24;
    v25 = *(_QWORD *)(v23 + 8);
    v57 = 0;
    ++*(_DWORD *)v62.m128_u64[0];
    v26 = v60;
    v27 = *(unsigned int *)(v25 + 4LL * (v60 & (unsigned int)(*(_DWORD *)v23 - 1)));
    if ( !(_DWORD)v27 )
      goto LABEL_12;
    s1 = (void *)(*(_QWORD *)(v23 + 16) + v27);
    v32 = *(unsigned __int16 *)s1;
    v33 = (int *)((char *)s1 + 2);
    s1 = (char *)s1 + 2;
    if ( !v32 )
      goto LABEL_12;
    v34 = 0;
    while ( 1 )
    {
      v35 = *v33;
      s1 = v33 + 1;
      v36 = sub_1EA91E0(p_s1);
      v37 = HIDWORD(v36);
      v38 = HIDWORD(v36) + v36;
      if ( v26 == v35 )
      {
        v51 = v36;
        v39 = (char *)s1;
        v40 = (unsigned int)(v36 - 1);
        if ( v40 == v59 )
        {
          v53 = HIDWORD(v36) + v36;
          if ( (_DWORD)v36 == 1 )
          {
            v42 = 1;
LABEL_33:
            v43 = v47;
            ptr = v39;
            v65 = v40;
            v66 = &v39[v42];
            v67 = v37;
            v68 = v47;
            if ( v66 )
            {
              v44 = (__int64)v50;
              ++*(_DWORD *)v62.m128_u64[1];
              v21 = sub_1EE2180(v43, v44, (__int64)&v39[v42], v67);
              v63 = v21;
              if ( v57 )
                goto LABEL_13;
LABEL_15:
              v5 = v48;
              v6 = v49;
              v19 = (__int64)v21;
              break;
            }
LABEL_12:
            v21 = v63;
LABEL_13:
            if ( v17 == v22 )
              goto LABEL_15;
            v20 = *v22++;
            if ( *(_DWORD *)(v20 + 412) <= v61 )
              goto LABEL_15;
            goto LABEL_10;
          }
          v54 = HIDWORD(v36);
          v52 = (unsigned int)(v36 - 1);
          v41 = memcmp(s1, s2, v52);
          v40 = v52;
          v37 = v54;
          v38 = v53;
          v42 = v51;
          if ( !v41 )
            goto LABEL_33;
        }
        s1 = &v39[v38];
      }
      else
      {
        s1 = (char *)s1 + v38;
      }
      if ( v32 == ++v34 )
        goto LABEL_12;
      v33 = (int *)s1;
    }
  }
LABEL_16:
  sub_1EDA230(v6, v19);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(v6 + 24) + 192LL))(v5);
  return v19;
}
