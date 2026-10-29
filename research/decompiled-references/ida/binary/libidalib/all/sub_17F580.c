__int64 __fastcall sub_17F580(__int64 a1)
{
  __int64 v1; // r12
  _QWORD *v2; // rbx
  __int64 v3; // rbp

  v1 = 0;
  v2 = *(_QWORD **)a1;
  v3 = *(_QWORD *)a1 + 32LL * *(_QWORD *)(a1 + 8);
  if ( v3 != *(_QWORD *)a1 )
  {
    do
    {
      if ( *v2 )
        v1 += (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 24LL))(*v2);
      v2 += 4;
    }
    while ( (_QWORD *)v3 != v2 );
  }
  return v1;
}

