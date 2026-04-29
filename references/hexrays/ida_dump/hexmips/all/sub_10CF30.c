__int64 __fastcall sub_10CF30(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax

  v1 = a1[8];
  v2 = *(unsigned int *)(a1[7] + 72LL);
  if ( (unsigned int)v2 >= *(_DWORD *)(v1 + 64) )
    sub_10CF10();
  sub_1370C0(*(_QWORD *)(*(_QWORD *)(v1 + 528) + 8 * v2));
  return sub_1370C0(a1[1]);
}
