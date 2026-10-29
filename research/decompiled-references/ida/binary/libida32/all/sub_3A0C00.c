unsigned __int64 __fastcall sub_3A0C00(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rsi
  unsigned int v8; // eax
  int v9; // eax
  __int64 v10; // rdx
  int v11; // ebp
  _DWORD *v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rcx
  unsigned int v16; // [rsp+4h] [rbp-44h] BYREF
  unsigned int *v17; // [rsp+8h] [rbp-40h] BYREF
  __m128i v18; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-20h]

  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(unsigned int *)(a2 + 4);
  v19 = __readfsqword(0x28u);
  v18 = _mm_unpacklo_epi64((__m128i)v5, (__m128i)(v5 + v6));
  v8 = unpack_dd(&v18);
  v16 = v8;
  if ( a3 )
  {
    sub_3A0A30((__int64)a4, v8);
    return v19 - __readfsqword(0x28u);
  }
  v9 = unpack_dd(&v18);
  v10 = a4[2];
  v11 = v9;
  if ( v10 )
  {
    v12 = a4 + 1;
    do
    {
      while ( 1 )
      {
        v13 = *(_QWORD *)(v10 + 16);
        v14 = *(_QWORD *)(v10 + 24);
        if ( *(_DWORD *)(v10 + 32) < v16 )
          break;
        v12 = (_DWORD *)v10;
        v10 = *(_QWORD *)(v10 + 16);
        if ( !v13 )
          goto LABEL_7;
      }
      v10 = *(_QWORD *)(v10 + 24);
    }
    while ( v14 );
LABEL_7:
    if ( a4 + 1 != (_QWORD *)v12 && v16 >= v12[8] )
      goto LABEL_10;
  }
  else
  {
    v12 = a4 + 1;
  }
  v17 = &v16;
  v12 = sub_39B4A0(a4, (__int64)v12, &v17);
LABEL_10:
  v12[9] = v11;
  return v19 - __readfsqword(0x28u);
}

