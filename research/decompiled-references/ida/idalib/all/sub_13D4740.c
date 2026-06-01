__int64 __fastcall sub_13D4740(__int64 a1, int a2, __int64 *a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbp
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  int v10; // eax
  char v11; // dl
  char v12; // al
  __m128 v13; // xmm0
  unsigned __int64 v15; // r14
  __int64 v16; // rax
  _QWORD *v17; // r15
  __int64 *v18; // rdi
  __int64 v19; // rcx
  _DWORD *v20; // rax
  _DWORD *v21; // rdx
  unsigned __int64 v22; // [rsp+0h] [rbp-58h] BYREF
  int v23; // [rsp+Ch] [rbp-4Ch]
  char v24[57]; // [rsp+1Fh] [rbp-39h] BYREF

  v7 = *a3;
  v8 = a3[1];
  v24[0] = 0;
  if ( (unsigned int)(a2 + 1) <= 1 )
    goto LABEL_9;
  if ( a2 < 0 )
  {
    v15 = (unsigned int)(-2 - a2);
    v16 = *(_QWORD *)(a4[40] + 8LL * ((unsigned int)(-2 - a2) >> 6));
    if ( _bittest64(&v16, v15) )
    {
      v17 = (_QWORD *)(a4[34] + 8 * ((unsigned __int64)(int)v15 >> 5));
      if ( *v17 )
      {
        v9 = *v17 + 24LL * ((-2 - (_BYTE)a2) & 0x1F);
        goto LABEL_4;
      }
      v18 = (__int64 *)(a4[36] & 0xFFFFFFFFFFFFFFF8LL);
      v19 = *v18;
      v18[10] += 768;
      v20 = (_DWORD *)((v19 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v18[1] >= (unsigned __int64)(v20 + 192) && v19 )
      {
        *v18 = (__int64)(v20 + 192);
      }
      else
      {
        v23 = a6;
        v22 = a5;
        v20 = (_DWORD *)sub_986170((__int64)v18, 768, 768, 3, a5, a6);
        LOBYTE(a6) = v23;
        a5 = v22;
      }
      *v17 = v20;
      v21 = v20 + 192;
      do
      {
        *v20 = 0;
        v20 += 6;
        *((_OWORD *)v20 - 1) = 0;
        *((_QWORD *)v20 - 1) = 0;
      }
      while ( v20 != v21 );
      v11 = v24[0];
      v9 = *v17 + 24LL * ((-2 - (_BYTE)a2) & 0x1F);
    }
    else
    {
      v23 = a6;
      v22 = a5;
      v9 = sub_101F930((__int64)a4, v15, v24);
      v11 = v24[0];
      a5 = v22;
      LOBYTE(a6) = v23;
    }
    if ( v11 )
    {
LABEL_9:
      v10 = 0;
      goto LABEL_10;
    }
  }
  else
  {
    v9 = a4[23] + 24LL * (unsigned int)a2;
  }
LABEL_4:
  if ( !v9 || *(char *)(v9 + 3) < 0 )
    goto LABEL_9;
  v10 = *(_DWORD *)v9 & 0x7FFFFFFF;
LABEL_10:
  v22 = v7;
  *(_WORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 64) = a1 + 80;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 26) = 0;
  *(_WORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 72) = 0x400000000LL;
  *(_QWORD *)a1 = off_2BB2738;
  *(_DWORD *)(a1 + 128) = v10;
  *(_QWORD *)(a1 + 136) = a5;
  v12 = *(_BYTE *)(a5 + 3);
  v22 = v7 + v8;
  *(_BYTE *)(a1 + 34) = 0;
  *(_BYTE *)(a1 + 164) = a6;
  v13 = _mm_loadh_ps((const double *)&v22);
  *(_BYTE *)(a1 + 144) = (v12 & 2) != 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 152) = v7;
  *(__m128 *)(a1 + 112) = v13;
  if ( v8 > 2 && *(_WORD *)v7 == 0xBBEF && *(_BYTE *)(v7 + 2) == 0xBF )
    v7 += 3;
  *(_BYTE *)(a1 + 26) = 1;
  *(_QWORD *)(a1 + 152) = v7;
  *(_DWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 160) = 257;
  *(_WORD *)(a1 + 145) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  return 0;
}
