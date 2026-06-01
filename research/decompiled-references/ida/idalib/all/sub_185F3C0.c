unsigned __int64 __fastcall sub_185F3C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int8 v13; // dl
  __int64 v14; // rsi
  void *v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // [rsp+8h] [rbp-60h]
  __int64 v22; // [rsp+8h] [rbp-60h]
  __int16 v23; // [rsp+1Ah] [rbp-4Eh]
  unsigned __int8 v24; // [rsp+1Ch] [rbp-4Ch]
  void *v25; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+28h] [rbp-40h]
  __int128 v27; // [rsp+30h] [rbp-38h]
  __int64 v28; // [rsp+40h] [rbp-28h]

  v8 = sub_A72040(*(_QWORD **)(*(_QWORD *)a1 + 248LL), a2);
  if ( v8 && (v9 = (unsigned int)*(unsigned __int8 *)(v8 + 16) - 2, (unsigned int)v9 <= 1) )
  {
    v13 = *(_BYTE *)(v8 + 19);
    v14 = *(_QWORD *)(v8 + 40);
    if ( (v13 & 2) != 0 )
    {
      v26 = *(_DWORD *)(v14 + 8);
      if ( v26 > 0x40 )
      {
        v21 = v8;
        sub_2205510(&v25);
        v8 = v21;
      }
      else
      {
        v15 = *(void **)v14;
        v25 = *(void **)v14;
      }
    }
    else
    {
      LODWORD(v15) = 8 * ((v13 >> 2) & 0x1F);
      v26 = (unsigned int)v15;
      if ( (int)v15 > 64 )
      {
        v22 = v8;
        sub_2205470(&v25, v14, 0);
        v8 = v22;
      }
      else
      {
        v25 = (void *)v14;
      }
    }
    v19 = *(_QWORD *)(v8 + 32);
    v27 = (__int128)_mm_loadu_si128((const __m128i *)&a7);
    v28 = a8;
    v20 = sub_185F3C0(a1, v19, (_DWORD)v15, v10, v11, v12, v27, a8);
    v24 = BYTE2(v20);
    v23 = v20;
    if ( v26 > 0x40 && v25 )
      operator delete[](v25);
  }
  else
  {
    v16 = sub_185F1F0(a1, a2, v9, v10, v11, v12, a7, *((__int64 *)&a7 + 1), a8);
    v23 = v16;
    v24 = BYTE2(v16);
  }
  v17 = (unsigned __int8)v23;
  BYTE1(v17) = HIBYTE(v23);
  return ((unsigned __int64)v24 << 16) | v17;
}
