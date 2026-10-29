unsigned __int64 __fastcall sub_1DC29F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v6; // rdx
  char v7; // di
  __int64 v8; // r8
  int v9; // esi
  unsigned int v10; // ecx
  __int64 *v11; // rdx
  __int64 v12; // r9
  unsigned __int64 *v13; // rbp
  unsigned __int64 result; // rax
  __int64 v15; // rcx
  unsigned int v16; // esi
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdi
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // r11d
  __int64 *v24; // r10
  __int64 v25; // rdi
  int v26; // esi
  unsigned int v27; // ecx
  __int64 v28; // r8
  __int64 v29; // rdi
  int v30; // esi
  unsigned int v31; // ecx
  __int64 v32; // r8
  int v33; // r10d
  __int64 *v34; // r9
  int v35; // esi
  int v36; // esi
  int v37; // r10d
  _QWORD *v38; // [rsp+8h] [rbp-20h]
  __int64 v39; // [rsp+8h] [rbp-20h]
  __int64 v40; // [rsp+8h] [rbp-20h]

  v4 = a2;
  v6 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (_BYTE)v6 == 43 )
    v4 = sub_1DB81F0(a2, a2, v6, a4);
  v7 = *(_BYTE *)(a1 + 8) & 1;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
  {
    v8 = a1 + 16;
    v9 = 3;
  }
  else
  {
    v16 = *(_DWORD *)(a1 + 24);
    v8 = *(_QWORD *)(a1 + 16);
    if ( !v16 )
    {
      v17 = *(unsigned int *)(a1 + 8);
      v11 = nullptr;
      v18 = (unsigned int)((*(_DWORD *)(a1 + 8) >> 1) + 1);
LABEL_12:
      v19 = 3 * v16;
      goto LABEL_13;
    }
    v9 = v16 - 1;
  }
  v10 = v9 & (((unsigned int)v4 >> 9) ^ ((unsigned int)v4 >> 4));
  v11 = (__int64 *)(v8 + 16LL * v10);
  v12 = *v11;
  if ( v4 == *v11 )
    goto LABEL_6;
  v23 = 1;
  v24 = nullptr;
  if ( v12 != -4096 )
  {
    while ( 1 )
    {
      if ( !v24 && v12 == -8192 )
        v24 = v11;
      v10 = v9 & (v23 + v10);
      v11 = (__int64 *)(v8 + 16LL * v10);
      v12 = *v11;
      if ( v4 == *v11 )
        goto LABEL_6;
      if ( v12 == -4096 )
        break;
      ++v23;
    }
    if ( v24 )
      v11 = v24;
  }
  v17 = *(unsigned int *)(a1 + 8);
  v19 = 12;
  v16 = 4;
  v18 = (unsigned int)((*(_DWORD *)(a1 + 8) >> 1) + 1);
  if ( !v7 )
  {
    v16 = *(_DWORD *)(a1 + 24);
    goto LABEL_12;
  }
LABEL_13:
  v20 = a1 + 8;
  if ( 4 * (int)v18 >= (unsigned int)v19 )
  {
    v39 = v4;
    sub_1DC1BE0(v20, 2 * v16, (unsigned __int64)v11, v17, v18, v19);
    v4 = v39;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    {
      v25 = a1 + 16;
      v26 = 3;
    }
    else
    {
      v35 = *(_DWORD *)(a1 + 24);
      v25 = *(_QWORD *)(a1 + 16);
      if ( !v35 )
        goto LABEL_59;
      v26 = v35 - 1;
    }
    v27 = v26 & (((unsigned int)v39 >> 9) ^ ((unsigned int)v39 >> 4));
    v11 = (__int64 *)(v25 + 16LL * v27);
    v28 = *v11;
    if ( v39 != *v11 && v28 != -4096 )
    {
      v37 = 1;
      v34 = nullptr;
      while ( 1 )
      {
        if ( !v34 && v28 == -8192 )
          v34 = v11;
        v27 = v26 & (v37 + v27);
        v11 = (__int64 *)(v25 + 16LL * v27);
        v28 = *v11;
        if ( v39 == *v11 )
          break;
        if ( v28 == -4096 )
        {
LABEL_44:
          if ( v34 )
            v11 = v34;
          goto LABEL_33;
        }
        ++v37;
      }
    }
    goto LABEL_33;
  }
  v21 = v16 - *(_DWORD *)(a1 + 12) - (unsigned int)v18;
  v22 = v16 >> 3;
  if ( (unsigned int)v21 <= (unsigned int)v22 )
  {
    v40 = v4;
    sub_1DC1BE0(v20, v16, (unsigned __int64)v11, v17, v21, v22);
    v4 = v40;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    {
      v29 = a1 + 16;
      v30 = 3;
LABEL_36:
      v31 = v30 & (((unsigned int)v40 >> 9) ^ ((unsigned int)v40 >> 4));
      v11 = (__int64 *)(v29 + 16LL * v31);
      v32 = *v11;
      if ( v40 != *v11 && v32 != -4096 )
      {
        v33 = 1;
        v34 = nullptr;
        while ( 1 )
        {
          if ( v32 == -8192 && !v34 )
            v34 = v11;
          v31 = v30 & (v33 + v31);
          v11 = (__int64 *)(v29 + 16LL * v31);
          v32 = *v11;
          if ( v40 == *v11 )
            break;
          if ( v32 == -4096 )
            goto LABEL_44;
          ++v33;
        }
      }
LABEL_33:
      LODWORD(v17) = *(_DWORD *)(a1 + 8);
      goto LABEL_15;
    }
    v36 = *(_DWORD *)(a1 + 24);
    v29 = *(_QWORD *)(a1 + 16);
    if ( v36 )
    {
      v30 = v36 - 1;
      goto LABEL_36;
    }
LABEL_59:
    *(_DWORD *)(a1 + 8) = (2 * (*(_DWORD *)(a1 + 8) >> 1) + 2) | *(_DWORD *)(a1 + 8) & 1;
    BUG();
  }
LABEL_15:
  *(_DWORD *)(a1 + 8) = (2 * ((unsigned int)v17 >> 1) + 2) | v17 & 1;
  if ( *v11 != -4096 )
    --*(_DWORD *)(a1 + 12);
  *v11 = v4;
  v11[1] = 0;
LABEL_6:
  v13 = (unsigned __int64 *)(v11 + 1);
  result = operator new(0x30u);
  *(_QWORD *)(result + 8) = 0x400000000LL;
  *(_QWORD *)result = result + 16;
  *v13 = result | 4;
  v15 = *(unsigned int *)(a1 + 88);
  if ( v15 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 92) )
  {
    v38 = (_QWORD *)result;
    sub_2237220(a1 + 80, a1 + 96, v15 + 1, 8);
    v15 = *(unsigned int *)(a1 + 88);
    result = (unsigned __int64)v38;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8 * v15) = result;
  ++*(_DWORD *)(a1 + 88);
  return result;
}
