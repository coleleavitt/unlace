__int64 __fastcall sub_CA18E0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r14
  unsigned int v5; // edx
  unsigned int v6; // ebx
  _QWORD *v7; // rbp
  __int64 *v8; // rbp
  __int64 v9; // rax
  __int64 *v10; // r12
  unsigned __int16 v11; // ax
  unsigned int v12; // ebp
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r13
  char v16; // di
  unsigned int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // rdx
  unsigned __int16 v20; // ax
  char v21; // al
  unsigned int v22; // edx
  unsigned int v23; // ebx
  _QWORD *v24; // rbp
  __int64 v25; // rdx
  __int64 *v26; // rdx
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rbx
  __int64 *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rbx
  _QWORD *v33; // rdi
  __int64 v34; // r10
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rax
  _QWORD *v38; // rdi
  __int64 v39; // rax
  __int64 k; // r10
  __int64 j; // rax
  __int64 v42; // rbx
  __int64 v43; // rax
  _QWORD *v44; // rdi
  __int64 v45; // rax
  unsigned int v46; // edx
  __int64 *v47; // rax
  __int64 v48; // rax
  __int64 i; // rax
  __int64 v51; // [rsp+18h] [rbp-150h]
  __int64 *ptr; // [rsp+20h] [rbp-148h]
  __int64 v53; // [rsp+28h] [rbp-140h]
  __int64 v54; // [rsp+30h] [rbp-138h] BYREF
  int v55; // [rsp+38h] [rbp-130h]

  result = *(unsigned __int8 *)(a3 + 6);
  if ( (result & 1) == 0 )
  {
    v4 = a3;
    *(_BYTE *)(a3 + 6) = result | 1;
    v5 = *(_DWORD *)(a2 + 8);
    v6 = *(_DWORD *)(a2 + 12);
    if ( v5 >= v6 )
    {
      v42 = 2 * v6;
      v43 = sub_186B270(8 * v42);
      v5 = *(_DWORD *)(a2 + 8);
      v44 = *(_QWORD **)a2;
      v7 = (_QWORD *)v43;
      if ( v5 )
      {
        if ( v5 - 1 <= 2 || (_QWORD *)v43 == v44 + 1 )
        {
          for ( i = 0; i != v5; ++i )
            v7[i] = v44[i];
        }
        else
        {
          v45 = 0;
          do
          {
            *(__m128i *)&v7[v45] = _mm_loadu_si128((const __m128i *)&v44[v45]);
            v45 += 2;
          }
          while ( 2LL * (v5 >> 1) != v45 );
          if ( (v5 & 1) != 0 )
            v7[v5 & 0xFFFFFFFE] = v44[v5 & 0xFFFFFFFE];
        }
      }
      if ( v44 && v44 != (_QWORD *)(a2 + 16) )
      {
        sub_186B220(v44);
        v5 = *(_DWORD *)(a2 + 8);
      }
      *(_QWORD *)a2 = v7;
      *(_DWORD *)(a2 + 12) = v42;
    }
    else
    {
      v7 = *(_QWORD **)a2;
    }
    v7[v5] = v4;
    v8 = &v54;
    *(_DWORD *)(a2 + 8) = v5 + 1;
    ptr = &v54;
    v54 = v4;
    v55 = 0;
    v53 = 0x1000000001LL;
    v9 = 0;
    while ( 2 )
    {
      while ( 1 )
      {
        v10 = &v8[2 * v9];
        v11 = *(_WORD *)(v4 + 4);
        if ( v11 != 2 )
          break;
        if ( *((_DWORD *)v10 + 2)
          || (v15 = *(_QWORD *)(v4 + 24), *((_DWORD *)v10 + 2) = 1, v21 = *(_BYTE *)(v15 + 6), (v21 & 1) != 0) )
        {
          sub_16270E(v4);
        }
        *(_BYTE *)(v15 + 6) = v21 | 1;
        v22 = *(_DWORD *)(a2 + 8);
        v23 = *(_DWORD *)(a2 + 12);
        if ( v22 >= v23 )
        {
          v36 = 2 * v23;
          v37 = sub_186B270(8 * v36);
          v22 = *(_DWORD *)(a2 + 8);
          v38 = *(_QWORD **)a2;
          v24 = (_QWORD *)v37;
          if ( v22 )
          {
            if ( v22 - 1 <= 2 || (_QWORD *)v37 == v38 + 1 )
            {
              for ( j = 0; j != v22; ++j )
                v24[j] = v38[j];
            }
            else
            {
              v39 = 0;
              do
              {
                *(__m128i *)&v24[v39] = _mm_loadu_si128((const __m128i *)&v38[v39]);
                v39 += 2;
              }
              while ( v39 != 2LL * (v22 >> 1) );
              if ( (v22 & 1) != 0 )
                v24[v22 & 0xFFFFFFFE] = v38[v22 & 0xFFFFFFFE];
            }
          }
          if ( v38 && v38 != (_QWORD *)(a2 + 16) )
          {
            sub_186B220(v38);
            v22 = *(_DWORD *)(a2 + 8);
          }
          *(_QWORD *)a2 = v24;
          *(_DWORD *)(a2 + 12) = v36;
        }
        else
        {
          v24 = *(_QWORD **)a2;
        }
        v24[v22] = v15;
        *(_DWORD *)(a2 + 8) = v22 + 1;
        v25 = (unsigned int)v53;
        if ( (unsigned int)v53 >= HIDWORD(v53) )
        {
          v29 = (unsigned int)(2 * HIDWORD(v53));
          v8 = (__int64 *)sub_186B270(16 * v29);
          v30 = ptr;
          v35 = 0;
          v25 = (unsigned int)v53;
          if ( (_DWORD)v53 )
          {
            do
            {
              *(__m128i *)&v8[v35] = _mm_loadu_si128((const __m128i *)&ptr[v35]);
              v35 += 2;
            }
            while ( v35 != 2LL * (unsigned int)v53 );
          }
          if ( ptr && ptr != &v54 )
          {
LABEL_37:
            sub_186B220(v30);
            v25 = (unsigned int)v53;
          }
LABEL_38:
          ptr = v8;
          HIDWORD(v53) = v29;
        }
        else
        {
LABEL_28:
          v8 = ptr;
        }
        v26 = &v8[2 * v25];
        *v26 = v15;
        *((_DWORD *)v26 + 2) = 0;
        v27 = (unsigned int)v53;
        v28 = v53 + 1;
LABEL_30:
        LODWORD(v53) = v28;
        v9 = (unsigned int)(v28 - 1);
        v4 = v8[2 * v27];
      }
      if ( v11 > 2u )
      {
        sub_1872CE0("");
        sub_1873130(114, 100);
      }
      if ( v11 )
        sub_16270E(v4);
      v12 = *(_DWORD *)(v4 + 24);
LABEL_10:
      v13 = *((unsigned int *)v10 + 2);
      v14 = v4 + 8 * v13;
      while ( (unsigned int)v13 < v12 )
      {
        v15 = *(_QWORD *)(v14 + 32);
        LODWORD(v13) = v13 + 1;
        v14 += 8;
        *((_DWORD *)v10 + 2) = v13;
        v16 = *(_BYTE *)(v15 + 6);
        if ( (v16 & 1) == 0 )
        {
          *(_BYTE *)(v15 + 6) = v16 | 1;
          v17 = *(_DWORD *)(a2 + 8);
          v18 = *(_DWORD *)(a2 + 12);
          if ( v17 >= v18 )
          {
            v32 = 2 * v18;
            v19 = sub_186B270(8 * v32);
            v17 = *(_DWORD *)(a2 + 8);
            v33 = *(_QWORD **)a2;
            if ( v17 )
            {
              if ( v17 - 1 <= 2 || (_QWORD *)v19 == v33 + 1 )
              {
                for ( k = 0; k != v17; ++k )
                  *(_QWORD *)(v19 + k * 8) = v33[k];
              }
              else
              {
                v34 = 0;
                do
                {
                  *(__m128i *)(v19 + v34 * 8) = _mm_loadu_si128((const __m128i *)&v33[v34]);
                  v34 += 2;
                }
                while ( v34 != 2LL * (v17 >> 1) );
                if ( (v17 & 1) != 0 )
                  *(_QWORD *)(v19 + 8LL * (v17 & 0xFFFFFFFE)) = v33[v17 & 0xFFFFFFFE];
              }
            }
            if ( v33 != (_QWORD *)(a2 + 16) && v33 )
            {
              v51 = v19;
              sub_186B220(v33);
              v17 = *(_DWORD *)(a2 + 8);
              v19 = v51;
            }
            *(_QWORD *)a2 = v19;
            *(_DWORD *)(a2 + 12) = v32;
          }
          else
          {
            v19 = *(_QWORD *)a2;
          }
          *(_QWORD *)(v19 + 8LL * v17) = v15;
          *(_DWORD *)(a2 + 8) = v17 + 1;
          v20 = *(_WORD *)(v15 + 4);
          if ( v20 != 2 )
          {
            if ( v20 > 2u )
            {
              sub_1872CE0("");
              sub_1873130(114, 73);
            }
            if ( v20 )
              sub_16270E(v15);
            if ( !*(_DWORD *)(v15 + 24) )
            {
              sub_CA0640(a1, v15);
              goto LABEL_10;
            }
            v46 = v53;
            if ( (unsigned int)v53 >= HIDWORD(v53) )
            {
              v8 = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v53)));
              v48 = 0;
              v46 = v53;
              if ( (_DWORD)v53 )
              {
                do
                {
                  *(__m128i *)&v8[v48] = _mm_loadu_si128((const __m128i *)&ptr[v48]);
                  v48 += 2;
                }
                while ( v48 != 2LL * (unsigned int)v53 );
              }
              if ( ptr != &v54 )
              {
                if ( ptr )
                {
                  sub_186B220(ptr);
                  v46 = v53;
                }
              }
              ptr = v8;
              HIDWORD(v53) *= 2;
            }
            else
            {
              v8 = ptr;
            }
            v47 = &v8[2 * v46];
            *((_DWORD *)v47 + 2) = 0;
            v27 = (unsigned int)v53;
            *v47 = v15;
            v28 = v53 + 1;
            goto LABEL_30;
          }
          v25 = (unsigned int)v53;
          if ( (unsigned int)v53 < HIDWORD(v53) )
            goto LABEL_28;
          v29 = (unsigned int)(2 * HIDWORD(v53));
          v8 = (__int64 *)sub_186B270(16 * v29);
          v30 = ptr;
          v31 = 0;
          v25 = (unsigned int)v53;
          if ( (_DWORD)v53 )
          {
            do
            {
              *(__m128i *)&v8[v31] = _mm_loadu_si128((const __m128i *)&ptr[v31]);
              v31 += 2;
            }
            while ( v31 != 2LL * (unsigned int)v53 );
          }
          if ( ptr == &v54 || !ptr )
            goto LABEL_38;
          goto LABEL_37;
        }
      }
      LODWORD(v53) = v53 - 1;
      sub_CA0640(a1, v4);
      v8 = ptr;
      if ( (_DWORD)v53 )
      {
        v9 = (unsigned int)(v53 - 1);
        v4 = ptr[2 * (unsigned int)v9];
        continue;
      }
      break;
    }
    result = (__int64)&v54;
    if ( ptr != &v54 && ptr )
      return sub_186B220(ptr);
  }
  return result;
}

