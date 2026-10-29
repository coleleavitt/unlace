__int64 __fastcall sub_5815A0(_QWORD *a1, unsigned int a2)
{
  _QWORD *v2; // r13
  unsigned int v3; // ebp
  char v4; // dl
  __int64 result; // rax
  unsigned int v6; // eax
  __int64 v7; // rbx

  v2 = a1 + 289;
  v3 = sub_3B90A0(a1, a2);
  v4 = sub_79B3A0(a1 + 289, *a1, v3, 4176);
  result = 0;
  if ( v4 )
  {
    v6 = sub_79B3A0(v2, *a1, v3, 65);
    sub_3C98C0((__int64)a1, a2, v6);
    v7 = *a1;
    sub_79B4D0(v2, *a1, v3, 4176);
    sub_79B4D0(v2, v7, v3, 65);
    return 1;
  }
  return result;
}

