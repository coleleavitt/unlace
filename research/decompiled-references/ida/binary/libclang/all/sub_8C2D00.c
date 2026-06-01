unsigned __int64 __fastcall sub_8C2D00(
        _QWORD *a1,
        char a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int16 a7,
        int a8,
        unsigned __int64 a9,
        char a10)
{
  char v14; // cl
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned __int64 v17; // rbx
  char v18; // al
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // ebp
  __int64 v23; // rdi
  int v25; // edx
  __int64 v26; // rax
  __int64 v27; // r12
  __int64 v28; // [rsp+0h] [rbp-48h]

  v14 = a10;
  v15 = a1[274];
  v16 = 8 * ((_DWORD)a5 + 1 - ((unsigned int)(HIDWORD(a9) == 0) - 1)) + 32LL;
  a1[284] += v16;
  v17 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v16 + v17 && v15 )
  {
    a1[274] = v16 + v17;
  }
  else
  {
    v28 = a6;
    v26 = sub_8C1090((__int64)(a1 + 274), v16, 3);
    v14 = a10;
    a6 = v28;
    v17 = v26;
  }
  sub_80AF80(v17, 0x5Cu, a3, 0, 0, a6, a4, a5, a7, a8, a9, 0, v14);
  v18 = *(_BYTE *)(v17 + 4);
  *(_QWORD *)(v17 + 24) = 0;
  *(_BYTE *)(v17 + 4) = a2 & 0x3F | v18 & 0xC0;
  v19 = a2 & 0x3F;
  if ( (unsigned int)(v19 - 37) <= 1 )
  {
    v22 = *(_DWORD *)(v17 + 20);
    v23 = *(_QWORD *)(v17 + 8LL * ((*(_BYTE *)(v17 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(v17 + 3));
    if ( *(_DWORD *)(v17 + 16) == 1 )
    {
      v25 = sub_AC7460(v23);
      v21 = v22;
      v22 = v25;
      goto LABEL_13;
    }
    goto LABEL_12;
  }
  if ( v19 == 41 || v19 == 42 || v19 == 43 )
  {
    v22 = *(_DWORD *)(v17 + 20);
    v23 = *(_QWORD *)(v17 + 8LL * ((*(_BYTE *)(v17 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(v17 + 3));
LABEL_12:
    v21 = sub_AC6DA0(v23);
    goto LABEL_13;
  }
  v20 = *(_DWORD *)(v17 + 16);
  if ( v20 == 1 )
  {
    v22 = sub_AC7460(*(_QWORD *)(v17 + 8LL * ((*(_BYTE *)(v17 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(v17 + 3)));
    v21 = *(_DWORD *)(v17 + 20);
  }
  else if ( v20 == 2 )
  {
    v27 = *(unsigned __int8 *)(v17 + 3) + 8LL * ((*(_BYTE *)(v17 + 2) & 8) != 0) + 8;
    v22 = sub_AC7460(*(_QWORD *)(v17 + v27 + 8));
    v21 = sub_AC6DA0(*(_QWORD *)(v17 + v27));
  }
  else
  {
    v21 = *(_DWORD *)(v17 + 20);
    v22 = v21;
  }
LABEL_13:
  *(_DWORD *)(v17 + 24) = v21;
  *(_DWORD *)(v17 + 28) = v22;
  return v17;
}

