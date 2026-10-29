__int64 __fastcall sub_3327D0(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int v9; // eax
  unsigned int v10; // ebp
  unsigned int v11; // r13d
  __int64 v12; // r12
  const char *max_strlit_length; // rbx
  int v14; // edx
  double v15; // xmm4_8
  double v16; // xmm5_8
  __int64 result; // rax
  unsigned int v18; // r14d
  __int64 v19; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v20[7]; // [rsp+10h] [rbp-38h] BYREF

  v20[1] = __readfsqword(0x28u);
  v9 = *(_DWORD *)(a1 + 8);
  if ( v9 == 25 || v9 == 58 )
    return sub_3C2A20();
  v10 = getinf(52);
  v11 = v10;
  if ( (unsigned __int8)sub_1F09E0(0, &v19, v20) )
  {
    v12 = v19;
    max_strlit_length = (const char *)(v20[0] - v19);
  }
  else
  {
    v12 = xmmword_8CC810;
    v18 = 4 - ((dword_8BA8E0 == 0) - 1);
    max_strlit_length = (const char *)get_max_strlit_length(xmmword_8CC810, v10, v18);
    if ( !max_strlit_length && v10 == 4 )
    {
      max_strlit_length = (const char *)get_max_strlit_length(v12, 0, v18);
      v11 = 4 * (max_strlit_length == nullptr);
    }
  }
  v14 = sub_32F3B0(
          v12,
          (unsigned __int64)max_strlit_length,
          (__int64)"ICON WARNING\nHIDECANCEL\nAUTOHIDE DATABASE\nDirectly convert to string?",
          1342178304,
          nullptr,
          nullptr);
  result = 0;
  if ( v14 == 1 )
  {
    sub_1FDB10(a2, a3, a4, a5, v15, v16, a8, a9, v12, max_strlit_length);
    return (unsigned __int8)create_strlit(v12, max_strlit_length, v11);
  }
  return result;
}
