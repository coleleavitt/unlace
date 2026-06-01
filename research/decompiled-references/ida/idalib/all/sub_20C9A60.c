void __fastcall sub_20C9A60(_QWORD *a1, _QWORD *a2, char a3)
{
  _QWORD *v3; // rax
  __int64 v4; // rcx

  while ( a1 != a2 )
  {
    a2 -= 4;
    v3 = (_QWORD *)a2[2];
    if ( v3 )
    {
      v4 = a2[1];
      *v3 = v4;
      if ( v4 )
        *(_QWORD *)(v4 + 16) = v3;
    }
  }
  if ( a3 )
    operator delete(a1);
}
