__int64 __fastcall sub_2061770(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7)
{
  int v10; // ebp
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // eax

  v10 = 0;
  v11 = *(_QWORD *)(a1 + 8);
  if ( a3 )
    v10 = sub_20B4D60(*(_QWORD *)(a1 + 8), a2, a3);
  v12 = sub_20C3200(v11);
  v13 = sub_2055240(v12, a4, 0);
  v14 = sub_20AFB20(v13);
  return sub_2084D00(v11, 36, v10, v14, 0, a5, a7, a6, 0, 1);
}
