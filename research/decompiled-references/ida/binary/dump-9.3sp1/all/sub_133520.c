char __fastcall sub_133520(__int128 a1, __int64 a2, _BYTE *a3, _BYTE *a4)
{
  char result; // al
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbp
  int v11; // r12d
  __int16 v12; // di
  __int16 v13; // si
  int v14; // ecx
  __int64 v15; // rdx
  char v16; // [rsp+Fh] [rbp-49h]
  char v17; // [rsp+Fh] [rbp-49h]
  __int64 v18; // [rsp+10h] [rbp-48h] BYREF
  __int64 v19; // [rsp+18h] [rbp-40h]
  unsigned __int64 v20; // [rsp+28h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  sub_1217B0((const __m128i *)a1, *((__int64 *)&a1 + 1), a2);
  sub_1215C0(a1, a3, a4);
  if ( *(_BYTE *)a2 != 4 )
  {
    if ( *(_DWORD *)a4 == 4 )
      return sub_132E20(a1, a2, (__int64)a3, (__int64)(a4 + 32), 0);
    return 0;
  }
  result = sub_132410((const __m128i *)a1, *((_BYTE **)&a1 + 1), *(_QWORD *)(a2 + 8), a3, (__int64)a4, 0);
  if ( !result )
    return 0;
  v10 = *(_QWORD *)(a2 + 8);
  v11 = *(_DWORD *)(v10 + 68);
  *(_DWORD *)(a2 + 4) = v11;
  if ( *(_DWORD *)v10 == 4 )
  {
    if ( a2 )
    {
      v16 = result;
      v19 = 0;
      sub_123A40((__int64)&v18, (unsigned __int8 *)(v10 + 32), v8, v9);
      v12 = *(_WORD *)a2;
      v13 = *(_WORD *)(a2 + 2);
      v14 = *(_DWORD *)(a2 + 4);
      *(_QWORD *)a2 = v18;
      v15 = *(_QWORD *)(a2 + 8);
      LOWORD(v18) = v12;
      *(_QWORD *)(a2 + 8) = v19;
      WORD1(v18) = v13;
      HIDWORD(v18) = v14;
      v19 = v15;
      sub_11CDA0((__int64)&v18);
      return v16;
    }
  }
  else
  {
    v17 = result;
    sub_11CDA0(v10 + 64);
    *(_DWORD *)(v10 + 68) = v11;
    return v17;
  }
  return result;
}
