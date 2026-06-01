__int64 __fastcall sub_1253730(__int64 *a1)
{
  __int64 *v1; // r14
  char *v2; // r12
  char *v3; // rbp
  char *v4; // rsi
  char *v5; // rbx
  unsigned __int64 v6; // rax
  char *v7; // r13
  char v8; // r15
  char v9; // dl
  char *v10; // rax
  char v11; // cl
  char v12; // dl
  char *v13; // rax
  char *v14; // rax
  unsigned __int64 v15; // r12
  char *v16; // rcx
  unsigned __int8 v17; // bl
  __int64 v18; // rdx
  __int64 v19; // rsi
  char *v20; // rdi
  char v21; // bl
  __int64 *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 result; // rax
  __int64 v26; // rdi
  __int64 *v27; // rax
  __int64 v28; // r8
  __int64 v29; // r15
  void *v30; // r13
  __int64 *v31; // rbp
  unsigned __int64 v32; // rbx
  size_t v33; // rdx
  signed __int64 v34; // rax
  size_t v35; // rbx
  size_t v36; // rdx
  signed __int64 v37; // rax
  char v38; // r15
  char v39; // dl
  char *v40; // rax
  __int64 v41; // rbp
  _BYTE *v42; // r15
  __int64 v43; // rbp
  char *v44; // rax
  __int64 v45; // r15
  __int64 *v46; // r13
  unsigned __int16 v47; // r14
  char v48; // bp
  __int64 v49; // rax
  char v50; // dl
  __int64 (__fastcall *v51)(__int64, unsigned int); // r8
  __int64 v52; // [rsp+18h] [rbp-C0h]
  __int64 v53; // [rsp+18h] [rbp-C0h]
  __int64 v54; // [rsp+18h] [rbp-C0h]
  __int64 v55; // [rsp+30h] [rbp-A8h]
  __int64 v56; // [rsp+30h] [rbp-A8h]
  __int64 v57; // [rsp+30h] [rbp-A8h]
  void *s2[2]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v59; // [rsp+50h] [rbp-88h] BYREF
  void *v60[2]; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v61[16]; // [rsp+70h] [rbp-68h] BYREF
  void *v62; // [rsp+80h] [rbp-58h] BYREF
  __int64 v63; // [rsp+88h] [rbp-50h]
  char v64; // [rsp+90h] [rbp-48h] BYREF
  char v65[71]; // [rsp+91h] [rbp-47h] BYREF

  v1 = a1;
  v2 = (char *)a1[1];
  v3 = (char *)*a1;
  v4 = v2;
  if ( (char *)*a1 != v2 )
  {
    v5 = v3 + 1;
    _BitScanReverse64(&v6, v2 - v3);
    sub_124DD40(*a1, v2, 2LL * (int)(63 - (v6 ^ 0x3F)));
    if ( v2 - v3 <= 16 )
    {
      for ( ; v2 != v5; ++v5 )
      {
        v38 = *v5;
        if ( *v5 < *v3 )
        {
          if ( v5 != v3 )
            memmove(v3 + 1, v3, v5 - v3);
          *v3 = v38;
        }
        else
        {
          v39 = *(v5 - 1);
          v40 = v5 - 1;
          if ( v38 < v39 )
          {
            while ( 1 )
            {
              v40[1] = v39;
              v39 = *(v40 - 1);
              if ( v38 >= v39 )
                break;
              --v40;
            }
          }
          else
          {
            v40 = v5;
          }
          *v40 = v38;
        }
      }
    }
    else
    {
      v7 = v3 + 16;
      do
      {
        while ( 1 )
        {
          v8 = *v5;
          if ( *v5 < *v3 )
            break;
          v9 = *(v5 - 1);
          v10 = v5 - 1;
          if ( v8 < v9 )
          {
            while ( 1 )
            {
              v10[1] = v9;
              v9 = *(v10 - 1);
              if ( v8 >= v9 )
                break;
              --v10;
            }
          }
          else
          {
            v10 = v5;
          }
          ++v5;
          *v10 = v8;
          if ( v7 == v5 )
            goto LABEL_13;
        }
        if ( v5 != v3 )
          memmove(v3 + 1, v3, v5 - v3);
        ++v5;
        *v3 = v8;
      }
      while ( v7 != v5 );
LABEL_13:
      while ( v2 != v7 )
      {
        while ( 1 )
        {
          v11 = *v7;
          v12 = *(v7 - 1);
          v13 = v7 - 1;
          if ( *v7 < v12 )
            break;
          v44 = v7++;
          *v44 = v11;
          if ( v2 == v7 )
            goto LABEL_19;
        }
        while ( 1 )
        {
          v13[1] = v12;
          v12 = *(v13 - 1);
          if ( v11 >= v12 )
            break;
          --v13;
        }
        ++v7;
        *v13 = v11;
      }
    }
LABEL_19:
    v2 = (char *)*a1;
    v4 = (char *)a1[1];
  }
  v14 = sub_124DEF0(v2, v4);
  if ( v14 != (char *)a1[1] )
    a1[1] = (__int64)v14;
  v15 = 0;
  while ( 1 )
  {
    v16 = (char *)*v1;
    v17 = v15;
    v18 = (__int64)&v14[-*v1];
    if ( v18 <= 0 )
    {
LABEL_26:
      if ( v16 == v14 )
        goto LABEL_34;
    }
    else
    {
      do
      {
        while ( 1 )
        {
          v19 = v18 >> 1;
          v20 = &v16[v18 >> 1];
          if ( *v20 >= (char)v15 )
            break;
          v16 = v20 + 1;
          v18 = v18 - v19 - 1;
          if ( v18 <= 0 )
            goto LABEL_26;
        }
        v18 >>= 1;
      }
      while ( v19 );
      if ( v16 == v14 )
        goto LABEL_34;
    }
    if ( *v16 <= (char)v15 )
    {
      v21 = 1;
      goto LABEL_29;
    }
LABEL_34:
    v26 = v1[13];
    v61[0] = v15;
    v60[1] = &dword_0 + 1;
    v60[0] = v61;
    v61[1] = 0;
    v27 = (__int64 *)std::use_facet<std::collate<char>>(v26);
    v65[0] = 0;
    v63 = 1;
    v64 = v61[0];
    v28 = *v27;
    v62 = &v64;
    (*(void (__fastcall **)(void **, __int64 *, char *, char *))(v28 + 24))(s2, v27, &v64, v65);
    if ( v62 != &v64 )
      operator delete(v62);
    if ( v60[0] != v61 )
      operator delete(v60[0]);
    v29 = v1[6];
    v52 = v1[7];
    if ( v29 != v52 )
    {
      v30 = s2[1];
      v31 = (__int64 *)s2[0];
      while ( 1 )
      {
        v32 = *(_QWORD *)(v29 + 8);
        v33 = (size_t)v30;
        if ( v32 <= (unsigned __int64)v30 )
          v33 = *(_QWORD *)(v29 + 8);
        if ( v33 )
        {
          LODWORD(v34) = memcmp(*(const void **)v29, v31, v33);
          if ( (_DWORD)v34 )
            goto LABEL_47;
        }
        v34 = v32 - (_QWORD)v30;
        if ( (__int64)(v32 - (_QWORD)v30) > 0x7FFFFFFF )
          goto LABEL_40;
        if ( v34 >= (__int64)0xFFFFFFFF80000000LL )
        {
LABEL_47:
          if ( (int)v34 > 0 )
            goto LABEL_40;
        }
        v35 = *(_QWORD *)(v29 + 40);
        v36 = v35;
        if ( (unsigned __int64)v30 <= v35 )
          v36 = (size_t)v30;
        if ( v36 )
        {
          LODWORD(v37) = memcmp(v31, *(const void **)(v29 + 32), v36);
          if ( (_DWORD)v37 )
            goto LABEL_54;
        }
        v37 = (signed __int64)v30 - v35;
        if ( (__int64)((__int64)v30 - v35) <= 0x7FFFFFFF )
        {
          if ( v37 < (__int64)0xFFFFFFFF80000000LL )
            goto LABEL_55;
LABEL_54:
          if ( (int)v37 <= 0 )
          {
LABEL_55:
            v21 = 1;
            goto LABEL_56;
          }
        }
LABEL_40:
        v29 += 64;
        if ( v52 == v29 )
        {
          v17 = v15;
          break;
        }
      }
    }
    v21 = sub_12536A0(v1[14], v17, *((_DWORD *)v1 + 24));
    if ( v21 )
      goto LABEL_62;
    v41 = v1[14];
    v53 = v1[4];
    v55 = std::use_facet<std::ctype<char>>(v41);
    v42 = (_BYTE *)operator new(1u);
    *v42 = v15;
    (*(void (__fastcall **)(__int64, _BYTE *, _BYTE *))(*(_QWORD *)v55 + 40LL))(v55, v42, v42 + 1);
    v56 = std::use_facet<std::collate<char>>(v41);
    v62 = &v64;
    sub_124E3C0(&v62, v42, (__int64)(v42 + 1));
    (*(void (__fastcall **)(void **, __int64, void *, char *))(*(_QWORD *)v56 + 24LL))(v60, v56, v62, (char *)v62 + v63);
    if ( v62 != &v64 )
      operator delete(v62);
    operator delete(v42);
    v43 = sub_124E110(v1[3], v1[4], (__int64)v60);
    if ( v60[0] != v61 )
      operator delete(v60[0]);
    if ( v53 == v43 )
    {
      v45 = v1[9];
      v54 = v1[10];
      if ( v45 != v54 )
      {
        v46 = v1;
        do
        {
          v47 = *(_WORD *)v45;
          v48 = *(_BYTE *)(v45 + 2);
          v49 = std::use_facet<std::ctype<char>>(v46[14]);
          if ( (v47 & *(_WORD *)(*(_QWORD *)(v49 + 48) + 2 * v15)) == 0 )
          {
            if ( (v48 & 1) == 0 )
              goto LABEL_90;
            if ( *(_BYTE *)(v49 + 56) )
            {
              v50 = *(_BYTE *)(v49 + 152);
            }
            else
            {
              v57 = v49;
              std::ctype<char>::_M_widen_init(v49);
              v51 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v57 + 48LL);
              v50 = 95;
              if ( v51 != sub_124D700 )
                v50 = ((__int64 (__fastcall *)(__int64, __int64, __int64))v51)(v57, 95, 95);
            }
            if ( v50 != (_BYTE)v15 )
            {
LABEL_90:
              v1 = v46;
              goto LABEL_80;
            }
          }
          v45 += 4;
        }
        while ( v54 != v45 );
        v1 = v46;
      }
LABEL_62:
      v31 = (__int64 *)s2[0];
      goto LABEL_56;
    }
LABEL_80:
    v31 = (__int64 *)s2[0];
    v21 = 1;
LABEL_56:
    if ( v31 != &v59 )
      operator delete(v31);
LABEL_29:
    v22 = &v1[v15 >> 6];
    v23 = 1LL << v15;
    v24 = v22[16];
    if ( *((_BYTE *)v1 + 120) == v21 )
      break;
    result = v24 | v23;
    ++v15;
    v22[16] = result;
    if ( v15 == 256 )
      return result;
LABEL_31:
    v14 = (char *)v1[1];
  }
  ++v15;
  result = v24 & ~v23;
  v22[16] = result;
  if ( v15 != 256 )
    goto LABEL_31;
  return result;
}
