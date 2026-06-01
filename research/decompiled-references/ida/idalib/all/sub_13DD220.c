const char *__fastcall sub_13DD220(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 *a3,
        __int64 a4,
        _BYTE *a5,
        __m128i a6,
        double a7)
{
  unsigned __int64 v9; // rax
  int v10; // esi
  unsigned __int64 v11; // rax
  int v12; // edx
  int v13; // ebx
  unsigned __int64 v15; // rax
  int v16; // r14d
  unsigned int v17; // ebx
  unsigned __int64 v18; // r13
  __int64 v19; // r9
  _DWORD *v20; // rax
  const char *v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r15
  __int64 v25; // rax
  _QWORD *v26; // r8
  __int64 v27; // rax
  __int64 *v28; // rdi
  __int64 v29; // rcx
  _DWORD *v30; // rax
  _DWORD *v31; // rdx
  _QWORD *v32; // [rsp+8h] [rbp-60h]
  unsigned __int64 v33; // [rsp+24h] [rbp-44h] BYREF
  int v34; // [rsp+2Ch] [rbp-3Ch]

  v9 = sub_13DCDE0(a1, a2, (__int64)a3, a4, a6, a7);
  v10 = v9;
  v33 = v9;
  v11 = HIDWORD(v9);
  v34 = v12;
  if ( !v10 )
    goto LABEL_3;
  v13 = v11;
  if ( !(_DWORD)v11 )
    goto LABEL_3;
  v15 = sub_A80750((__int64)a3, v10);
  v16 = v15;
  if ( !(_DWORD)v15 )
    goto LABEL_3;
  v17 = v13 & 0x7FFFFFFF;
  v18 = HIDWORD(v15);
  if ( !sub_101FDD0((__int64)a3, v15, v17) )
    goto LABEL_3;
  if ( (unsigned int)(v16 + 1) <= 1 )
  {
    v20 = (_DWORD *)a3[23];
  }
  else if ( v16 < 0 )
  {
    v24 = (unsigned int)(-2 - v16);
    v25 = *(_QWORD *)(a3[40] + 8LL * ((unsigned int)(-2 - v16) >> 6));
    if ( _bittest64(&v25, v24) )
    {
      v26 = (_QWORD *)(a3[34] + 8 * ((unsigned __int64)(int)v24 >> 5));
      v27 = *v26;
      if ( !*v26 )
      {
        v28 = (__int64 *)(a3[36] & 0xFFFFFFFFFFFFFFF8LL);
        v29 = *v28;
        v28[10] += 768;
        v30 = (_DWORD *)((v29 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v28[1] >= (unsigned __int64)(v30 + 192) && v29 )
        {
          *v28 = (__int64)(v30 + 192);
        }
        else
        {
          v32 = v26;
          v30 = (_DWORD *)sub_986170((__int64)v28, 768, 768, 3, (__int64)v26, v19);
          v26 = v32;
        }
        *v26 = v30;
        v31 = v30 + 192;
        do
        {
          *v30 = 0;
          v30 += 6;
          *((_OWORD *)v30 - 1) = 0;
          *((_QWORD *)v30 - 1) = 0;
        }
        while ( v30 != v31 );
        v27 = *v26;
      }
      v20 = (_DWORD *)(v27 + 24LL * ((-2 - (_BYTE)v16) & 0x1F));
    }
    else
    {
      v20 = (_DWORD *)sub_101F930((__int64)a3, v24, nullptr);
    }
  }
  else
  {
    v20 = (_DWORD *)(a3[23] + 24LL * (unsigned int)v16);
  }
  if ( (unsigned int)v18 <= v17 - (*v20 & 0x7FFFFFFF)
    && (LOBYTE(v33) = 0, v21 = sub_10202B0(a3, v16, &v33), !(_BYTE)v33) )
  {
    if ( a5 )
      *a5 = 0;
    v23 = (unsigned int)v18;
    if ( (unsigned int)v18 > v22 )
      v23 = v22;
    return &v21[v23];
  }
  else
  {
LABEL_3:
    if ( a5 )
      *a5 = 1;
    return nullptr;
  }
}
