__int64 __fastcall sub_145AEA0(
        __int64 *a1,
        int a2,
        __int64 a3,
        const void *a4,
        size_t a5,
        char a6,
        __int64 a7,
        char a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        char a15)
{
  __int16 v18; // ax
  unsigned int v19; // eax
  bool v20; // cc
  char v21; // r10
  char v22; // r11
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // r8
  unsigned __int64 v26; // rbx
  char v27; // al
  __int64 v28; // rsi
  void *v29; // rcx
  _BYTE *v30; // rax
  __int64 v32; // rax
  unsigned int v34; // [rsp+18h] [rbp-40h]
  char v35; // [rsp+1Eh] [rbp-3Ah]
  char v36; // [rsp+1Fh] [rbp-39h]

  v18 = *(_WORD *)(a3 + 16);
  if ( (unsigned __int16)(v18 - 7) <= 0xCu || v18 == 1 )
  {
    v19 = sub_FDE240(0);
    v20 = v19 <= 0xB;
    if ( v19 != 11 )
      goto LABEL_4;
LABEL_17:
    v21 = 3;
    v22 = a6 ^ 1;
    if ( a6 )
      goto LABEL_8;
    goto LABEL_18;
  }
  v19 = sub_FDE240(*(_QWORD *)(a3 + 8));
  v20 = v19 <= 0xB;
  if ( v19 == 11 )
    goto LABEL_17;
LABEL_4:
  if ( !v20 )
  {
    if ( v19 == 18 )
    {
      v21 = 1;
      goto LABEL_7;
    }
    if ( v19 == 19 )
    {
      v21 = 2;
      goto LABEL_7;
    }
    return sub_145B0E0();
  }
  if ( v19 != 10 )
    return sub_145B0E0();
  v21 = 0;
LABEL_7:
  v22 = a6 ^ 1;
  if ( a6 )
  {
LABEL_8:
    v23 = HIDWORD(a7) - (unsigned int)(a8 == 0);
    goto LABEL_9;
  }
LABEL_18:
  v23 = (unsigned int)a7;
LABEL_9:
  v24 = a1[2];
  v25 = (__int64)(a1 + 2);
  a1[12] += 48;
  v26 = (v24 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[3] >= v26 + 48 && v24 )
  {
    a1[2] = v26 + 48;
  }
  else
  {
    v36 = v21;
    v34 = v23;
    v35 = v22;
    v32 = sub_986170((__int64)(a1 + 2), 48, 48, 3, v25, v23);
    v21 = v36;
    v23 = v34;
    v26 = v32;
    v22 = v35;
    v25 = (__int64)(a1 + 2);
  }
  v27 = *(_BYTE *)(v26 + 32);
  *(_DWORD *)v26 = 3;
  v28 = (unsigned int)(a5 + 1);
  *(_DWORD *)(v26 + 4) = a2;
  *(_DWORD *)(v26 + 8) = v23;
  *(_QWORD *)(v26 + 16) = 0;
  *(_QWORD *)(v26 + 24) = 0;
  *(_QWORD *)(v26 + 40) = a9;
  *(_BYTE *)(v26 + 32) = (8 * (a15 & 1)) | (2 * v21) & 0xF7 | v22 & 1 | v27 & 0xF0;
  v29 = (void *)a1[2];
  a1[12] += v28;
  if ( a1[3] >= (unsigned __int64)v29 + v28 && v29 )
    a1[2] = (__int64)v29 + v28;
  else
    v29 = (void *)sub_986170(v25, v28, (unsigned int)(a5 + 1), 0, v25, v23);
  v30 = memcpy(v29, a4, a5);
  v30[a5] = 0;
  *(_QWORD *)(v26 + 16) = v30;
  *(_QWORD *)(v26 + 24) = a5;
  return sub_145A0C0(a1, (_DWORD *)v26);
}
