__int64 __fastcall process_zipfile(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int64, _QWORD, __int64, __int64, _QWORD, _BYTE *),
        __int64 a3)
{
  __int64 v4; // rax
  __m128i *v5; // rbp
  int v6; // eax
  int v7; // ebx
  unsigned int v8; // ebx
  __m128i v10; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v4 = sub_753ED0(a1);
  if ( v4 )
  {
    v5 = (__m128i *)v4;
    v6 = sub_753540(v4, &v10);
    if ( v10.m128i_i64[0] && !v6 )
    {
      v7 = 0;
      while ( 1 )
      {
        v6 = sub_835670(v5, a2, a3);
        if ( v6 )
          break;
        if ( (unsigned __int64)++v7 >= v10.m128i_i64[0] )
          goto LABEL_7;
        v6 = sub_753EE0(v5);
        if ( v6 )
          break;
        if ( (unsigned __int64)v7 >= v10.m128i_i64[0] )
          goto LABEL_7;
      }
    }
    v8 = -v6;
    if ( v6 >= 0 )
LABEL_7:
      v8 = 0;
    sub_754680(v5);
  }
  else
  {
    return 1;
  }
  return v8;
}
