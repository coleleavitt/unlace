unsigned __int64 __fastcall sub_1E69800(
        int **a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 *a6,
        __m128i a7,
        double a8)
{
  int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // r11
  __int64 i; // rax
  __int64 v12; // r10
  unsigned __int64 v13; // rbx
  char *v15; // rax
  int v18; // eax
  int *v19; // rcx
  unsigned int v20; // r15d
  __int64 v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int16 v26; // ax
  _BYTE *v27; // rax
  unsigned int v29; // [rsp+8h] [rbp-E0h]
  int v30; // [rsp+1Ch] [rbp-CCh] BYREF
  _BYTE v31[200]; // [rsp+20h] [rbp-C8h] BYREF

  v8 = **a1;
  if ( v8 )
    **a1 = --v8;
  v9 = *(_QWORD *)(a5 + 8);
  v10 = v9 + 8LL * *(unsigned int *)(a5 + 16);
  if ( v10 != v9 )
  {
    if ( (unsigned __int16)(*(_WORD *)(*(_QWORD *)(*(_QWORD *)v9 + 72LL) + 8LL) - 382) <= 3u )
      return 0;
    for ( i = v9 + 8; ; i += 8 )
    {
      v12 = i;
      if ( v10 == i )
        break;
      if ( (unsigned __int16)(*(_WORD *)(*(_QWORD *)(*(_QWORD *)v12 + 72LL) + 8LL) - 382) <= 3u )
        return 0;
    }
  }
  v15 = (char *)a1[1];
  if ( !v15[1] || *(_BYTE *)a1[2] )
  {
    v18 = *a1[8];
    if ( v18 == 1 )
    {
      v13 = 0;
      if ( !v8 )
        return v13;
      goto LABEL_14;
    }
    if ( v18 == 2 )
    {
LABEL_14:
      v13 = 0;
      sub_1E693A0((__int64)a1[4], a2, a3, a4, a7, a8);
      return v13;
    }
    return 0;
  }
  v19 = a1[3];
  v29 = *(_BYTE *)v19 == 0 ? 6 : 8;
  v20 = *(_BYTE *)v19 == 0 ? 0xFFFFFFFE : 0;
  v21 = sub_1E61BD0(a1[4], *v15);
  v13 = sub_15D92D0(*a6, 80, v22, v23, v24, v25);
  v26 = sub_F963B0(v21, 0, v29);
  *(_BYTE *)(v13 + 35) &= 0xFCu;
  *(_QWORD *)(v13 + 56) &= 0x7F800000uLL;
  *(_QWORD *)v13 = v21;
  *(_QWORD *)(v13 + 8) = 0;
  *(_QWORD *)(v13 + 16) = 0;
  *(_DWORD *)(v13 + 24) = a3;
  *(_DWORD *)(v13 + 28) = a3;
  *(_WORD *)(v13 + 32) = v26;
  *(_BYTE *)(v13 + 34) = (v20 + 8) & 0xF | 0xF0;
  *(_QWORD *)(v13 + 40) = 0;
  *(_QWORD *)(v13 + 48) = 0;
  *(_QWORD *)(v13 + 72) = sub_15D7D80(v13);
  sub_147F4B0((__int64)(a6 + 1), v13);
  sub_147F4B0(a5 + 8, v13);
  if ( *(_BYTE *)a1[3] )
  {
    v27 = *(_BYTE **)(**((_QWORD **)a1[5] + 1) + 288LL);
    *v27 |= 0x40u;
  }
  if ( a3 && *a1[6] != -1 )
  {
    sub_168B9F0((__int64)v31, (__int64 *)a1[4] + 1, a3, 0x1C02u, 0);
    v30 = *a1[6];
    sub_1587D10((__int64)v31, &v30);
    sub_1E64500((__int64)a1[4], (__int64)v31, a3, 0, a7, a8);
    sub_15F7200(v31);
  }
  if ( *(_BYTE *)a1[7] )
    *(_BYTE *)a1[2] = 1;
  return v13;
}
