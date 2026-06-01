__int64 __fastcall sub_A72540(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 64);
  result = sub_8E1A40(v1 + 32);
  *(_DWORD *)(v1 + 320) = 0;
  return result;
}

