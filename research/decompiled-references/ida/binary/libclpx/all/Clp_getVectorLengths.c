__int64 __fastcall Clp_getVectorLengths(__int64 a1)
{
  __int64 v1; // rdi
  __int64 (__fastcall *v2)(ClpPackedMatrix *); // rax
  __int64 v3; // rax
  __int64 v5; // rax

  v1 = *(_QWORD *)(*(_QWORD *)a1 + 192LL);
  if ( !v1 )
    return 0;
  v2 = **(__int64 (__fastcall ***)(ClpPackedMatrix *))v1;
  if ( v2 == ClpPackedMatrix::getPackedMatrix )
  {
    v3 = *(_QWORD *)(v1 + 88);
    if ( v3 )
      return *(_QWORD *)(v3 + 56);
    return 0;
  }
  v5 = ((__int64 (*)(void))v2)();
  if ( v5 )
    return *(_QWORD *)(v5 + 56);
  else
    return 0;
}

