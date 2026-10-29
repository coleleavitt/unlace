__int64 __fastcall qregcomp(__int64 a1, char *a2, int a3)
{
  __int64 *v4; // rax
  __int64 *v5; // rbx
  unsigned int v6; // ebp

  v4 = (__int64 *)qalloc(48);
  *(_OWORD *)v4 = 0;
  v5 = v4;
  *((_OWORD *)v4 + 1) = 0;
  *((_OWORD *)v4 + 2) = 0;
  v6 = sub_87BDB0((__int64)v4, a2, a3);
  if ( !v6 )
    sub_86F070(*v5, 1);
  *(_QWORD *)(a1 + 24) = v5;
  *(_QWORD *)(a1 + 8) = v5[3];
  return v6;
}

