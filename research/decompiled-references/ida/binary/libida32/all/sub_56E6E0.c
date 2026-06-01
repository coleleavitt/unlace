unsigned __int64 __fastcall sub_56E6E0(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v6; // rbx
  unsigned int v7; // eax
  int v8; // eax
  __int64 v9; // rdx
  int v10; // ebp
  _DWORD *v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rcx
  unsigned int v15; // [rsp+4h] [rbp-44h] BYREF
  unsigned int *v16; // [rsp+8h] [rbp-40h] BYREF
  __m128i v17; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-20h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(unsigned int *)(a2 + 4);
  v18 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 1664);
  v17 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)(v3 + v4));
  v7 = unpack_dd(&v17);
  v15 = v7;
  if ( a3 )
  {
    sub_56E610(v6 + 16, v7);
    return v18 - __readfsqword(0x28u);
  }
  v8 = unpack_dd(&v17);
  v9 = *(_QWORD *)(v6 + 32);
  v10 = v8;
  if ( v9 )
  {
    v11 = (_DWORD *)(v6 + 24);
    do
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)(v9 + 16);
        v13 = *(_QWORD *)(v9 + 24);
        if ( *(_DWORD *)(v9 + 32) < v15 )
          break;
        v11 = (_DWORD *)v9;
        v9 = *(_QWORD *)(v9 + 16);
        if ( !v12 )
          goto LABEL_7;
      }
      v9 = *(_QWORD *)(v9 + 24);
    }
    while ( v13 );
LABEL_7:
    if ( (_DWORD *)(v6 + 24) != v11 && v15 >= v11[8] )
      goto LABEL_10;
  }
  else
  {
    v11 = (_DWORD *)(v6 + 24);
  }
  v16 = &v15;
  v11 = sub_56CF10((_QWORD *)(v6 + 16), (__int64)v11, &v16);
LABEL_10:
  v11[9] = v10;
  return v18 - __readfsqword(0x28u);
}

