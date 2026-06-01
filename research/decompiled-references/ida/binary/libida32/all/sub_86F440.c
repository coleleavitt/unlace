__int64 __fastcall sub_86F440(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // r12
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi

  v2 = a1 + 24;
  v4 = a1;
  do
  {
    if ( *(_QWORD *)v4 )
      sub_847210(*(__int64 **)v4);
    v5 = *(_QWORD **)(v4 + 24);
    while ( v5 )
    {
      v6 = v5;
      v5 = (_QWORD *)*v5;
      (*(void (__fastcall **)(_QWORD *, _QWORD))(a2 + 8))(v6, *(_QWORD *)(a2 + 16));
    }
    v4 += 8;
  }
  while ( v4 != v2 );
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(a2 + 8))(a1, *(_QWORD *)(a2 + 16));
}

