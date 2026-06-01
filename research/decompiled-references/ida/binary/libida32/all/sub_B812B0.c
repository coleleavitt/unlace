unsigned __int64 __fastcall sub_B812B0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r13
  int v7; // eax
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r14
  unsigned __int64 result; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // r15
  _QWORD **v15; // r14
  _QWORD *v16; // rbp
  unsigned __int64 v17; // rbx
  _QWORD *v18; // r12
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdi
  int v21; // eax
  int v22; // eax
  bool v23; // zf
  unsigned int v24; // edx
  _QWORD *i; // rax
  __int64 v26; // r11
  unsigned int v27; // eax
  __int64 v28; // rax
  _QWORD *v29; // rax
  unsigned int v30; // edx
  unsigned __int64 v31; // rax
  int v32; // ebp
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  _QWORD *v38; // rax
  __int64 v39; // rdx
  _QWORD *v40; // rdx
  _QWORD **v42; // [rsp+10h] [rbp-78h]
  int v44; // [rsp+24h] [rbp-64h]
  unsigned __int64 v45; // [rsp+40h] [rbp-48h] BYREF
  __int64 v46[8]; // [rsp+48h] [rbp-40h] BYREF

  v6 = a2;
  v7 = *(_DWORD *)(a2 + 8);
  if ( !v7 )
  {
    if ( !*(_DWORD *)(a2 + 12) )
      goto LABEL_5;
    v8 = *(_QWORD **)a2;
    v9 = *(unsigned int *)(a2 + 16);
    a2 = 16 * v9;
    if ( (unsigned int)v9 > 0x40 )
    {
      operator delete();
      *(_QWORD *)v6 = 0;
      *(_QWORD *)(v6 + 8) = 0;
      *(_DWORD *)(v6 + 16) = 0;
      goto LABEL_5;
    }
    goto LABEL_38;
  }
  v24 = 4 * v7;
  a5 = 64;
  a2 = *(unsigned int *)(a2 + 16);
  v8 = *(_QWORD **)v6;
  if ( (unsigned int)(4 * v7) < 0x40 )
    v24 = 64;
  if ( v24 >= (unsigned int)a2 )
  {
    a2 *= 16;
LABEL_38:
    for ( i = (_QWORD *)((char *)v8 + a2); i != v8; v8 += 2 )
      *v8 = -4096;
    *(_QWORD *)(v6 + 8) = 0;
    goto LABEL_5;
  }
  v27 = v7 - 1;
  if ( v27 )
  {
    _BitScanReverse(&v27, v27);
    a4 = 33 - (v27 ^ 0x1F);
    v28 = (unsigned int)(1 << (33 - (v27 ^ 0x1F)));
    if ( (int)v28 < 64 )
      v28 = 64;
    if ( (_DWORD)v28 == (_DWORD)a2 )
    {
      *(_QWORD *)(v6 + 8) = 0;
      v29 = &v8[2 * v28];
      do
      {
        *v8 = -4096;
        v8 += 2;
      }
      while ( v29 != v8 );
      goto LABEL_5;
    }
    v30 = 4 * (int)v28 / 3u;
    v31 = (((v30 + 1) | ((unsigned __int64)(v30 + 1) >> 1) | (((v30 + 1) | ((unsigned __int64)(v30 + 1) >> 1)) >> 2)) >> 4)
        | (v30 + 1)
        | ((unsigned __int64)(v30 + 1) >> 1)
        | (((v30 + 1) | ((unsigned __int64)(v30 + 1) >> 1)) >> 2)
        | (((((v30 + 1) | ((unsigned __int64)(v30 + 1) >> 1) | (((v30 + 1) | ((unsigned __int64)(v30 + 1) >> 1)) >> 2)) >> 4)
          | (v30 + 1)
          | ((unsigned __int64)(v30 + 1) >> 1)
          | (((v30 + 1) | ((unsigned __int64)(v30 + 1) >> 1)) >> 2)) >> 8);
    v32 = (v31 | (v31 >> 16)) + 1;
    v33 = 16 * ((v31 | (v31 >> 16)) + 1);
  }
  else
  {
    v33 = 2048;
    v32 = 128;
  }
  operator delete();
  *(_DWORD *)(v6 + 16) = v32;
  a2 = 8;
  v38 = (_QWORD *)sub_220C370(v33, 8, v34, v35, v36, v37);
  v39 = *(unsigned int *)(v6 + 16);
  *(_QWORD *)(v6 + 8) = 0;
  *(_QWORD *)v6 = v38;
  v40 = &v38[2 * v39];
  if ( v38 != v40 )
  {
    a4 = -4096;
    do
    {
      *v38 = -4096;
      v38 += 2;
    }
    while ( v40 != v38 );
  }
