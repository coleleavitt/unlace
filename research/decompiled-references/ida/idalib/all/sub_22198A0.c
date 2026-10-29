void __fastcall sub_22198A0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  if ( a2 )
  {
    v2 = a2[4];
    if ( *(_QWORD **)(a1 + 8) != a2 )
    {
      v3 = a2[3];
      *(_QWORD *)(v3 + 32) = v2;
      if ( v2 )
        *(_QWORD *)(v2 + 24) = v3;
      goto LABEL_5;
    }
    *(_QWORD *)(a1 + 8) = v2;
    if ( !v2 )
    {
LABEL_5:
      (*(void (__fastcall **)(_QWORD *))(*a2 + 8LL))(a2);
      return;
    }
    *(_QWORD *)(v2 + 24) = 0;
    (*(void (__fastcall **)(_QWORD *))(*a2 + 8LL))(a2);
  }
}
