unsigned __int64 __fastcall sub_4B3550(
        __int64 (__fastcall **a1)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD),
        unsigned int a2,
        char a3,
        unsigned int a4,
        char a5)
{
  unsigned __int64 v8; // rbx
  unsigned int v10; // eax
  __int64 (__fastcall **v11[2])(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+0h] [rbp-58h] BYREF
  __int64 v12; // [rsp+10h] [rbp-48h]
  unsigned __int64 v13; // [rsp+18h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  v11[1] = a1;
  v8 = sub_3B9AA0((__int64)a1, a4, 0);
  v11[0] = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))off_2B02ED8;
  v12 = 0;
  if ( (unsigned __int8)sub_4B09D0((__int64 *)a1, v11, a2, a3, a4, v8, a5) )
    return v12;
  if ( (v8 & 0x600) == 0x200 )
  {
    v10 = sub_3BD5D0((__int64)a1, a4);
    return sub_3B9AA0((__int64)a1, v10, 0);
  }
  return v8;
}

