__int64 __fastcall sub_2154510(_QWORD *a1, int a2, __int64 a3)
{
  int *v5; // rdi
  int v6; // eax
  __int64 v8; // rax

  v5 = (int *)a1[6];
  v6 = *v5;
  if ( a2 == 9 )
  {
    if ( v6 == 9 )
      goto LABEL_3;
  }
  else if ( a2 == v6 )
  {
LABEL_3:
    (*(void (__fastcall **)(_QWORD *))(*a1 + 152LL))(a1);
    return 0;
  }
  v8 = sub_2124B50((__int64)v5);
  return sub_2153E90((__int64)a1, v8, a3, 0, 0);
}
