_QWORD *__fastcall sub_222E220(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char *a5, __int64 a6)
{
  unsigned int v8; // r14d
  int v9; // esi
  int v10; // eax
  _QWORD *v11; // rbx
  char *v12; // rdi
  size_t v13; // rdx
  bool v14; // al
  void *v15; // r12
  __int64 v16; // rax
  void **v17; // r12
  __m128i v18; // xmm0
  __int64 v19; // r15
  int v20; // eax
  unsigned int v21; // ecx
  char *v22; // r14
  size_t v23; // r10
  int v24; // eax
  bool v25; // al
  char v26; // r14
  void *v27; // r15
  void *v28; // r15
  int v30; // eax
  int v31; // eax
  bool v32; // al
  bool v33; // al
  int v34; // eax
  _QWORD *v35; // [rsp+10h] [rbp-A8h]
  int v36; // [rsp+1Ch] [rbp-9Ch]
  char *v37; // [rsp+20h] [rbp-98h]
  unsigned int v38; // [rsp+20h] [rbp-98h]
  unsigned int v39; // [rsp+20h] [rbp-98h]
  size_t v40; // [rsp+28h] [rbp-90h]
  int v41; // [rsp+28h] [rbp-90h]
  unsigned int v42; // [rsp+28h] [rbp-90h]
  unsigned int v43; // [rsp+30h] [rbp-88h]
  char *v44; // [rsp+30h] [rbp-88h]
  char *v45; // [rsp+30h] [rbp-88h]
  unsigned int v46; // [rsp+38h] [rbp-80h]
  size_t v47; // [rsp+38h] [rbp-80h]
  void *v48; // [rsp+40h] [rbp-78h] BYREF
  void *v49; // [rsp+48h] [rbp-70h]
  __int64 v50; // [rsp+50h] [rbp-68h]
  void *v51; // [rsp+60h] [rbp-58h] BYREF
  void *s2; // [rsp+68h] [rbp-50h]
  __int64 v53; // [rsp+70h] [rbp-48h]

  v8 = *(_DWORD *)(a1 + 16);
  if ( !v8 )
  {
    v48 = nullptr;
    goto LABEL_3;
  }
  v19 = *(_QWORD *)a1;
  sub_E59960((void ***)&v48, (void **)0xFFFFFFFFFFFFFFFFLL, nullptr);
  sub_E59960((void ***)&v51, (void **)0xFFFFFFFFFFFFFFFELL, nullptr);
  v20 = sub_2248890(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  v21 = v8 - 1;
  a5 = *(char **)(a2 + 8);
  v36 = 1;
  v35 = nullptr;
  a6 = (v8 - 1) & v20;
  while ( 1 )
  {
    v11 = (_QWORD *)(v19 + ((unsigned __int64)(unsigned int)a6 << 6));
    v22 = (char *)v11[1];
    v23 = v11[2];
    if ( v22 == (char *)-1LL )
    {
      v25 = a5 + 1 == nullptr;
    }
    else if ( v22 == (char *)-2LL )
    {
      v25 = a5 + 2 == nullptr;
    }
    else
    {
      if ( v23 != *(_QWORD *)(a2 + 16) )
        goto LABEL_46;
      if ( !v23 )
      {
        v26 = 1;
        goto LABEL_28;
      }
      v46 = a6;
      v43 = v21;
      v40 = v11[2];
      v37 = a5;
      v24 = memcmp(a5, (const void *)v11[1], v40);
      a6 = v46;
      v21 = v43;
      v23 = v40;
      a5 = v37;
      v25 = v24 == 0;
    }
    if ( v25 )
    {
      v26 = v25;
      goto LABEL_28;
    }
LABEL_46:
    if ( v49 == (void *)-1LL )
    {
      v33 = v22 + 1 == nullptr;
      goto LABEL_61;
    }
    if ( v49 != (void *)-2LL )
      break;
    v33 = v22 + 2 == nullptr;
LABEL_61:
    if ( v33 )
      goto LABEL_62;
LABEL_49:
    if ( s2 == (void *)-1LL )
    {
      v32 = v22 + 1 == nullptr;
      goto LABEL_54;
    }
    if ( s2 == (void *)-2LL )
    {
      v32 = v22 + 2 == nullptr;
LABEL_54:
      if ( !v32 )
        goto LABEL_58;
      goto LABEL_55;
    }
    if ( v23 != v53 )
      goto LABEL_58;
    if ( v23 )
    {
      v44 = a5;
      v41 = a6;
      v38 = v21;
      v31 = memcmp(v22, s2, v23);
      a5 = v44;
      LODWORD(a6) = v41;
      v21 = v38;
      v32 = v31 == 0;
      goto LABEL_54;
    }
LABEL_55:
    if ( v35 )
      v11 = v35;
    v35 = v11;
LABEL_58:
    a6 = v21 & (v36 + (_DWORD)a6);
    ++v36;
  }
  if ( v23 != v50 )
    goto LABEL_49;
  v45 = a5;
  v42 = a6;
  v39 = v21;
  if ( v23 )
  {
    v47 = v23;
    v34 = memcmp(v22, v49, v23);
    a5 = v45;
    a6 = v42;
    v21 = v39;
    v23 = v47;
    v33 = v34 == 0;
    goto LABEL_61;
  }
LABEL_62:
  v26 = 0;
  if ( v35 )
    v11 = v35;
LABEL_28:
  v27 = v51;
  if ( v51 )
  {
    if ( *(void **)v51 != (char *)v51 + 16 )
      operator delete(*(void **)v51);
    operator delete(v27, 0x20u);
  }
  v28 = v48;
  if ( v48 )
  {
    if ( *(void **)v48 != (char *)v48 + 16 )
      operator delete(*(void **)v48);
    operator delete(v28, 0x20u);
  }
  if ( !v26 )
  {
    v30 = *(_DWORD *)(a1 + 8);
    v8 = *(_DWORD *)(a1 + 16);
    v48 = v11;
    v10 = v30 + 1;
    a3 = 3 * v8;
    a4 = (unsigned int)(4 * v10);
    if ( (unsigned int)a4 < (unsigned int)a3 )
    {
      a4 = v8 - (v10 + *(_DWORD *)(a1 + 12));
      a3 = v8 >> 3;
      if ( (unsigned int)a4 > (unsigned int)a3 )
      {
LABEL_5:
        *(_DWORD *)(a1 + 8) = v10;
        sub_E59960((void ***)&v51, (void **)0xFFFFFFFFFFFFFFFFLL, nullptr);
        v11 = v48;
        v12 = *((char **)v48 + 1);
        if ( s2 == (void *)-1LL )
        {
          v14 = v12 + 1 == nullptr;
        }
        else if ( s2 == (void *)-2LL )
        {
          v14 = v12 + 2 == nullptr;
        }
        else
        {
          v13 = *((_QWORD *)v48 + 2);
          if ( v53 != v13 )
            goto LABEL_41;
          if ( !v13 )
          {
LABEL_11:
            v15 = v51;
            if ( v51 )
            {
              if ( *(void **)v51 != (char *)v51 + 16 )
                operator delete(*(void **)v51);
              operator delete(v15, 0x20u);
            }
            v16 = *(_QWORD *)a2;
            *(_QWORD *)a2 = 0;
            v17 = (void **)*v11;
            *v11 = v16;
            if ( v17 )
            {
              if ( *v17 != v17 + 2 )
                operator delete(*v17);
              operator delete(v17, 0x20u);
            }
            v18 = _mm_loadu_si128((const __m128i *)(a2 + 8));
            *((_WORD *)v11 + 12) = 0;
            *(__m128i *)(v11 + 1) = v18;
            return v11 + 3;
          }
          v14 = memcmp(v12, s2, v13) == 0;
        }
        if ( v14 )
          goto LABEL_11;
LABEL_41:
        --*(_DWORD *)(a1 + 12);
        goto LABEL_11;
      }
      v9 = v8;
LABEL_4:
      sub_E62B10(a1, v9, a3, a4, (__int64)a5, a6);
      sub_E5E370((__int64 *)a1, a2, &v48);
      v10 = *(_DWORD *)(a1 + 8) + 1;
      goto LABEL_5;
    }
LABEL_3:
    v9 = 2 * v8;
    goto LABEL_4;
  }
  return v11 + 3;
}
