_QWORD *__fastcall sub_10B820(
        unsigned __int64 *a1,
        __int16 *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7)
{
  _QWORD *result; // rax
  __int64 v8; // r10
  int v9; // ebp
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // r9
  unsigned int v13; // edx
  char v14; // r13
  __int64 v15; // r12
  bool v16; // cc
  __int64 v17; // r11
  __int16 v18; // r11
  __int64 v19; // r11
  __int64 v20; // r14
  unsigned int v21; // r9d
  int v22; // ebp
  int i; // r11d
  __int64 v24; // r13
  __int64 v25; // r11
  __int64 v26; // r12
  __int64 v27; // r14
  __int64 v28; // r9
  int v29; // eax
  __int64 v30; // rdx
  unsigned __int8 *v31; // rsi
  __int64 v32; // rdx
  int v33; // ebx
  __int64 v34; // r11
  __int64 v35; // rdx
  __int64 v36; // r11
  __int64 v37; // r10
  _WORD *v38; // rsi
  unsigned int v39; // edx
  unsigned __int64 v41; // [rsp+8h] [rbp-58h]
  _QWORD *v42; // [rsp+8h] [rbp-58h]
  unsigned int v43; // [rsp+10h] [rbp-50h]
  unsigned __int8 v44; // [rsp+14h] [rbp-4Ch]
  unsigned __int64 v45; // [rsp+20h] [rbp-40h]
  __int64 v46; // [rsp+28h] [rbp-38h]

  result = a1 + 1;
  v8 = (unsigned int)((1 << a6) - 1);
  v46 = a7 + 106;
  v44 = a6;
  v43 = 1 << a6;
  v45 = ((unsigned __int64)a6 << 32) | 1;
  v41 = v45;
  v9 = 1 << (a6 - 1);
  v10 = ((unsigned int)(1 << a6) >> 1) + ((unsigned int)(1 << a6) >> 3) + 3;
  if ( a3 == -1 )
  {
    v24 = (unsigned int)v8;
    *a1 = v45;
    goto LABEL_25;
  }
  v11 = a3;
  v12 = 0;
  v13 = v8;
  v14 = 0;
  v15 = 1;
  while ( 1 )
  {
    v18 = a2[v12];
    if ( v18 != -1 )
      break;
    v19 = v13--;
    HIDWORD(result[v19]) = v12;
    v17 = v12 + 1;
    *(_WORD *)(a7 + 2 * v12) = 1;
    if ( v11 == v12 )
      goto LABEL_9;
LABEL_6:
    v12 = v17;
  }
  v16 = (__int16)v9 <= v18;
  *(_WORD *)(a7 + 2 * v12) = v18;
  v17 = v12 + 1;
  if ( v16 )
  {
    v14 = 1;
    v15 = 0;
  }
  if ( v11 != v12 )
    goto LABEL_6;
LABEL_9:
  if ( v14 )
    v41 = v15 | v45 & 0xFFFFFFFF00000000LL;
  *a1 = v41;
  if ( (_DWORD)v8 != v13 )
  {
    v20 = 0;
    v21 = 0;
    while ( 1 )
    {
      v22 = a2[v20];
      if ( v22 > 0 )
      {
        for ( i = 0; i != v22; ++i )
        {
          HIDWORD(result[v21]) = v20;
          do
            v21 = v8 & (v10 + v21);
          while ( v21 > v13 );
        }
      }
      if ( v11 == v20 )
        break;
      ++v20;
    }
LABEL_28:
    if ( v43 )
    {
      v36 = (__int64)&a1[v8 + 2];
      do
      {
        v37 = *((unsigned int *)result++ + 1);
        v38 = (_WORD *)(a7 + 2 * v37);
        v39 = (unsigned __int16)*v38;
        *v38 = v39 + 1;
        LODWORD(v38) = v44 + __lzcnt(v39) - 31;
        *((_BYTE *)result - 5) = (_BYTE)v38;
        *((_WORD *)result - 4) = (v39 << (char)v38) - v43;
        *((_BYTE *)result - 6) = *(_BYTE *)(a5 + v37);
        *((_DWORD *)result - 1) = *(_DWORD *)(a4 + 4 * v37);
      }
      while ( (_QWORD *)v36 != result );
    }
    return result;
  }
  v42 = result;
  v24 = (unsigned int)v8;
  v25 = 0;
  v26 = (__int64)&a2[v11 + 1];
  v27 = 0;
  do
  {
    v28 = *a2;
    v29 = 8;
    for ( *(_QWORD *)(v46 + v27) = v25; (int)v28 > v29; *(_QWORD *)(v46 + v27 + v30) = v25 )
    {
      v30 = v29;
      v29 += 8;
    }
    ++a2;
    v27 += v28;
    v25 += 0x101010101010101LL;
  }
  while ( (__int16 *)v26 != a2 );
  result = v42;
  v8 = (unsigned int)v8;
LABEL_25:
  if ( v43 )
  {
    v31 = (unsigned __int8 *)(a7 + 106);
    v32 = 0;
    do
    {
      v33 = *v31;
      v31 += 2;
      v34 = v32 & v24;
      v35 = v10 + v32;
      HIDWORD(result[v34]) = v33;
      HIDWORD(result[v35 & v24]) = *(v31 - 1);
      v32 = v24 & (v10 + v35);
    }
    while ( (unsigned __int8 *)(a7 + ((v43 - 1LL) & 0xFFFFFFFFFFFFFFFELL) + 108) != v31 );
    goto LABEL_28;
  }
  return result;
}

