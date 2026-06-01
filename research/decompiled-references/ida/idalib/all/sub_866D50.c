__int64 __fastcall sub_866D50(_QWORD *a1)
{
  _QWORD *v2; // rbp
  __int64 v3; // rbx
  _QWORD *v4; // rdi
  _QWORD *v5; // rbp
  _QWORD *v6; // rdi

  v2 = (_QWORD *)a1[9];
  v3 = a1[7];
  while ( v2 )
  {
    v4 = v2;
    v2 = (_QWORD *)*v2;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(v3 + 8))(v4, *(_QWORD *)(v3 + 16));
  }
  v5 = (_QWORD *)a1[10];
  while ( v5 )
  {
    v6 = v5;
    v5 = (_QWORD *)*v5;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(v3 + 8))(v6, *(_QWORD *)(v3 + 16));
  }
  return (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(v3 + 8))(a1, *(_QWORD *)(v3 + 16));
}
