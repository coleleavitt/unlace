unsigned __int64 __fastcall sub_3D1820(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  bool v4; // zf
  _QWORD *v6; // rbx
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

  v3 = *(_QWORD *)(a1 + 1480);
  v4 = *(_DWORD *)a2 == 8;
  v18 = __readfsqword(0x28u);
  v6 = (_QWORD *)(v3 + 1480);
  if ( !v4 )
    v6 = (_QWORD *)(v3 + 1432);
  v17 = _mm_unpacklo_epi64(
          (__m128i)*(unsigned __int64 *)(a2 + 8),
          (__m128i)(*(_QWORD *)(a2 + 8) + (unsigned __int64)*(unsigned int *)(a2 + 4)));
  v7 = unpack_dd(&v17);
  v15 = v7;
  if ( a3 )
  {
    sub_3D1760((__int64)v6, v7);
    return v18 - __readfsqword(0x28u);
  }
  v8 = unpack_dd(&v17);
  v9 = v6[2];
  v10 = v8;
  if ( v9 )
  {
    v11 = v6 + 1;
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
          goto LABEL_9;
      }
      v9 = *(_QWORD *)(v9 + 24);
    }
    while ( v13 );
LABEL_9:
    if ( v6 + 1 != (_QWORD *)v11 && v15 >= v11[8] )
      goto LABEL_12;
  }
  else
  {
    v11 = v6 + 1;
  }
  v16 = &v15;
  v11 = sub_3B5530(v6, (__int64)v11, &v16);
LABEL_12:
  v11[9] = v10;
  return v18 - __readfsqword(0x28u);
}

