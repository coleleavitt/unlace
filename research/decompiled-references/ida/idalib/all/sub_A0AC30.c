void __fastcall sub_A0AC30(_QWORD *a1, __int64 a2)
{
  unsigned __int8 *v3; // rdx
  char v4; // cl
  __int16 v5; // ax
  __int64 v6; // rbp
  _BYTE *v7; // rsi
  __int64 v8; // rbp
  void *v9[2]; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v10[56]; // [rsp+10h] [rbp-38h] BYREF

  v3 = (unsigned __int8 *)(*a1)++;
  v4 = *v3;
  v5 = (2 * (*v3 & 1)) | (*v3 >> 1) & 1 | *(_BYTE *)(a2 + 32) & 0xFC;
  *(_BYTE *)(a2 + 32) = (2 * (*v3 & 1)) | ((*v3 & 2) != 0) | *(_BYTE *)(a2 + 32) & 0xFC;
  if ( (v4 & 4) != 0 )
    *(_BYTE *)(a2 + 32) = v4 & 8 | v5 & 0xF3 | 4;
  v6 = *(unsigned __int16 *)(v3 + 1);
  *a1 = v3 + 3;
  v9[0] = v10;
  sub_A09A40(v9, v3 + 3, (__int64)&v3[v6 + 3]);
  sub_A0AAD0(a2, v9);
  if ( v9[0] != v10 )
    operator delete(v9[0]);
  v7 = (_BYTE *)(v6 + *a1);
  *a1 = v7;
  v7 += 2;
  v8 = *((unsigned __int16 *)v7 - 1);
  *a1 = v7;
  v9[0] = v10;
  sub_A09A40(v9, v7, (__int64)&v7[v8]);
  sub_A0AAD0(a2 + 40, v9);
  if ( v9[0] != v10 )
    operator delete(v9[0]);
  *a1 += v8;
}
