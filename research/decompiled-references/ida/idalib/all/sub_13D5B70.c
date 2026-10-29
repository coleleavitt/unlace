__int64 __fastcall sub_13D5B70(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rdi
  char v9; // al
  __int64 v11; // rdx
  __int64 v12; // rax
  size_t v13; // rax
  __int64 v14; // rsi
  _BYTE *v15; // rdi
  unsigned __int64 v16; // rdx
  __int64 v17; // r13
  __int64 v18; // r14
  __int64 v19; // rax
  size_t v20; // rbp
  unsigned __int64 v21; // rcx
  double v22; // r8
  __int64 v23; // rdx
  __int64 v24; // r15
  unsigned __int64 v25; // r15
  size_t v26; // rdx
  double v27[2]; // [rsp+8h] [rbp-100h] BYREF
  __int8 *v28; // [rsp+18h] [rbp-F0h]
  void *src; // [rsp+20h] [rbp-E8h] BYREF
  size_t n; // [rsp+28h] [rbp-E0h]
  _QWORD v31[2]; // [rsp+30h] [rbp-D8h] BYREF
  int v32; // [rsp+40h] [rbp-C8h] BYREF
  int v33; // [rsp+44h] [rbp-C4h]
  char v34; // [rsp+48h] [rbp-C0h]
  __int64 v35; // [rsp+4Ch] [rbp-BCh]
  char v36; // [rsp+54h] [rbp-B4h]
  void *dest; // [rsp+58h] [rbp-B0h]
  __m128 v38; // [rsp+60h] [rbp-A8h] BYREF
  char v39; // [rsp+78h] [rbp-90h]
  __int64 v40[17]; // [rsp+80h] [rbp-88h] BYREF

  v6 = *(unsigned __int8 *)(a1 + 24);
  if ( !(_BYTE)v6 )
  {
    v6 = *(unsigned __int8 *)(a1 + 26);
    if ( (_BYTE)v6 )
    {
      *(_QWORD *)a2 = 0;
      *(_QWORD *)(a2 + 8) = 0;
      *(_DWORD *)(a2 + 16) = 0;
      v17 = *(_QWORD *)(a1 + 120);
      *(_QWORD *)(a1 + 152) = v17;
      *(_DWORD *)(a2 + 4) = 0;
      *(_DWORD *)a2 = sub_13D1500(a1, *(_QWORD *)(a1 + 152), 0);
      *(_WORD *)(a2 + 16) = 1;
      *(_QWORD *)(a1 + 152) = v17;
      return v6;
    }
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1104LL) == 1 && (unsigned __int8)sub_14363F0() )
    {
      v18 = *(_QWORD *)(a1 + 8);
      v19 = *(unsigned int *)(a1 + 72);
      if ( (unsigned int)(*(_DWORD *)(v18 + 1104) - 1) <= 1 )
      {
        v20 = 8 * v19;
        v21 = *(unsigned int *)(v18 + 1068);
        v22 = *(double *)(a1 + 64);
        v23 = 0;
        *(_DWORD *)(v18 + 1064) = 0;
        v24 = 8 * v19;
        LODWORD(v19) = 0;
        v25 = v24 >> 3;
        if ( v25 > v21 )
        {
          v27[0] = v22;
          sub_2237220(v18 + 1056, v18 + 1072, v25, 8);
          v19 = *(unsigned int *)(v18 + 1064);
          v22 = v27[0];
          v23 = 8 * v19;
        }
        if ( v20 )
        {
          memcpy((void *)(*(_QWORD *)(v18 + 1056) + v23), *(const void **)&v22, v20);
          LODWORD(v19) = *(_DWORD *)(v18 + 1064);
        }
        *(_DWORD *)(v18 + 1064) = v25 + v19;
        LODWORD(v19) = *(_DWORD *)(a1 + 72);
      }
      if ( (_DWORD)v19 )
      {
        if ( *(_QWORD *)(a1 + 40) )
        {
          *(_WORD *)(a1 + 32) = 0;
        }
        else
        {
          *(_WORD *)(a1 + 32) = 1;
          *(_OWORD *)(a1 + 40) = 0;
        }
      }
      *(_DWORD *)(a1 + 72) = 0;
    }
    else
    {
      v7 = *(unsigned int *)(a1 + 72);
      if ( (_DWORD)v7 )
      {
        v8 = *(_QWORD *)(a1 + 8);
        while ( *(_DWORD *)(v8 + 776) == *(_DWORD *)(a1 + 128) )
        {
LABEL_9:
          v7 = (unsigned int)(v7 - 1);
          *(_DWORD *)(a1 + 72) = v7;
          if ( !(_DWORD)v7 )
            goto LABEL_10;
        }
        while ( 1 )
        {
          sub_FC70B0((__int64)v40, *(_QWORD *)(v8 + 48), *(_DWORD *)(*(_QWORD *)(a1 + 64) + 8 * v7 - 8), 1177);
          sub_AEA040((__int64)v40);
          v7 = (unsigned int)(*(_DWORD *)(a1 + 72) - 1);
          *(_DWORD *)(a1 + 72) = v7;
          if ( !(_DWORD)v7 )
            break;
          v8 = *(_QWORD *)(a1 + 8);
          if ( *(_DWORD *)(v8 + 776) == *(_DWORD *)(a1 + 128) )
            goto LABEL_9;
        }
      }
    }
