__int64 __fastcall sub_1915C80(__int64 *a1, int a2, _DWORD *a3, __int64 a4, __int64 a5, int a6, __m128 a7, __m128 a8)
{
  unsigned __int64 v8; // r15
  _QWORD *v12; // rsi
  char v13; // bl
  __int64 v14; // r13
  char v15; // cl
  char v16; // bl
  unsigned __int8 v17; // al
  __int64 result; // rax
  __int64 *v19; // r11
  unsigned __int8 v20; // bl
  unsigned __int8 v21; // bl
  char v22; // al
  unsigned __int8 v23; // bl
  char v24; // al
  char v26; // [rsp+10h] [rbp-78h]
  __int64 v27; // [rsp+18h] [rbp-70h]
  char v28; // [rsp+27h] [rbp-61h]
  void *v29; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v30; // [rsp+38h] [rbp-50h]
  char v31; // [rsp+3Ch] [rbp-4Ch]
  _UNKNOWN **v32; // [rsp+40h] [rbp-48h] BYREF
  char v33; // [rsp+48h] [rbp-40h]
  int v34; // [rsp+4Ch] [rbp-3Ch]

  v8 = (unsigned __int64)a3;
  if ( ((*a3 >> 14) & 0xC) != 0 )
  {
    v12 = (_QWORD *)a1[31];
    v28 = 0;
    v13 = 0;
    v26 = 0;
    v27 = v12[2384];
LABEL_3:
    v14 = sub_EEE9A0(48, v12, 8u);
    *(_WORD *)v14 = *(_WORD *)v14 & 0xFE00 | 0x4D;
    if ( unk_2CD7484 )
      sub_EE9B50(77);
    *(_DWORD *)(v14 + 44) = a6;
    v15 = 2 * (v13 & 3);
    v16 = *(_BYTE *)(v14 + 1);
    *(_QWORD *)(v14 + 16) = v8;
    *(_QWORD *)(v14 + 24) = a4;
    *(_QWORD *)(v14 + 32) = a5;
    *(_BYTE *)(v14 + 1) = (8 * (v28 & 7)) | v15 | v16 & 1;
    *(_QWORD *)(v14 + 8) = v27;
    *(_DWORD *)(v14 + 40) = a2;
    *(_BYTE *)(v14 + 2) = (8 * v26) | *(_BYTE *)(v14 + 2) & 0xF0;
    v17 = sub_B62F20(v14);
    *(_BYTE *)(v14 + 1) = (v17 << 6) | *(_BYTE *)(v14 + 1) & 0x3F;
    *(_BYTE *)(v14 + 2) = *(_BYTE *)(v14 + 2) & 0xF8 | (v17 >> 2) & 7;
    return v14;
  }
  v30 = 32;
  v29 = nullptr;
  v31 = 1;
  v33 = 0;
  v32 = &off_2BC6EB8;
  v34 = 5238;
  result = sub_1914D50(a1, (unsigned __int64)a3, (__int64)&v29, (_BOOL4 *)&v32, 0, a7, a8);
  v19 = a1;
  if ( result != 1 )
  {
    v8 = result & 0xFFFFFFFFFFFFFFFELL;
    if ( v30 <= 0x40 )
    {
      if ( v29 )
      {
        v26 = 1;
        v27 = *(_QWORD *)(a4 + 8);
        v23 = *(_BYTE *)(a4 + 1);
      }
      else
      {
        v26 = 0;
        v27 = *(_QWORD *)(a5 + 8);
        v23 = *(_BYTE *)(a5 + 1);
      }
      v24 = (v23 >> 3) & 7;
      v13 = (v23 >> 1) & 3;
      v28 = v24;
    }
    else
    {
      if ( *(_QWORD *)v29 )
      {
        v26 = 1;
        v27 = *(_QWORD *)(a4 + 8);
        v20 = *(_BYTE *)(a4 + 1);
        v28 = (v20 >> 3) & 7;
        v13 = (v20 >> 1) & 3;
      }
      else
      {
        v26 = 0;
        v27 = *(_QWORD *)(a5 + 8);
        v21 = *(_BYTE *)(a5 + 1);
        v22 = (v21 >> 3) & 7;
        v13 = (v21 >> 1) & 3;
        v28 = v22;
      }
      operator delete[](v29);
      v19 = a1;
    }
    v12 = (_QWORD *)v19[31];
    goto LABEL_3;
  }
  if ( v30 > 0x40 && v29 )
  {
    operator delete[](v29);
    return 1;
  }
  return result;
}
