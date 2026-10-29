unsigned __int64 __fastcall sub_81C180(_QWORD *a1, __int64 a2, _QWORD *a3, __int64 a4, int a5)
{
  __int16 v5; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int8 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned __int64 v14; // rbx
  __int16 v15; // dx
  unsigned __int8 v16; // al
  __int64 v18; // rax
  __int64 v19; // [rsp+8h] [rbp-40h]
  __int64 v20; // [rsp+8h] [rbp-40h]

  v5 = a5;
  if ( a5 == -1 )
  {
    v10 = a1[2309];
    v11 = 0;
  }
  else
  {
    v9 = a3[a5];
    v10 = *(_QWORD *)(v9 + 8);
    v11 = (*(_BYTE *)(v9 + 1) >> 1) & 3;
  }
  v12 = a1[274];
  v13 = 8 * a4 + 24;
  a1[284] += v13;
  v14 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v13 + v14 && v12 )
  {
    a1[274] = v13 + v14;
  }
  else
  {
    v20 = v10;
    v18 = sub_804090((__int64)(a1 + 274), v13, 3);
    v10 = v20;
    v14 = v18;
  }
  *(_WORD *)v14 = *(_WORD *)v14 & 0xFE00 | 0x12;
  if ( byte_4AD234C )
  {
    v19 = v10;
    sub_AC4570(18);
    v10 = v19;
  }
  v15 = *(_WORD *)(v14 + 1);
  *(_QWORD *)(v14 + 8) = v10;
  *(_WORD *)(v14 + 6) = v5 + 1;
  *(_WORD *)(v14 + 1) = v15 & 0xF801 | (2 * v11);
  *(_WORD *)(v14 + 4) = a4 + 1;
  if ( (_DWORD)a4 != -1 )
  {
    *(_QWORD *)(v14 + 16) = a2;
    if ( (_DWORD)a4 )
      memmove((void *)(v14 + 24), a3, 8LL * (unsigned int)a4);
  }
  v16 = sub_76C980(v14);
  *(_BYTE *)(v14 + 1) = (v16 << 6) | *(_BYTE *)(v14 + 1) & 0x3F;
  *(_BYTE *)(v14 + 2) = *(_BYTE *)(v14 + 2) & 0xF8 | (v16 >> 2) & 7;
  return v14;
}

