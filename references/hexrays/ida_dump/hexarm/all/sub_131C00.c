__int64 __fastcall sub_131C00(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r15
  unsigned int v8; // ebx
  char v10[24]; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a5 + 4) <= *(_DWORD *)(a3 + 4) )
    return 0;
  if ( *(_BYTE *)a3 != 4 || *(_BYTE *)a5 != 4 )
  {
    sub_123480((__int64)v10, (unsigned __int8 *)a5);
    v7 = *(_QWORD *)(a1[30].m128i_i64[0] + 112);
    if ( !(unsigned __int8)sub_126CF0((unsigned __int64)v10, v7, *(_DWORD *)(a3 + 4)) )
      sub_120220(v10, v7, 10, -1, *(_DWORD *)(a3 + 4));
    v8 = sub_12E4C0(v7, a1, a2, a3, a4, (__int64)v10, 2);
    sub_11C7E0((__int64)v10);
    return v8;
  }
  return sub_131A80(a1, a2, *(int **)(a3 + 8), a4, *(unsigned int **)(a5 + 8));
}
