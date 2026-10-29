__int64 __fastcall sub_C41030(__m128i *a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  const char *v5; // rax
  unsigned int v6; // eax
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // [rsp+0h] [rbp-68h] BYREF
  char v12; // [rsp+4h] [rbp-64h]

  v2 = sub_BD8130(a2);
  if ( v2 )
  {
    v5 = (const char *)sub_F99770(*(_QWORD *)(*(_QWORD *)(a1->m128i_i64[0] + 16) + 17520LL), v2);
    if ( strchr(v5, 69) )
    {
      v6 = sub_BD8130(a2);
      if ( v6 > 0x27E )
      {
        if ( v6 - 965 > 1 )
          return 0;
      }
      else if ( v6 < 0x27D )
      {
        v3 = 0;
        if ( v6 != 134 )
          return v3;
      }
      if ( (*(_BYTE *)(sub_BD7F30(*(_QWORD *)(a2 + 32)) + 84) & 3) != 0 )
        return (unsigned int)sub_C38AE0(
                               a1,
                               *(__m128i **)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32),
                               v7,
                               v8,
                               v9,
                               v10);
    }
  }
  v11 = 0;
  v12 &= ~1u;
  v3 = sub_C40370(a1->m128i_i64, a2, (__int64)&v11);
  if ( (_BYTE)v3 )
  {
    sub_C00890(a1->m128i_i64[1], *(_QWORD **)(a1->m128i_i64[0] + 16), (__int64)&v11);
    if ( v11 <= 1 )
      return v3;
  }
  else if ( v11 <= 1 )
  {
    return v3;
  }
  sub_A2BBA0((int *)&v11);
  return v3;
}

