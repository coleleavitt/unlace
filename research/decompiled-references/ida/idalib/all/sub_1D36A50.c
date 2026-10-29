__int64 __fastcall sub_1D36A50(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // r12d
  unsigned int v7; // ebp
  __int64 v8; // rdi
  __int64 *v9; // rbx
  __int64 v10; // r13
  int v11; // eax
  bool v12; // zf
  int v13; // edx
  int v14; // eax
  unsigned int v15; // eax

  v6 = a4;
  v7 = 0;
  v8 = *(_QWORD *)(a2 + 48);
  v9 = *(__int64 **)(v8 + 120);
  sub_B76070(v8, a2, a3, a4);
  while ( 1 )
  {
    v10 = *v9;
    if ( sub_B799A0(*v9) )
      break;
    if ( v6 == v7 )
      return 0;
    ++v7;
LABEL_4:
    ++v9;
  }
  v11 = sub_1E4CC70(a1, *(_QWORD *)(v10 + 48), a3);
  v12 = v11 == 0;
  v13 = v11 - 1;
  v14 = 1;
  if ( !v12 )
    v14 = v13;
  v15 = v7 + v14;
  if ( v15 <= v6 )
  {
    v7 = v15;
    goto LABEL_4;
  }
  return v6 + 1 - v7;
}
