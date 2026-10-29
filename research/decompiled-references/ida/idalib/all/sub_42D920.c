__int64 __fastcall sub_42D920(__int64 a1, __int64 *a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned int v8; // edx
  __int64 v9; // r13
  __int64 v10; // rax

  v6 = *a2;
  v7 = v6 - sub_631AD0(**(_QWORD **)(a1 + 1672), 29);
  v8 = 0;
  if ( v7 >= *a3 && v7 < a3[1] )
  {
    v9 = v7 + a4;
    v10 = sub_631AD0(**(_QWORD **)(a1 + 1672), 29);
    v8 = 1;
    *a2 = v10 + v9;
  }
  return v8;
}
