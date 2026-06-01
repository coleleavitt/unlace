__int64 __fastcall sub_1F4D360(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 *v5; // r14
  __int64 v6; // rax
  _QWORD *v7; // r12
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // [rsp+0h] [rbp-48h] BYREF

  sub_1F4CB60((__int64)&v13, a1, a2);
  result = *(unsigned int *)(a2 + 100);
  if ( (_DWORD)result )
  {
    v3 = 0;
    do
    {
      v4 = v3++;
      v5 = (__int64 *)(a2 + 8 * v4 + 104);
      v6 = a1[2];
      v7 = *(_QWORD **)(v6 + 8);
      v8 = sub_1EE13A0((__int64)v7, *(_QWORD *)(v6 + 16), (__int64 *)(v6 + 32), (_DWORD *)(v6 + 24));
      result = sub_1EDB980(v7, v8, v9, v10, v11, v12);
      *v5 = result;
      *(_QWORD *)(result + 56) = a2;
    }
    while ( *(_DWORD *)(a2 + 100) != v3 );
  }
  return result;
}
