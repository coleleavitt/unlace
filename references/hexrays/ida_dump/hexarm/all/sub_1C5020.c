__int64 __fastcall sub_1C5020(int *a1, __int64 a2, int a3, int a4, char a5)
{
  unsigned __int16 *v7; // r14
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  unsigned __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // r9
  _QWORD *v17; // r8
  _DWORD *v18; // r12
  __int64 v19; // rcx
  __int64 v20; // rsi
  _DWORD *v21; // rdi
  unsigned __int16 *v22; // r12
  int v23; // eax
  __int64 v24; // rcx
  unsigned __int16 *v25; // rax
  unsigned __int16 *v26; // rbx
  unsigned __int16 *v27; // rdi
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int16 **v30; // rax
  unsigned __int16 *v31; // r15
  __int64 v32; // r12
  unsigned __int16 *v33; // rbp
  __int64 j; // rbx
  unsigned __int16 *v35; // rdi
  unsigned __int16 *v36; // rbp
  __int64 i; // rbx
  unsigned __int16 *v38; // rdi
  int v39; // edx
  int v40; // eax
  _QWORD *v41; // [rsp+8h] [rbp-80h]
  __int64 v42; // [rsp+8h] [rbp-80h]
  __int16 v43; // [rsp+8h] [rbp-80h]
  _QWORD *v44; // [rsp+10h] [rbp-78h]
  __int64 v45; // [rsp+18h] [rbp-70h]
  unsigned __int16 *dest; // [rsp+20h] [rbp-68h]
  __int64 v47; // [rsp+28h] [rbp-60h]
  int v48; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v49; // [rsp+48h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  if ( a4 <= a3 || a4 == -1 || a3 < 0 )
    return 0;
  switch ( *a1 )
  {
    case 1:
    case 6:
      *((_QWORD *)a1 + 1) += a3;
      return 1;
    case 2:
      if ( !a3 )
        return 1;
      v13 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 8LL);
      if ( !v13 )
        return 0;
      v41 = *((_QWORD **)a1 + 1);
      v14 = 0;
      v47 = 12 * v13;
      v15 = qalloc_or_throw(24 * v13);
      v16 = a2;
      v17 = v41;
      dest = (unsigned __int16 *)v15;
      v18 = (_DWORD *)v15;
      do
      {
        v19 = *v17;
        v20 = 3 * v14;
        v21 = v18;
        v45 = v16;
        *v18 = 0;
        ++v14;
        v18 += 6;
        v44 = v17;
        v42 = v19 + 8 * v20;
        copy_argloc(v21, v42);
        v17 = v44;
        v16 = v45;
        *(v18 - 2) = *(_DWORD *)(v42 + 16);
      }
      while ( v13 != v14 );
      v22 = &dest[v47];
      if ( dest == &dest[v47] )
      {
        if ( dest )
          goto LABEL_43;
        return 0;
      }
      v7 = dest;
      while ( 1 )
      {
        v23 = v7[8];
        v24 = v7[9];
        if ( v23 + (int)v24 > a3 )
          break;
        v7 += 12;
        if ( v7 == v22 )
          goto LABEL_5;
      }
      if ( v23 < a3 )
      {
        v43 = a3 - v23;
        if ( (unsigned __int8)sub_1C5020(v7, v45, (unsigned int)(a3 - v23), v24, 1) )
        {
          v7[8] = a3;
          v7[9] -= v43;
          goto LABEL_25;
        }
        if ( dest )
          goto LABEL_43;
        return 0;
      }
LABEL_25:
      v25 = v7;
      if ( v22 == v7 )
        goto LABEL_30;
      if ( (((_BYTE)v22 - (_BYTE)v7) & 8) == 0 || (v25 = v7 + 12, v7[8] -= a3, v7 + 12 != v22) )
      {
        do
        {
          v25[8] -= a3;
          v25[20] -= a3;
          v25 += 24;
        }
        while ( v25 != v22 );
      }
      if ( dest != v7 )
      {
LABEL_30:
        v26 = dest;
        do
        {
          v27 = v26;
          v26 += 12;
          cleanup_argloc(v27);
        }
        while ( v26 != v7 );
      }
      memmove(dest, v7, (char *)v22 - (char *)v7);
      v28 = 0xAAAAAAAAAAAAAAABLL * (((char *)v7 - (char *)dest) >> 3);
      v29 = v13 - v28;
      if ( v22 == v7 )
      {
        v13 -= v28;
LABEL_5:
        if ( !dest )
          return 0;
        if ( !v13 )
        {
LABEL_7:
          qfree(dest);
          return 0;
        }
LABEL_43:
        v36 = dest;
        for ( i = 0; i != v13; ++i )
        {
          v38 = v36;
          v36 += 12;
          cleanup_argloc(v38);
        }
        goto LABEL_7;
      }
      v30 = *((unsigned __int16 ***)a1 + 1);
      if ( a5 && v29 == 1 )
      {
        *((_QWORD *)a1 + 1) = *((_QWORD *)dest + 1);
        v39 = *(_DWORD *)dest;
        *((_QWORD *)dest + 1) = v30;
        v40 = *a1;
        *a1 = v39;
        *(_DWORD *)dest = v40;
        if ( !dest )
          return 1;
        v31 = dest;
        v32 = 1;
        goto LABEL_37;
      }
      v31 = *v30;
      v32 = (__int64)v30[1];
      *v30 = dest;
      *(__m128i *)(v30 + 1) = _mm_unpacklo_epi64((__m128i)v29, (__m128i)v13);
      if ( v31 )
      {
        if ( !v32 )
        {
LABEL_39:
          qfree(v31);
          return 1;
        }
LABEL_37:
        v33 = v31;
        for ( j = 0; j != v32; ++j )
        {
          v35 = v33;
          v33 += 12;
          cleanup_argloc(v35);
        }
        goto LABEL_39;
      }
      return 1;
    case 3:
      v48 = a1[2];
      if ( !(unsigned __int8)sub_32EAF0(a2, &v48, (unsigned int)a3) )
        return 0;
      v11 = v48;
      *a1 = 3;
      a1[2] = v11;
      return 1;
    case 4:
      if ( !a3 )
        return 1;
      v9 = a3 - a4 / 2;
      if ( v9 < 0 )
        return 0;
      v10 = *((unsigned __int16 *)a1 + 5);
      *a1 = 3;
      a1[2] = v9 + v10;
      return 1;
    case 5:
      **((_QWORD **)a1 + 1) += a3;
      return 1;
    default:
      if ( !under_debugger )
        sub_3835A0(51134);
      BUG();
  }
}
