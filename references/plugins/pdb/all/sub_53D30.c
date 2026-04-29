__int64 __fastcall sub_53D30(_QWORD *a1, unsigned __int64 **a2, __int64 (***a3)())
{
  unsigned int v3; // r13d
  unsigned __int64 *v4; // rax
  unsigned __int64 v6; // rdx
  __int64 v8; // r15
  __int64 (*v9)(); // rax
  _QWORD v10[9]; // [rsp+10h] [rbp-48h] BYREF

  v3 = 0;
  v4 = *a2;
  v10[1] = __readfsqword(0x28u);
  v6 = *v4;
  if ( *v4 < v4[2] )
  {
    while ( 1 )
    {
      *v4 = v6 + 1;
      v3 = sub_79FB0(a1[5], v10);
      if ( v3 )
      {
        sub_244A0();
        return v3;
      }
      v8 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 128LL))(a1, v10[0], 0);
      v9 = **a3;
      if ( v9 != sub_52D30 )
      {
        v3 = ((__int64 (__fastcall *)(__int64 (***)(), __int64))v9)(a3, v8);
        if ( (v3 & 0x80000000) != 0 )
          break;
      }
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 296LL))(v8);
      v4 = *a2;
      v6 = **a2;
      if ( v6 >= (*a2)[2] )
        return v3;
    }
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 296LL))(v8);
  }
  return v3;
}
