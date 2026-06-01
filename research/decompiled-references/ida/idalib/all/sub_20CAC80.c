__int16 __fastcall sub_20CAC80(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // eax
  __int16 v7; // dx
  unsigned int v8; // eax
  __int16 v9; // ax
  __int16 v10; // ax
  __int64 v11; // r12
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int8 *v15; // r12
  __int64 **v16; // rax
  __int64 v17; // rax
  unsigned int v18; // edx
  unsigned int v19; // ecx
  unsigned __int64 v20; // rdx
  char v21; // al
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int8 v24; // dl
  __int64 v25; // rax
  __int64 v26; // rbp
  unsigned int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r8
  char v37; // r9
  __int64 v38; // rcx
  __int64 v39; // rax
  unsigned int v42; // ebx
  __int64 v43; // rcx
  __int64 v45[4]; // [rsp+0h] [rbp-20h] BYREF

  v6 = *a1;
  switch ( (_BYTE)v6 )
  {
    case 0xD:
      v7 = 0;
      if ( HIBYTE(*(_WORD *)(a2 + 18)) )
        v7 = *(_WORD *)(a2 + 18);
      LOWORD(v8) = v7;
      if ( *(_DWORD *)(a2 + 20) )
      {
        v9 = (*((_WORD *)a1 + 17) >> 1) & 0x3F;
        if ( !v9 || (LOWORD(v8) = v9 - 1, (unsigned __int8)v8 <= (unsigned __int8)v7) )
          LOWORD(v8) = v7;
      }
      return v8;
    case 0x10:
      v10 = (*((_WORD *)a1 + 17) >> 1) & 0x3F;
      if ( v10 )
      {
        LOWORD(v8) = v10 - 1;
        return v8;
      }
      v11 = *((_QWORD *)a1 + 3);
      v12 = *(unsigned __int8 *)(v11 + 8);
      v13 = *(unsigned __int8 *)(v11 + 8);
      if ( v12 == 12
        || (unsigned __int8)v13 <= 5u && (a3 = (1LL << v13) & 0x2F, ((1LL << v13) & 0x2F) != 0)
        || (a3 = (unsigned int)v13 & 0xFFFFFFFB, (v13 & 0xFB) == 0xA)
        || (a3 = (unsigned int)v13 & 0xFFFFFFFD, (v13 & 0xFD) == 4)
        || ((v14 = (unsigned int)(v13 - 15), (unsigned __int8)v14 <= 3u) || v12 == 20)
        && (unsigned __int8)sub_20C6390(*((_QWORD *)a1 + 3), 0, a3, v14, a5, a6) )
      {
        if ( (a1[32] & 0xF) == 1
          || sub_208F2E0((__int64)a1)
          || (v21 = a1[32] & 0xF, a3 = (v21 + 14) & 0xF, (unsigned __int8)a3 <= 3u)
          || ((v21 + 7) & 0xFu) <= 1 )
        {
          LOWORD(v8) = sub_206A070(a2, v11, a3, v13, a5, a6);
        }
        else
        {
          LOWORD(v8) = sub_206ACD0(a2, (__int64)a1);
        }
        return v8;
      }
LABEL_18:
      LOWORD(v8) = 0;
      return v8;
    case 0x16:
      LOWORD(v8) = sub_208D3C0((__int64)a1, a2, a3, a4, a5, a6);
      if ( !BYTE1(v8) )
      {
        if ( (unsigned __int8)sub_208D3E0((__int64)a1)
          && ((v29 = sub_208D3D0((__int64)a1),
               v32 = *(unsigned __int8 *)(v29 + 8),
               v33 = *(unsigned __int8 *)(v29 + 8),
               v32 == 12)
           || (unsigned __int8)v32 <= 5u && (v28 = (1LL << v33) & 0x2F, ((1LL << v33) & 0x2F) != 0)
           || (v28 = (unsigned int)v33 & 0xFFFFFFFB, (v33 & 0xFB) == 0xA)
           || (v28 = (unsigned int)v33 & 0xFFFFFFFD, (v33 & 0xFD) == 4)
           || ((v43 = (unsigned int)(v33 - 15), (unsigned __int8)v43 <= 3u) || v32 == 20)
           && (unsigned __int8)sub_20C6390(v29, 0, v28, v43, v30, v31)) )
        {
          LOWORD(v8) = sub_206A070(a2, v29, v28, v33, v30, v31);
        }
        else
        {
          LOWORD(v8) = 0;
        }
      }
      return v8;
    case 0x3C:
      LOWORD(v19) = *((_WORD *)a1 + 1);
LABEL_32:
      v20 = 1LL << v19;
      goto LABEL_33;
  }
  if ( (unsigned __int8)v6 > 0x1Cu )
  {
    v22 = (unsigned int)(v6 - 34);
    if ( (unsigned __int8)(v6 - 34) > 0x33u || (v34 = 0x8000000000041LL, !_bittest64(&v34, v22)) )
    {
      if ( (_BYTE)v6 != 61 )
        goto LABEL_18;
      if ( (a1[7] & 0x20) == 0 )
        goto LABEL_18;
      v23 = sub_20AF750((__int64)a1, 17);
      if ( !v23 )
        goto LABEL_18;
      v24 = *(_BYTE *)(v23 - 16);
      if ( (v24 & 2) != 0 )
        v25 = *(_QWORD *)(v23 - 32);
      else
        v25 = v23 - 8LL * ((v24 >> 2) & 0xF) - 16;
      v26 = *(_QWORD *)(*(_QWORD *)v25 + 128LL);
      v27 = *(_DWORD *)(v26 + 32);
      if ( v27 > 0x40 )
      {
        v42 = v27 - sub_2206780(v26 + 24);
        LOWORD(v8) = 63;
        if ( v42 > 0x40 )
          return v8;
        v20 = **(_QWORD **)(v26 + 24);
      }
      else
      {
        v20 = *(_QWORD *)(v26 + 24);
      }
      LOWORD(v8) = -1;
      if ( !v20 )
        return v8;
LABEL_33:
      _BitScanReverse64(&v20, v20);
      LOWORD(v8) = 63 - (v20 ^ 0x3F);
      return v8;
    }
    LOWORD(v8) = sub_2049690((__int64 *)a1 + 9, a2, v22, 0x8000000000041LL, a5, a6);
    v38 = v8;
    LOWORD(v38) = BYTE1(v8);
    if ( BYTE1(v8) )
      return v8;
    v39 = *((_QWORD *)a1 - 4);
    if ( !v39 )
      goto LABEL_18;
    if ( *(_BYTE *)v39 == 13 )
    {
      v38 = *((_QWORD *)a1 + 10);
      if ( *(_QWORD *)(v39 + 24) == v38 )
      {
        v45[0] = *(_QWORD *)(v39 + 120);
        LOWORD(v8) = sub_2049690(v45, a2, v35, v38, v36, v37);
        v38 = v8;
        LOWORD(v38) = BYTE1(v8);
        if ( BYTE1(v8) )
          return v8;
        v39 = *((_QWORD *)a1 - 4);
        if ( !v39 )
        {
          LOWORD(v8) = 0;
          return v8;
        }
      }
    }
    if ( *(_BYTE *)v39 != 13 || *(_QWORD *)(v39 + 24) != *((_QWORD *)a1 + 10) )
      goto LABEL_18;
    v45[0] = *(_QWORD *)(v39 + 120);
    LOWORD(v8) = sub_2049690(v45, a2, v35, v38, v36, v37);
    if ( !BYTE1(v8) )
      LOWORD(v8) = 0;
  }
  else
  {
    if ( (unsigned __int8)v6 > 0x15u )
      goto LABEL_18;
    v15 = sub_20C9D10(a1, (__int64)sub_20C9C80, (void (__fastcall *)(unsigned __int8 *))nullsub_1303);
    v16 = (__int64 **)sub_206ABE0(a2, *((_QWORD *)a1 + 1));
    v17 = sub_205E5C0(v15, v16, 1);
    if ( !v17 || *(_BYTE *)v17 != 5 )
      goto LABEL_18;
    v18 = *(_DWORD *)(v17 + 32);
    if ( v18 <= 0x40 )
    {
      _RAX = *(_QWORD *)(v17 + 24);
      v19 = 64;
      __asm { tzcnt   rsi, rax }
      if ( _RAX )
        v19 = _RSI;
      if ( v19 > v18 )
        v19 = v18;
    }
    else
    {
      v19 = sub_22068B0(v17 + 24);
    }
    LOWORD(v8) = 32;
    if ( v19 <= 0x1F )
      goto LABEL_32;
  }
  return v8;
}
