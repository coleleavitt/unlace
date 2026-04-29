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
  unsigned __int64 v25; // rax
  int v26; // edx
  bool v27; // cf
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // [rsp+10h] [rbp-60h]
  __int64 v33; // [rsp+20h] [rbp-50h] BYREF
  __int128 v34; // [rsp+28h] [rbp-48h]
  unsigned __int64 v35; // [rsp+38h] [rbp-38h]

  v35 = __readfsqword(0x28u);
  switch ( *(_DWORD *)a2 )
  {
    case 1:
    case 5:
    case 6:
      return 0;
    case 2:
      return sub_1C1D10(a1, *(_QWORD **)(a2 + 8), a3, a4, a6, a7, 1u);
    case 3:
      v25 = *(int *)(a2 + 8);
      v26 = *(_DWORD *)(a2 + 8);
      v27 = __CFADD__(v25, a5);
      v28 = v25 + a5;
      if ( v27 )
      {
        if ( !under_debugger )
          sub_383060(52010);
LABEL_31:
        BUG();
      }
      v29 = a3 + a4;
      if ( __CFADD__(a3, a4) )
        sub_1C1F40(a1, a2, v25, v29, v28, a7);
      if ( a3 >= v25 )
        v25 = a3;
      if ( v29 <= v28 )
        v28 = v29;
      v10 = 0;
      if ( v25 < v28 )
      {
        if ( a7 )
          *a7 = a3 - v25;
        if ( a6 )
          *a6 = v25 - v26;
        return (unsigned int)(v28 - v25);
      }
      return v10;
    case 4:
      v33 = 0;
      v31 = a5 / 2;
      v34 = 0;
      v12 = qvector_reserve((__int64)&v33, 0, 1, 24);
      v13 = v31;
      v33 = v12;
      v14 = a7;
      v15 = v12 + 24 * v34;
      *(_DWORD *)v15 = 0;
      *(_QWORD *)(v15 + 8) = 0;
      *(_WORD *)(v15 + 16) = 0;
      *(_WORD *)(v15 + 18) = v31;
      v16 = *(_DWORD *)(a2 + 8);
      *(_QWORD *)&v34 = v34 + 1;
      if ( *(_DWORD *)a2 == 4 )
        v16 = (unsigned __int16)v16;
      *(_DWORD *)v15 = 3;
      v17 = v33;
      *(_DWORD *)(v15 + 8) = v16;
      v18 = v34;
      if ( *((_QWORD *)&v34 + 1) < (unsigned __int64)(v34 + 1) )
      {
        v30 = qvector_reserve((__int64)&v33, v17, v34 + 1, 24);
        v18 = v34;
        v13 = v31;
        v33 = v30;
        v17 = v30;
        v14 = a7;
      }
      v19 = v17 + 24 * v18;
      *(_DWORD *)v19 = 0;
      *(_QWORD *)(v19 + 8) = 0;
      *(_DWORD *)(v19 + 16) = _mm_cvtsi128_si32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(v13), 0));
      v20 = *(unsigned __int16 *)(a2 + 10);
      *(_QWORD *)&v34 = v34 + 1;
      *(_DWORD *)(v19 + 8) = v20;
      *(_DWORD *)v19 = 3;
      v21 = sub_1C1D10(a1, &v33, a3, a4, a6, v14, 1u);
      v22 = v33;
      v10 = v21;
      if ( v33 )
      {
        v23 = v34;
        if ( (_QWORD)v34 )
        {
          v24 = 0;
          do
          {
            ++v24;
            cleanup_argloc();
            v22 = v33;
          }
          while ( v23 != v24 );
        }
        *(_QWORD *)&v34 = 0;
        qfree(v22);
      }
      return v10;
    default:
      if ( !under_debugger )
        sub_383060(51108);
      goto LABEL_31;
  }
}
