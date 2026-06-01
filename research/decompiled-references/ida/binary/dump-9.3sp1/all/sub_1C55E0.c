__int64 __fastcall sub_1C55E0(unsigned int *a1, __int64 a2, int a3, __int64 a4, char a5)
{
  __int64 v5; // rbx
  int v6; // eax
  bool v7; // dl
  unsigned __int16 *v8; // r14
  int v10; // ebx
  int v11; // eax
  unsigned int v12; // eax
  unsigned __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // r9
  _QWORD *v18; // r8
  _DWORD *v19; // r12
  __int64 v20; // rcx
  __int64 v21; // rsi
  unsigned __int16 *v22; // r12
  int v23; // eax
  __int64 v24; // rcx
  unsigned __int16 *v25; // rax
  unsigned __int16 *v26; // rbx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 *v29; // rax
  __int64 v30; // r15
  __int64 v31; // r12
  __int64 v32; // rbp
  __int64 j; // rbx
  unsigned __int16 *v34; // rbp
  __int64 i; // rbx
  unsigned int v36; // edx
  int v37; // eax
  _QWORD *v38; // [rsp+8h] [rbp-80h]
  __int64 v39; // [rsp+8h] [rbp-80h]
  __int16 v40; // [rsp+8h] [rbp-80h]
  _QWORD *v41; // [rsp+10h] [rbp-78h]
  __int64 v42; // [rsp+18h] [rbp-70h]
  unsigned __int16 *dest; // [rsp+20h] [rbp-68h]
  __int64 v44; // [rsp+28h] [rbp-60h]
  unsigned int v45; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v46; // [rsp+48h] [rbp-40h]

  v5 = a3;
  v46 = __readfsqword(0x28u);
  v6 = a4;
  v7 = (_DWORD)a4 == -1;
  LOBYTE(a4) = (int)a4 <= (int)v5;
  if ( (unsigned __int8)a4 | v7 || (int)v5 < 0 )
    return 0;
  switch ( *a1 )
  {
    case 1u:
    case 6u:
      *((_QWORD *)a1 + 1) += v5;
      return 1;
    case 2u:
      if ( !(_DWORD)v5 )
        return 1;
      v14 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 8LL);
      if ( !v14 )
        return 0;
      v38 = *((_QWORD **)a1 + 1);
      v15 = 0;
      v44 = 12 * v14;
      v16 = qalloc_or_throw(24 * v14, a2, *a1, a4);
      v17 = a2;
      v18 = v38;
      dest = (unsigned __int16 *)v16;
      v19 = (_DWORD *)v16;
      do
      {
        v20 = *v18;
        v21 = 3 * v15;
        v42 = v17;
        *v19 = 0;
        ++v15;
        v19 += 6;
        v41 = v18;
        v39 = v20 + 8 * v21;
        copy_argloc();
        v18 = v41;
        v17 = v42;
        *(v19 - 2) = *(_DWORD *)(v39 + 16);
      }
      while ( v14 != v15 );
      v22 = &dest[v44];
      if ( dest == &dest[v44] )
      {
        if ( dest )
          goto LABEL_43;
        return 0;
      }
      v8 = dest;
      while ( 1 )
      {
        v23 = v8[8];
        v24 = v8[9];
        if ( v23 + (int)v24 > (int)v5 )
          break;
        v8 += 12;
        if ( v8 == v22 )
          goto LABEL_5;
      }
      if ( v23 < (int)v5 )
      {
        v40 = v5 - v23;
        if ( (unsigned __int8)sub_1C55E0(v8, v42, (unsigned int)(v5 - v23), v24, 1) )
        {
          v8[8] = v5;
          v8[9] -= v40;
          goto LABEL_25;
        }
        if ( dest )
          goto LABEL_43;
        return 0;
      }
LABEL_25:
      v25 = v8;
      if ( v22 == v8 )
        goto LABEL_30;
      if ( (((_BYTE)v22 - (_BYTE)v8) & 8) == 0 || (v25 = v8 + 12, v8[8] -= v5, v8 + 12 != v22) )
      {
        do
        {
          v25[8] -= v5;
          v25[20] -= v5;
          v25 += 24;
        }
        while ( v25 != v22 );
      }
      if ( dest != v8 )
      {
LABEL_30:
        v26 = dest;
        do
        {
          v26 += 12;
          cleanup_argloc();
        }
        while ( v26 != v8 );
      }
      memmove(dest, v8, (char *)v22 - (char *)v8);
      v27 = 0xAAAAAAAAAAAAAAABLL * (((char *)v8 - (char *)dest) >> 3);
      v28 = v14 - v27;
      if ( v22 == v8 )
      {
        v14 -= v27;
LABEL_5:
        if ( !dest )
          return 0;
        if ( !v14 )
        {
LABEL_7:
          qfree((__int64)dest);
          return 0;
        }
LABEL_43:
        v34 = dest;
        for ( i = 0; i != v14; ++i )
        {
          v34 += 12;
          cleanup_argloc();
        }
        goto LABEL_7;
      }
      v29 = *((__int64 **)a1 + 1);
      if ( a5 && v28 == 1 )
      {
        *((_QWORD *)a1 + 1) = *((_QWORD *)dest + 1);
        v36 = *(_DWORD *)dest;
        *((_QWORD *)dest + 1) = v29;
        v37 = *a1;
        *a1 = v36;
        *(_DWORD *)dest = v37;
        if ( !dest )
          return 1;
        v30 = (__int64)dest;
        v31 = 1;
        goto LABEL_37;
      }
      v30 = *v29;
      v31 = v29[1];
      *v29 = (__int64)dest;
      *(__m128i *)(v29 + 1) = _mm_unpacklo_epi64((__m128i)v28, (__m128i)v14);
      if ( v30 )
      {
        if ( !v31 )
        {
LABEL_39:
          qfree(v30);
          return 1;
        }
LABEL_37:
        v32 = v30;
        for ( j = 0; j != v31; ++j )
        {
          v32 += 24;
          cleanup_argloc();
        }
        goto LABEL_39;
      }
      return 1;
    case 3u:
      v45 = a1[2];
      if ( !(unsigned __int8)sub_32E7D0(a2, &v45, (unsigned int)v5) )
        return 0;
      v12 = v45;
      *a1 = 3;
      a1[2] = v12;
      return 1;
    case 4u:
      if ( !(_DWORD)v5 )
        return 1;
      v10 = v5 - v6 / 2;
      if ( v10 < 0 )
        return 0;
      v11 = *((unsigned __int16 *)a1 + 5);
      *a1 = 3;
      a1[2] = v10 + v11;
      return 1;
    case 5u:
      **((_QWORD **)a1 + 1) += v5;
      return 1;
    default:
      if ( !under_debugger )
        sub_383060(51134);
      BUG();
  }
}
