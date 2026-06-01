__int64 __fastcall sub_2032BF0(__int64 a1)
{
  unsigned __int8 v1; // al
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v6; // rbx
  __m128i *v7; // rax
  __int64 v8; // rcx

  v1 = *(_BYTE *)a1;
  v2 = a1;
  if ( *(_BYTE *)a1 == 22 )
  {
    v2 = *(_QWORD *)(a1 + 24);
    goto LABEL_3;
  }
  if ( v1 > 0x1Cu )
  {
    v4 = *(_QWORD *)(a1 + 40);
    if ( !v4 )
      return v4;
    v2 = *(_QWORD *)(v4 + 72);
LABEL_3:
    v3 = operator new(0x168u);
    sub_2032A70(v3, v2, 0);
    return v4;
  }
  if ( v1 == 23 )
  {
    v2 = *(_QWORD *)(a1 + 72);
    goto LABEL_3;
  }
  if ( v1 != 16 && v1 != 14 && v1 != 15 )
  {
    if ( v1 != 13 )
      return 0;
    goto LABEL_3;
  }
  v6 = *(_QWORD *)(a1 + 40);
  v7 = (__m128i *)operator new(0x168u);
  sub_20326F0(v7, v6, 0);
  return v8;
}
