unsigned __int64 __fastcall sub_587E00(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rax
  int v8; // eax
  _QWORD *v9; // rdx
  int v10; // ebp
  _QWORD *v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rcx
  unsigned __int64 v15; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 *v16; // [rsp+8h] [rbp-40h] BYREF
  __m128i v17; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-20h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(unsigned int *)(a2 + 4);
  v18 = __readfsqword(0x28u);
  v6 = *(_QWORD **)(a1 + 1856);
  v17 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)(v3 + v4));
  v7 = unpack_dq(&v17);
  v15 = v7;
  if ( a3 )
  {
    sub_587D20((__int64)(v6 + 2), v7);
    return v18 - __readfsqword(0x28u);
  }
  v8 = unpack_dd(&v17);
  v9 = (_QWORD *)v6[4];
  v10 = v8;
  if ( v9 )
  {
    v11 = v6 + 3;
    do
    {
      while ( 1 )
      {
        v12 = v9[2];
        v13 = v9[3];
        if ( v9[4] < v15 )
          break;
        v11 = v9;
        v9 = (_QWORD *)v9[2];
        if ( !v12 )
          goto LABEL_7;
      }
      v9 = (_QWORD *)v9[3];
    }
    while ( v13 );
LABEL_7:
    if ( v6 + 3 != v11 && v15 >= v11[4] )
      goto LABEL_10;
  }
  else
  {
    v11 = v6 + 3;
  }
  v16 = &v15;
  v11 = sub_586A50(v6 + 2, v11, &v16);
LABEL_10:
  *((_DWORD *)v11 + 10) = v10;
  return v18 - __readfsqword(0x28u);
}
