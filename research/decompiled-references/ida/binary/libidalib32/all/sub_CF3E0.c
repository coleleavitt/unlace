unsigned __int64 __fastcall sub_CF3E0(TGroup *a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  int v5; // r15d
  int v6; // ebp
  int v7; // esi
  __int64 v8; // r12
  int v9; // r15d
  unsigned __int64 v10; // rbp
  __int64 *v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // r11
  __int64 v16; // rdi
  __int64 v17; // r13
  int v18; // r8d
  int v19; // ebx
  __int64 *v20; // rbp
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  int v23; // edi
  int v24; // eax
  int v25; // eax
  bool v26; // sf
  int v27; // ebx
  int v28; // eax
  int v29; // ebp
  unsigned int v30; // ebx
  unsigned __int64 v31; // r13
  unsigned int v32; // rax^4
  unsigned int v33; // edx
  __int64 v34; // r12
  int v35; // ebp
  unsigned __int64 v36; // rbx
  __int64 *v37; // r14
  __int64 v38; // rdi
  __int64 v39; // r8
  __int64 v40; // r15
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  int v44; // eax
  unsigned int v45; // [rsp+0h] [rbp-78h]
  int v46; // [rsp+4h] [rbp-74h]
  int v49; // [rsp+18h] [rbp-60h]
  int v50; // [rsp+1Ch] [rbp-5Ch]
  __m128i v51; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v52; // [rsp+38h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  TWindowInit::TWindowInit((char *)a1 + 176, TWindow::initFrame);
  v2 = a2[1];
  v3 = *a2;
  if ( 80 * v2 )
  {
    v50 = 0;
    v4 = *a2;
    v5 = 0;
    do
    {
      v6 = *(_DWORD *)(v4 + 8) + *(_QWORD *)(v4 + 16) + 1;
      v7 = *(_DWORD *)(v4 + 24);
      if ( *(_QWORD *)(v4 + 64) )
      {
        v49 = v5;
        v8 = v4;
        v9 = *(_DWORD *)(v4 + 8) + *(_QWORD *)(v4 + 16) + 1;
        v10 = 0;
        do
        {
          v11 = (__int64 *)(*(_QWORD *)(v8 + 56) + 24 * v10);
          v12 = v11[1];
          v13 = *v11;
          v14 = *v11;
          v15 = *v11 + 32 * v12;
          if ( 32 * v12 )
          {
            v16 = *v11;
            LODWORD(v17) = 0;
            do
            {
              if ( (int)v17 < (unsigned __int64)(*(_QWORD *)(v16 + 8) == 0) + *(_QWORD *)(v16 + 8) - 1 )
                v17 = (*(_QWORD *)(v16 + 8) == 0) + *(_QWORD *)(v16 + 8) - 1LL;
              v16 += 32;
            }
            while ( v15 != v16 );
            if ( v15 == v13 )
            {
              v28 = 0;
            }
            else
            {
              v18 = v17;
              v19 = 0;
              v17 = v10;
              v20 = (__int64 *)(*(_QWORD *)(v8 + 56) + 24 * v10);
              do
              {
                v21 = *(int *)(v14 + 24);
                if ( (v21 & 0x80000000) == 0LL && v21 < (unsigned __int64)xmmword_251378 )
                {
                  v22 = qword_251370 + 56 * v21;
                  if ( v22 )
                  {
                    v23 = *(_DWORD *)(v22 + 44);
                    if ( v23 < 0 || v23 >= *(_DWORD *)(dbg + 64LL) )
                    {
                      v24 = -1;
                    }
                    else if ( *(_BYTE *)(v22 + 32) == 0xFF )
                    {
                      v46 = v18;
                      v44 = sub_C3500(v23);
                      v13 = *v20;
                      v12 = v20[1];
                      v18 = v46;
                      v24 = 4 * v44;
                    }
                    else
                    {
                      v24 = *(char *)(v22 + 33);
                    }
                    if ( v19 < v24 )
                      v19 = v24;
                  }
                }
                v14 += 32;
              }
              while ( v14 != v13 + 32 * v12 );
              v25 = v19 + 14;
              v26 = v19 + 7 < 0;
              v27 = v19 + 7;
              v10 = v17;
              LODWORD(v17) = v18;
              if ( !v26 )
                v25 = v27;
              v28 = v25 >> 3;
            }
          }
          else
          {
            v28 = 0;
            LODWORD(v17) = 0;
          }
          if ( v7 < (int)v12 )
            v7 = v12;
          v9 += v17 + 2 + v28;
          ++v10;
        }
        while ( v10 < *(_QWORD *)(v8 + 64) );
        v6 = v9;
        v5 = v49;
        v4 = v8;
        v3 = *a2;
        v2 = a2[1];
      }
      if ( v5 < v6 )
        v5 = v6;
      v4 += 80;
      v50 += v7;
    }
    while ( v4 != v3 + 80 * v2 );
    v29 = v5;
    v30 = v50 + 2;
  }
  else
  {
    v30 = 2;
    v29 = 0;
  }
  v31 = 0;
  v32 = (unsigned __int64)TView::getExtent(TProgram::deskTop) >> 32;
  v51 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v33 - 2 - v29), _mm_cvtsi32_si128(v32)),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v33), _mm_cvtsi32_si128(v30)));
  sub_144120(a1, &off_22F6F8, &v51, "Registers");
  v45 = 1;
  *(_QWORD *)a1 = &off_235EF8;
  if ( a2[1] )
  {
    do
    {
      v34 = *a2 + 80 * v31;
      v35 = *(_DWORD *)(v34 + 24);
      if ( *(_QWORD *)(v34 + 64) )
      {
        v36 = 0;
        do
        {
          v37 = (__int64 *)(*(_QWORD *)(v34 + 56) + 24 * v36);
          v38 = v37[1];
          v39 = *v37;
          v40 = *v37;
          if ( 32 * v38 )
          {
            do
            {
              v41 = *(int *)(v40 + 24);
              if ( (v41 & 0x80000000) == 0LL && v41 < (unsigned __int64)xmmword_251378 )
              {
                v42 = qword_251370 + 56 * v41;
                if ( v42 )
                {
                  sub_C5EC0(v42);
                  v39 = *v37;
                  v38 = v37[1];
                }
              }
              v40 += 32;
            }
            while ( v40 != v39 + 32 * v38 );
          }
          if ( v35 < (int)v38 )
            v35 = v38;
          ++v36;
        }
        while ( v36 < *(_QWORD *)(v34 + 64) );
      }
      sub_CEFC0(a1, v45, v34);
      ++v31;
      v45 += v35;
    }
    while ( v31 < a2[1] );
  }
  *((_BYTE *)a1 + 168) = 1;
  return v52 - __readfsqword(0x28u);
}

