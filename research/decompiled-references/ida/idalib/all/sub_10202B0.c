const char *__fastcall sub_10202B0(__int64 *a1, int a2, _BYTE *a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __m128i v7[2]; // [rsp+0h] [rbp-48h] BYREF
  char v8; // [rsp+20h] [rbp-28h]

  v7[0].m128i_i8[0] = 0;
  if ( (unsigned int)(a2 + 1) <= 1 )
    goto LABEL_11;
  if ( a2 < 0 )
  {
    v4 = sub_101FA20((__int64)a1, (unsigned int)(-2 - a2), v7);
    if ( v7[0].m128i_i8[0] )
      goto LABEL_11;
  }
  else
  {
    v4 = a1[23] + 24LL * (unsigned int)a2;
  }
  if ( v4 )
  {
    if ( *(char *)(v4 + 3) >= 0 )
    {
      sub_101D9A0(v7, (__int64 *)(*(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL), a1[1], a1[2], 0);
      if ( v8 )
      {
        v5 = v7[0].m128i_i64[0];
        if ( a3 )
          *a3 = 0;
        return (const char *)v5;
      }
    }
  }
LABEL_11:
  if ( a3 )
    *a3 = 1;
  j__strlen("<<<<<INVALID SOURCE LOCATION>>>>>");
  return "<<<<<INVALID SOURCE LOCATION>>>>>";
}
