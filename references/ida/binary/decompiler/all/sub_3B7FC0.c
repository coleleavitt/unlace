__int64 __fastcall sub_3B7FC0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r12
  __int64 v4; // rdi
  __int64 v5; // rax
  int v6; // edx
  __int64 result; // rax
  __int64 v8; // r12
  __int64 v9; // rbp
  int v10; // eax
  __int64 v11; // rdx
  _QWORD v12[5]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *a2;
  v4 = *(_QWORD *)(a1 + 16);
  v12[1] = __readfsqword(0x28u);
  v5 = sub_3856D0(v4, v3);
  if ( !v5 )
    return 6;
  v6 = *(_DWORD *)(a1 + 24);
  if ( v6 )
  {
    if ( v6 != 1 )
      goto LABEL_13;
    if ( v3 != *(_QWORD *)(v5 + 8) )
      return 6;
  }
  v8 = *a2;
  v4 = *(_QWORD *)(a1 + 16);
  v9 = sub_3856D0(v4, *a2);
  if ( !v9 )
    return 7;
  v10 = *(_DWORD *)(a1 + 24);
  if ( !v10 )
    goto LABEL_11;
  if ( v10 != 1 )
LABEL_13:
    sub_3B5950(v4);
  if ( v8 != *(_QWORD *)(v9 + 8) )
    return 7;
LABEL_11:
  sub_386C90(v9, 0);
  v12[0] = _mm_shuffle_epi32(_mm_loadl_epi64((const __m128i *)(v9 + 44)), 225).m128i_u64[0];
  v11 = sub_38AA60(v9, v12);
  result = 3;
  if ( !v11 )
    return 7;
  return result;
}
