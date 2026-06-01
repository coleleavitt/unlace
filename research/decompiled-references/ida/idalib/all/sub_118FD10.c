__int64 __fastcall sub_118FD10(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 result; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rbp
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // r13
  _QWORD *v10; // [rsp+10h] [rbp-88h]
  __int64 v11; // [rsp+18h] [rbp-80h]
  __int64 v12; // [rsp+20h] [rbp-78h]
  __m128i v13; // [rsp+30h] [rbp-68h] BYREF
  __int64 v14; // [rsp+40h] [rbp-58h]
  _QWORD *v15; // [rsp+48h] [rbp-50h]

  sub_10DF020((__int64)&v13, a1, a3, a4);
  result = v14;
  v5 = (_QWORD *)v13.m128i_i64[0];
  v6 = v15;
  v11 = _mm_load_si128(&v13).m128i_i64[1];
  v12 = v14;
  if ( v15 != (_QWORD *)v13.m128i_i64[0] )
  {
    do
    {
      while ( 1 )
      {
        v7 = *v5;
        v8 = *(_QWORD *)(*v5 + 16LL);
        if ( !v8 )
          v8 = *v5;
        v10 = ++v5;
        *(_BYTE *)(v8 + 44) |= 1u;
        if ( v5 != (_QWORD *)v11 )
          break;
LABEL_11:
        if ( v6 == v5 )
          return sub_21B5A40(v7, a1, a2);
      }
      while ( 1 )
      {
        v9 = *v5;
        if ( *v5 )
        {
          if ( (_DWORD)v12
            && ((unsigned __int8)sub_21B9810(*v5, (unsigned int)v12)
             || HIDWORD(v12) && (unsigned __int8)sub_21B9810(v9, HIDWORD(v12))) )
          {
            break;
          }
        }
        v10 = ++v5;
        if ( (_QWORD *)v11 == v5 )
          goto LABEL_11;
      }
      v5 = v10;
    }
    while ( v6 != v10 );
    return sub_21B5A40(v7, a1, a2);
  }
  return result;
}
