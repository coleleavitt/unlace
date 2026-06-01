__int64 __fastcall sub_722280(signed __int64 a1, __int64 a2, _WORD *a3, unsigned __int16 a4)
{
  int v6; // ebp
  unsigned __int64 v7; // rdx
  unsigned int v8; // ecx
  __int64 v9; // rbx
  unsigned __int16 *v10; // r10
  unsigned __int16 *v11; // r12
  unsigned __int16 v12; // r9
  int v13; // eax
  signed __int16 v14; // cx
  int v15; // edx
  __int64 v16; // rsi
  unsigned __int16 v17; // r14
  int v18; // r13d
  unsigned __int16 *v19; // r11
  signed __int16 v20; // cx
  unsigned __int16 *v21; // rdx
  unsigned __int16 v22; // r14
  unsigned int v24; // r13d
  char *v25; // r14
  int v26; // edi
  __int64 v27; // rdx
  int v28; // esi
  int v29; // eax
  unsigned __int8 v30; // r11
  unsigned __int8 v31; // di
  int v32; // r13d
  int v33; // [rsp+4h] [rbp-64h]
  unsigned __int16 *v34; // [rsp+8h] [rbp-60h]
  unsigned __int64 v35; // [rsp+8h] [rbp-60h]
  int v36; // [rsp+8h] [rbp-60h]
  unsigned __int16 *v37; // [rsp+10h] [rbp-58h]
  int v38; // [rsp+10h] [rbp-58h]
  signed __int16 v39; // [rsp+10h] [rbp-58h]
  signed __int16 v40; // [rsp+18h] [rbp-50h]
  unsigned __int64 v41; // [rsp+18h] [rbp-50h]
  unsigned __int8 v42; // [rsp+23h] [rbp-45h]
  unsigned __int16 v43; // [rsp+24h] [rbp-44h]
  unsigned int v44; // [rsp+24h] [rbp-44h]
  int v45; // [rsp+28h] [rbp-40h]
  unsigned __int16 v46; // [rsp+2Ch] [rbp-3Ch]

  v6 = a2;
  v7 = (unsigned __int16)*a3;
  v8 = *(unsigned __int16 *)((char *)a3 + (unsigned __int16)v7 + 2);
  LOBYTE(a2) = v8 > 0x404 || (unsigned __int16)v7 > 0x204u;
  v42 = a2;
  if ( (_BYTE)a2 )
    goto LABEL_40;
  v9 = a1;
  v45 = a4;
  v10 = (unsigned __int16 *)(a1 + 6);
  a2 = 3LL * v6;
  v11 = (unsigned __int16 *)(a1 + 6 + 6LL * v6);
  v33 = v8 + v7 - a4 + 4;
  v12 = *v11;
  v13 = *(__int16 *)(a1 + 4);
  v14 = *(_WORD *)(a1 + 4);
  if ( *v11 != a4 || v13 <= v6 )
    goto LABEL_4;
  a1 = v11[2];
  v24 = *(_DWORD *)(v9 - 8);
  v44 = a1;
  if ( (unsigned int)a1 >= v24 )
    goto LABEL_40;
  v25 = (char *)(v9 + a1);
  v35 = *(unsigned __int16 *)(v9 + a1);
  a1 += v9 + v35 + 2;
  a2 = a1 + 1 - v9;
  if ( (unsigned int)a2 >= v24 )
    goto LABEL_40;
  a1 = *(unsigned __int16 *)a1;
  a2 = (__int64)&v25[(int)(a1 + (unsigned __int16)v35 + 4) - 1 - v9];
  if ( (unsigned int)a2 >= v24 )
    goto LABEL_40;
  LODWORD(v7) = v7 - a4;
  if ( (v7 & 0x80000000) != 0LL )
  {
    v28 = -1;
  }
  else
  {
    v7 = (unsigned int)v7;
    v41 = v7;
    if ( v35 <= (unsigned int)v7 )
      v7 = v35;
    v26 = v7;
    if ( v7 )
    {
      v38 = v13;
      v27 = 0;
      v28 = 1;
      v29 = v26;
      while ( 1 )
      {
        v30 = *((_BYTE *)a3 + a4 + v27 + 2);
        v31 = v25[v27 + 2];
        if ( v30 != v31 )
          break;
        ++v28;
        ++v27;
        if ( v29 < v28 )
        {
          v13 = v38;
          goto LABEL_36;
        }
      }
      v13 = v38;
      if ( v30 < v31 )
        v28 = -v28;
    }
    else
    {
      v28 = 1;
LABEL_36:
      if ( v35 == v41 )
      {
LABEL_4:
        v15 = v13;
        v16 = v14;
        goto LABEL_5;
      }
      if ( v35 >= v41 )
        v28 = -v28;
    }
  }
  v15 = v13;
  v32 = v12 - 1 - v28;
  v16 = v14;
  if ( v12 < v32 )
  {
    v36 = v13;
    v46 = a4;
    v39 = v14;
    sub_722160(v9, v44, v32 - (unsigned int)a4);
    *v11 = v32;
    v15 = *(__int16 *)(v9 + 4);
    v13 = v36;
    v14 = v39;
    v10 = (unsigned __int16 *)(v9 + 6);
    a4 = v46;
    v16 = *(__int16 *)(v9 + 4);
  }
LABEL_5:
  v43 = a4;
  v17 = v10[3 * v14 + 2];
  v18 = v10[3 * v16 + 2] - (6 * (v15 + 4) + 6);
  v40 = v14;
  v37 = &v10[3 * v14];
  v34 = v10;
  memmove((void *)(v9 + 6 + 6LL * v6), (const void *)(v9 + 6LL * v6), 6LL * (v13 - v6 + 1));
  a2 = (unsigned int)(v6 + 1);
  a1 = 0;
  v19 = v37;
  *v11 = v43;
  v20 = v40;
  v21 = &v34[3 * (int)a2];
  if ( (int)a2 < *(__int16 *)(v9 + 4) - 1 && *v21 == v21[3] )
    a1 = (unsigned int)v21[4] + 1;
  v21[1] = a1;
  v7 = 0;
  if ( v6 < *(__int16 *)(v9 + 4) - 1 && *v11 == v11[3] )
    v7 = (unsigned int)v11[4] + 1;
  v11[1] = v7;
  if ( v6 )
  {
    a2 = (unsigned int)v6;
    a1 = v9;
    sub_720F40(v9, v6);
    v20 = v40;
  }
  *(_WORD *)(v9 + 4) = v20 + 1;
  if ( v18 >= (unsigned __int64)(v33 + 6) )
  {
    v22 = v17 - v33;
    if ( *(_DWORD *)(v9 - 8) >= (unsigned int)v22 )
    {
      v19[5] = v22;
      if ( *(_DWORD *)(v9 - 8) >= (unsigned int)v22 )
      {
        v11[2] = v22;
        if ( (unsigned int)v22 < *(_DWORD *)(v9 - 8) )
        {
          sub_71D1E0(v9 + v22, a3, v45);
          return 1;
        }
      }
    }
LABEL_40:
    sub_722BF0(a1, a2, v7);
  }
  v11[2] = 0;
  if ( *(_DWORD *)(v9 - 8) < (unsigned int)v17 )
    goto LABEL_40;
  v19[5] = v17;
  return v42;
}