LABEL_10:
    if ( *(_QWORD *)(a1 + 112) == a3 )
      goto LABEL_13;
    v9 = *(_BYTE *)(a3 - 1);
    if ( v9 == 10 || v9 == 13 )
      goto LABEL_13;
    sub_13D1530((__int64)v40, a1, *(_QWORD *)(a1 + 120), 1369);
    v13 = j__strlen("\n");
    v14 = *(_QWORD *)(a1 + 120);
    *(_QWORD *)&v27[0] = v13;
    v32 = sub_13D1500(a1, v14, 1);
    v33 = v32;
    dest = &v38.m128_u16[4];
    v28 = &v38.m128_i8[8];
    src = v31;
    *(_QWORD *)&v27[1] = v31;
    v35 = 0;
    v36 = 0;
    v38.m128_u64[0] = 0;
    v38.m128_i8[8] = 0;
    v39 = 0;
    v34 = 0;
    sub_13D0630(&src, "\n", (__int64)&aSubcommands[*(_QWORD *)&v27[0] + 13]);
    v15 = dest;
    if ( src == v31 )
    {
      v26 = n;
      if ( n )
      {
        if ( n == 1 )
          *(_BYTE *)dest = v31[0];
        else
          memcpy(dest, src, n);
        v26 = n;
        v15 = dest;
      }
      v38.m128_u64[0] = v26;
      v15[v26] = 0;
      v15 = src;
      goto LABEL_22;
    }
    if ( dest == v28 )
    {
      v27[0] = *(double *)v31;
      dest = src;
      v38 = _mm_loadh_ps(v27);
    }
    else
    {
      v27[0] = *(double *)v31;
      v16 = v38.m128_u64[1];
      dest = src;
      v38 = _mm_loadh_ps(v27);
      if ( v15 )
      {
        src = v15;
        v31[0] = v16;
LABEL_22:
        n = 0;
        *v15 = 0;
        if ( src != v31 )
          operator delete(src);
        v39 = 0;
        if ( v32 && v33 )
          sub_13D5200(v40, (unsigned __int64)&v32);
        if ( dest != &v38.m128_u16[4] )
          operator delete(dest);
        sub_AEA040((__int64)v40);
LABEL_13:
        *(_QWORD *)(a1 + 152) = a3;
        return (unsigned int)sub_143B8C0(*(_QWORD *)(a1 + 8), a2, *(unsigned __int8 *)(a1 + 145));
      }
    }
    v15 = v31;
    src = v31;
    goto LABEL_22;
  }
  v11 = a3 - *(_QWORD *)(a1 + 152);
  *(_BYTE *)(a1 + 24) = 0;
  *(_DWORD *)(a2 + 4) = v11;
  *(_DWORD *)a2 = sub_13D1500(a1, *(_QWORD *)(a1 + 152), v11);
  *(_WORD *)(a2 + 16) = 2;
  v12 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 152) = a3;
  if ( v12 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 14LL) & 4) != 0 )
      *(_BYTE *)(a1 + 146) = 2;
    else
      *(_BYTE *)(a1 + 146) = *(_BYTE *)(v12 + 544) & 1;
  }
  return v6;
}
