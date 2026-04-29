__int64 __fastcall sub_2B1E40(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int8 (*v4)(void); // rax
  __int64 v5; // rbx
  __m128i v6; // xmm0
  int v7; // eax
  __int64 result; // rax

  if ( a2 >= *(_QWORD *)(a1 + 48) )
LABEL_6:
    sub_2ADE80();
  v3 = 264 * a2 + *(_QWORD *)(a1 + 40);
  v4 = **(unsigned __int8 (***)(void))v3;
  if ( (char *)v4 == (char *)sub_2AF040 )
  {
    if ( *(_DWORD *)(v3 + 120) == *(_DWORD *)(v3 + 248) && !(unsigned int)sub_1377A0(v3 + 8, v3 + 136) )
      goto LABEL_6;
  }
  else if ( !v4() )
  {
    goto LABEL_6;
  }
  switch_dbctx(*(int *)(a1 + 8));
  v5 = *(_QWORD *)(a1 + 40) + 264 * a2;
  v6 = _mm_loadu_si128((const __m128i *)(v5 + 136));
  *(_DWORD *)(v5 + 24) = *(_DWORD *)(v5 + 152);
  *(__m128i *)(v5 + 8) = v6;
  sub_1253A0(v5 + 32, v5 + 160);
  v7 = *(_DWORD *)(v5 + 240);
  *(_BYTE *)(v5 + 128) = 0;
  *(_DWORD *)(v5 + 256) = -2;
  *(_DWORD *)(v5 + 112) = v7;
  result = *(unsigned int *)(v5 + 248);
  *(_DWORD *)(v5 + 120) = result;
  return result;
}
