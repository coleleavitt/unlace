__int64 __fastcall sub_FA1F10(_QWORD *a1, __int64 *a2)
{
  __int64 result; // rax

  result = *a2;
  *a2 = 0;
  *a1 = result;
  return result;
}

