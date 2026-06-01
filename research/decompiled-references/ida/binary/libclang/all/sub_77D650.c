__int64 __fastcall sub_77D650(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 result; // rax

  v2 = *(unsigned __int8 *)(a1 + 97);
  *(_QWORD *)(a1 + 88) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  result = v2 & 0xFFFFFFF9 | 4;
  *(_BYTE *)(a1 + 97) = result;
  return result;
}

