__int64 __fastcall eetol64u(_QWORD *a1, const __m128i *a2, char a3)
{
  __int64 result; // rax
  unsigned __int64 v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v4[1] = __readfsqword(0x28u);
  result = sub_80DFC0(v4, a2, 64, a3);
  if ( (_DWORD)result == 1 )
    *a1 = v4[0];
  return result;
}

