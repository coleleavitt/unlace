__int64 __fastcall sub_56BED0(__int64 a1, __int64 a2, int a3, int a4, __int64 *a5, double a6, double a7)
{
  __int64 v7; // rbx
  __int64 v8; // rdi
  int v10; // edx
  __int64 result; // rax
  __int64 v12[5]; // [rsp+18h] [rbp-28h] BYREF

  v7 = a2;
  v8 = *(_QWORD *)(a1 + 1672);
  v12[1] = __readfsqword(0x28u);
  if ( !a2 )
    v7 = *(_QWORD *)(v8 + 8);
  v10 = sub_64F830(v8, v7, a3, a4, (unsigned int)v12, 0, 0, 0, 0, 0);
  result = -1;
  if ( v10 )
    return sub_56BDB0(v7, v12, a5, a6, a7);
  return result;
}
