__int64 __fastcall sub_1C52A0(__int64 a1, __int64 a2, unsigned __int64 a3, int a4, int a5, _DWORD *a6, _DWORD *a7)
{
  unsigned int v10; // r14d
  __int64 v12; // rax
  unsigned int v13; // r8d
  _DWORD *v14; // r9
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // edx
  unsigned int v21; // eax
  __int64 v22; // rdi
  __int64 v23; // r15
  __int64 v24; // rbx
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  int v27; // edx
  bool v28; // cf
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // [rsp+10h] [rbp-60h]
  __int64 v34; // [rsp+20h] [rbp-50h] BYREF
  __int128 v35; // [rsp+28h] [rbp-48h]
  unsigned __int64 v36; // [rsp+38h] [rbp-38h]

  v36 = __readfsqword(0x28u);
  switch ( *(_DWORD *)a2 )
  {
    case 1:
    case 5:
    case 6:
      return 0;
    case 2:
      return sub_1C1D10(a1, *(_QWORD **)(a2 + 8), a3, a4, a6, a7, 1u);
    case 3:
      v26 = *(int *)(a2 + 8);
      v27 = *(_DWORD *)(a2 + 8);
      v28 = __CFADD__(v26, a5);
      v29 = v26 + a5;
      if ( v28 )
      {
        if ( !under_debugger )
          sub_383060(52010);
LABEL_31:
        BUG();
      }
      v30 = a3 + a4;
      if ( __CFADD__(a3, a4) )
        sub_1C1F40(a1, a2, v26, v30, v29, a7);
      if ( a3 >= v26 )
        v26 = a3;
      if ( v30 <= v29 )
        v29 = v30;
      v10 = 0;
      if ( v26 < v29 )
      {
        if ( a7 )
          *a7 = a3 - v26;
        if ( a6 )
          *a6 = v26 - v27;
        return (unsigned int)(v29 - v26);
      }
      return v10;
    case 4:
      v34 = 0;
      v32 = a5 / 2;
      v35 = 0;
      v12 = qvector_reserve(&v34, 0, 1, 24);
      v13 = v32;
      v34 = v12;
      v14 = a7;
      v15 = v12 + 24 * v35;
      *(_DWORD *)v15 = 0;
      *(_QWORD *)(v15 + 8) = 0;
      *(_WORD *)(v15 + 16) = 0;
      *(_WORD *)(v15 + 18) = v32;
      v16 = *(_DWORD *)(a2 + 8);
      *(_QWORD *)&v35 = v35 + 1;
      if ( *(_DWORD *)a2 == 4 )
        v16 = (unsigned __int16)v16;
      *(_DWORD *)v15 = 3;
      v17 = v34;
      *(_DWORD *)(v15 + 8) = v16;
      v18 = v35;
      if ( *((_QWORD *)&v35 + 1) < (unsigned __int64)(v35 + 1) )
      {
        v31 = qvector_reserve(&v34, v17, v35 + 1, 24);
        v18 = v35;
        v13 = v32;
        v34 = v31;
        v17 = v31;
        v14 = a7;
      }
      v19 = v17 + 24 * v18;
      *(_DWORD *)v19 = 0;
      *(_QWORD *)(v19 + 8) = 0;
      *(_DWORD *)(v19 + 16) = _mm_cvtsi128_si32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(v13), 0));
      v20 = *(unsigned __int16 *)(a2 + 10);
      *(_QWORD *)&v35 = v35 + 1;
      *(_DWORD *)(v19 + 8) = v20;
      *(_DWORD *)v19 = 3;
      v21 = sub_1C1D10(a1, &v34, a3, a4, a6, v14, 1u);
      v22 = v34;
      v10 = v21;
      if ( v34 )
      {
        v23 = v35;
        if ( (_QWORD)v35 )
        {
          v24 = 0;
          do
          {
            v25 = 3 * v24++;
            cleanup_argloc(v22 + 8 * v25);
            v22 = v34;
          }
          while ( v23 != v24 );
        }
        *(_QWORD *)&v35 = 0;
        qfree(v22);
      }
      return v10;
    default:
      if ( !under_debugger )
        sub_383060(51108);
      goto LABEL_31;
  }
}
