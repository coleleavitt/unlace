__int64 __fastcall sub_68AC0(__int64 a1, int a2, char a3, __int64 a4)
{
  __int64 v4; // rbx
  _QWORD *i; // rcx
  __int64 v8; // rsi
  _DWORD *v9; // rdi
  _DWORD *v10; // rax
  __int64 v11; // rsi
  _DWORD *v12; // rdi
  _DWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // edx
  int v18; // ecx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  _QWORD v31[5]; // [rsp+0h] [rbp-68h] BYREF
  char v32; // [rsp+28h] [rbp-40h]
  int v33; // [rsp+2Ch] [rbp-3Ch]
  int v34; // [rsp+30h] [rbp-38h]
  unsigned __int64 v35; // [rsp+34h] [rbp-34h]
  int v36; // [rsp+3Ch] [rbp-2Ch]
  unsigned __int64 v37; // [rsp+48h] [rbp-20h]

  v4 = a2;
  v37 = __readfsqword(0x28u);
  if ( a2 < 0 || *(_DWORD *)(a1 + 64) < a2 )
  {
    if ( !under_debugger )
      sub_383060(50667);
    goto LABEL_51;
  }
  if ( *(_DWORD *)(a1 + 64) == a2 )
    return sub_67FD0(a1, -1, 0, a4);
  for ( i = *(_QWORD **)(a1 + 520); i; i = (_QWORD *)i[1] )
  {
    v8 = i[47];
    v9 = (_DWORD *)i[46];
    v10 = v9;
    if ( 4 * v8 )
    {
      do
      {
        if ( (int)v4 <= *v10 )
        {
          ++*v10;
          v9 = (_DWORD *)i[46];
          v8 = i[47];
        }
        ++v10;
      }
      while ( v10 != &v9[v8] );
    }
    v11 = i[44];
    v12 = (_DWORD *)i[43];
    v13 = v12;
    if ( 4 * v11 )
    {
      do
      {
        if ( (int)v4 <= *v13 )
        {
          ++*v13;
          v12 = (_DWORD *)i[43];
          v11 = i[44];
        }
        ++v13;
      }
      while ( v13 != &v12[v11] );
    }
  }
  sub_68480((int **)(a1 + 1448), v4);
  v14 = *(_QWORD *)(a1 + 432);
  v15 = 104LL * *(_QWORD *)(a1 + 440);
  v16 = v14 + v15;
  if ( a3 )
  {
    for ( ; v14 != v16; v14 += 104 )
    {
      v17 = *(_DWORD *)(v14 + 92);
      if ( v17 >= (int)v4 )
        *(_DWORD *)(v14 + 92) = v17 + 1;
    }
  }
  else if ( v15 )
  {
    while ( *(_DWORD *)(v14 + 92) < (int)v4 )
    {
      v14 += 104;
      if ( v14 == v16 )
        goto LABEL_19;
    }
    if ( !under_debugger )
      sub_383060(51229);
LABEL_51:
    BUG();
  }
LABEL_19:
  v18 = *(_DWORD *)(a1 + 64);
  v19 = v4;
  if ( v18 > (int)v4 )
  {
    while ( 1 )
    {
      v20 = (unsigned int)v19++;
      if ( (unsigned int)v20 >= v18 )
        break;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v20) + 72LL) = v19;
      v18 = *(_DWORD *)(a1 + 64);
      if ( v19 >= v18 )
        goto LABEL_22;
    }
    if ( !under_debugger )
      sub_383060(52719);
    goto LABEL_51;
  }
LABEL_22:
  memset(&v31[1], 0, 32);
  v31[0] = &off_4DBB68;
  v32 = 0;
  v33 = v4;
  v34 = v18;
  v35 = 0xFFFFFFFF00000001LL;
  v36 = -1;
  ((void (__fastcall *)(__int64, _QWORD *))sub_11FBB0)(a1, v31);
  if ( (*(_BYTE *)a1 & 4) != 0 )
  {
    v23 = j__qalloc_or_throw(728, (__int64)v31, v21, v22);
    sub_330B10(v23, *(_QWORD *)(a1 + 1496));
    *(_QWORD *)(v23 + 536) = 0;
    *(_QWORD *)v23 = off_4DBB48;
    *(_QWORD *)(v23 + 528) = off_4EBC98;
    *(_BYTE *)(v23 + 560) = 0;
    *(_QWORD *)(v23 + 564) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v23 + 576) = 0;
    *(_QWORD *)(v23 + 600) = 0;
    *(_QWORD *)(v23 + 624) = 0;
    *(_QWORD *)(v23 + 648) = 0;
    *(_DWORD *)(v23 + 672) = 0;
    *(_QWORD *)(v23 + 680) = 0;
    *(_QWORD *)(v23 + 704) = 0;
    *(_OWORD *)(v23 + 544) = 0;
    *(_OWORD *)(v23 + 584) = 0;
    *(_OWORD *)(v23 + 608) = 0;
    *(_OWORD *)(v23 + 632) = 0;
    *(_OWORD *)(v23 + 656) = 0;
    *(_OWORD *)(v23 + 688) = 0;
    *(_OWORD *)(v23 + 712) = 0;
  }
  else
  {
    v23 = j__qalloc_or_throw(528, (__int64)v31, v21, v22);
    sub_330B10(v23, *(_QWORD *)(a1 + 1496));
  }
  *(_QWORD *)(v23 + 64) = a1;
  *(_QWORD *)(v23 + 416) = a1;
  *(_QWORD *)(v23 + 448) = a1;
  *(_QWORD *)(v23 + 328) = *(_QWORD *)(a1 + 152);
  v24 = *(_QWORD *)(a1 + 168);
  *(_DWORD *)(v23 + 72) = v4;
  *(_QWORD *)(v23 + 336) = v24;
  if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 64) )
    sub_65460();
  v25 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v4);
  if ( v25 )
  {
    v26 = *(_QWORD *)(v25 + 16);
    *(_QWORD *)(v23 + 16) = v26;
    if ( v26 )
      *(_QWORD *)(v26 + 8) = v23;
    *(_QWORD *)(v25 + 16) = v23;
  }
  else
  {
    v29 = *(_QWORD *)(a1 + 520);
    v30 = 0;
    if ( v29 )
    {
      do
      {
        v30 = v29;
        v29 = *(_QWORD *)(v29 + 8);
      }
      while ( v29 );
      *(_QWORD *)(v30 + 8) = v23;
    }
    *(_QWORD *)(v23 + 16) = v30;
  }
  *(_QWORD *)(v23 + 8) = v25;
  if ( v25 == *(_QWORD *)(a1 + 520) )
    *(_QWORD *)(a1 + 520) = v23;
  ++*(_DWORD *)(a1 + 64);
  sub_653E0(a1);
  v27 = *(_QWORD *)(a1 + 784);
  if ( v27 )
    *(_DWORD *)(v27 + 48) = 63;
  return v23;
}
