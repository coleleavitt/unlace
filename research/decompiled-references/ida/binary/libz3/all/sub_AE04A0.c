__int64 __fastcall sub_AE04A0(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdi
  unsigned int *v7; // rsi
  __int64 v8; // rax
  unsigned int v9; // eax
  unsigned int v10; // r14d
  unsigned int v11; // edx
  _QWORD *v12; // rcx
  __int64 v13; // rax
  unsigned int *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r13
  __int64 v18; // rbx
  char *v19; // rax
  char *v20; // rdi
  __int64 v21; // rax
  _QWORD *v22; // r13
  __int64 v23; // r9
  _DWORD *v24; // rdx
  __int64 v25; // rax
  _QWORD *v26; // rbx
  int v27; // eax
  __int64 v28; // rax
  __int64 *v29; // [rsp+0h] [rbp-110h]
  __int64 v30; // [rsp+8h] [rbp-108h]
  int v31; // [rsp+10h] [rbp-100h]
  _QWORD *v32; // [rsp+18h] [rbp-F8h]
  int v33; // [rsp+20h] [rbp-F0h]
  char *v34; // [rsp+28h] [rbp-E8h]
  __int64 v35; // [rsp+30h] [rbp-E0h]
  _QWORD *v36; // [rsp+38h] [rbp-D8h]
  __int64 v37; // [rsp+48h] [rbp-C8h] BYREF
  void *ptr; // [rsp+50h] [rbp-C0h]
  __int64 v39; // [rsp+58h] [rbp-B8h]
  _BYTE v40[176]; // [rsp+60h] [rbp-B0h] BYREF

  v34 = v40;
  v1 = a1[17];
  ptr = v40;
  result = 0x1000000000LL;
  v37 = 0;
  v39 = 0x1000000000LL;
  if ( !v1 )
    return result;
  result = v1 + 32LL * *(unsigned int *)(v1 - 4);
  v30 = result;
  if ( v1 == result )
    return result;
  v3 = a1[6];
  v36 = (_QWORD *)(v1 + 16);
  v29 = &v37;
LABEL_4:
  v5 = *(_QWORD *)(v3 + 8832);
  v6 = v3;
  if ( v5 )
  {
    while ( 1 )
    {
      v7 = (unsigned int *)*(v36 - 2);
      v33 = (int)v7;
      v8 = *v7;
      if ( (unsigned int)v8 >= *(_DWORD *)(v5 - 4) )
      {
        if ( (_QWORD *)v30 == v36 + 2 )
          goto LABEL_40;
        v36 += 4;
        goto LABEL_4;
      }
      if ( *(_DWORD *)(v5 + 4 * v8) != 0x7FFFFFFF )
        break;
LABEL_38:
      if ( (_QWORD *)v30 != v36 + 2 )
      {
        v3 = a1[6];
        v36 += 4;
        v5 = *(_QWORD *)(v3 + 8832);
        v6 = v3;
        if ( v5 )
          continue;
      }
      goto LABEL_40;
    }
    LODWORD(v39) = 0;
    v9 = v7[5];
    v10 = *((_DWORD *)v36 + 2);
    if ( v9 )
    {
      v11 = 0;
      LODWORD(v35) = v10 + v9;
      while ( 1 )
      {
        v14 = *(unsigned int **)(a1[19] + 8LL * v10);
        v15 = *(_QWORD *)(v6 + 8656);
        if ( !v15 || (v16 = *v14, (unsigned int)v16 >= *(_DWORD *)(v15 - 4)) || !*(_QWORD *)(v15 + 8 * v16) )
        {
          sub_B6F6E0(v6);
          v11 = v39;
          v16 = *v14;
          v15 = *(_QWORD *)(a1[6] + 8656);
        }
        v17 = *(_QWORD *)(v15 + 8 * v16);
        if ( v11 < HIDWORD(v39) )
        {
          v12 = ptr;
        }
        else
        {
          v18 = (unsigned int)(2 * HIDWORD(v39));
          v19 = (char *)sub_186B270(8 * v18);
          v11 = v39;
          v20 = (char *)ptr;
          v12 = v19;
          if ( (_DWORD)v39 )
          {
            if ( (unsigned int)(v39 - 1) <= 2 || v19 == (char *)ptr + 8 )
            {
              v28 = 0;
              do
              {
                v12[v28] = *(_QWORD *)&v20[v28 * 8];
                ++v28;
              }
              while ( v11 != v28 );
            }
            else
            {
              v21 = 0;
              do
              {
                *(__m128i *)&v12[v21] = _mm_loadu_si128((const __m128i *)&v20[v21 * 8]);
                v21 += 2;
              }
              while ( v21 != 2LL * (v11 >> 1) );
              if ( (v11 & 1) != 0 )
                v12[v11 & 0xFFFFFFFE] = *(_QWORD *)&v20[8 * (v11 & 0xFFFFFFFE)];
            }
          }
          if ( v20 != v34 && v20 )
          {
            v32 = v12;
            sub_186B220(v20);
            v11 = v39;
            v12 = v32;
          }
          ptr = v12;
          HIDWORD(v39) = v18;
        }
        v13 = v11++;
        ++v10;
        v12[v13] = v17;
        LODWORD(v39) = v11;
        if ( (_DWORD)v35 == v10 )
          break;
        v6 = a1[6];
      }
    }
    v22 = v36;
    v23 = *v36;
    if ( *v36 )
    {
      if ( *(_WORD *)(v23 + 4) )
      {
        v25 = 1;
        goto LABEL_32;
      }
      v24 = *(_DWORD **)(*(_QWORD *)(v23 + 16) + 24LL);
      v25 = 1;
      if ( !v24 || *v24 || v24[1] != 5 || (v25 = *(unsigned int *)(v23 + 24), v22 = (_QWORD *)(v23 + 32), (_DWORD)v25) )
      {
LABEL_32:
        v26 = &v22[v25];
        do
        {
          if ( *(_DWORD *)(*a1 + 712) )
          {
            v35 = *v22;
            sub_15DFC30(*a1, *v22);
          }
          sub_B6F170(a1[6], (int)v29, v30, v31, (int)v32, v33, (int)v34, v35, v36);
          ++v22;
        }
        while ( v26 != v22 );
      }
    }
    sub_8E86E0(a1[6]);
    goto LABEL_38;
  }
LABEL_40:
  if ( v37 )
    sub_186B220((void *)(v37 - 8));
  v27 = (int)v34;
  LOBYTE(v27) = ptr == v34;
  LOBYTE(v5) = ptr == nullptr;
  result = (unsigned int)v5 | v27;
  if ( !(_BYTE)result )
    return sub_186B220(ptr);
  return result;
}

