__int64 __fastcall Clp_getNumElements(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 (*v2)(void); // rax

  v1 = *(_QWORD **)(*(_QWORD *)a1 + 192LL);
  v2 = *(__int64 (**)(void))(*v1 + 16LL);
  if ( (char *)v2 == (char *)ClpPackedMatrix::getNumElements )
    return *(unsigned int *)(v1[11] + 72LL);
  else
    return v2();
}

