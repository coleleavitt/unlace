unsigned __int64 __fastcall sub_A93F00(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v6; // r8
  __int64 v8; // rax

  if ( (a3 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v6 = *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
       | ((unsigned __int8)a3 | (unsigned __int8)*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL]) & 7;
  }
  else
  {
    v8 = sub_A92560(a1, a2, 0);
    v6 = sub_A55470((__int64)a1, v8, 0, a4, 0);
  }
  return sub_A55470((__int64)a1, a2, a3, a4, v6);
}

