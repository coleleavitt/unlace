__int64 __fastcall sub_32A0D0(__int64 a1, char a2)
{
  char v3; // bl
  char v4; // bp
  int v5; // eax
  int v6; // r12d
  int v7; // eax
  unsigned __int64 v8; // r9
  int v9; // r13d
  __m128i v10; // xmm0
  int v11; // eax
  char v12; // dl
  __int64 *v13; // rbx
  __int64 (*v14)(); // rdx
  char v15; // al
  const char *v16; // rsi
  int v17; // eax
  __m128i v18; // xmm0
  size_t v19; // rbx
  char *v20; // rbp
  void *v21; // rdi
  void (__fastcall ***v22)(_QWORD); // rdi
  unsigned int v23; // ebx
  __int64 v25; // rdi
  unsigned int v26; // ebx
  int v27; // eax
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __m128i v31; // xmm0
  __m128i v32; // xmm0
  char v33; // [rsp+0h] [rbp-88h]
  unsigned __int64 v34; // [rsp+0h] [rbp-88h]
  unsigned __int64 v35; // [rsp+0h] [rbp-88h]
  unsigned __int64 v36; // [rsp+8h] [rbp-80h]
  __int64 v37; // [rsp+18h] [rbp-70h] BYREF
  __m128i v38; // [rsp+20h] [rbp-68h] BYREF
  char *s1; // [rsp+30h] [rbp-58h] BYREF
  __int128 v40; // [rsp+38h] [rbp-50h]
  unsigned __int64 v41; // [rsp+48h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v38 = 0;
  getinf_buf(98, &v38, 16);
  v3 = getinf_flag(3, 32);
  v4 = getinf_flag(3, 4);
  v33 = (getinf(3) & 0x1006) == 4098;
  v5 = getinf(5);
  s1 = nullptr;
  v6 = v5;
  v40 = 0;
  get_abi_name(&s1);
  v7 = getinf(67);
  v8 = v40;
  v9 = v7;
  if ( !a2
    && *(_BYTE *)(a1 + 145) == v3
    && *(_BYTE *)(a1 + 144) == v4
    && *(_BYTE *)(a1 + 146) == v33
    && *(_DWORD *)(a1 + 152) == v6 )
  {
    v16 = ::s1;
    if ( *(_QWORD *)(a1 + 168) )
      v16 = *(const char **)(a1 + 160);
    if ( (_QWORD)v40 )
    {
      v36 = v40;
      v17 = strcmp(s1, v16);
      v8 = v36;
      if ( v17 )
      {
        v18 = _mm_load_si128(&v38);
        *(_BYTE *)(a1 + 146) = v33;
        *(__m128i *)(a1 + 128) = v18;
        goto LABEL_20;
      }
      if ( *(_DWORD *)(a1 + 128) != v38.m128i_i32[0] )
      {
        v31 = _mm_load_si128(&v38);
        *(_BYTE *)(a1 + 145) = v3;
        *(_BYTE *)(a1 + 144) = v4;
        *(_BYTE *)(a1 + 146) = v33;
        *(_DWORD *)(a1 + 152) = v6;
        *(__m128i *)(a1 + 128) = v31;
        goto LABEL_20;
      }
    }
    else
    {
      if ( *v16 )
      {
        *(__m128i *)(a1 + 128) = _mm_load_si128(&v38);
        *(_BYTE *)(a1 + 146) = v33;
        goto LABEL_4;
      }
      if ( *(_DWORD *)(a1 + 128) != v38.m128i_i32[0] )
      {
        v32 = _mm_load_si128(&v38);
        *(_BYTE *)(a1 + 145) = v3;
        *(_BYTE *)(a1 + 144) = v4;
        *(_BYTE *)(a1 + 146) = v33;
        *(_DWORD *)(a1 + 152) = v6;
        *(__m128i *)(a1 + 128) = v32;
        goto LABEL_4;
      }
    }
    if ( v38.m128i_i32[1] == *(_DWORD *)(a1 + 132)
      && v38.m128i_i16[4] == *(_WORD *)(a1 + 136)
      && *(_DWORD *)(a1 + 184) == v9 )
    {
      goto LABEL_34;
    }
  }
  v10 = _mm_load_si128(&v38);
  *(_BYTE *)(a1 + 145) = v3;
  *(_BYTE *)(a1 + 144) = v4;
  *(_BYTE *)(a1 + 146) = v33;
  *(_DWORD *)(a1 + 152) = v6;
  *(__m128i *)(a1 + 128) = v10;
  if ( !v8 )
  {
LABEL_4:
    *(_QWORD *)(a1 + 168) = 0;
    goto LABEL_5;
  }
LABEL_20:
  v19 = v8 - 1;
  if ( v8 == 1 )
    goto LABEL_4;
  v20 = s1;
  v21 = *(void **)(a1 + 160);
  if ( *(_QWORD *)(a1 + 176) < v8 )
  {
    v35 = v8;
    v30 = qvector_reserve(a1 + 160, *(_QWORD *)(a1 + 160), v8, 1);
    *(_QWORD *)(a1 + 160) = v30;
    v8 = v35;
    v21 = (void *)v30;
  }
  *(_QWORD *)(a1 + 168) = v8;
  v34 = v8;
  memmove(v21, v20, v19);
  *(_BYTE *)(*(_QWORD *)(a1 + 160) + v34 - 1) = 0;
LABEL_5:
  v11 = getinf(99);
  if ( v11 == 176 || (v12 = 0, v11 == 256) )
  {
    if ( !(unsigned __int8)getinf_flag(3, 4)
      || (netnode_check(&v37, "$ golang", 0, 0), v25 = v37, v26 = netnode_altval(v37, 0, 65), v26 <= 0x74)
      || (v27 = *(_DWORD *)(get_ph(v25) + 4), v12 = 2, v27)
      && ((v28 = (unsigned int)(v27 - 13), (unsigned int)v28 > 0x3B)
       || (v29 = 0x800000000000005LL, !_bittest64(&v29, v28))
       || v26 == 117) )
    {
      v12 = 1;
    }
  }
  v13 = *(__int64 **)(a1 + 112);
  *(_BYTE *)(a1 + 148) = v12;
  *(_DWORD *)(a1 + 184) = v9;
  v14 = *(__int64 (**)())(*v13 + 344);
  v15 = 0;
  if ( v14 != sub_3289F0 )
  {
    v15 = ((__int64 (__fastcall *)(__int64 *))v14)(v13);
    v13 = *(__int64 **)(a1 + 112);
  }
  *(_BYTE *)(a1 + 147) = v15;
  if ( !(unsigned __int8)sub_64220(v13 + 23, v13 + 33) || !(unsigned __int8)sub_318300(v13 + 35, (__int64)(v13 + 25)) )
  {
    if ( !under_debugger )
      sub_3835A0(0);
    BUG();
  }
  v22 = *(void (__fastcall ****)(_QWORD))(a1 + 1152);
  if ( v22 )
    (**v22)(v22);
  v23 = *(unsigned __int8 *)(a1 + 147);
  if ( (_BYTE)v23 )
  {
    sub_33F6E0(a1);
LABEL_34:
    v23 = *(unsigned __int8 *)(a1 + 147);
  }
  if ( s1 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(s1);
  }
  return v23;
}
