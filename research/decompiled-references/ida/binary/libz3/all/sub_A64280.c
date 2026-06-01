__int64 __fastcall sub_A64280(__int64 a1, unsigned int *a2)
{
  __int64 *v2; // rbx
  unsigned int v3; // r13d
  __int64 v4; // rax
  __int64 *v5; // r14
  unsigned int *v6; // r15
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r12
  unsigned int v11; // ebx
  _DWORD *v13; // [rsp+8h] [rbp-50h]
  int v14[2]; // [rsp+18h] [rbp-40h] BYREF

  v2 = (__int64 *)(a2 + 8);
  *(_QWORD *)v14 = 0;
  v3 = sub_A47740(a1);
  sub_9C76A0(v14, (unsigned __int64 *)(a1 + 784), (unsigned int *)(a1 + 792));
  v13 = *(_DWORD **)v14;
  v4 = 2LL * a2[6];
  v5 = (__int64 *)&a2[v4 + 8];
  if ( v4 * 4 )
  {
    do
    {
      v6 = (unsigned int *)*v2;
      sub_9D4D10(a1, *v2, (__int64)a2);
      sub_A63F20(a1, v6, v3, v7, v8, v9);
      ++v2;
    }
    while ( v5 != v2 );
  }
  v10 = sub_99A610(a1, a2);
  v11 = sub_B39350(v10, *(unsigned int *)(a1 + 8));
  if ( v11 == -1 )
  {
    v11 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, v10);
    sub_9F2070(a1, v3, (__int64)&qword_1C7F280, v11);
    sub_A48A40(a1, v3);
  }
  else
  {
    sub_9D7600(a1, v3);
  }
  --*v13;
  return v11;
}

