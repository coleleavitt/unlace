_BYTE *__fastcall sub_2032640(__int64 a1, _BYTE *a2)
{
  size_t v2; // rdx
  unsigned __int8 *v3; // rbp
  _BYTE *v4; // rax
  _BYTE *v6; // rax
  size_t v7; // [rsp+8h] [rbp-20h]
  size_t v8; // [rsp+8h] [rbp-20h]

  if ( (unsigned __int8)(*a2 - 13) <= 3u )
  {
    v3 = (unsigned __int8 *)sub_20CC3B0(a2);
    v6 = *(_BYTE **)(a1 + 32);
    if ( (unsigned __int64)v6 >= *(_QWORD *)(a1 + 24) )
    {
      v8 = v2;
      sub_227BA10(a1, 64);
      v2 = v8;
    }
    else
    {
      *(_QWORD *)(a1 + 32) = v6 + 1;
      *v6 = 64;
    }
  }
  else
  {
    v3 = (unsigned __int8 *)sub_20CC3B0(a2);
    v4 = *(_BYTE **)(a1 + 32);
    if ( (unsigned __int64)v4 >= *(_QWORD *)(a1 + 24) )
    {
      v7 = v2;
      sub_227BA10(a1, 37);
      v2 = v7;
    }
    else
    {
      *(_QWORD *)(a1 + 32) = v4 + 1;
      *v4 = 37;
    }
  }
  return sub_20323F0(a1, v3, v2);
}
