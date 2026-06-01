__int64 __fastcall sub_7CE70(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _QWORD *a5)
{
  __int64 result; // rax
  _QWORD v8[3]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v9; // [rsp+18h] [rbp-30h]
  __int64 v10; // [rsp+20h] [rbp-28h]
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v8[0] = a1;
  v8[1] = a2;
  v8[2] = a3;
  v9 = 0;
  v10 = 0;
  result = ((__int64 (__fastcall *)(_QWORD *, _QWORD, _QWORD))sub_91330)(v8, sub_7CD90, sub_7CD40);
  if ( !(_DWORD)result )
  {
    if ( a4 )
      *a4 = v9;
    if ( a5 )
      *a5 = v10;
  }
  return result;
}

