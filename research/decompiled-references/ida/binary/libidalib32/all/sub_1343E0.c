__int64 __fastcall sub_1343E0(_QWORD *a1, __int64 **a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx

  if ( a2[1] )
  {
    v2 = **a2;
    v3 = a1[23];
    dword_2440A4 = *(_DWORD *)(v3 + 8 * v2);
    byte_2440A8 = *(_BYTE *)(v3 + 8 * v2 + 4);
  }
  (*(void (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1);
  return 1;
}

