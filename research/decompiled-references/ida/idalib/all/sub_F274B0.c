__int64 __fastcall sub_F274B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rax
  _OWORD v15[2]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 1096);
  if ( *(_QWORD *)(a2 + 40) )
  {
    v4 = sub_995540(v3, " ");
    sub_9954E0(
      v4,
      (const void *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL) + 16LL),
      **(unsigned int **)(*(_QWORD *)(a2 + 40) + 16LL));
    v3 = *(_QWORD *)(a1 + 1096);
  }
  v5 = sub_995540(v3, " ");
  v15[0] = _mm_loadu_si128((const __m128i *)(a2 + 48));
  sub_2257710(v5, v15);
  v6 = sub_995540(*(_QWORD *)(a1 + 1096), " ");
  v15[0] = _mm_loadu_si128((const __m128i *)(a2 + 64));
  sub_2257710(v6, v15);
  v7 = sub_995540(*(_QWORD *)(a1 + 1096), " ");
  v15[0] = _mm_loadu_si128((const __m128i *)(a2 + 80));
  sub_2257710(v7, v15);
  if ( *(_BYTE *)(a2 + 96) )
    sub_995540(*(_QWORD *)(a1 + 1096), " Unavailable");
  v8 = sub_995540(*(_QWORD *)(a1 + 1096), " \"");
  v9 = sub_9954E0(v8, *(const void **)(a2 + 104), *(unsigned int *)(a2 + 100));
  sub_995540(v9, "\"");
  if ( *(_BYTE *)(a2 + 112) )
    sub_995540(*(_QWORD *)(a1 + 1096), " Strict");
  v10 = sub_995540(*(_QWORD *)(a1 + 1096), " \"");
  v11 = sub_9954E0(v10, *(const void **)(a2 + 120), *(unsigned int *)(a2 + 116));
  sub_995540(v11, "\"");
  v12 = sub_995540(*(_QWORD *)(a1 + 1096), " ");
  result = sub_227B930(v12, *(int *)(a2 + 128));
  if ( *(_QWORD *)(a2 + 136) )
  {
    v14 = sub_995540(*(_QWORD *)(a1 + 1096), " ");
    return sub_9954E0(
             v14,
             (const void *)(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 16LL) + 16LL),
             **(unsigned int **)(*(_QWORD *)(a2 + 136) + 16LL));
  }
  return result;
}
