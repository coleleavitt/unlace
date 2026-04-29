unsigned __int64 __fastcall sub_2B9C00(__int64 a1)
{
  int v1; // ebp
  __int64 v2; // rax
  __int64 v3; // rbx
  int v4; // eax
  unsigned __int64 v5; // rdx
  int v6; // edx
  int v7; // eax
  unsigned int v8; // edx
  int v9; // ebp
  __int64 i; // rax
  __int64 v11; // rbx
  int v12; // eax
  char v13; // r12
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rcx
  int v17; // eax
  unsigned __int64 v18; // r12
  size_t v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rax
  _QWORD *v23; // r12
  unsigned __int64 v24; // r15
  __m128i si128; // xmm1
  const void *v26; // rbx
  void *v27; // rax
  __int64 v28; // rax
  _QWORD v29[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v30; // [rsp+20h] [rbp-58h]
  __int64 v31; // [rsp+28h] [rbp-50h]
  unsigned __int64 v32; // [rsp+38h] [rbp-40h]

  v1 = 0;
  v32 = __readfsqword(0x28u);
  v2 = 0;
  if ( *(_QWORD *)(a1 + 1264) )
  {
    do
    {
      while ( 1 )
      {
        v3 = *(_QWORD *)(a1 + 1256) + 96 * v2;
        v4 = *(_DWORD *)(v3 + 88);
        if ( (v4 & 1) == 0 && (v4 & 2) == 0 )
          break;
        v2 = ++v1;
        if ( (unsigned __int64)v1 >= *(_QWORD *)(a1 + 1264) )
          goto LABEL_7;
      }
      sub_2B9980((_QWORD *)v3);
      memmove((void *)v3, (const void *)(v3 + 96), *(_QWORD *)(a1 + 1256) + 96LL * *(_QWORD *)(a1 + 1264) - v3 - 96);
      v5 = *(_QWORD *)(a1 + 1264) - 1LL;
      v2 = v1;
      *(_QWORD *)(a1 + 1264) = v5;
    }
    while ( v1 < v5 );
  }
LABEL_7:
  *(_QWORD *)(a1 + 1296) = *(_QWORD *)(a1 + 80);
  v6 = *(_DWORD *)(a1 + 1304);
  v7 = v6 | 1;
  v8 = v6 & 0xFFFFFFFE;
  if ( (*(_BYTE *)a1 & 1) == 0 )
    v7 = v8;
  v9 = 0;
  *(_DWORD *)(a1 + 1304) = v7;
  for ( i = 0; (unsigned __int64)v9 < *(_QWORD *)(a1 + 440); i = ++v9 )
  {
    v11 = *(_QWORD *)(a1 + 432) + 104 * i;
    v12 = *(_DWORD *)(v11 + 24);
    if ( (v12 & 0x200000) != 0 )
    {
      v23 = *(_QWORD **)(a1 + 1280);
      if ( !v23 )
        goto LABEL_37;
      v24 = *v23 & 0xFFFFFFFFFFFFFFFCLL;
      if ( v24 )
      {
        if ( (*(_BYTE *)(*v23 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
          goto LABEL_37;
        do
        {
          if ( (int)sub_3307E0(v11, v24 + 24) >= 0 )
          {
            if ( (int)sub_3307E0(v24 + 24, v11) >= 0 )
              goto LABEL_42;
            v24 = *(_QWORD *)(v24 + 16);
          }
          else
          {
            v24 = *(_QWORD *)(v24 + 8);
          }
        }
        while ( (*(_BYTE *)v24 & 2) == 0 );
        v24 = *(_QWORD *)(a1 + 1280);
LABEL_42:
        if ( v23 == (_QWORD *)v24 )
        {
LABEL_37:
          v13 = 1;
LABEL_13:
          v14 = *(_QWORD *)(a1 + 1264);
          v15 = *(_QWORD *)(a1 + 1256);
          if ( 96 * v14 )
          {
            while ( (unsigned int)sub_3307E0(v15, v11) )
            {
              v14 = *(_QWORD *)(a1 + 1264);
              v16 = *(_QWORD *)(a1 + 1256);
              v15 += 96;
              if ( v15 == v16 + 96 * v14 )
                goto LABEL_45;
            }
            if ( v15 )
              goto LABEL_18;
            v16 = *(_QWORD *)(a1 + 1256);
            v14 = *(_QWORD *)(a1 + 1264);
LABEL_45:
            v15 = v16;
          }
          if ( *(_QWORD *)(a1 + 1272) < (unsigned __int64)(v14 + 1) )
          {
            v28 = qvector_reserve(a1 + 1256, v15, v14 + 1, 96);
            v14 = *(_QWORD *)(a1 + 1264);
            *(_QWORD *)(a1 + 1256) = v28;
            v15 = v28;
          }
          si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
          v15 += 96 * v14;
          *(_DWORD *)v15 = 0;
          *(_QWORD *)(v15 + 24) = 0;
          *(_QWORD *)(v15 + 48) = 0;
          *(_QWORD *)(v15 + 56) = 0;
          *(_QWORD *)(v15 + 80) = -1;
          *(_DWORD *)(v15 + 88) = 0;
          *(__m128i *)(v15 + 8) = si128;
          *(_OWORD *)(v15 + 32) = 0;
          *(_OWORD *)(v15 + 64) = 0;
          ++*(_QWORD *)(a1 + 1264);
          LODWORD(v29[0]) = 0;
          copy_argloc(v29, v11);
          v30 = *(_QWORD *)(v11 + 16);
          copy_argloc(v15, v29);
          *(_QWORD *)(v15 + 16) = v30;
          cleanup_argloc(v29);
LABEL_18:
          v17 = *(_DWORD *)(v11 + 24);
          if ( (v17 & 0x20) != 0 )
          {
            sub_2B0B30(v15 + 24, v11 + 32);
            v17 = *(_DWORD *)(v11 + 24);
          }
          if ( (v17 & 0x10040) != 0 )
          {
            copy_tinfo_t(v15 + 48, v11 + 80);
            v17 = *(_DWORD *)(v11 + 24);
          }
          if ( (v17 & 0x40000) != 0 )
            *(_DWORD *)(v15 + 88) |= 4u;
          if ( v13 )
            *(_DWORD *)(v15 + 88) |= 8u;
          if ( (*(_BYTE *)(v11 + 27) & 1) != 0 )
            *(_DWORD *)(v15 + 88) |= 0x10u;
          if ( v15 + 56 != v11 + 56 )
          {
            v18 = *(_QWORD *)(v11 + 64);
            if ( v18 && (v19 = v18 - 1, v18 != 1) )
            {
              v26 = *(const void **)(v11 + 56);
              v27 = *(void **)(v15 + 56);
              if ( *(_QWORD *)(v15 + 72) < v18 )
              {
                v27 = (void *)qvector_reserve(v15 + 56, *(_QWORD *)(v15 + 56), v18, 1);
                v19 = v18 - 1;
                *(_QWORD *)(v15 + 56) = v27;
              }
              *(_QWORD *)(v15 + 64) = v18;
              memmove(v27, v26, v19);
              *(_BYTE *)(*(_QWORD *)(v15 + 56) + v18 - 1) = 0;
            }
            else
            {
              *(_QWORD *)(v15 + 64) = 0;
            }
          }
          continue;
        }
        v12 = *(_DWORD *)(v11 + 24);
      }
    }
    v13 = 0;
    if ( (v12 & 0x9040060) != 0 || *(_QWORD *)(v11 + 64) > 1u )
      goto LABEL_13;
  }
  v20 = *(_QWORD *)(a1 + 40);
  LOBYTE(v30) = 118;
  v29[0] = &off_4E11B8;
  v21 = *(_QWORD *)(a1 + 1504);
  v29[1] = v20;
  v31 = a1 + 1256;
  sub_2B6200(*(_QWORD *)(v21 + 96), (__int64)v29, 0);
  return v32 - __readfsqword(0x28u);
}
