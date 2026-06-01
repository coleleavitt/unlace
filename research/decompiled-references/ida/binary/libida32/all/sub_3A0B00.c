unsigned __int64 __fastcall sub_3A0B00(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rsi
  unsigned int v8; // eax
  int v10; // eax
  __int64 v11; // rdx
  int v12; // ebp
  _DWORD *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rcx
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
    v10 = unpack_dd(&v18);
    v11 = a4[2];
    v12 = v10;
    if ( v11 )
    {
      v13 = a4 + 1;
      do
      {
        while ( 1 )
        {
          v14 = *(_QWORD *)(v11 + 16);
          v15 = *(_QWORD *)(v11 + 24);
          if ( *(_DWORD *)(v11 + 32) < v16 )
            break;
          v13 = (_DWORD *)v11;
          v11 = *(_QWORD *)(v11 + 16);
          if ( !v14 )
            goto LABEL_9;
        }
        v11 = *(_QWORD *)(v11 + 24);
      }
      while ( v15 );
LABEL_9:
      if ( a4 + 1 != (_QWORD *)v13 && v16 >= v13[8] )
        goto LABEL_12;
    }
    else
    {
      v13 = a4 + 1;
    }
    v17 = &v16;
    v13 = sub_39B4A0(a4, (__int64)v13, &v17);
LABEL_12:
    v13[9] = v12;
    return v19 - __readfsqword(0x28u);
  }
  sub_3A0A30((__int64)a4, v8);
  return v19 - __readfsqword(0x28u);
}

