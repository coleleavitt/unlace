__int64 __fastcall sub_43C950(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  _DWORD v4[3]; // [rsp+Ch] [rbp-Ch] BYREF

  sub_4AE1A0(qword_65A4E0);
  if ( !dword_65A4D8 )
    sub_43C9D0();
  v1 = qword_65A4C0(qword_65A480, *a1);
  if ( v1 )
    sub_457BC0(v1);
  v2 = qword_65A4C8(qword_65A480, *a1, v4);
  if ( v4[0] )
    *(_QWORD *)(v2 + 24) = a1;
  return sub_4AE230(qword_65A4E0);
}

