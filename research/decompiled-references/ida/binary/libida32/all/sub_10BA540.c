void __fastcall sub_10BA540(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  _BYTE *v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 v9; // rax
  _BYTE *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r14
  size_t v13; // rdx
  unsigned __int8 (__fastcall *v14)(__int64, const char *, size_t); // rcx
  const char **v15; // rax
  const char *v16; // r15
  size_t v17; // rax
  _BYTE *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  _BYTE *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 i; // r14
  __m128i *v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rax
  _BYTE *v28; // rdx
  __m128i si128; // xmm0
  size_t v30; // rax
  __int64 v31; // rax
  __int64 v32; // r14
  void (__fastcall *v33)(void **, __int64); // rdx
  unsigned __int8 (__fastcall *v34)(__int64, const char *, size_t); // [rsp+8h] [rbp-60h]
  void *v35; // [rsp+10h] [rbp-58h] BYREF
  __int64 v36; // [rsp+18h] [rbp-50h]
  _BYTE v37[72]; // [rsp+20h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 16) == 4 )
  {
    v30 = j__strlen("flang");
    sub_10A91B0((__int64)&v35, "flang", v30);
    v5 = sub_22581D0(a3, v35, v36);
    v6 = *(_BYTE **)(v5 + 32);
    if ( *(_QWORD *)(v5 + 24) > (unsigned __int64)v6 )
      goto LABEL_3;
  }
  else
  {
    sub_10A93C0((__int64)&v35);
    v5 = sub_22581D0(a3, v35, v36);
    v6 = *(_BYTE **)(v5 + 32);
    if ( (unsigned __int64)v6 < *(_QWORD *)(v5 + 24) )
    {
LABEL_3:
      *(_QWORD *)(v5 + 32) = v6 + 1;
      *v6 = 10;
      goto LABEL_4;
    }
  }
  sub_2257CD0(v5, 10);
LABEL_4:
  if ( v35 != v37 )
    operator delete(v35);
  v7 = *(_QWORD *)(a2 + 8);
  v8 = sub_971800(a3, "Target: ");
  v35 = v37;
  sub_10B4F90(&v35, *(_BYTE **)(v7 + 16), *(_QWORD *)(v7 + 16) + *(_QWORD *)(v7 + 24));
  v9 = sub_22581D0(v8, v35, v36);
  v10 = *(_BYTE **)(v9 + 32);
  if ( (unsigned __int64)v10 >= *(_QWORD *)(v9 + 24) )
  {
    sub_2257CD0(v9, 10);
  }
  else
  {
    *(_QWORD *)(v9 + 32) = v10 + 1;
    *v10 = 10;
  }
  if ( v35 != v37 )
    operator delete(v35);
  v11 = sub_10B8FF0(*(_QWORD *)(a2 + 80), 0xB58u);
  v12 = v11;
  if ( v11 )
  {
    v13 = 0;
    v14 = *(unsigned __int8 (__fastcall **)(__int64, const char *, size_t))(*(_QWORD *)v7 + 496LL);
    v15 = *(const char ***)(v11 + 48);
    v16 = *v15;
    if ( *v15 )
    {
      v34 = *(unsigned __int8 (__fastcall **)(__int64, const char *, size_t))(*(_QWORD *)v7 + 496LL);
      v17 = j__strlen(*v15);
      v14 = v34;
      v13 = v17;
    }
    if ( v14(v7, v16, v13) )
    {
      v31 = sub_971800(a3, "Thread model: ");
      sub_971800(v31, **(const char ***)(v12 + 48));
    }
  }
  else
  {
    v32 = sub_971800(a3, "Thread model: ");
    v33 = *(void (__fastcall **)(void **, __int64))(*(_QWORD *)v7 + 488LL);
    if ( (char *)v33 == (char *)sub_10B5320 )
      sub_10B5340(&v35, "posix");
    else
      v33(&v35, v7);
    sub_22581D0(v32, v35, v36);
    if ( v35 != v37 )
      operator delete(v35);
  }
  v18 = *(_BYTE **)(a3 + 32);
  if ( (unsigned __int64)v18 >= *(_QWORD *)(a3 + 24) )
  {
    sub_2257CD0(a3, 10);
  }
  else
  {
    *(_QWORD *)(a3 + 32) = v18 + 1;
    *v18 = 10;
  }
  v19 = sub_971800(a3, "InstalledDir: ");
  v20 = sub_22581D0(v19, *(_QWORD *)(a1 + 104), *(_QWORD *)(a1 + 112));
  v21 = *(_BYTE **)(v20 + 32);
  if ( (unsigned __int64)v21 >= *(_QWORD *)(v20 + 24) )
  {
    sub_2257CD0(v20, 10);
  }
  else
  {
    *(_QWORD *)(v20 + 32) = v21 + 1;
    *v21 = 10;
  }
  sub_21ED350();
  if ( v22 )
    sub_21ED360(a3);
  v23 = *(_QWORD *)(a1 + 1008);
  for ( i = *(_QWORD *)(a1 + 1016); i != v23; v23 += 32 )
  {
    while ( 1 )
    {
      v35 = v37;
      sub_10B4F90(&v35, *(_BYTE **)v23, *(_QWORD *)v23 + *(_QWORD *)(v23 + 8));
      v25 = *(__m128i **)(a3 + 32);
      if ( *(_QWORD *)(a3 + 24) - (_QWORD)v25 > 0x13u )
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_23857B0);
        v25[1].m128i_i32[0] = 540697964;
        v26 = a3;
        *v25 = si128;
        *(_QWORD *)(a3 + 32) += 20LL;
      }
      else
      {
        v26 = sub_22581D0(a3, "Configuration file: ", 20);
      }
      v27 = sub_22581D0(v26, v35, v36);
      v28 = *(_BYTE **)(v27 + 32);
      if ( (unsigned __int64)v28 >= *(_QWORD *)(v27 + 24) )
      {
        sub_2257CD0(v27, 10);
      }
      else
      {
        *(_QWORD *)(v27 + 32) = v28 + 1;
        *v28 = 10;
      }
      if ( v35 == v37 )
        break;
      operator delete(v35);
      v23 += 32;
      if ( i == v23 )
        return;
    }
  }
}

