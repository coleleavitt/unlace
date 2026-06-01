void __fastcall sub_1D3A610(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned int a4, unsigned __int64 *a5)
{
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r15
  __int64 v11; // rax
  unsigned int v12; // r9d
  unsigned __int64 v13; // r10
  __int64 v14; // rax
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rsi
  _QWORD *v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  unsigned __int64 v20; // r15
  __int64 v21; // rax
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rsi
  unsigned __int16 v24; // cx
  unsigned __int64 v25; // rax
  unsigned __int16 v26; // cx
  unsigned int v27; // [rsp+Ch] [rbp-4Ch]
  unsigned __int64 v28; // [rsp+10h] [rbp-48h]
  __int64 v29[8]; // [rsp+18h] [rbp-40h] BYREF

  v29[0] = a2;
  v8 = sub_F22BD0(v29, 0);
  if ( v8 )
  {
    if ( (*(_BYTE *)(v8 + 28) & 0x7F) == 0x44 && (*(_DWORD *)(v8 + 64) & 0xFFFFF) == a4 )
    {
      v24 = *(_WORD *)(v8 + 66);
      v25 = *a5;
      v26 = v24 >> 4;
      if ( (*a5 & 1) != 0 )
        *a5 = 2 * ((v25 >> 58 << 57) | ~(-1LL << (v25 >> 58)) & (~(-1LL << (v25 >> 58)) & (v25 >> 1) | (1LL << v26)))
            + 1;
      else
        *(_QWORD *)(*(_QWORD *)v25 + 8LL * (v26 >> 6)) |= 1LL << v26;
    }
  }
  else
  {
    v9 = sub_F22F50(v29);
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 8);
        v12 = a3;
        v13 = v11 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v11 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v14 = *(_QWORD *)(v13 + 8);
          if ( (v14 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            v28 = *(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            sub_1D3A4A0(a1, *(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL, a3, a4, a5);
            v13 = v28;
            v12 = a3;
            v14 = *(_QWORD *)(v28 + 8);
          }
          v15 = 0;
          if ( ((v14 >> 1) & 3) == 2 )
            v15 = *(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF0LL;
          v27 = v12;
          sub_1D39F20(a1, v15, v12, a4, a5);
          v11 = *(_QWORD *)(v10 + 8);
          v12 = v27;
        }
        v16 = 0;
        if ( ((v11 >> 1) & 3) == 2 )
          v16 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFF0LL;
        sub_1D39F20(a1, v16, v12, a4, a5);
      }
    }
    v17 = (_QWORD *)sub_F22F70(v29);
    if ( v17 )
    {
      v18 = *v17 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v18 )
      {
        v19 = *(_QWORD *)(v18 + 8);
        v20 = v19 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v19 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v21 = *(_QWORD *)(v20 + 8);
          if ( (v21 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            sub_1D3A4A0(a1, *(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF8LL, a3, a4, a5);
            v21 = *(_QWORD *)(v20 + 8);
          }
          v22 = 0;
          if ( ((v21 >> 1) & 3) == 2 )
            v22 = *(_QWORD *)(v20 + 16) & 0xFFFFFFFFFFFFFFF0LL;
          sub_1D39F20(a1, v22, a3, a4, a5);
          v19 = *(_QWORD *)(v18 + 8);
        }
        v23 = 0;
        if ( ((v19 >> 1) & 3) == 2 )
          v23 = *(_QWORD *)(v18 + 16) & 0xFFFFFFFFFFFFFFF0LL;
        sub_1D39F20(a1, v23, a3, a4, a5);
      }
    }
  }
}
