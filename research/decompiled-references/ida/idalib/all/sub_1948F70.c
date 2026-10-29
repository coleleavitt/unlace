__int64 __fastcall sub_1948F70(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  unsigned int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rbx

  v8 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v11 = sub_1946010(
          a1,
          a2,
          *(_QWORD *)(a3 + 32),
          v8 * ((a4 - (unsigned __int64)(a4 != 0)) / v8 + (a4 != 0)),
          v9,
          v10,
          a5,
          a6);
  if ( (v11 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v12 = *(_QWORD *)(a3 + 56);
    v13 = v11;
    if ( !v12 )
    {
LABEL_5:
      v15 = sub_1E5F880(
              *a1,
              v13,
              v12,
              (unsigned __int8)BYTE2(*(_DWORD *)(a3 + 16)) >> 7,
              HIBYTE(*(_DWORD *)(a3 + 16)) & 1);
      sub_1EA6140(a2, v15, 0, 1);
      return v15;
    }
    v14 = sub_1944E10(a1, *(unsigned __int16 **)(a3 + 56), a5, a6);
    if ( v14 != 1 )
    {
      v12 = v14 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_5;
    }
  }
  return 0;
}
