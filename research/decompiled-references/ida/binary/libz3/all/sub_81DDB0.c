__int64 __fastcall sub_81DDB0(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r12
  __int64 i; // rdx
  unsigned int v5; // edx

  v2 = 0;
  v3 = sub_186B270(0x1D8u);
  sub_81BC00(v3, a2, *(_DWORD *)(a1 + 12));
  for ( i = *(_QWORD *)(a1 + 88); i; i = *(_QWORD *)(a1 + 88) )
  {
    if ( v2 >= *(_DWORD *)(i - 4) )
      break;
    v5 = v2++;
    sub_81DB30(v3, (__int64 *)a1, v5);
  }
  return v3;
}

