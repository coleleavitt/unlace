bool __fastcall sub_30D790(__int64 a1, __int64 a2, unsigned int a3, unsigned __int8 (__fastcall *a4)(_QWORD))
{
  int v4; // ebp
  __int64 name; // rax
  bool v6; // cc
  bool result; // al
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v8[1] = __readfsqword(0x28u);
  v4 = sub_30D6A0(v8, a2, a3, a4);
  name = extract_name(a1, v8[0], 0);
  v6 = name <= 0;
  result = name > 0;
  if ( !v6 )
    *(_DWORD *)(a1 + 24) = v4;
  return result;
}
