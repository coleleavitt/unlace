unsigned __int64 __fastcall sub_9752A0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _BYTE *v9; // rax
  char v10; // si
  unsigned __int64 v11; // rcx
  __int64 v12; // r13
  _QWORD *v13; // rax
  __int64 *v14; // rdx
  _QWORD *v15; // rdx
  int v16; // eax
  unsigned __int64 v17; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rdi
  int v21; // eax
  unsigned __int64 v22; // rdx
  __int64 v23; // r15
  int v24; // r14d
  __int64 *v25; // r13
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 *v28; // rdx
  unsigned __int64 *v29; // rax
  unsigned __int8 v30; // dl
  unsigned __int64 v31; // rdi
  unsigned __int8 v32; // cl
  unsigned __int64 *v33; // rax

  v9 = *(_BYTE **)(a1 + 328);
  if ( !v9[59] && !v9[60] && !v9[63] )
    return a3;
  v10 = *(_BYTE *)(a2 + 96);
  v11 = *(_BYTE *)(a2 + 96) & 7;
  if ( !(_BYTE)v11 )
  {
    v19 = *(_QWORD *)&byte_8[*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v19 & 8) != 0
      && (*(_DWORD *)((char *)&qword_18 + (v19 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v19 & 7)) >> 9 == 3 )
    {
      return a3;
    }
    if ( ((*(_BYTE *)(a2 + 28) + 85) & 0x7D) != 0 )
    {
      v20 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
        v20 = *(_QWORD *)(v20 + 8);
      v21 = *(_BYTE *)(sub_B6AD60(v20) + 8) & 0x7F;
      if ( !v21 || v21 == 24 )
        return a3;
      if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B )
      {
        v22 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
          v22 = *(_QWORD *)v22;
        if ( ((*(_BYTE *)(v22 + 8) + 70) & 0x7Fu) <= 3 )
          return a3;
      }
      v10 = *(_BYTE *)(a2 + 96);
    }
    if ( (v10 & 0x18) != 0 )
      return a3;
    goto LABEL_7;
  }
  if ( (unsigned __int8)v11 != 5 )
  {
LABEL_6:
    if ( (unsigned __int8)v11 <= 3u )
      return a3;
LABEL_7:
    v9 = *(_BYTE **)(a1 + 328);
    goto LABEL_8;
  }
  v30 = *(_BYTE *)(a2 + 28) & 0x7F;
  v11 = v30;
  if ( v30 == 46 || v30 == 40 )
  {
    v31 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    v11 = *(_QWORD *)(a2 + 16) & 4LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v31 = *(_QWORD *)(v31 + 8);
    if ( v31 )
    {
      v32 = *(_BYTE *)(sub_B6AD60(v31) + 8) & 0x7F;
      if ( v32 > 0x12u )
      {
        if ( ((v32 + 94) & 0x7Fu) > 5 )
        {
LABEL_52:
          if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B )
            return a3;
        }
      }
      else if ( ((1LL << v32) & 0x40182) == 0 )
      {
        goto LABEL_52;
      }
      v11 = *(_BYTE *)(a2 + 96) & 7;
      goto LABEL_6;
    }
  }
  if ( v30 != 43 )
    return a3;
LABEL_8:
  if ( v9[60] || v9[63] || !sub_9750B0((_QWORD *)a1, a2) )
    goto LABEL_10;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    return a3;
  v27 = sub_B68690(a2);
  v28 = *(unsigned __int64 **)v27;
  v11 = *(_QWORD *)v27 + 8LL * *(unsigned int *)(v27 + 8);
  if ( *(_QWORD *)v27 < v11 )
  {
    v29 = *(unsigned __int64 **)v27;
    while ( *(_WORD *)(*v29 + 36) != 174 )
    {
      if ( (unsigned __int64 *)v11 == ++v29 )
        return a3;
    }
    if ( (unsigned __int64 *)v11 == v29 )
      return a3;
LABEL_10:
    if ( a3 )
    {
      v12 = a3 + 8;
      v13 = (_QWORD *)a3;
      v14 = *(__int64 **)(a3 + 16);
      if ( (unsigned __int64)v14 < *(_QWORD *)(a3 + 24) )
      {
LABEL_12:
        *v14 = a2;
        v15 = v14 + 1;
        *(_QWORD *)(a3 + 16) = v15;
        v16 = ((__int64)v15 - *(_QWORD *)(a3 + 8)) >> 3;
        if ( v16 )
        {
          v17 = a3;
        }
        else
        {
          v17 = *(_QWORD *)(a3 + 32);
          v16 = *(_DWORD *)(a3 + 40);
        }
        *(_QWORD *)(a1 + 128) = v17;
        *(_DWORD *)(a1 + 136) = v16;
        return a3;
      }
    }
    else
    {
      v23 = *(_QWORD *)(a1 + 128);
      v24 = *(_DWORD *)(a1 + 136);
      v25 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) & 0xFFFFFFFFFFFFFFF8LL);
      v26 = *v25;
      v25[10] += 48;
      a3 = (v26 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      if ( v25[1] >= a3 + 48 && v26 )
        *v25 = a3 + 48;
      else
        a3 = sub_962430((__int64)v25, 48, 48, 4, a5, a6);
      *(_QWORD *)a3 = v25;
      v12 = a3 + 8;
      *(_QWORD *)(a3 + 24) = 0;
      *(_OWORD *)(a3 + 8) = 0;
      sub_975200(a3 + 8, (_QWORD *)a3, 4u, v11, a5, a6);
      *(_QWORD *)(a3 + 32) = v23;
      v13 = (_QWORD *)a3;
      *(_DWORD *)(a3 + 40) = v24;
      v14 = *(__int64 **)(a3 + 16);
      if ( (unsigned __int64)v14 < *(_QWORD *)(a3 + 24) )
        goto LABEL_12;
    }
    sub_975200(v12, v13, 1u, v11, a5, a6);
    v14 = *(__int64 **)(a3 + 16);
    goto LABEL_12;
  }
  if ( v28 == (unsigned __int64 *)v11 )
    return a3;
  if ( *(_WORD *)(*(_QWORD *)v11 + 36LL) == 174 )
    goto LABEL_10;
  v33 = (unsigned __int64 *)(v11 + 8);
  while ( v28 != v33 )
  {
    v11 = *v33++;
    if ( *(_WORD *)(v11 + 36) == 174 )
      goto LABEL_10;
  }
  return a3;
}

