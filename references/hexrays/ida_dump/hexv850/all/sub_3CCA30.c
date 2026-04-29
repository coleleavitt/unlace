__int64 __fastcall sub_3CCA30(_QWORD *a1, __int64 a2, int a3, double a4)
{
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx

  v4 = a1;
  if ( (int)a2 < 0 )
    return v4[1];
  if ( (unsigned __int64)(int)a2 < a1[15] && a3 >= 0 )
  {
    a1 = (_QWORD *)(a1[14] + 24LL * (int)a2);
    if ( (unsigned __int64)a3 < a1[1] )
    {
      a1 = (_QWORD *)*a1;
      v5 = a1[a3];
      if ( v5 )
        return *(_QWORD *)(v5 + 24);
    }
  }
  v7 = v4[8];
  if ( (int)a2 >= *(_DWORD *)(v7 + 64) )
    return v4[1];
  if ( (unsigned int)a2 >= *(_DWORD *)(v7 + 64) )
    sub_3C8F80(a4, (__int64)a1, a2);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 528) + 8LL * (int)a2);
  if ( v8 )
    return *(_QWORD *)(v8 + 32);
  else
    return v4[1];
}
