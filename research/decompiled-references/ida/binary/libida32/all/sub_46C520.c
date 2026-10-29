__int64 __fastcall sub_46C520(_QWORD *a1, unsigned int *a2)
{
  int *v3; // rdi
  unsigned int v4; // ebx
  __int64 (__fastcall *v5)(__int64, unsigned int); // rax
  __int64 v6; // rax
  unsigned int *v7; // rbx
  __int64 v8; // rax

  v3 = (int *)a1[1];
  v4 = *a2;
  v5 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v3 + 168LL);
  if ( v5 == sub_46AD80 )
  {
    v6 = switch_dbctx(v3[2]);
    v7 = (unsigned int *)sub_4EE820(*(_QWORD *)(v6 + 1480) + 2672LL, v4);
  }
  else
  {
    v7 = (unsigned int *)v5((__int64)v3, v4);
  }
  v8 = switch_dbctx(*(int *)(*a1 + 8LL));
  sub_6255C0(*(_QWORD *)(v8 + 1480), *v7, v7[1], *((_QWORD *)v7 + 1));
  return 0;
}

