__int64 __fastcall sub_1783C30(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, unsigned __int16 *a5, __int64 a6)
{
  _QWORD *v6; // r14
  __m128 v9; // xmm0
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // edx
  unsigned __int64 v14; // rcx
  _QWORD *v15; // rdi
  __int64 v16; // rbp
  __int64 v17; // r8
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // r15
  unsigned __int64 v21; // rdx
  __int64 v22; // rdx
  bool v23; // zf
  __int64 v24; // rbp
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 result; // rax
  double v30[2]; // [rsp+0h] [rbp-50h] BYREF
  _QWORD v31[8]; // [rsp+10h] [rbp-40h] BYREF

  v6 = (_QWORD *)(a1 + 160);
  *(_OWORD *)a1 = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(_QWORD *)&v30[0] = a3;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  v9 = _mm_loadh_ps(v30);
  *(_QWORD *)(a1 + 128) = a4;
  *(__m128 *)(a1 + 112) = v9;
  *(_BYTE *)(a1 + 136) = 1;
  v10 = *(_DWORD *)(a3 + 24);
  LOBYTE(a3) = 1;
  *(_QWORD *)(a1 + 144) = a1 + 160;
  *(_DWORD *)(a1 + 140) = v10;
  *(_QWORD *)(a1 + 152) = 0x400000000LL;
  v11 = *(_QWORD *)(a4 + 184);
  if ( v11 )
    LOWORD(a3) = (*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v11 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) >> 2) & 1;
  *(_BYTE *)(a1 + 192) = a3;
  v12 = 0;
  v13 = 0;
  *(_QWORD *)(a1 + 200) = 0;
  v14 = *a5;
  LOWORD(v14) = v14 & 0x1FF;
  if ( (_WORD)v14 != 249 )
  {
    v31[0] = a5;
    v15 = (_QWORD *)a2[31];
    a2 = v31;
    a5 = (unsigned __int16 *)sub_EEF560(v15, v31, 1, 0, 0, 0);
    v12 = *(unsigned int *)(a1 + 152);
    v13 = *(_DWORD *)(a1 + 152);
  }
  *(_QWORD *)a1 = a5;
  v16 = *(_QWORD *)(a4 + 264);
  v17 = 16LL * *(unsigned int *)(a4 + 272);
  v18 = v16 + v17;
  if ( v16 + v17 != v16 )
  {
    *(_QWORD *)&v30[0] = a1 + 144;
    do
    {
      while ( 1 )
      {
        v19 = v13;
        v14 = *(unsigned int *)(a1 + 156);
        v20 = *(_QWORD *)(v16 + 8);
        v21 = v13 + 1LL;
        if ( v21 > v14 )
          break;
        v16 += 16;
        *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v19) = v20;
        v13 = *(_DWORD *)(a1 + 152) + 1;
        *(_DWORD *)(a1 + 152) = v13;
        if ( v16 == v18 )
          goto LABEL_10;
      }
      a2 = v6;
      v16 += 16;
      sub_2237220(*(_QWORD *)&v30[0], v6, v21, 8);
      *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8LL * *(unsigned int *)(a1 + 152)) = v20;
      v13 = *(_DWORD *)(a1 + 152) + 1;
      *(_DWORD *)(a1 + 152) = v13;
    }
    while ( v18 != v16 );
LABEL_10:
    v12 = v13;
  }
  v22 = *(_QWORD *)(a1 + 144);
  v23 = *(_BYTE *)(a1 + 192) == 0;
  *(_QWORD *)(a1 + 104) = v12;
  *(_QWORD *)(a1 + 96) = v22;
  if ( v23 )
    *(_QWORD *)(a1 + 200) = sub_F63270(
                              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a4 + 184) + 48LL) & 0xFFFFFFFFFFFFFFF0LL),
                              (__int64)a2,
                              v22,
                              v14,
                              v17,
                              a6);
  v24 = *(_QWORD *)(a1 + 112);
  v25 = sub_17A2530(v24, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 184LL), 0);
  v26 = sub_1C36280(v24, v25, *(unsigned int *)(a1 + 140), *(unsigned int *)(a1 + 140));
  if ( v26 != 1
    && ((*(_QWORD *)(a1 + 8) = v26 & 0xFFFFFFFFFFFFFFFELL,
         v27 = *(_QWORD *)(a1 + 128),
         v28 = *(_QWORD *)(v27 + 344),
         (*(_BYTE *)(v27 + 10) & 2) != 0)
     || v28) )
  {
    *(_QWORD *)(a1 + 16) = v28;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(v27 + 352);
    result = 1;
  }
  else
  {
    result = 0;
  }
  *(_BYTE *)(a1 + 136) = result;
  return result;
}
