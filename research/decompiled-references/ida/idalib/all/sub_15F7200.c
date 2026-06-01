void __fastcall sub_15F7200(_BYTE *a1)
{
  __int64 v1; // r12

  if ( a1[120] )
  {
    a1[120] = 0;
    sub_168B700(a1 + 32);
    if ( a1[24] )
    {
      v1 = *(_QWORD *)a1;
      if ( (unsigned __int8)sub_FD3E40(
                              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 264LL) + 32LL),
                              *((_DWORD *)a1 + 3),
                              *((_DWORD *)a1 + 2),
                              *(_QWORD *)(*(_QWORD *)a1 + 264LL)) > 2u )
        sub_15F6BE0(v1, *((_QWORD *)a1 + 2));
    }
    if ( a1[120] )
      sub_168B700(a1 + 32);
  }
}
