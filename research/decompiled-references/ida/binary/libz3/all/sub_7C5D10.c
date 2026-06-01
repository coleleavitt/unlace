__int64 __fastcall sub_7C5D10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, __int128 a7, __int64 a8)
{
  __int64 result; // rax
  __int64 v9; // rdi
  __int128 v10; // xmm0
  __int64 v11; // rcx
  int v12; // [rsp+30h] [rbp-18h]

  if ( *(_QWORD *)(a1 + 160) )
    return sub_11AC5A0(*(_QWORD *)(a1 + 160), a2);
  v9 = *(_QWORD *)(a1 + 24);
  v10 = (__int128)_mm_loadu_si128((const __m128i *)&a7);
  v11 = *(_QWORD *)(v9 + 3288);
  result = *(unsigned int *)(v11 + 4LL * (unsigned int)a2);
  switch ( (_DWORD)result )
  {
    case 0:
      return sub_11C3360(v9, a2, a8, v11, a5, a6, v10, a8);
    case 1:
      v12 = a8;
      if ( !(_DWORD)a7 && !*(_BYTE *)(v9 + 3832) )
      {
        result = *(_QWORD *)(v9 + 3296) + 24LL * ((unsigned int)a2 >> 1);
        if ( *(_DWORD *)result )
        {
          *(_OWORD *)result = v10;
          *(_DWORD *)(result + 16) = v12;
        }
      }
      break;
    case 0xFFFFFFFF:
      return sub_11B4C90(v9, (unsigned int)a2 ^ 1, a8, v11, a5, a6, v10, a8);
  }
  return result;
}

