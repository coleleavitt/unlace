unsigned __int64 __fastcall sub_8095B0(
        _QWORD *a1,
        const void *a2,
        size_t a3,
        int a4,
        __int16 a5,
        __int64 a6,
        void *src,
        unsigned int a8)
{
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // rbx
  int v14; // esi
  unsigned int v15; // edx
  int v16; // eax
  __int16 v17; // ax
  unsigned int *v19; // rdi
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rax
  int v25; // [rsp+4h] [rbp-44h]
  int v26; // [rsp+4h] [rbp-44h]
  __int64 v27; // [rsp+8h] [rbp-40h]
  __int64 v28; // [rsp+8h] [rbp-40h]

  v11 = a1[274];
  v12 = 4LL * a8 + 4 + a3 + 16;
  a1[284] += v12;
  v13 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v12 + v13 && v11 )
  {
    a1[274] = v12 + v13;
  }
  else
  {
    v28 = a6;
    v26 = a4;
    v24 = sub_804090((__int64)(a1 + 274), v12, 3);
    a6 = v28;
    a4 = v26;
    v13 = v24;
  }
  *(_WORD *)v13 = *(_WORD *)v13 & 0xFE00 | 0xA;
  if ( byte_4AD234C )
  {
    v27 = a6;
    v25 = a4;
    sub_AC4570(10);
    a6 = v27;
    a4 = v25;
  }
  v14 = *(_DWORD *)v13;
  *(_QWORD *)(v13 + 8) = a6;
  v15 = a3;
  v16 = (a4 << 19) & 0x380000;
  BYTE1(v16) = 2;
  *(_DWORD *)v13 = v14 & 0xFFC001FF | v16;
  *(_DWORD *)(v13 + 4) = a8;
  if ( a4 == 5 )
  {
    v17 = 1;
    a5 = 0;
  }
  else
  {
    v19 = (unsigned int *)a1[2161];
    switch ( a4 )
    {
      case 0:
      case 2:
        goto LABEL_10;
      case 1:
        v23 = sub_CB7E60(v19, v19[38]);
        v15 = a3;
        v21 = v23 >> 3;
        break;
      case 3:
        v22 = sub_CB7E60(v19, v19[40]);
        v15 = a3;
        v21 = v22 >> 3;
        break;
      case 4:
        v20 = sub_CB7E60(v19, v19[41]);
        v15 = a3;
        v21 = v20 >> 3;
        break;
    }
    if ( v21 == 2 )
    {
      v17 = 2;
      v15 = (unsigned int)a3 >> 1;
    }
    else if ( v21 == 4 )
    {
      v17 = 4;
      v15 = (unsigned int)a3 >> 2;
    }
    else
    {
LABEL_10:
      v17 = 1;
    }
  }
  *(_DWORD *)(v13 + 16) = v15;
  *(_WORD *)(v13 + 2) = *(_WORD *)(v13 + 2) & 0xFC3F | ((v17 << 6) | (a5 << 9)) & 0x3C0;
  memcpy((void *)(v13 + 20), src, 4LL * a8);
  memcpy((void *)(v13 + 4LL * *(unsigned int *)(v13 + 4) + 20), a2, a3);
  *(_BYTE *)(v13 + 1) &= 0x3Fu;
  *(_BYTE *)(v13 + 2) &= 0xF8u;
  return v13;
}

