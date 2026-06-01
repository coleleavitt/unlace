__int64 __fastcall sub_DDF8E0(__int64 a1, unsigned __int64 *a2)
{
  int v2; // eax
  int v3; // ebp
  unsigned __int64 v4; // r12
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  __int64 v9; // rbp

  v2 = *(_DWORD *)(a1 + 32);
  if ( v2 )
  {
    if ( v2 != 1 )
    {
      sub_1872CE0("");
      sub_1873130(114, 489);
    }
    v3 = *(_DWORD *)(a1 + 40);
    v4 = *a2;
    result = sub_186B270(0x28u);
    v6 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(result + 8) = 0;
    *(_QWORD *)result = v6;
    *(_QWORD *)(result + 16) = v4;
    *(_DWORD *)(result + 24) = v3;
    *(_QWORD *)(result + 32) = 0;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 88LL))(*(_QWORD *)(a1 + 40));
    v8 = *a2;
    v9 = v7;
    result = sub_186B270(0x28u);
    *(_QWORD *)result = *(_QWORD *)(a1 + 24);
    *(__m128i *)(result + 8) = _mm_unpacklo_epi64((__m128i)(v9 & 0xFFFFFFFFFFFFFFF8LL), (__m128i)v8);
    if ( (v9 | 1uLL) > 7 )
      ++*(_DWORD *)((v9 & 0xFFFFFFFFFFFFFFF8LL) + 8);
    *(_DWORD *)(result + 24) = -1;
    *(_QWORD *)(result + 32) = 0;
  }
  return result;
}

