__int64 __fastcall sub_158400(__int64 a1, _BYTE *a2)
{
  __int64 result; // rax
  int v3; // eax
  _QWORD v4[5]; // [rsp+0h] [rbp-28h] BYREF

  v4[3] = __readfsqword(0x28u);
  result = 0;
  if ( a2[40] )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 128LL))(*(_QWORD *)a2);
    return sub_F4A40(a1, (__int64)v4, v3, 3);
  }
  return result;
}

