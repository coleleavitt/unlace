__int64 __fastcall sub_CEA880(__int64 a1, int a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx
  int v4; // ecx
  __int64 v5; // r9
  void (__fastcall ***v6)(void *); // r13
  _DWORD **v7; // r8
  _DWORD **v8; // r15
  _DWORD **v9; // r14
  _BYTE *v10; // rsi
  __int64 v11; // rax
  bool v12; // zf
  _DWORD *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r12
  unsigned int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  _QWORD *v21; // rbp
  __int64 *v22; // r12
  unsigned int v23; // ecx
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // r15
  unsigned int v27; // ebp
  __int64 v28; // rbp
  __int64 v29; // rax
  _QWORD *v30; // rdi
  __int64 v31; // rax
  _QWORD *v32; // r14
  _DWORD *v33; // r12
  __int64 i; // rax
  __int64 v36; // rax
  int v37; // [rsp+0h] [rbp-E8h]
  _BYTE *ptr; // [rsp+20h] [rbp-C8h]
  __int64 v40; // [rsp+28h] [rbp-C0h]
  _BYTE v41[184]; // [rsp+30h] [rbp-B8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 40LL))(*(_QWORD *)(a1 + 16));
  v6 = (void (__fastcall ***)(void *))v2;
  if ( v2 )
    ++*(_DWORD *)(v2 + 8);
  v7 = *(_DWORD ***)(a1 + 24);
  ptr = v41;
  v8 = v7;
  v40 = 0x1000000000LL;
  v9 = &v7[*(unsigned int *)(a1 + 32)];
  if ( v7 != v9 )
  {
    do
    {
      while ( 1 )
      {
        v13 = *v8;
        if ( *v8 )
          ++v13[8];
        v14 = sub_EDC1F0((_DWORD)v13, a2, v3, v4, (_DWORD)v7, v5, v37);
        v15 = v14;
        if ( v14 )
          ++*(_DWORD *)(v14 + 32);
        v16 = v40;
        if ( (unsigned int)v40 < HIDWORD(v40) )
        {
          v10 = ptr;
        }
        else
        {
          v17 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v40)));
          v16 = v40;
          v10 = (_BYTE *)v17;
          if ( (_DWORD)v40 )
          {
            if ( (unsigned int)(v40 - 1) <= 2 || (_BYTE *)v17 == ptr + 8 )
            {
              v36 = 0;
              do
              {
                v5 = *(_QWORD *)&ptr[v36];
                *(_QWORD *)&v10[v36] = v5;
                v36 += 8;
              }
              while ( 8LL * (unsigned int)v40 != v36 );
            }
            else
            {
              v18 = 0;
              v5 = 16LL * ((unsigned int)v40 >> 1);
              do
              {
                *(__m128i *)&v10[v18] = _mm_loadu_si128((const __m128i *)&ptr[v18]);
                v18 += 16;
              }
              while ( v5 != v18 );
              if ( (v40 & 1) != 0 )
              {
                v19 = (unsigned int)v40 & 0xFFFFFFFE;
                v5 = *(_QWORD *)&ptr[8 * v19];
                *(_QWORD *)&v10[8 * v19] = v5;
              }
            }
          }
          if ( ptr && ptr != v41 )
          {
            sub_186B220(ptr);
            v16 = v40;
          }
          ptr = v10;
          HIDWORD(v40) *= 2;
        }
        v11 = v16;
        v3 = v16 + 1;
        *(_QWORD *)&v10[8 * v11] = v15;
        v12 = v13[8]-- == 1;
        LODWORD(v40) = v3;
        if ( v12 )
          break;
        if ( v9 == ++v8 )
          goto LABEL_25;
      }
      ++v8;
      sub_ED44E0(v13);
      sub_186B220(v13);
    }
    while ( v9 != v8 );
  }
LABEL_25:
  v20 = sub_186B270(0xA8u);
  v21 = ptr;
  *(_DWORD *)(v20 + 8) = 0;
  *(_QWORD *)v20 = &off_1C59A68;
  *(_QWORD *)(v20 + 16) = v6;
  if ( v6 )
    ++*((_DWORD *)v6 + 2);
  *(_QWORD *)(v20 + 24) = v20 + 40;
  *(_QWORD *)(v20 + 32) = 0x1000000000LL;
  if ( (_DWORD)v40 )
  {
    v22 = (__int64 *)ptr;
    v23 = 0;
    do
    {
      v26 = *v22;
      if ( *v22 )
      {
        ++*(_DWORD *)(v26 + 32);
        v23 = *(_DWORD *)(v20 + 32);
      }
      v27 = *(_DWORD *)(v20 + 36);
      if ( v23 < v27 )
      {
        v24 = *(_QWORD *)(v20 + 24);
      }
      else
      {
        v28 = 2 * v27;
        v29 = sub_186B270(8 * v28);
        v23 = *(_DWORD *)(v20 + 32);
        v30 = *(_QWORD **)(v20 + 24);
        v24 = v29;
        if ( v23 )
        {
          if ( v23 - 1 <= 2 || (_QWORD *)v29 == v30 + 1 )
          {
            for ( i = 0; i != v23; ++i )
              *(_QWORD *)(v24 + i * 8) = v30[i];
          }
          else
          {
            v31 = 0;
            do
            {
              *(__m128i *)(v24 + v31 * 8) = _mm_loadu_si128((const __m128i *)&v30[v31]);
              v31 += 2;
            }
            while ( v31 != 2LL * (v23 >> 1) );
            if ( (v23 & 1) != 0 )
              *(_QWORD *)(v24 + 8LL * (v23 & 0xFFFFFFFE)) = v30[v23 & 0xFFFFFFFE];
          }
        }
        if ( (_QWORD *)(v20 + 40) != v30 && v30 )
        {
          sub_186B220(v30);
          v23 = *(_DWORD *)(v20 + 32);
        }
        *(_QWORD *)(v20 + 24) = v24;
        *(_DWORD *)(v20 + 36) = v28;
      }
      v25 = v23;
      ++v22;
      ++v23;
      *(_QWORD *)(v24 + 8 * v25) = v26;
      *(_DWORD *)(v20 + 32) = v23;
    }
    while ( &ptr[8 * (unsigned int)v40] != (_BYTE *)v22 );
    v21 = ptr;
  }
  v32 = &v21[(unsigned int)v40];
  if ( v21 < v32 )
  {
    do
    {
      while ( 1 )
      {
        v33 = (_DWORD *)*v21;
        if ( *v21 )
        {
          v12 = v33[8]-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v21 >= v32 )
          goto LABEL_52;
      }
      ++v21;
      sub_ED44E0(v33);
      sub_186B220(v33);
    }
    while ( v21 < v32 );
LABEL_52:
    v21 = ptr;
  }
  if ( v21 && v21 != (_QWORD *)v41 )
    sub_186B220(v21);
  if ( v6 )
  {
    v12 = (*((_DWORD *)v6 + 2))-- == 1;
    if ( v12 )
    {
      (**v6)(v6);
      sub_186B220(v6);
    }
  }
  return v20;
}

