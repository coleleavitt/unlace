__int64 __fastcall sub_2DFBB0(__int64 a1, _BYTE *a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rax
  _QWORD v4[5]; // [rsp+0h] [rbp-28h] BYREF

  v4[3] = __readfsqword(0x28u);
  result = 0;
  if ( a2[40] )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 128LL))(*(_QWORD *)a2);
    return sub_27E0B0(a1, (__int64)v4, v3, 3);
  }
  return result;
}
