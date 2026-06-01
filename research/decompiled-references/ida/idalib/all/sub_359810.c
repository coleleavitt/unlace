bool __fastcall sub_359810(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  int v5; // eax
  bool (__fastcall *v6)(__int64); // rax
  __m128i si128; // xmm0
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  int v10; // eax
  int v12; // [rsp+1Ch] [rbp-6Ch] BYREF
  _BYTE v13[24]; // [rsp+20h] [rbp-68h] BYREF
  char v14[8]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a3 + 8);
  *(_QWORD *)&v13[16] = *(_QWORD *)(a3 + 56);
  *(__m128i *)v13 = _mm_loadu_si128((const __m128i *)(a3 + 40));
  while ( 1 )
  {
    v12 = 0;
    v5 = sub_8B7CF0(a1, v14, &v12);
    if ( v12 || v5 == 1 )
      break;
    v6 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL);
    if ( v6 == sub_359410 )
    {
      if ( *(_QWORD *)(a3 + 48) >= *(_QWORD *)(a3 + 32) && *(int *)(a3 + 56) <= 0 )
        break;
    }
    else if ( v6(a3) )
    {
      break;
    }
  }
  *(__m128i *)a2 = _mm_loadu_si128((const __m128i *)(a3 + 40));
  si128 = _mm_load_si128((const __m128i *)v13);
  *(_QWORD *)(a2 + 13) = *(_QWORD *)(a3 + 53);
  v8 = *(_QWORD *)&v13[13];
  *(__m128i *)(a3 + 40) = si128;
  *(_QWORD *)(a3 + 53) = v8;
  v9 = *(_QWORD *)(a3 + 48);
  if ( v9 < *(_QWORD *)(a3 + 24) || *(_QWORD *)(a3 + 32) < v9 || *(int *)(a3 + 56) < 0 )
  {
    if ( !under_debugger )
      interr(1435);
    BUG();
  }
  v10 = v12;
  *(_QWORD *)(a3 + 8) = v4;
  *(_QWORD *)(a1 + 16) = v4;
  return v10 != 0;
}
