__int64 __fastcall sub_22116C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbp
  __int64 v8; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD v13[9]; // [rsp+0h] [rbp-48h] BYREF

  v6 = a3;
  if ( !a3 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    a4 = *(_QWORD *)(a1 + 24);
  }
  if ( a4 )
  {
    v10 = (_QWORD *)sub_22103C0();
    v11 = sub_227BF10(a5, *v10, v10[1]);
    v12 = sub_995540(v11, ": for the ");
    v13[0] = v6;
    v13[1] = a4;
    v13[2] = 0;
    sub_2211550(v12, (__int64)v13);
  }
  else
  {
    sub_9954E0(a5, *(const void **)(a1 + 32), *(_QWORD *)(a1 + 40));
  }
  v8 = sub_995540(a5, " option: ");
  sub_2254180(a2, v8);
  sub_995540(v8, "\n");
  return 1;
}
