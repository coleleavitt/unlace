__int64 __fastcall sub_105300(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  __m128i *v5; // r12
  _QWORD *v6; // r13
  __int64 v7; // rax
  __int8 v8; // dl
  char v10; // al
  __m128i v11; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v4 = *(_DWORD *)(a1 + 24);
  v5 = *(__m128i **)(a1 + 8);
  v12 = __readfsqword(0x28u);
  v6 = *(_QWORD **)(a1 + 16);
  if ( (v4 & 2) != 0 )
  {
    v10 = *(_BYTE *)(a2 + 8);
    if ( v10 == 1 )
      goto LABEL_7;
    if ( v10 != 5 )
      sub_FB670(a1, a2, a3, a4);
    if ( (unsigned __int8)sub_FC000(*(_QWORD **)(a1 + 16), *(_QWORD *)a2, 1u) )
      goto LABEL_7;
  }
  if ( (v4 & 4) != 0 && *(_BYTE *)(a2 + 8) == 5 )
  {
LABEL_7:
    v11.m128i_i64[0] = a2;
    sub_104A20(v5, a2, (const __m128i **)&v11);
  }
  v7 = *(int *)(a2 + 12);
  if ( (_DWORD)v7 != -1 )
  {
    v8 = *(_BYTE *)(a2 + 8);
    v11.m128i_i64[0] = *(_QWORD *)a2 + v7;
    v11.m128i_i8[8] = v8;
    sub_104CA0(v5, v6, &v11, v4);
  }
  return 0;
}
