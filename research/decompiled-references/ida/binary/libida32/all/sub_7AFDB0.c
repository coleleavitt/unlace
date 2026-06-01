void __fastcall __noreturn sub_7AFDB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d

  v2 = sub_7AE510();
  if ( v2 )
  {
    v3 = v2;
    free_idcv(a2);
    *(_OWORD *)(a2 + 16) = 0;
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    callui(1166, v3, (int)&callui, v4, v5, v6);
  }
  sub_365330();
}

