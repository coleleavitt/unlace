unsigned __int64 __fastcall sub_3A52C0(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rbp
  _QWORD *v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rcx
  unsigned __int64 v16; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 *v17; // [rsp+8h] [rbp-40h] BYREF
  __m128i v18; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-20h]

  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(unsigned int *)(a2 + 4);
  v19 = __readfsqword(0x28u);
  v18 = _mm_unpacklo_epi64((__m128i)v5, (__m128i)(v5 + v6));
  v8 = unpack_dq(&v18);
  v16 = v8;
  if ( a3 )
  {
    sub_3A50F0((__int64)a4, v8);
    return v19 - __readfsqword(0x28u);
  }
  v9 = unpack_dq(&v18);
  v10 = (_QWORD *)a4[2];
  v11 = v9;
  if ( v10 )
  {
    v12 = a4 + 1;
    do
    {
      while ( 1 )
      {
        v13 = v10[2];
        v14 = v10[3];
        if ( v10[4] < v16 )
          break;
        v12 = v10;
        v10 = (_QWORD *)v10[2];
        if ( !v13 )
          goto LABEL_7;
      }
      v10 = (_QWORD *)v10[3];
    }
    while ( v14 );
LABEL_7:
    if ( a4 + 1 != v12 && v16 >= v12[4] )
      goto LABEL_10;
  }
  else
  {
    v12 = a4 + 1;
  }
  v17 = &v16;
  v12 = sub_3A0220(a4, v12, &v17);
LABEL_10:
  v12[5] = v11;
  return v19 - __readfsqword(0x28u);
}
