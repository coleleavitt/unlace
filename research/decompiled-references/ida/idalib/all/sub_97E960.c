__int64 __fastcall sub_97E960(
        __int64 a1,
        __int64 *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6,
        size_t a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        int a12,
        int a13,
        __int64 a14,
        int a15)
{
  __int64 result; // rax
  __int64 v17; // rcx
  int v18; // eax
  char v19; // dl
  __int64 v20; // rsi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // [rsp+8h] [rbp-E0h]
  unsigned int v23[4]; // [rsp+1Ch] [rbp-CCh] BYREF
  unsigned int v24; // [rsp+2Ch] [rbp-BCh] BYREF
  __int16 v25[60]; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int64 v26; // [rsp+A8h] [rbp-40h]

  v23[0] = a4;
  v26 = __readfsqword(0x28u);
  switch ( a3 )
  {
    case 2:
      v22 = sub_900A40(v25, v23, (int *)&v24, a6, a7);
      if ( v22 > 0xFFFFFFFFFFFFFF88LL || a5 < v24 )
      {
        return -20;
      }
      else
      {
        sub_97E660((unsigned __int64 *)a1, v25, v23[0], a8, a9, v24, a14, 2560, a15);
        *a2 = a1;
        return v22;
      }
    case 3:
      result = -20;
      if ( a11 )
      {
        if ( a12 && a13 > 24 )
        {
          v20 = *a2;
          v21 = 0;
          do
          {
            _mm_prefetch((const char *)(v20 + v21), 2);
            v21 += 64LL;
          }
          while ( 8LL * ((1 << a5) + 1) > v21 );
        }
        return 0;
      }
      break;
    case 1:
      result = -72;
      if ( a7 )
      {
        v17 = *(unsigned __int8 *)a6;
        result = -20;
        if ( (unsigned int)v17 <= v23[0] )
        {
          v18 = *(_DWORD *)(a8 + 4 * v17);
          v19 = *(_BYTE *)(a9 + v17);
          *(_BYTE *)(a1 + 11) = 0;
          *(_QWORD *)a1 = 0;
          *(_DWORD *)(a1 + 12) = v18;
          *(_WORD *)(a1 + 8) = 0;
          *(_BYTE *)(a1 + 10) = v19;
          *a2 = a1;
          return 1;
        }
      }
      break;
    default:
      *a2 = a10;
      return 0;
  }
  return result;
}
