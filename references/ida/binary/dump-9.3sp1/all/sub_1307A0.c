__int64 __fastcall sub_1307A0(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
{
  int v5; // eax
  __int64 v9; // r15
  int v12; // edx
  int v13; // r8d
  int v14; // r8d
  __int64 v15; // r10
  bool v16; // zf
  int v17; // r8d
  int v18; // eax
  int v19; // r9d
  __int64 v20; // rdx
  int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rax
  _DWORD *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // rax
  char v28; // si
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rsi
  _DWORD *v37; // rax
  int v38; // [rsp+8h] [rbp-70h]
  int v39; // [rsp+8h] [rbp-70h]
  int v40; // [rsp+8h] [rbp-70h]
  __int64 v41; // [rsp+8h] [rbp-70h]
  __int64 v42; // [rsp+8h] [rbp-70h]
  int v43; // [rsp+8h] [rbp-70h]
  int v44; // [rsp+14h] [rbp-64h]
  __int64 v45; // [rsp+18h] [rbp-60h]
  int v46; // [rsp+20h] [rbp-58h] BYREF
  int v47; // [rsp+24h] [rbp-54h] BYREF
  __int64 v48; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v49[9]; // [rsp+30h] [rbp-48h] BYREF

  v5 = *a5;
  v49[1] = __readfsqword(0x28u);
  if ( (unsigned int)(v5 - 10) > 1 || *((_BYTE *)a5 + 32) != 4 )
    return 0;
  v9 = *((_QWORD *)a5 + 5);
  v12 = *(_DWORD *)v9;
  if ( v5 == 11 )
  {
    if ( ((v12 - 14) & 0xFFFFFFF7) != 0 )
      return 0;
    v21 = *(_DWORD *)(a3 + 68);
    if ( v21 + a5[17] != a5[9] )
      return 0;
    v14 = 8 * v21;
    v15 = v9 + 32;
    v16 = *(_DWORD *)a3 == 22;
    v48 = v9 + 32;
    if ( !v16 )
      goto LABEL_18;
    v22 = a3 + 48;
    if ( (unsigned __int64)*(int *)(a3 + 52) <= 8 )
    {
      if ( *(_BYTE *)(a3 + 48) == 2 )
        goto LABEL_18;
      goto LABEL_44;
    }
  }
  else
  {
    if ( (unsigned int)(v12 - 23) > 1 )
      return 0;
    v13 = *(_DWORD *)(a3 + 68);
    if ( v13 != a5[17] )
      return 0;
    v14 = 8 * v13;
    v15 = v9 + 32;
    v16 = *(_DWORD *)a3 == 22;
    v48 = v9 + 32;
    if ( !v16 )
    {
LABEL_8:
      v38 = v14;
      if ( !(unsigned __int8)sub_152630(v9, &v46) )
        return 0;
      v17 = v38;
      v18 = v46;
      v19 = v38 - v46;
      if ( *(_DWORD *)v9 == 24 && 8 * a5[9] - v38 < v19 )
        return 0;
      goto LABEL_10;
    }
    v22 = a3 + 48;
    if ( (unsigned __int64)*(int *)(a3 + 52) <= 8 )
    {
      if ( *(_BYTE *)(a3 + 48) == 2 )
        goto LABEL_8;
      goto LABEL_22;
    }
  }
  v28 = *(_BYTE *)(a3 + 48);
  if ( v28 == 4 )
  {
    v36 = *(_QWORD *)(a3 + 56);
    if ( *(_DWORD *)v36 != 8 )
      goto LABEL_44;
    v28 = *(_BYTE *)(v36 + 32);
  }
  if ( v28 == 2 )
  {
    if ( v5 != 11 )
      goto LABEL_8;
LABEL_18:
    v40 = v14;
    if ( !(unsigned __int8)sub_1227B0((int *)v9, &v46, &v48, 1) )
      return 0;
    v19 = v46;
    v17 = v40;
    v18 = v46;
LABEL_10:
    if ( v18 > v17 )
      return 0;
    v20 = 1;
    if ( *(_BYTE *)v48 != 4 )
    {
LABEL_12:
      v39 = v19;
      if ( (unsigned __int8)sub_1227B0((int *)a3, &v47, v49, v20) && v47 == v39 )
        return sub_1321C0(a1, a2, v49[0], a4, v48);
      return 0;
    }
    v27 = *(_QWORD *)(v48 + 8);
    if ( *(_DWORD *)v27 == 14 )
    {
      if ( *a5 == 11 )
        return 0;
      if ( *(_BYTE *)(v27 + 48) == 2 )
      {
        v29 = v27 + 32;
        v30 = v27 + 48;
      }
      else
      {
        if ( *(_BYTE *)(v27 + 32) != 2 )
          goto LABEL_12;
        v29 = v27 + 48;
        v30 = v27 + 32;
      }
      v31 = *(unsigned int *)(v30 + 4);
      v32 = *(_QWORD *)(v30 + 8);
      v48 = v29;
      v43 = v19;
      v33 = sub_32ABC0(*(_QWORD *)(v32 + 16), v31, 1);
      v19 = v43;
      v34 = v33 + 1;
      v20 = v33;
      v35 = 1LL << v46;
      if ( (unsigned __int64)v46 >= 0x40 )
        v35 = 0;
      if ( v34 != v35 )
      {
        if ( !v20 )
          return 0;
        goto LABEL_12;
      }
    }
    else
    {
      if ( *(_DWORD *)v27 != 5 )
        goto LABEL_12;
      v48 = v27 + 32;
    }
    v20 = -1;
    goto LABEL_12;
  }
LABEL_44:
  if ( v12 == 22 )
  {
    v26 = v9 + 48;
    goto LABEL_30;
  }
LABEL_22:
  if ( v12 != 23 )
    return 0;
  if ( *(_BYTE *)(v9 + 48) != 4 )
    return 0;
  v23 = *(_QWORD *)(v9 + 56);
  if ( *(_DWORD *)v23 != 13 )
    return 0;
  v24 = (_DWORD *)(v23 + 32);
  if ( (unsigned __int64)*(int *)(v23 + 36) > 8 && *(_BYTE *)(v23 + 32) == 4 )
  {
    v37 = *(_DWORD **)(v23 + 40);
    if ( *v37 == 8 )
      v24 = v37 + 8;
  }
  v45 = v15;
  v44 = v14;
  v41 = v22;
  if ( *(_BYTE *)v24 != 2 )
    return 0;
  v25 = sub_32ABC0(*(_QWORD *)(*((_QWORD *)v24 + 1) + 16LL), (unsigned int)v24[1], 0);
  v22 = v41;
  v15 = v45;
  if ( v44 != v25 )
    return 0;
  v26 = *(_QWORD *)(v9 + 56) + 48LL;
LABEL_30:
  v42 = v15;
  if ( !(unsigned __int8)sub_12EA80(*(_QWORD *)(a1[30].m128i_i64[0] + 112), a1, a2, v22, a4, v26, 0) )
    return 0;
  return sub_1321C0(a1, a2, a3 + 32, a4, v42);
}
