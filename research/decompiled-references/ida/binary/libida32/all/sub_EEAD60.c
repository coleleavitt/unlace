void __fastcall sub_EEAD60(__int64 *a1, __int64 a2)
{
  int v3; // r14d
  int i; // ebx
  __int64 v5; // rdi
  _WORD *v6; // rdx

  v3 = *((_DWORD *)a1 + 2);
  if ( v3 > 0 )
  {
    for ( i = 0; i != v3; ++i )
    {
      while ( 1 )
      {
        v5 = *a1;
        v6 = *(_WORD **)(*a1 + 32);
        if ( *(_QWORD *)(*a1 + 24) - (_QWORD)v6 > 1u )
          break;
        ++i;
        sub_22581D0(v5, "  ", 2);
        if ( v3 == i )
          goto LABEL_5;
      }
      *v6 = 8224;
      *(_QWORD *)(v5 + 32) += 2LL;
    }
  }
LABEL_5:
  sub_971800(*a1, "#pragma omp parallel for");
  sub_EE9F30((__int64)a1, a2);
}

