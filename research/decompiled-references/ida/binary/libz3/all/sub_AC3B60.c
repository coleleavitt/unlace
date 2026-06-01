__int64 __fastcall sub_AC3B60(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int *v9; // r15
  unsigned int *v10; // rbx
  int v11; // edi
  int *v12; // r8
  unsigned int v13; // esi
  __int64 v14; // rax
  __int64 v15; // rsi
  int v16; // edi
  int *v17; // r8
  unsigned int v18; // esi
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rbx
  int v27; // r8d
  int v28; // ecx
  __int64 (__fastcall *v29)(__int64); // rax
  int v30; // esi
  __int64 v31; // rbx
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // eax
  int v36; // [rsp-8h] [rbp-F8h]
  int *v37; // [rsp+0h] [rbp-F0h]
  __int64 v38; // [rsp+8h] [rbp-E8h]
  __int64 v39; // [rsp+10h] [rbp-E0h]
  int *v40; // [rsp+18h] [rbp-D8h]
  __int64 v41; // [rsp+20h] [rbp-D0h]
  __int64 v42; // [rsp+28h] [rbp-C8h]
  int *ptr; // [rsp+30h] [rbp-C0h]
  __int64 v44; // [rsp+38h] [rbp-B8h]
  int v45; // [rsp+40h] [rbp-B0h] BYREF
  void *v46; // [rsp+48h] [rbp-A8h]

  v40 = &v45;
  ptr = &v45;
  v44 = 0x1000000000LL;
  v4 = *(_QWORD *)(a2 + 24);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = 8LL * *(unsigned int *)(a1 + 24);
  v38 = v4;
  v7 = *(_QWORD *)(v5 + 504);
  v8 = 8LL * *(unsigned int *)(a1 + 28);
  v9 = *(unsigned int **)(v7 + v6);
  if ( !v9 || (v42 = (__int64)&v9[*(v9 - 1)], v9 == (unsigned int *)v42) )
  {
LABEL_45:
    v25 = sub_8E7230(v38, **(_DWORD ***)(*(_QWORD *)(v5 + 32) + v6), **(_DWORD ***)(*(_QWORD *)(v5 + 32) + v8));
    v26 = *(_QWORD *)(v38 + 104);
    v27 = (int)ptr;
    v28 = v44;
    v29 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL);
    if ( v29 == sub_AC39C0 )
    {
      v30 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
    }
    else
    {
      LODWORD(v39) = (_DWORD)ptr;
      HIDWORD(v41) = v44;
      v42 = v25;
      v35 = v29(a1);
      v27 = (int)ptr;
      v28 = v44;
      v30 = v35;
      LODWORD(v25) = v42;
    }
    v31 = sub_15E0A80(
            v26,
            v30,
            v25,
            v28,
            v27,
            0,
            0,
            v36,
            (int)v37,
            v38,
            v39,
            (int)&v45,
            v41,
            v42,
            (char)ptr,
            v44,
            v45,
            v46);
    goto LABEL_48;
  }
  BYTE4(v41) = 1;
  v10 = *(unsigned int **)(v7 + 8LL * *(unsigned int *)(a1 + 28));
  do
  {
    v18 = *v9;
    if ( *v9 >> 1 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 8848LL) + v18) != 1 )
        v18 ^= 1u;
      v19 = sub_9836E0(a2, v18);
      v20 = v19;
      if ( v19 )
      {
        v11 = v44;
        if ( (unsigned int)v44 >= HIDWORD(v44) )
        {
          v39 = v19;
          v23 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v44)));
          v11 = v44;
          v12 = (int *)v23;
          v20 = v39;
          if ( (_DWORD)v44 )
          {
            if ( (unsigned int)(v44 - 1) <= 2 || (int *)v23 == ptr + 2 )
            {
              v33 = 0;
              do
              {
                *(_QWORD *)&v12[v33] = *(_QWORD *)&ptr[v33];
                v33 += 2;
              }
              while ( 2LL * (unsigned int)v44 != v33 );
            }
            else
            {
              v24 = 0;
              do
              {
                *(__m128i *)&v12[v24] = _mm_loadu_si128((const __m128i *)&ptr[v24]);
                v24 += 4;
              }
              while ( 4LL * ((unsigned int)v44 >> 1) != v24 );
              if ( (v44 & 1) != 0 )
                *(_QWORD *)&v12[2 * (v44 & 0xFFFFFFFE)] = *(_QWORD *)&ptr[2 * (v44 & 0xFFFFFFFE)];
            }
          }
          if ( ptr && ptr != &v45 )
          {
            v37 = v12;
            sub_186B220(ptr);
            v11 = v44;
            v12 = v37;
          }
          ptr = v12;
          HIDWORD(v44) *= 2;
        }
        else
        {
          v12 = ptr;
        }
        *(_QWORD *)&v12[2 * v11] = v20;
        LODWORD(v44) = v11 + 1;
      }
      else
      {
        BYTE4(v41) = 0;
      }
    }
    v13 = *v10;
    if ( *v10 >> 1 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 8848LL) + v13) != 1 )
        v13 ^= 1u;
      v14 = sub_9836E0(a2, v13);
      v15 = v14;
      if ( v14 )
      {
        v16 = v44;
        if ( (unsigned int)v44 >= HIDWORD(v44) )
        {
          v39 = v14;
          v21 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v44)));
          v16 = v44;
          v17 = (int *)v21;
          v15 = v39;
          if ( (_DWORD)v44 )
          {
            if ( (unsigned int)(v44 - 1) <= 2 || (int *)v21 == ptr + 2 )
            {
              v34 = 0;
              do
              {
                *(_QWORD *)&v17[v34] = *(_QWORD *)&ptr[v34];
                v34 += 2;
              }
              while ( 2LL * (unsigned int)v44 != v34 );
            }
            else
            {
              v22 = 0;
              do
              {
                *(__m128i *)&v17[v22] = _mm_loadu_si128((const __m128i *)&ptr[v22]);
                v22 += 4;
              }
              while ( 4LL * ((unsigned int)v44 >> 1) != v22 );
              if ( (v44 & 1) != 0 )
                *(_QWORD *)&v17[2 * (v44 & 0xFFFFFFFE)] = *(_QWORD *)&ptr[2 * (v44 & 0xFFFFFFFE)];
            }
          }
          if ( ptr != &v45 && ptr )
          {
            v37 = v17;
            sub_186B220(ptr);
            v16 = v44;
            v17 = v37;
          }
          ptr = v17;
          HIDWORD(v44) *= 2;
        }
        else
        {
          v17 = ptr;
        }
        *(_QWORD *)&v17[2 * v16] = v15;
        LODWORD(v44) = v16 + 1;
      }
      else
      {
        BYTE4(v41) = 0;
      }
    }
    ++v9;
    ++v10;
  }
  while ( (unsigned int *)v42 != v9 );
  if ( BYTE4(v41) )
  {
    v5 = *(_QWORD *)(a1 + 16);
    v6 = 8LL * *(unsigned int *)(a1 + 24);
    v8 = 8LL * *(unsigned int *)(a1 + 28);
    goto LABEL_45;
  }
  v31 = 0;
LABEL_48:
  if ( ptr && ptr != v40 )
    sub_186B220(ptr);
  return v31;
}

