__int64 __fastcall sub_3EBA00(_DWORD *a1, __int64 *a2, __int64 *a3, __int64 a4, char a5)
{
  int v6; // r13d
  __int64 v8; // rax
  __int64 v10; // [rsp+0h] [rbp-38h] BYREF
  int v11[2]; // [rsp+8h] [rbp-30h]

  v6 = a4;
  sub_3E8E80(a1, a2, a3, a4);
  if ( a5 )
  {
    v8 = a3[1];
    *(_QWORD *)v11 = 0;
    v10 = v8;
    sub_3E7700(a1, &v10, a3, 1);
  }
  else
  {
    sub_3E7700(a1, a2, a3, 0);
  }
  return sub_3EB500((int)a1, a2, (int)a3, v6);
}

