__int64 __fastcall sub_331080(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // rax
  unsigned int v6; // eax
  _BYTE v8[4]; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  v5 = sub_1EA680(a1 + 384, a2, a3, a4, a5);
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 40) + 112LL))(*(_QWORD *)(v5 + 40));
  if ( get_place_class(v8, 0, v6) )
    return v8[0] & 1;
  else
    return 0;
}
