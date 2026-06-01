__int64 __fastcall sub_1F3AB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 result; // rax
  int v6; // edx
  __int64 v7; // rax

  if ( (_BYTE)a2 )
  {
    if ( *(_BYTE *)(a1 + 968) )
    {
      if ( !*(_QWORD *)(a1 + 424) )
        goto LABEL_14;
      v6 = *(_DWORD *)(a1 + 416);
      if ( v6 == 2 )
      {
        v7 = *(_QWORD *)(a1 + 896);
      }
      else if ( v6 == 3 )
      {
        v7 = *(_QWORD *)(a1 + 904);
      }
      else
      {
        v7 = 0;
        if ( v6 == 1 )
          v7 = *(_QWORD *)(a1 + 888);
      }
    }
    else
    {
      v7 = 0;
    }
    return *(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 176LL))(v7, 1);
  }
  result = *(_QWORD *)(a1 + 424);
  if ( !result )
  {
LABEL_14:
    sub_1E69C0(a5, a1, a2, a3, a4);
    return sub_1F3B50(a1, a2);
  }
  return result;
}
