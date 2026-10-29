/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808EDA0
// Address: 0x0808EDA0

//----- (0808EDA0) --------------------------------------------------------
int __cdecl sub_808EDA0(_DWORD *a1, char *a2, int a3, int a4, unsigned __int8 *a5, unsigned __int8 *a6, int a7)
{
  void *v8; // eax
  int v9; // edx
  char *v10; // eax
  int v11; // edx
  char *v12; // eax
  _BYTE *v13; // eax
  _BYTE *v14; // eax
  char *v15; // eax
  int v16; // edi
  unsigned int v17; // edx
  _BYTE *v18; // eax
  const char *v19; // edx
  size_t v20; // eax
  const char *v21; // edx
  int v22; // ecx
  _BYTE *v23; // edi
  int v25; // eax
  int v26; // eax
  int v27; // edx
  int v28; // eax
  int v29; // eax
  int v30; // edi
  int v31; // edx
  unsigned int v32; // ecx
  _BYTE *v33; // eax
  int v34; // edi
  char *v35; // edx
  int v36; // edx
  int v37; // eax
  int v38; // [esp-B0h] [ebp-B0h]
  size_t v39; // [esp-A8h] [ebp-A8h]
  const char *v40; // [esp-A4h] [ebp-A4h]
  unsigned int v41; // [esp-A4h] [ebp-A4h]
  int v42; // [esp-A4h] [ebp-A4h]
  int v43; // [esp-90h] [ebp-90h]
  size_t v44; // [esp-90h] [ebp-90h]
  unsigned int v45; // [esp-90h] [ebp-90h]
  int i; // [esp-88h] [ebp-88h]
  unsigned __int8 v47; // [esp-88h] [ebp-88h]
  int v48; // [esp-84h] [ebp-84h]
  int v49; // [esp-80h] [ebp-80h] BYREF
  char v50; // [esp-70h] [ebp-70h] BYREF
  __int128 v51; // [esp-6Ch] [ebp-6Ch]
  char v52; // [esp-5Ch] [ebp-5Ch] BYREF
  __int128 v53; // [esp-58h] [ebp-58h]
  char v54; // [esp-48h] [ebp-48h] BYREF
  __int128 v55; // [esp-44h] [ebp-44h]
  unsigned __int8 v56; // [esp-34h] [ebp-34h] BYREF
  __int128 v57; // [esp-30h] [ebp-30h]
  unsigned int v58; // [esp-20h] [ebp-20h]

  v8 = (void *)a1[9];
  v58 = __readgsdword(0x14u);
  v9 = a1[10];
  if ( a1[11] < (unsigned int)(v9 + 1) )
  {
    v8 = sub_80CF920((int)(a1 + 9), v8, v9 + 1, 4u);
    v9 = a1[10];
    a1[9] = v8;
  }
  *((_DWORD *)v8 + v9) = 0;
  ++a1[10];
  if ( a4 > 0 )
  {
    for ( i = 0; i != a4; ++i )
    {
      v56 = 2;
      v57 = 0;
      sub_8089810(&v56, a5);
      v11 = a1[4];
      v12 = (char *)a1[3];
      if ( a1[5] < (unsigned int)(v11 + 1) )
      {
        v12 = (char *)sub_80CF920((int)(a1 + 3), v12, v11 + 1, 0x14u);
        v11 = a1[4];
        a1[3] = v12;
      }
      v10 = &v12[20 * v11];
      *v10 = 2;
      *(_OWORD *)(v10 + 4) = 0;
      sub_8089810((unsigned __int8 *)v10, &v56);
      ++a1[4];
      a5 += 20;
      sub_8089430((int)&v56);
    }
  }
  v47 = sub_80890B0(a1, a6, a2, a3);
  if ( !v47 )
  {
    if ( a7 )
    {
      v43 = a1[3] + 20 * a1[4] - 20;
      v13 = *(_BYTE **)a7;
      if ( *(_DWORD *)(a7 + 8) <= 0xDu )
      {
        v13 = sub_80CF920(a7, v13, 0xEu, 1u);
        *(_DWORD *)a7 = v13;
      }
      *(_DWORD *)(a7 + 4) = 14;
      qmemcpy(v13, "Runtime error", 13);
      v14 = *(_BYTE **)a7;
      v50 = 2;
      v14[13] = 0;
      v52 = 2;
      v51 = 0;
      v53 = 0;
      sub_808CD90((__m128i *)&v52, v43, (char *)&qword_811CFF4 - 282549, 0);
      sub_808CD90((__m128i *)&v50, v43, (char *)&qword_811CFF4 - 274213, 0);
      if ( v52 == 2 && (int)v53 > 0 && v50 == 7 )
      {
        v35 = (char *)&qword_811CFF4 - 278897;
        if ( DWORD1(v51) )
        {
          v35 = (char *)v51;
          if ( !*(_BYTE *)v51 )
            v35 = (char *)&qword_811CFF4 - 278897;
        }
        sub_8070240((void **)a7, " on %s:%d", v35, (_DWORD)v53);
      }
      else
      {
        v54 = 2;
        v55 = 0;
        sub_808CD90((__m128i *)&v54, v43, (char *)&qword_811CFF4 - 279701, 0);
        if ( v54 == 7 && DWORD1(v55) > 1 )
        {
          v56 = 2;
          v57 = 0;
          sub_808CD90((__m128i *)&v56, v43, (char *)&qword_811CFF4 - 278907, 0);
          v15 = (char *)&qword_811CFF4 - 258076;
          if ( DWORD1(v55) )
            v15 = (char *)v55;
          sub_8070240((void **)a7, (char *)&qword_811CFF4 - 278877, v15, (_DWORD)v57);
          sub_8089430((int)&v56);
        }
        sub_8089430((int)&v54);
      }
      v16 = *(_DWORD *)(a7 + 4);
      if ( v16 )
      {
        v25 = v16 + 1;
        v17 = v16 + 2;
        --v16;
        v48 = v25;
      }
      else
      {
        v48 = 2;
        v17 = 3;
      }
      v18 = *(_BYTE **)a7;
      if ( *(_DWORD *)(a7 + 8) < v17 )
      {
        v41 = v17;
        v18 = sub_80CF920(a7, v18, v17, 1u);
        v17 = v41;
        *(_DWORD *)a7 = v18;
      }
      *(_DWORD *)(a7 + 4) = v17;
      v18[v48] = 0;
      *(_WORD *)(*(_DWORD *)a7 + v16) = 8250;
      v56 = 2;
      v57 = 0;
      sub_808CD90((__m128i *)&v56, v43, (char *)&qword_811CFF4 - 272545, 0);
      if ( v56 == 7 )
      {
        v19 = (char *)&qword_811CFF4 - 258076;
        if ( DWORD1(v57) )
          v19 = (const char *)v57;
        if ( v19 )
        {
          v40 = v19;
          v20 = strlen(v19);
          v21 = v40;
          v39 = v20;
          v22 = *(_DWORD *)(a7 + 4);
          v44 = v20;
          if ( v22 )
            v44 = --v22 + v20;
          v23 = *(_BYTE **)a7;
          if ( *(_DWORD *)(a7 + 8) < v44 + 1 )
          {
            v38 = v22;
            v23 = sub_80CF920(a7, v23, v44 + 1, 1u);
            v22 = v38;
            v21 = v40;
            *(_DWORD *)a7 = v23;
          }
          *(_DWORD *)(a7 + 4) = v44 + 1;
          v23[v44] = 0;
          memmove((void *)(*(_DWORD *)a7 + v22), v21, v39);
        }
      }
      else
      {
        v30 = *(_DWORD *)(a7 + 4);
        if ( v30 )
        {
          v31 = v30 + 18;
          v32 = v30 + 19;
          --v30;
        }
        else
        {
          v32 = 20;
          v31 = 19;
        }
        v33 = *(_BYTE **)a7;
        if ( *(_DWORD *)(a7 + 8) < v32 )
        {
          v42 = v31;
          v45 = v32;
          v33 = sub_80CF920(a7, v33, v32, 1u);
          v31 = v42;
          *(_DWORD *)a7 = v33;
          v32 = v45;
        }
        *(_DWORD *)(a7 + 4) = v32;
        v33[v31] = 0;
        v34 = *(_DWORD *)a7 + v30;
        *(__m128i *)v34 = _mm_load_si128((const __m128i *)&xmmword_80DE220);
        *(_DWORD *)(v34 + 15) = 1852795252;
      }
      sub_8089430((int)&v56);
      sub_8089430((int)&v52);
      sub_8089430((int)&v50);
    }
    if ( a6 && !sub_808A290(a6, (unsigned __int8 *)(a1[3] + 20 * a1[4] - 20)) )
    {
      v26 = a1[4];
      v56 = 2;
      v27 = 5 * v26;
      v28 = a1[3];
      v57 = 0;
      sub_8089810(&v56, (unsigned __int8 *)(v28 + 4 * v27 - 20));
      v29 = a1[4];
      if ( v29 )
      {
        v36 = a1[3];
        v37 = v29 - 1;
        a1[4] = v37;
        sub_8089430(v36 + 20 * v37);
      }
      sub_8089430((int)&v56);
    }
  }
  if ( *(_BYTE *)(a1[1] + 68) )
  {
    off_811E568(&v49);
    *(_BYTE *)(a1[1] + 68) = 0;
  }
  if ( v58 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v47;
}
// 80DE220: using guessed type __int128 xmmword_80DE220;
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811E568: using guessed type _DWORD (__stdcall *off_811E568)(_DWORD);
