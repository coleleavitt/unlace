unsigned __int64 __fastcall sub_4CA210(_QWORD *a1, unsigned __int64 a2, char a3, unsigned __int64 a4, char a5)
{
  unsigned __int64 v8; // rbx
  unsigned __int64 v10; // rax
  __int64 (__fastcall **v11[2])(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+0h] [rbp-58h] BYREF
  __int64 v12; // [rsp+10h] [rbp-48h]
  unsigned __int64 v13; // [rsp+18h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  v11[1] = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))a1;
  v8 = sub_3BE900(a1, a4, 0);
  v11[0] = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))off_2B2CE98;
  v12 = 0;
  if ( (unsigned __int8)sub_4C7640((unsigned __int8 **)a1, v11, a2, a3, a4, v8, a5) )
    return v12;
  if ( (v8 & 0x600) == 0x200 )
  {
    v10 = sub_3C2650(a1, a4);
    return sub_3BE900(a1, v10, 0);
  }
  return v8;
}
