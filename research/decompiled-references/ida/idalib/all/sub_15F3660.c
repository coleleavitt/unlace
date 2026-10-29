__int64 __fastcall sub_15F3660(__int64 a1, const __m128i *a2)
{
  int v2; // edx
  __int64 v3; // r8
  __int16 v4; // ax
  unsigned __int64 v5; // rdx
  __int64 v6; // rbp
  unsigned int v7; // edx
  unsigned __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // rbx
  const void *v12; // [rsp+0h] [rbp-78h] BYREF
  __int64 v13; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int64 v15; // [rsp+18h] [rbp-60h]
  _BYTE v16[88]; // [rsp+20h] [rbp-58h] BYREF

  v12 = nullptr;
  v13 = 0;
  if ( !(unsigned __int8)sub_181EB00(a1, a2, 0, &v12, 0) )
    return 0;
  v2 = a2[3].m128i_u16[4];
  v3 = 0;
  v15 = 0x400000000LL;
  v4 = v2;
  v5 = (unsigned int)(v2 - 1);
  ptr = v16;
  if ( v5 > 4 )
  {
    sub_2237220(&ptr, v16, v5, 8);
    v4 = a2[3].m128i_i16[4];
    v3 = (unsigned int)v15;
  }
  if ( (unsigned __int16)v4 > 1u )
  {
    v6 = 0;
    do
    {
      while ( 1 )
      {
        v8 = a2[5].m128i_i64[v6 + 1] & 0xFFFFFFFFFFFFFFFCLL;
        if ( v3 + 1 > (unsigned __int64)HIDWORD(v15) )
          break;
        ++v6;
        *((_QWORD *)ptr + v3) = v8;
        v7 = a2[3].m128i_u16[4];
        v3 = (unsigned int)(v15 + 1);
        LODWORD(v15) = v15 + 1;
        if ( v7 <= (int)v6 + 1 )
          goto LABEL_9;
      }
      ++v6;
      sub_2237220(&ptr, v16, v3 + 1, 8);
      *((_QWORD *)ptr + (unsigned int)v15) = v8;
      v3 = (unsigned int)(v15 + 1);
      v9 = a2[3].m128i_u16[4];
      LODWORD(v15) = v15 + 1;
    }
    while ( (int)v6 + 1 < v9 );
  }
LABEL_9:
  v10 = sub_B2D780(*(_QWORD *)(a1 + 248), v12, v13, ptr, v3, a2);
  if ( !(unsigned __int8)sub_166AD70(a1, a2, *(_QWORD *)(v10 + 64), *(unsigned int *)(v10 + 56)) )
    v10 = 0;
  if ( ptr != v16 )
    free(ptr);
  return v10;
}
