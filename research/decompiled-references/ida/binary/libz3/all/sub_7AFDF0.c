__int64 __fastcall sub_7AFDF0(_QWORD *a1, __int64 a2)
{
  __int64 (*v2)(void); // rax
  __int64 v3; // rax
  char v4; // al

  v2 = *(__int64 (**)(void))(*a1 + 568LL);
  if ( v2 == sub_7C5740 )
  {
    v3 = a1[20];
    if ( v3 )
      v4 = *(_BYTE *)(v3 + 832);
    else
      v4 = *(_BYTE *)(a1[3] + 3184LL);
  }
  else
  {
    v4 = v2();
  }
  if ( v4 )
    return 0;
  else
    return (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a2 + 24LL))(a2, a1 + 10);
}

