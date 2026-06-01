__int64 __fastcall sub_B14CE0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  unsigned int v5; // esi
  __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // r15
  char v9; // r12
  _QWORD *v10; // r8
  __int64 v11; // rax
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // r15d
  __int64 v16; // rax
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v22; // rbx
  char *v23; // rax
  char *v24; // rdi
  unsigned __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rbx
  char *v28; // rax
  char *v29; // rdi
  unsigned __int64 v30; // rax
  __int64 v31; // rsi
  unsigned __int64 v32; // rax
  __int64 v33; // r10
  unsigned __int64 v34; // rax
  __int64 v35; // r9
  int v36; // [rsp-8h] [rbp-108h]
  _QWORD *v37; // [rsp+0h] [rbp-100h]
  int v38[2]; // [rsp+8h] [rbp-F8h]
  __int64 v39; // [rsp+10h] [rbp-F0h]
  _QWORD *v40; // [rsp+18h] [rbp-E8h]
  __int64 v41; // [rsp+20h] [rbp-E0h]
  __int64 v43; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v44; // [rsp+38h] [rbp-C8h]
  void *ptr; // [rsp+40h] [rbp-C0h]
  __int64 v46; // [rsp+48h] [rbp-B8h]
  _BYTE v47[176]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = *(_QWORD *)(a2 + 24);
  v5 = *(_DWORD *)(a1 + 28);
  ptr = v47;
  v46 = 0x1000000000LL;
  v43 = 0;
  *(_QWORD *)v38 = *(_QWORD *)(v4 + 104);
  v44 = *(_QWORD *)v38;
  sub_894B80(v4, v5, &v43);
  v41 = v43;
  v39 = v44;
  v6 = sub_9836E0(a2, **(_DWORD **)(a1 + 16));
  v7 = v46;
  v8 = v6;
  v9 = v6 != 0;
  if ( (unsigned int)v46 >= HIDWORD(v46) )
  {
    v27 = (unsigned int)(2 * HIDWORD(v46));
    v28 = (char *)sub_186B270(8 * v27);
    v7 = v46;
    v29 = (char *)ptr;
    v10 = v28;
    if ( (_DWORD)v46 )
    {
      if ( (unsigned int)(v46 - 1) <= 2 || v28 == (char *)ptr + 8 )
      {
        v34 = 0;
        v35 = 8LL * (unsigned int)v46;
        do
        {
          v10[v34 / 8] = *(_QWORD *)&v29[v34];
          v34 += 8LL;
        }
        while ( v35 != v34 );
      }
      else
      {
        v30 = 0;
        v31 = 16LL * ((unsigned int)v46 >> 1);
        do
        {
          *(__m128i *)&v10[v30 / 8] = _mm_loadu_si128((const __m128i *)&v29[v30]);
          v30 += 16LL;
        }
        while ( v30 != v31 );
        if ( (v7 & 1) != 0 )
          v10[v7 & 0xFFFFFFFE] = *(_QWORD *)&v29[8 * (v7 & 0xFFFFFFFE)];
      }
    }
    if ( v29 && v29 != v47 )
    {
      v40 = v10;
      sub_186B220(v29);
      v7 = v46;
      v10 = v40;
    }
    ptr = v10;
    HIDWORD(v46) = v27;
  }
  else
  {
    v10 = ptr;
  }
  v11 = v7;
  v12 = v7 + 1;
  v10[v11] = v8;
  LODWORD(v46) = v12;
  v13 = *(_QWORD *)(a1 + 16);
  v14 = *(_QWORD *)(v13 + 8);
  if ( v14 )
  {
    v15 = *(_DWORD *)(v13 + 16);
    do
    {
      if ( v15 >= *(_DWORD *)(v14 - 4) )
        break;
      v16 = sub_9836E0(a2, *(_DWORD *)(v14 + 4LL * v15) ^ 1u);
      v17 = v46;
      v18 = v16;
      v9 &= v16 != 0;
      if ( (unsigned int)v46 >= HIDWORD(v46) )
      {
        v40 = (_QWORD *)v16;
        v22 = (unsigned int)(2 * HIDWORD(v46));
        v23 = (char *)sub_186B270(8 * v22);
        v17 = v46;
        v24 = (char *)ptr;
        v10 = v23;
        v18 = (__int64)v40;
        if ( (_DWORD)v46 )
        {
          if ( (unsigned int)(v46 - 1) <= 2 || v23 == (char *)ptr + 8 )
          {
            v32 = 0;
            v33 = 8LL * (unsigned int)v46;
            do
            {
              v10[v32 / 8] = *(_QWORD *)&v24[v32];
              v32 += 8LL;
            }
            while ( v32 != v33 );
          }
          else
          {
            v25 = 0;
            v26 = 16LL * ((unsigned int)v46 >> 1);
            do
            {
              *(__m128i *)&v10[v25 / 8] = _mm_loadu_si128((const __m128i *)&v24[v25]);
              v25 += 16LL;
            }
            while ( v25 != v26 );
            if ( (v17 & 1) != 0 )
              v10[v17 & 0xFFFFFFFE] = *(_QWORD *)&v24[8 * (v17 & 0xFFFFFFFE)];
          }
        }
        if ( v24 && v24 != v47 )
        {
          v37 = v10;
          sub_186B220(v24);
          v17 = v46;
          v10 = v37;
          v18 = (__int64)v40;
        }
        ptr = v10;
        HIDWORD(v46) = v22;
      }
      else
      {
        v10 = ptr;
      }
      v19 = v17;
      v12 = v17 + 1;
      ++v15;
      v10[v19] = v18;
      LODWORD(v46) = v12;
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
    }
    while ( v14 );
  }
  if ( v9 )
    v20 = sub_15E0A80(
            v38[0],
            *(_DWORD *)(a1 + 24),
            v41,
            v12,
            (int)v10,
            0,
            0,
            v36,
            (int)v37,
            v38[0],
            v39,
            (int)v40,
            v41,
            a1,
            v43,
            v44,
            (int)ptr,
            (void *)v46);
  else
    v20 = 0;
  sub_B035B0(v41, v39);
  if ( ptr != v47 && ptr )
    sub_186B220(ptr);
  return v20;
}

