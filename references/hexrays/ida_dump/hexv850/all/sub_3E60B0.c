unsigned __int64 __fastcall sub_3E60B0(__int64 a1, __int64 *a2)
{
  int *v2; // rax
  int v3; // edx
  int v5; // esi
  __int64 vars0[2]; // [rsp+0h] [rbp+0h] BYREF
  __int64 *vars10; // [rsp+10h] [rbp+10h] BYREF
  __int128 vars18; // [rsp+18h] [rbp+18h]
  unsigned __int64 vars28; // [rsp+28h] [rbp+28h]

  v2 = *(int **)(a1 + 560);
  v3 = *(_DWORD *)(a1 + 80);
  vars28 = __readfsqword(0x28u);
  v5 = *v2;
  vars0[0] = 0;
  vars0[1] = 0;
  sub_5F400(vars0, v5, v3);
  vars10 = nullptr;
  vars18 = 0;
  sub_5F800(a2, vars0);
  sub_3113F0(a2 + 2, &vars10);
  if ( vars10 )
  {
    *(_QWORD *)&vars18 = 0;
    qfree(vars10);
  }
  qfree(vars0[0]);
  return vars28 - __readfsqword(0x28u);
}
