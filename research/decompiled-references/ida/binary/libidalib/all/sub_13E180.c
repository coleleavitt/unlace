__int64 __fastcall sub_13E180(__m128 a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  __int64 v8; // rdi
  double v9; // xmm4_8
  double v10; // xmm5_8
  __int64 v11; // rax
  __int64 v12; // r12
  int v13; // ebx
  unsigned __int64 v14; // rax
  int v15; // edx
  __int64 result; // rax
  _BYTE v17[8]; // [rsp+8h] [rbp-30h] BYREF
  _BYTE v18[8]; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  v8 = *((_QWORD *)&xmmword_2528B0 + 1);
  if ( (WORD4(xmmword_2528B0) & 0x600) == 0 )
  {
    if ( (unsigned __int8)sub_161C80(0, v17, v18) )
      return sub_13D1F0(a1, a2, a3, a4, v9, v10, a7, a8);
    v8 = *((_QWORD *)&xmmword_2528B0 + 1);
  }
  v11 = sub_13D9E0(v8, xmmword_2528A0);
  v12 = xmmword_2528A0;
  v13 = v11;
  v14 = sub_13BBC0(xmmword_2528A0, v11, -1);
  v15 = sub_13B890(
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

