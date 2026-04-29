__int64 __fastcall sub_14B700(int a1, int *a2)
{
  _DWORD *v4; // rdi
  int v5; // r12d
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rdi
  __int64 v9; // r15
  int v10; // r14d
  int v11; // eax
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  _QWORD v14[9]; // [rsp+0h] [rbp-48h] BYREF

  v14[1] = __readfsqword(0x28u);
  if ( *((_BYTE *)a2 + 32) != 4 )
    return 0;
  v4 = *((_DWORD **)a2 + 5);
  if ( *v4 != 14 )
    return 0;
  v5 = *a2;
  if ( *a2 != 29 )
  {
    if ( (unsigned int)(v5 - 39) > 1 && (unsigned int)(v5 - 50) > 1
      || !(unsigned __int8)sub_11BB80((char *)a2 + 48, v14, 0)
      || v14[0] )
    {
      return 0;
    }
    v4 = *((_DWORD **)a2 + 5);
  }
  v6 = sub_1186A0((__int64)v4, nullptr);
  v7 = v6;
  if ( !v6 )
    return 0;
  v8 = sub_325C90(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 16LL), *(unsigned int *)(v6 + 4), 0);
  v9 = v8 & (v8 - 1);
  if ( v9 )
    return 0;
  v10 = 8 * *(_DWORD *)(v7 + 4);
  v11 = log2ceil(v8);
  v12 = v10 - 1 - v11;
  v13 = 1LL << ((unsigned __int8)v10 - 1 - v11);
  if ( v12 < 0x40 )
    v9 = v13;
  *(__m128i *)(*(_QWORD *)(v7 + 8) + 16LL) = _mm_unpacklo_epi64(
                                               (__m128i)(unsigned __int64)v9,
                                               (__m128i)(unsigned __int64)v9);
  **((_DWORD **)a2 + 5) = 20;
  switch ( v5 )
  {
    case '2':
      *a2 = 44;
      break;
    case '3':
      *a2 = 43;
      break;
    case '\'':
      *a2 = 33;
      break;
    default:
      *a2 = 32;
      if ( v5 == 29 )
        sub_11C810((__int64)(a2 + 12), a1, 0, a2[9], *((_QWORD *)a2 + 3), 0);
      break;
  }
  return 1;
}
