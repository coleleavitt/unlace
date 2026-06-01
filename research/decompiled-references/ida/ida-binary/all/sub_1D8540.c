void __fastcall sub_1D8540(__int64 a1)
{
  unsigned __int8 *v1; // rbp
  unsigned __int8 *v3; // rax
  unsigned __int8 v4; // dl
  unsigned __int8 *v5; // rcx
  __int64 v6; // r14
  char *v7; // r12
  unsigned __int8 v8; // al
  _BYTE *v9; // rax
  _BYTE *v10; // rbp
  char v11; // dl
  _BYTE *v12; // r12
  _BYTE *v13; // rax
  _BYTE *v14; // rdx
  bool v15; // si
  _BYTE *v16; // rcx
  __int64 v17; // rsi
  unsigned __int8 *v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // r13
  _BYTE *v21; // r12
  __int64 v22; // rax
  __int64 v23; // rdx
  void *v24; // r13
  unsigned __int8 v25; // al
  char *v26; // rbp
  char v27; // al
  void **v28; // rax
  void **v29; // rbp
  void **v30; // r12
  void *v31; // rdi
  __int64 v32; // rsi
  char *v33; // rax
  char v34; // dl
  int v35; // ecx
  int v36; // ecx
  unsigned __int8 v37; // dl
  unsigned __int8 *v38; // rax
  int v39; // r12d
  signed int v40; // eax
  _BYTE *v41; // r13
  __int64 v42; // rax
  __int64 v43; // rcx
  int v44; // ebp
  __int64 v45; // rax
  __int64 v46; // rdx
  int v47; // ecx
  int v48; // ebp
  _BYTE *v49; // r13
  __int64 v50; // rax
  __int64 v51; // rdx
  _BYTE *v52; // r13
  _BYTE *v53; // rsi
  _BYTE *v54; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v55; // [rsp+8h] [rbp-50h]
  void *v56; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v57; // [rsp+18h] [rbp-40h]
  unsigned __int64 v58; // [rsp+28h] [rbp-30h]

  v1 = *(unsigned __int8 **)(a1 + 16);
  v58 = __readfsqword(0x28u);
  if ( *v1 != 60 )
  {
    if ( !*v1 )
      return;
    v3 = v1 + 1;
    while ( 1 )
    {
      *(_QWORD *)(a1 + 16) = v3;
      v4 = *v3;
      v5 = v3++;
      if ( v4 == 60 )
        break;
      if ( !v4 )
        return;
    }
    v6 = v5 - v1;
    if ( v5 - v1 <= 0 )
      goto LABEL_8;
    if ( v6 > 2 )
    {
      if ( v1 )
      {
        v20 = (int)v6;
        v55 = _mm_shuffle_epi32(_mm_cvtsi32_si128((int)v6 + 1), 224).m128i_u64[0];
        v21 = (_BYTE *)operator new[]((int)v6 + 1);
        if ( (int)v6 <= 0 )
        {
LABEL_34:
          v21[v20] = 0;
LABEL_35:
          v54 = v21;
          sub_1D7280(&v56, a1, (__int64)&v54);
          v24 = v56;
          sub_1CAEC0(a1 + 48, (__int64)&v56);
          if ( v24 )
            operator delete[](v24);
          *(_DWORD *)(a1 + 36) = 3;
          if ( v21 )
            operator delete[](v21);
          return;
        }
LABEL_32:
        v22 = 0;
        do
        {
          v21[v22] = v1[v22];
          v23 = v22++;
        }
        while ( v23 != (_DWORD)v6 - 1 );
        goto LABEL_34;
      }
    }
    else
    {
      if ( v5 == v1 )
        goto LABEL_8;
      v17 = 0x100002600LL;
      v18 = v1;
      while ( 1 )
      {
        v19 = *v18;
        if ( (unsigned __int8)v19 > 0x20u || !_bittest64(&v17, v19) )
          break;
        if ( v5 == ++v18 )
          goto LABEL_8;
      }
      if ( v5 == v18 )
      {
LABEL_8:
        v1 = v5;
        goto LABEL_9;
      }
      if ( v1 )
      {
        v20 = (int)v6;
        v55 = _mm_shuffle_epi32(_mm_cvtsi32_si128((int)v6 + 1), 224).m128i_u64[0];
        v21 = (_BYTE *)operator new[]((int)v6 + 1);
        goto LABEL_32;
      }
    }
    v55 = 0;
    v21 = nullptr;
    goto LABEL_35;
  }
LABEL_9:
  v7 = (char *)(v1 + 1);
  *(_QWORD *)(a1 + 16) = v1 + 1;
  v8 = v1[1];
  switch ( v8 )
  {
    case '/':
      v28 = *(void ***)(a1 + 112);
      *(_DWORD *)(a1 + 36) = 2;
      *(_BYTE *)(a1 + 80) = 0;
      if ( v28 )
      {
        v29 = &v28[4 * (_QWORD)*(v28 - 1)];
        if ( v28 == v29 )
        {
          v32 = 0;
        }
        else
        {
          do
          {
            v30 = v29;
            v31 = *(v29 - 2);
            v29 -= 4;
            if ( v31 )
              operator delete[](v31);
            if ( *v29 )
              operator delete[](*v29);
          }
          while ( *(void ***)(a1 + 112) != v29 );
          v32 = 32LL * (_QWORD)*(v30 - 5);
        }
        operator delete[](v29 - 1, v32 + 8);
        v7 = *(char **)(a1 + 16);
      }
      v33 = v7 + 1;
      *(_QWORD *)(a1 + 112) = 0;
      *(_QWORD *)(a1 + 120) = 0;
      *(_BYTE *)(a1 + 129) = 1;
      *(_QWORD *)(a1 + 16) = v7 + 1;
      v34 = v7[1];
      if ( v34 == 62 )
      {
        v57 = 0x100000001LL;
        v52 = (_BYTE *)operator new[](1u);
        v53 = v52;
LABEL_80:
        *v53 = 0;
        v56 = v52;
        sub_1CAEC0(a1 + 48, (__int64)&v56);
        if ( v52 )
          operator delete[](v52);
        ++*(_QWORD *)(a1 + 16);
      }
      else
      {
        while ( v34 )
        {
          v35 = (int)v33++;
          *(_QWORD *)(a1 + 16) = v33;
          v34 = *v33;
          if ( *v33 == 62 )
          {
            v44 = v35 - (_DWORD)v7;
            v57 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v35 - (int)v7 + 1), 224).m128i_u64[0];
            v52 = (_BYTE *)operator new[](v35 - (int)v7 + 1);
            v53 = &v52[v44];
            if ( v44 > 0 )
            {
              v45 = 0;
              do
              {
                v52[v45] = v7[v45 + 1];
                v46 = v45++;
              }
              while ( v44 - 1 != v46 );
            }
            goto LABEL_80;
          }
        }
      }
      break;
    case '?':
      *(_DWORD *)(a1 + 36) = 6;
      v25 = v1[1];
      if ( v25 )
      {
        if ( v25 != 62 )
        {
          v26 = (char *)(v1 + 2);
          while ( 1 )
          {
            *(_QWORD *)(a1 + 16) = v26;
            v27 = *v26;
            v7 = v26++;
            if ( v27 == 62 )
              break;
            if ( !v27 )
              return;
          }
        }
        *(_QWORD *)(a1 + 16) = v7 + 1;
      }
      break;
    case '!':
      if ( v1[2] == 91 )
      {
        *(_DWORD *)(a1 + 36) = 5;
        if ( v1[1] )
        {
          v9 = v1 + 2;
          v10 = v1 + 10;
          while ( 1 )
          {
            *(_QWORD *)(a1 + 16) = v9;
            v11 = *v9;
            v12 = v9;
            if ( !*v9 )
              break;
            if ( v10 == ++v9 )
            {
              v13 = v12 - 2;
              do
              {
                v15 = 1;
                v16 = nullptr;
                if ( v11 == 62 )
                {
                  v16 = v13;
                  if ( v13[1] == 93 && *v13 == 93 )
                    v15 = v13 == nullptr;
                  else
                    v16 = nullptr;
                }
                v14 = v13 + 3;
                ++v13;
                *(_QWORD *)(a1 + 16) = v14;
                v11 = v13[2];
              }
              while ( v11 && v15 );
              if ( v16 && (v47 = (_DWORD)v16 - (_DWORD)v12, v48 = v47, v47 > 0) )
              {
                v57 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v47 + 1), 224).m128i_u64[0];
                v49 = (_BYTE *)operator new[](v47 + 1);
                v50 = 0;
                do
                {
                  v49[v50] = v12[v50];
                  v51 = v50++;
                }
                while ( v48 - 1 != v51 );
                v56 = v49;
                v49[v48] = 0;
                sub_1CAEC0(a1 + 48, (__int64)&v56);
                if ( v49 )
                  operator delete[](v49);
              }
              else
              {
                sub_1CADA0(a1 + 48, (__int64)&unk_5C2F25);
              }
              return;
            }
          }
        }
      }
      else
      {
        *(_QWORD *)(a1 + 16) = v1 + 2;
        if ( v1[2] == 45 && v1[3] == 45 )
        {
          v36 = (_DWORD)v1 + 4;
          *(_DWORD *)(a1 + 36) = 4;
          *(_QWORD *)(a1 + 16) = v1 + 4;
          v37 = v1[4];
          if ( v37 )
          {
            v38 = v1 + 4;
            while ( v37 != 45 || v38[1] != 45 || v38[2] != 62 )
            {
              *(_QWORD *)(a1 + 16) = ++v38;
              v37 = *v38;
              if ( !*v38 )
                return;
            }
            v39 = (_DWORD)v38 - v36;
            v40 = (_DWORD)v38 - v36 + 1;
            v57 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v40), 224).m128i_u64[0];
            v41 = (_BYTE *)operator new[](v40);
            v42 = 0;
            if ( v39 > 0 )
            {
              do
              {
                v41[v42] = v1[v42 + 4];
                v43 = v42++;
              }
              while ( v43 != v39 - 1 );
            }
            v56 = v41;
            v41[v39] = 0;
            sub_1CAEC0(a1 + 48, (__int64)&v56);
            if ( v41 )
              operator delete[](v41);
            *(_QWORD *)(a1 + 16) += 3LL;
          }
        }
      }
      break;
    default:
      sub_1D7D00(a1);
      break;
  }
}
