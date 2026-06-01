void __fastcall __spoils<> sub_17431E0(_QWORD *a1)
{
  __int64 v1; // rax

  if ( *((_BYTE *)a1 + 40) )
  {
    v1 = a1[1];
    if ( v1 )
    {
      *(_QWORD *)(*a1 + 544LL) = v1;
      *(_QWORD *)(*a1 + 512LL) = a1[2];
      *(_QWORD *)(*a1 + 9944LL) = a1[3];
      *(_DWORD *)(*a1 + 80LL) = *((_DWORD *)a1 + 8);
      *(_DWORD *)(*a1 + 2632LL) = *((_DWORD *)a1 + 9);
    }
  }
}
