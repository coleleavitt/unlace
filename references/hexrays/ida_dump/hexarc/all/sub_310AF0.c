__int64 __fastcall sub_310AF0(_QWORD *a1, __m128i *a2, int a3)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v13[5]; // [rsp+0h] [rbp-28h] BYREF

  v13[1] = __readfsqword(0x28u);
  v4 = a1[1];
  if ( !v4 )
    goto LABEL_10;
  v5 = a2->m128i_i64[0];
  v7 = a2->m128i_i64[1];
  if ( v7 + v5 - 1 < v5 )
    goto LABEL_10;
  LODWORD(v8) = a3 ^ 1;
  if ( v5 | v7 )
  {
    v9 = (_QWORD *)*a1;
    if ( v4 == 1 && !*v9 && !v9[1] )
      goto LABEL_14;
    v13[0] = *a1;
    if ( (unsigned __int8)sub_310A70(a1, v13, a2) )
    {
      if ( !(_BYTE)a3 )
      {
LABEL_14:
        LODWORD(v8) = 1;
        return (unsigned int)v8;
      }
      v10 = *(_QWORD *)(v13[0] + 8);
      v8 = *(_QWORD *)v13[0];
      v11 = a2->m128i_i64[0];
      if ( v10 )
      {
        if ( v11 >= v8 )
        {
          LOBYTE(v8) = v8 + v10 - 1 >= a2->m128i_i64[1] + v11 - 1;
          return (unsigned int)v8;
        }
      }
    }
LABEL_10:
    LODWORD(v8) = 0;
  }
  return (unsigned int)v8;
}
