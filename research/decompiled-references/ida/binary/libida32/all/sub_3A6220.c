__int64 __fastcall sub_3A6220(__int64 a1, int a2)
{
  __int64 (*v2)(void); // rax
  char v3; // dl
  __int64 result; // rax
  _QWORD v5[3]; // [rsp+0h] [rbp-18h] BYREF

  v5[1] = __readfsqword(0x28u);
  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 160LL);
  if ( (char *)v2 != (char *)sub_3A61D0 )
    return v2();
  v5[0] = 0;
  v3 = sub_3A60E0((__int64)v5, a2);
  result = 0;
  if ( v3 )
    return v5[0];
  return result;
}

