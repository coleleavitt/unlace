__int64 __fastcall sub_406BD0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rdx

  v4 = *(_QWORD *)(a1 + 448);
  v5 = 0;
  if ( v4 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(v4 + 64))(*(_QWORD *)(a1 + 448), a2, v4, 0);
    v5 = 0;
    if ( v6 )
    {
      v7 = *(_QWORD **)(v6 + 24);
      if ( a3 )
        *a3 = *v7;
      return v7[1];
    }
  }
  return v5;
}

