__int64 __fastcall sub_13D4AD0(__int64 a1, int a2, __int64 *a3, __int64 a4, char a5)
{
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rdi
  __int64 v12; // rax
  int v13; // eax
  char v14; // dl
  __int64 v15; // rdx
  char v16; // al
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 result; // rax
  unsigned __int64 v20; // rbp
  __int64 v21; // rax
  _QWORD *v22; // r15
  __int64 *v23; // rdi
  __int64 v24; // rcx
  _DWORD *v25; // rax
  _DWORD *v26; // rdx
  double v27[2]; // [rsp+8h] [rbp-50h] BYREF
  _BYTE v28[57]; // [rsp+1Fh] [rbp-39h] BYREF

  sub_1465E60(a1, a4, (unsigned int)a2);
  v28[0] = 0;
  *(_QWORD *)a1 = off_2BB2738;
  v11 = *(_QWORD **)(a4 + 88);
  if ( (unsigned int)(a2 + 1) <= 1 )
    goto LABEL_9;
  if ( a2 < 0 )
  {
    v20 = (unsigned int)(-2 - a2);
    v21 = *(_QWORD *)(v11[40] + 8LL * ((unsigned int)v20 >> 6));
    if ( _bittest64(&v21, v20) )
    {
      v22 = (_QWORD *)(v11[34] + 8 * ((unsigned __int64)(int)v20 >> 5));
      if ( *v22 )
      {
        v12 = *v22 + 24LL * ((-2 - (_BYTE)a2) & 0x1F);
        goto LABEL_4;
      }
      v23 = (__int64 *)(v11[36] & 0xFFFFFFFFFFFFFFF8LL);
      v24 = *v23;
      v23[10] += 768;
      v25 = (_DWORD *)((v24 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v23[1] >= (unsigned __int64)(v25 + 192) && v24 )
        *v23 = (__int64)(v25 + 192);
      else
        v25 = (_DWORD *)sub_986170((__int64)v23, 768, 768, 3, v9, v10);
      *v22 = v25;
      v26 = v25 + 192;
      do
      {
        *v25 = 0;
        v25 += 6;
        *((_OWORD *)v25 - 1) = 0;
        *((_QWORD *)v25 - 1) = 0;
      }
      while ( v25 != v26 );
      v14 = v28[0];
      v12 = *v22 + 24LL * ((-2 - (_BYTE)a2) & 0x1F);
    }
    else
    {
      v12 = sub_101F930((__int64)v11, v20, v28);
      v14 = v28[0];
    }
    if ( v14 )
    {
LABEL_9:
      v13 = 0;
      goto LABEL_10;
    }
  }
  else
  {
    v12 = v11[23] + 24LL * (unsigned int)a2;
  }
LABEL_4:
  if ( !v12 || *(char *)(v12 + 3) < 0 )
    goto LABEL_9;
  v13 = *(_DWORD *)v12 & 0x7FFFFFFF;
LABEL_10:
  *(_DWORD *)(a1 + 128) = v13;
  v15 = *(_QWORD *)(a4 + 56);
  *(_QWORD *)(a1 + 136) = v15;
  v16 = *(_BYTE *)(v15 + 3);
  *(_BYTE *)(a1 + 164) = a5;
  *(_DWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 192) = 0;
  *(_BYTE *)(a1 + 144) = (v16 & 2) != 0;
  v17 = *a3;
  *(_QWORD *)(a1 + 184) = 0;
  v18 = a3[1];
  *(_QWORD *)(a1 + 152) = v17;
  *(_QWORD *)&v27[0] = v17 + v18;
  *(__m128 *)(a1 + 112) = _mm_loadh_ps(v27);
  if ( v18 > 2 && *(_WORD *)v17 == 0xBBEF && *(_BYTE *)(v17 + 2) == 0xBF )
    v17 += 3;
  *(_QWORD *)(a1 + 152) = v17;
  result = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 160) = 257;
  *(_WORD *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 26) = 0;
  *(_WORD *)(a1 + 145) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  if ( (*(_BYTE *)(v15 + 14) & 4) != 0 )
  {
    *(_BYTE *)(a1 + 146) = 2;
  }
  else
  {
    result = *(_BYTE *)(*(_QWORD *)(a1 + 8) + 544LL) & 1;
    *(_BYTE *)(a1 + 146) = result;
  }
  return result;
}
