__int64 __fastcall sub_A3FAF0(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  int v11; // r12d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax

  v4 = 0;
  sub_A3EFE0(a1, a2);
  v5 = sub_A3EFE0(a1, a3);
  if ( v10 != v5 )
  {
    v11 = sub_A33400(v9, a3, v6, v7, v8);
    v15 = sub_A33400(a3, a3, v12, v13, v14);
    if ( v11 != v15 )
      return 2 * (unsigned int)(v11 > v15) - 1;
  }
  return v4;
}

