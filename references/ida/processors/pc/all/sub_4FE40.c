__int64 __fastcall sub_4FE40(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        double a7,
        __m128i a8,
        __m128i a9)
{
  __int64 v11; // rax
  int v14; // ecx
  int v16; // r9d
  unsigned int *v17; // r10
  unsigned int v18; // edx
  unsigned int v19; // eax
  unsigned int v20; // r13d
  __int16 v21; // cx
  char v22; // dl
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v27; // r14
  unsigned __int64 *v28; // rsi
  __int64 v29; // rdx
  unsigned __int64 *v30; // rcx
  unsigned __int64 *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned int v35; // [rsp+Ch] [rbp-3Ch] BYREF
  unsigned __int64 v36[7]; // [rsp+10h] [rbp-38h] BYREF

  v36[1] = __readfsqword(0x28u);
  v11 = *(unsigned __int8 *)(a2 + 5);
  if ( (unsigned __int8)v11 > 7u )
  {
    *(_DWORD *)(a1 + 952) = -1;
    return 0;
  }
  v14 = dword_95C80[v11];
  *(_DWORD *)(a1 + 952) = v14;
  if ( v14 == -1 )
    return 0;
  if ( !*(_BYTE *)(a2 + 32) )
  {
    v16 = 0;
    goto LABEL_5;
  }
  v16 = *(_BYTE *)(a2 + 33) >> 6;
  if ( v14 < v16 )
    return 0;
LABEL_5:
  v17 = *(unsigned int **)(a1 + 376);
  v18 = *v17 & 0xFFFFFBFB;
  if ( v14 == 2 )
  {
    *v17 = v18 | 4;
  }
  else if ( 1 << v14 > 4 )
  {
    *v17 |= 0x404u;
  }
  else
  {
    v19 = *v17 & 0xFFFFFBFB;
    if ( !v14 )
    {
      BYTE1(v19) = BYTE1(v18) | 4;
      v18 = v19;
    }
    *v17 = v18;
  }
  *(_DWORD *)(a1 + 952) -= v16;
  v20 = sub_4FB50(a1, (unsigned __int64 *)(a1 + 896), v36, &v35, a2, v16, a7, a8, a9, a4, a5, a6);
  if ( !(_BYTE)v20 )
    return 0;
  v21 = v35;
  v22 = 7;
  v23 = *(_DWORD *)(a1 + 44) & 0x1018;
  if ( v23 != 4112 )
    v22 = 2 - (v23 == 4096 || v23 == 8);
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v21;
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = v22;
  *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) = *(_QWORD *)(a1 + 896);
  if ( *(_BYTE *)(a2 + 1) == 3 || (v24 = *(_QWORD *)(a2 + 16)) == 0 )
  {
    v27 = v36[0];
    if ( v36[0] != -1 )
    {
      v28 = *(unsigned __int64 **)(a1 + 840);
      v29 = *(_QWORD *)(a1 + 848);
      v30 = &v28[v29];
      if ( v28 == v30 )
        goto LABEL_31;
      v31 = *(unsigned __int64 **)(a1 + 840);
      while ( v36[0] != *v31 )
      {
        if ( v30 == ++v31 )
          goto LABEL_31;
      }
      if ( v31 == v30 )
      {
LABEL_31:
        if ( *(_QWORD *)(a1 + 856) < (unsigned __int64)(v29 + 1) )
        {
          v33 = qvector_reserve();
          v34 = *(_QWORD *)(a1 + 848);
          *(_QWORD *)(a1 + 840) = v33;
          v30 = (unsigned __int64 *)(v33 + 8 * v34);
        }
        *v30 = v27;
        ++*(_QWORD *)(a1 + 848);
      }
    }
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 888) + 32LL) + 16LL)
                                             & (*(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) + v24);
  }
  v25 = *(_QWORD *)(a1 + 376);
  if ( !*(_DWORD *)(a1 + 952) )
  {
    v32 = *(_QWORD *)(a1 + 864);
    *(_BYTE *)(a1 + 516) = 1;
    *(_DWORD *)(a1 + 964) = a3;
    if ( *(_BYTE *)(v32 + 1) == 1 )
    {
      *(_DWORD *)(v25 + 64) = *(unsigned __int16 *)(v32 + 6);
      *(_BYTE *)(*(_QWORD *)(a1 + 376) + 68LL) = *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL);
      v25 = *(_QWORD *)(a1 + 376);
    }
    *(_BYTE *)(a1 + 969) = 0;
  }
  if ( *(_QWORD *)(v25 + 8) )
    *(_BYTE *)(a1 + 515) = 1;
  if ( a3 != -1 )
  {
    *(_DWORD *)(a1 + 956) = a3;
    *(_BYTE *)(a1 + 904) = *(_BYTE *)a2;
  }
  return v20;
}
