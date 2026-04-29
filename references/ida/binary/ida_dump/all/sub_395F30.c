__int64 __fastcall sub_395F30(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  int v7; // eax
  unsigned int v8; // edx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // esi

  v7 = sub_219F90(*(_QWORD *)(a1 + 24), a2, a3);
  v8 = 0;
  if ( v7 )
  {
    v9 = *(_QWORD *)(a1 + 24);
    if ( v7 == 2 )
    {
      sub_2B9C00(v9);
      v13 = 0;
    }
    else
    {
      sub_2196C0(v9);
      sub_2B9C00(*(_QWORD *)(a1 + 24));
      v13 = 1;
    }
    sub_395A90(a1, v13, a4, v10, v11, v12);
    sub_33E140(*(_QWORD *)(a1 + 128), 0x72u, a1, a2, a3);
    return 1;
  }
  return v8;
}
