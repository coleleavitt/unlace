__int64 __fastcall sub_2224ED0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char ***v4; // rax
  char **v5; // rbx
  __int64 v6; // rsi
  bool v7; // zf
  __int64 v8; // rax
  void **v9; // rbp
  void **v10; // rbx
  void **v11; // rdi
  char *v14; // r15
  std::_V2 *v15; // rdi
  char v16; // al
  size_t v17; // rdx
  char *v18; // rax
  char *v19; // rax
  char *v20; // r15
  unsigned __int64 v21; // rsi
  char v22; // cl
  unsigned __int64 v23; // rdx
  unsigned __int8 *v24; // rsi
  unsigned int v25; // edi
  char ***v26; // r8
  unsigned __int64 v27; // rsi
  void **v28; // rcx
  char **v29; // rax
  int v30; // esi
  int v31; // eax
  char *v32; // rdi
  char ***v33; // rax
  int v34; // edx
  char **v35; // rsi
  __int64 v36; // r8
  __m128i *v37; // rdx
  unsigned __int64 v38; // r10
  char **v39; // rcx
  __m128i v40; // xmm0
  const char *v41; // rax
  __int64 v42; // rbp
  __int64 v43; // rbx
  __int64 *v44; // rax
  char ***v45; // rbx
  char **v46; // rax
  void **v47; // [rsp+0h] [rbp-130h]
  char ***v48; // [rsp+8h] [rbp-128h]
  void ***v49; // [rsp+10h] [rbp-120h]
  char ***v50; // [rsp+18h] [rbp-118h]
  __int64 v51; // [rsp+20h] [rbp-110h]
  void **p_ptr; // [rsp+28h] [rbp-108h] BYREF
  __int64 v53; // [rsp+30h] [rbp-100h]
  void *ptr; // [rsp+38h] [rbp-F8h] BYREF
  __int128 v55; // [rsp+40h] [rbp-F0h]
  char v56[8]; // [rsp+50h] [rbp-E0h] BYREF
  char **v57; // [rsp+58h] [rbp-D8h] BYREF
  unsigned int v58; // [rsp+60h] [rbp-D0h]
  int v59; // [rsp+98h] [rbp-98h]
  char v60; // [rsp+A0h] [rbp-90h]
  const char *v61; // [rsp+A8h] [rbp-88h] BYREF
  void *v62; // [rsp+B0h] [rbp-80h]
  __int64 v63; // [rsp+B8h] [rbp-78h]
  char v64; // [rsp+C0h] [rbp-70h] BYREF
  __int16 v65; // [rsp+C8h] [rbp-68h]
  int v66; // [rsp+F0h] [rbp-40h]

  v51 = a1;
  v49 = &p_ptr;
  p_ptr = &ptr;
  v53 = 0;
  ptr = v56;
  v55 = 0;
  if ( a3 )
  {
    v14 = nullptr;
    sub_2236E10(&ptr, v56, a3, 1);
    v15 = (std::_V2 *)((char *)ptr + v55);
    memcpy((char *)ptr + v55, (const void *)a2, a3);
    *(_QWORD *)&v55 = a3 + v55;
    v48 = (char ***)&v61;
    while ( 1 )
    {
      while ( 1 )
      {
        v16 = v14[a2];
        if ( v16 != 91 )
          break;
        v15 = (std::_V2 *)(v14 + 2);
        v47 = (void **)(v14 + 1);
        if ( (unsigned __int64)(v14 + 2) >= a3
          || (v17 = a3 - (_QWORD)v15,
              v15 = (std::_V2 *)((char *)v15 + a2),
              (v18 = (char *)memchr(v15, 93, v17)) == nullptr)
          || (v19 = &v18[-a2], v20 = v19, v19 == (char *)-1LL) )
        {
          v41 = "invalid glob pattern, unmatched '['";
LABEL_60:
          v61 = v41;
          v65 = 259;
          v42 = std::_V2::generic_category(v15);
          v43 = operator new(0x40u);
          sub_2220590(v43, (__int64)&v61, 22, v42);
          v44 = (__int64 *)v51;
          *(_BYTE *)(v51 + 40) |= 1u;
          *v44 = v43;
          goto LABEL_5;
        }
        v21 = a3;
        if ( (unsigned __int64)v47 <= a3 )
          v21 = (unsigned __int64)v47;
        v22 = *((_BYTE *)v47 + a2);
        v23 = a3 - v21;
        if ( v19 - (char *)v47 <= a3 - v21 )
          v23 = v19 - (char *)v47;
        v24 = (unsigned __int8 *)(a2 + v21);
        if ( v22 == 94 || v22 == 33 )
        {
          if ( v23 )
          {
            --v23;
            ++v24;
          }
          sub_22247A0((__int64)&v57, v24, v23, a2, a3);
          if ( (v60 & 1) != 0 )
          {
LABEL_61:
            v45 = (char ***)v51;
            v46 = v57;
            v57 = nullptr;
            *(_BYTE *)(v51 + 40) |= 1u;
            *v45 = v46;
            sub_22246C0((__int64)&v57);
            goto LABEL_5;
          }
          v35 = v57;
          v25 = v58;
          v36 = v58;
          if ( v57 != &v57[v36] )
          {
            v37 = (__m128i *)v57;
            v38 = ((unsigned __int64)(v36 * 8 - 8) >> 3) + 1;
            if ( v36 == 1 )
              goto LABEL_52;
            v39 = &v57[2 * (v38 >> 1)];
            do
            {
              v40 = _mm_loadu_si128(v37++);
              v37[-1] = _mm_xor_si128(v40, (__m128i)-1LL);
            }
            while ( v37 != (__m128i *)v39 );
            v37 = (__m128i *)&v35[v38 & 0xFFFFFFFFFFFFFFFELL];
            if ( (v38 & 0xFFFFFFFFFFFFFFFELL) != v38 )
LABEL_52:
              v37->m128i_i64[0] = ~v37->m128i_i64[0];
          }
          if ( (v59 & 0x3F) != 0 )
            v35[v36 - 1] = (char *)(~(-1LL << (v59 & 0x3F)) & (unsigned __int64)v35[v36 - 1]);
        }
        else
        {
          sub_22247A0((__int64)&v57, v24, v23, a2, a3);
          if ( (v60 & 1) != 0 )
            goto LABEL_61;
          v25 = v58;
        }
        v14 = v20 + 1;
        v62 = &v64;
        v61 = v14;
        v63 = 0x600000000LL;
        if ( v25 )
          sub_9B8670(v48 + 1, &v57);
        v26 = v48;
        v66 = v59;
        v27 = (unsigned int)v53 + 1LL;
        v28 = &p_ptr[10 * (unsigned int)v53];
        if ( v27 > HIDWORD(v53) )
        {
          v47 = p_ptr;
          if ( p_ptr > (void **)v48 || v28 <= (void **)v48 )
          {
            sub_2224990((__int64)v49, v27);
            v26 = v48;
            v28 = &p_ptr[10 * (unsigned int)v53];
          }
          else
          {
            sub_2224990((__int64)v49, v27);
            v26 = (char ***)((char *)p_ptr + (char *)v48 - (char *)v47);
            v28 = &p_ptr[10 * (unsigned int)v53];
          }
        }
        v29 = *v26;
        v28[2] = (void *)0x600000000LL;
        v30 = *((_DWORD *)v26 + 4);
        *v28 = v29;
        v28[1] = v28 + 3;
        if ( v30 )
        {
          v50 = v26;
          v47 = v28;
          sub_9B8670((char ***)v28 + 1, v26 + 1);
          v26 = v50;
          v28 = v47;
        }
        v31 = *((_DWORD *)v26 + 18);
        v32 = (char *)v62;
        LODWORD(v53) = v53 + 1;
        *((_DWORD *)v28 + 18) = v31;
        if ( v32 != &v64 )
          free(v32);
        v15 = (std::_V2 *)&v57;
        sub_22246C0((__int64)&v57);
        if ( v14 == (char *)a3 )
        {
LABEL_40:
          v33 = (char ***)v51;
          v34 = v53;
          v5 = (char **)(v51 + 16);
          *(_BYTE *)(v51 + 40) &= ~1u;
          *v33 = v5;
          v33[1] = nullptr;
          if ( v34 )
            sub_2224B70((__int64)v33, (__int64 *)v49);
          goto LABEL_3;
        }
      }
      if ( v16 == 92 )
      {
        if ( v14 + 1 == (char *)a3 )
        {
          v41 = "invalid glob pattern, stray '\\'";
          goto LABEL_60;
        }
        v14 += 2;
      }
      else
      {
        ++v14;
      }
      if ( v14 == (char *)a3 )
        goto LABEL_40;
    }
  }
  *(_QWORD *)&v55 = 0;
  v4 = (char ***)v51;
  v5 = (char **)(v51 + 16);
  *(_BYTE *)(v51 + 40) &= ~1u;
  *v4 = v5;
  v4[1] = nullptr;
LABEL_3:
  v6 = v51;
  v7 = (_QWORD)v55 == 0;
  v8 = v51 + 40;
  *(_OWORD *)(v51 + 24) = 0;
  *(_QWORD *)(v6 + 16) = v8;
  if ( !v7 )
    sub_9C3C90(v5, (char **)v49 + 2);
LABEL_5:
  if ( ptr != v49 + 5 )
    free(ptr);
  v9 = p_ptr;
  v10 = &p_ptr[10 * (unsigned int)v53];
  if ( p_ptr != v10 )
  {
    do
    {
      while ( 1 )
      {
        v10 -= 10;
        v11 = (void **)v10[1];
        if ( v11 == v10 + 3 )
          break;
        free(v11);
        if ( v9 == v10 )
          goto LABEL_10;
      }
    }
    while ( v9 != v10 );
LABEL_10:
    v10 = p_ptr;
  }
  if ( v10 != (void **)(v49 + 2) )
    free(v10);
  return v51;
}
