__int64 __fastcall sub_14E240(int *a1, int a2)
{
  int *v2; // rax
  int v3; // ecx
  int v4; // edx
  unsigned int v5; // ebp
  __int64 v7; // rcx
  int v8; // ecx
  int v9; // ebp
  int v10; // ecx
  unsigned __int64 v11; // rdx
  _QWORD v12[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = *((int **)a1 + 5);
  v3 = *a1;
  v12[3] = __readfsqword(0x28u);
  v4 = *v2;
  if ( (v3 == *v2 || v4 == 23 && v3 == 24) && *((_BYTE *)v2 + 48) == 2 )
  {
    v7 = *((_QWORD *)v2 + 7);
    v5 = *(unsigned __int8 *)(v7 + 16);
    if ( *(_BYTE *)(v7 + 16) )
    {
      v8 = a1[9];
      v9 = a2 + v5;
      *a1 = v4;
      v10 = 8 * v8;
      if ( v10 <= v9 )
      {
        if ( v4 != 24 )
          return (unsigned int)-1;
        v9 = v10 - 1;
      }
      v12[1] = 0;
      v12[0] = 0xFFFFFFFF00000000LL;
      sub_118FD0((char *)v12, (char *)v2 + 32);
      sub_118FD0((char *)a1 + 32, (char *)v12);
      v11 = v9;
      v5 = 1;
      *(__m128i *)(*((_QWORD *)a1 + 7) + 16LL) = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
      sub_119360((__int64)v12);
    }
  }
  else
  {
    return 0;
  }
  return v5;
}
