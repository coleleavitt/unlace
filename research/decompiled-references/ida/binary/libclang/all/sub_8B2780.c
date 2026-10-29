__int64 __fastcall sub_8B2780(__m128i *a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebp
  __int64 v5; // rax
  unsigned int v6; // eax
  unsigned int v7; // [rsp+0h] [rbp-68h] BYREF
  char v8; // [rsp+4h] [rbp-64h]

  v2 = sub_80FBD0(a2);
  if ( !v2 )
    goto LABEL_2;
  v5 = sub_C63970(*(_QWORD *)(*(_QWORD *)(a1->m128i_i64[0] + 16) + 17360LL), v2);
  if ( !strchr(*(const char **)(v5 + 24), 69) )
    goto LABEL_2;
  v6 = sub_80FBD0(a2);
  if ( v6 <= 0x278 )
  {
    if ( v6 <= 0x276 )
    {
      v3 = 0;
      if ( v6 != 134 )
        return v3;
    }
    goto LABEL_11;
  }
  if ( v6 - 932 <= 1 )
  {
LABEL_11:
    if ( (*(_BYTE *)(sub_80F4C0(*(_QWORD *)(a2 + *(unsigned __int8 *)(a2 + 3))) + 84) & 3) != 0 )
      return sub_869D30(a1, *(_QWORD *)(a2 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(a2 + 3)));
LABEL_2:
    v8 &= ~1u;
    v7 = 0;
    v3 = sub_8B19F0(a1->m128i_i64, a2, (__int64)&v7);
    if ( (_BYTE)v3 )
    {
      sub_824D00(a1->m128i_i64[1], *(_QWORD **)(a1->m128i_i64[0] + 16), (__int64)&v7);
      if ( v7 <= 1 )
        return v3;
    }
    else if ( v7 <= 1 )
    {
      return v3;
    }
    sub_69F740((__int64)&v7);
    return v3;
  }
  return 0;
}