LABEL_5:
  *a3 = 0;
  v10 = *(_QWORD *)(a1 + 128);
  result = *(_QWORD *)(v10 + 128);
  if ( (result & 4) != 0 )
  {
    v13 = result & 0xFFFFFFFFFFFFFFF8LL;
    v12 = *(_QWORD *)v13;
    result = *(_QWORD *)v13 + 8LL * *(unsigned int *)(v13 + 8);
    v42 = (_QWORD **)result;
  }
  else
  {
    v12 = v10 + 128;
    if ( (result & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      return result;
    result = v10 + 136;
    v42 = (_QWORD **)(v10 + 136);
  }
  if ( v42 != (_QWORD **)v12 )
  {
    v14 = *(_QWORD *)(a1 + 128);
    v15 = (_QWORD **)v12;
    while ( 1 )
    {
      v16 = *v15;
      result = sub_B5ABC0(a1, a2, v12, a4, a5, a6);
      v17 = result;
      v18 = &v16[2 * ((*(_DWORD *)(v14 + 104) >> 5) & 0x7FFF)];
      if ( v16 != v18 )
        break;
LABEL_19:
      if ( v42 == ++v15 )
        return result;
    }
    while ( 1 )
    {
      v19 = *v16 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v19 )
      {
        v12 = *v16 & 4LL;
        if ( (_DWORD)v12 )
          *a3 = v17;
        goto LABEL_15;
      }
      v20 = *v16 & 0xFFFFFFFFFFFFFFF8LL;
      v12 = (*(_BYTE *)(v19 + 28) & 0x7Fu) - 26;
      if ( (unsigned int)v12 <= 0x1A )
        break;
LABEL_15:
      v16 += 2;
      do
      {
        result = *(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v17 = result;
        if ( !result )
          break;
        result = (*(_BYTE *)(result + 28) & 0x7Fu) - 49;
      }
      while ( (unsigned int)result > 2 );
      if ( v18 == v16 )
        goto LABEL_19;
    }
    a2 = *(unsigned int *)(v6 + 16);
    v45 = *v16 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (_DWORD)a2 )
    {
      a6 = *(_QWORD *)v6;
      a4 = ((_DWORD)a2 - 1) & (((unsigned int)v19 >> 9) ^ ((unsigned int)v19 >> 4));
      v12 = *(_QWORD *)v6 + 16 * a4;
      a5 = *(_QWORD *)v12;
      if ( *(_QWORD *)v12 == v19 )
      {
LABEL_24:
        v12 += 8;
        *(_QWORD *)v12 = v17;
        goto LABEL_15;
      }
      if ( a5 != -4096 )
      {
        v44 = 1;
        v26 = 0;
        while ( 1 )
        {
          if ( !v26 && a5 == -8192 )
            v26 = v12;
          a4 = ((_DWORD)a2 - 1) & (unsigned int)(v44 + a4);
          v12 = a6 + 16LL * (unsigned int)a4;
          a5 = *(_QWORD *)v12;
          if ( *(_QWORD *)v12 == v19 )
            goto LABEL_24;
          if ( a5 == -4096 )
          {
            if ( v26 )
              v12 = v26;
            break;
          }
          ++v44;
        }
      }
      v21 = *(_DWORD *)(v6 + 8);
      a4 = (unsigned int)(3 * a2);
      v46[0] = v12;
      v22 = v21 + 1;
      a5 = (unsigned int)(4 * v22);
      if ( (unsigned int)a5 < (unsigned int)a4 )
      {
        a4 = (unsigned int)(a2 - *(_DWORD *)(v6 + 12) - v22);
        a5 = (unsigned int)a2 >> 3;
        if ( (unsigned int)a4 > (unsigned int)a5 )
        {
LABEL_28:
          v23 = *(_QWORD *)v12 == -4096;
          *(_DWORD *)(v6 + 8) = v22;
          if ( !v23 )
            --*(_DWORD *)(v6 + 12);
          *(_QWORD *)v12 = v20;
          *(_QWORD *)(v12 + 8) = 0;
          goto LABEL_24;
        }
LABEL_33:
        sub_B810A0(v6, a2, v12, a4, a5, a6);
        a2 = (__int64)&v45;
        sub_B77890((__int64 *)v6, (__int64 *)&v45, v46);
        v20 = v45;
        v12 = v46[0];
        v22 = *(_DWORD *)(v6 + 8) + 1;
        goto LABEL_28;
      }
    }
    else
    {
      v46[0] = 0;
    }
    LODWORD(a2) = 2 * a2;
    goto LABEL_33;
  }
  return result;
}

