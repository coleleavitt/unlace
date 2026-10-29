unsigned __int64 __fastcall sub_190AD40(
        __int64 a1,
        __int64 a2,
        __m128i a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r12
  int v12; // eax
  __int64 v13; // [rsp+0h] [rbp-50h] BYREF
  int v14; // [rsp+8h] [rbp-48h] BYREF
  __int64 v15; // [rsp+10h] [rbp-40h]
  unsigned __int64 v16; // [rsp+18h] [rbp-38h]
  int v17; // [rsp+20h] [rbp-30h]
  int v18; // [rsp+28h] [rbp-28h]
  char v19; // [rsp+2Ch] [rbp-24h]

  if ( a2 == 1 )
    return 1;
  v9 = sub_190ABA0(a1, (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFFELL), 1, a6, a7, a8, a3, a4);
  result = 1;
  if ( v9 != 1 )
  {
    v10 = v9 & 0xFFFFFFFFFFFFFFFELL;
    result = v9 & 0xFFFFFFFFFFFFFFFELL;
    if ( (*(_DWORD *)(v9 & 0xFFFFFFFFFFFFFFFELL) & 0x10000) == 0 )
    {
      if ( (*(_WORD *)v10 & 0x1FF) == 0x4F && ((*(_WORD *)(v10 + 2) >> 3) & 0x7F) == 0x37 )
      {
        return *(_QWORD *)(v10 + 16);
      }
      else
      {
        v13 = *(_QWORD *)(v10 + 8);
        v11 = sub_F64D20(&v13);
        v12 = sub_EEB7E0(v9 & 0xFFFFFFFFFFFFFFFELL, v9, *(double *)a3.m128i_i64);
        v14 = 4;
        v15 = 0;
        v16 = v11;
        v17 = 0;
        v18 = v12;
        v19 = 0;
        return sub_1A24E20(a1, &v14, 0, v10, 0, 0);
      }
    }
  }
  return result;
}
