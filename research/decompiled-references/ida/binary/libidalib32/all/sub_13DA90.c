__int64 __fastcall sub_13DA90(__m128 a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  __int64 v8; // rdi
  double v9; // xmm4_8
  double v10; // xmm5_8
  __int64 v11; // rax
  int v12; // r12d
  int v13; // ebx
  unsigned int v14; // eax
  int v15; // edx
  __int64 result; // rax
  __int64 v17; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v18; // [rsp+8h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  v8 = qword_251710;
  if ( (qword_251710 & 0x600) == 0 )
  {
    if ( (unsigned __int8)sub_161360(0, &v17, (char *)&v17 + 4) )
      return sub_13CBD0(a1, a2, a3, a4, v9, v10, a7, a8);
    v8 = qword_251710;
  }
  v11 = sub_13D310(v8, qword_251700);
  v12 = qword_251700;
  v13 = v11;
  v14 = sub_13B5F0((unsigned int)qword_251700, v11, 0xFFFFFFFFLL);
  v15 = sub_13B290(
          v12,
          v14,
          "ICON WARNING\nHIDECANCEL\nAUTOHIDE DATABASE\nDirectly convert to data?",
          v13,
          nullptr,
          nullptr);
  result = 0;
  if ( v15 == 1 )
    return (unsigned __int8)create_data();
  return result;
}

