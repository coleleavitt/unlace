__int64 __fastcall sub_6C6DE0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128i a6,
        double a7,
        __m128 a8,
        double a9,
        double a10,
        double a11,
        __m128 a12)
{
  __int64 v13; // rdx
  __int64 v14; // rsi
  unsigned int v16; // r14d
  __int64 v17; // r15
  char v18; // dl
  unsigned int v19; // eax
  char *v20; // rdx
  __int64 v21; // rbp
  __int64 v22; // rbx
  char *v23; // rax
  void *v24; // rdi
  __int64 v26; // rax
  const char *v27; // rcx
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  __int128 v30; // [rsp+18h] [rbp-70h]
  void *v31; // [rsp+30h] [rbp-58h] BYREF
  __int128 v32; // [rsp+38h] [rbp-50h]
  unsigned __int64 v33; // [rsp+48h] [rbp-40h]

  v13 = *(_QWORD *)(a2 + 8);
  v14 = *(_QWORD *)a2;
  v33 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v13 + 1) )
  {
    v26 = qvector_reserve(a2, v14, v13 + 1, 80);
    v13 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)a2 = v26;
    v14 = v26;
  }
  v16 = 0;
  v17 = v14 + 80 * v13;
  *(_OWORD *)(v17 + 24) = 0;
  *(_OWORD *)(v17 + 48) = 0;
  *(_DWORD *)v17 = 0;
  *(_QWORD *)(v17 + 8) = 0;
  *(_QWORD *)(v17 + 16) = 0;
  *(_QWORD *)(v17 + 40) = 0;
  *(_QWORD *)(v17 + 64) = 0;
  *(_DWORD *)(v17 + 72) = 0;
  ++*(_QWORD *)(a2 + 8);
  sub_6C3AF0((__int64 *)&v31, (__int64)a1, a3, a4, 0.0, a6, a7, a8, a9, a10, a11, a12);
  copy_tinfo_t(v17 + 64);
  clear_tinfo_t(&v31);
  if ( *(_BYTE *)(v17 + 64) )
  {
    ptr = nullptr;
    v30 = 0;
    if ( a4 && (*(_BYTE *)(a4 + 29) & 1) != 0 )
      sub_6B47A0((__int64)a1, (__int64)&ptr, a4);
    sub_6B9D50((__int64)a1, (__int64 *)&ptr, a3);
    sub_6BA1F0((__int64)a1, v17, (__int64 *)&ptr);
    v18 = *(_BYTE *)(a2 + 88);
    v19 = v18 & 0xF0;
    if ( (v18 & 0xF0) == 0xC0 )
    {
      v19 = *(_DWORD *)(a2 + 28);
      if ( v19 > 0x10 )
      {
LABEL_9:
        if ( v19 - 208 > 0x2F )
          goto LABEL_10;
        goto LABEL_21;
      }
    }
    else if ( v19 > 0x10 )
    {
      goto LABEL_9;
    }
    if ( (unsigned int)getinf(99) - 208 > 0x2F )
      goto LABEL_10;
LABEL_21:
    v32 = 0;
    v31 = nullptr;
    v16 = sub_6BA7B0((__int64)a1, v17, v17 + 64, (__int64)&ptr, (char **)&v31);
    if ( !(_BYTE)v16 )
    {
      v27 = haystack;
      if ( (_QWORD)v32 )
        v27 = (const char *)v31;
      sub_6BB730(a1, a4, (__int64)"%s", v27);
      if ( v31 )
      {
        *(_QWORD *)&v32 = 0;
        qfree(v31);
      }
      goto LABEL_11;
    }
    if ( v31 )
    {
      *(_QWORD *)&v32 = 0;
      qfree(v31);
    }
LABEL_10:
    v16 = 1;
LABEL_11:
    v20 = (char *)ptr;
    if ( ptr )
    {
      v21 = v30;
      if ( (_QWORD)v30 )
      {
        v22 = 0;
        do
        {
          v23 = &v20[24 * v22];
          v24 = *(void **)v23;
          if ( *(_QWORD *)v23 )
          {
            *((_QWORD *)v23 + 1) = 0;
            qfree(v24);
            v20 = (char *)ptr;
          }
          ++v22;
        }
        while ( v21 != v22 );
      }
      *(_QWORD *)&v30 = 0;
      qfree(v20);
    }
  }
  return v16;
}

