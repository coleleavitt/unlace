__int64 __fastcall sub_1635F0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rax

  if ( (_BYTE)a2 )
  {
    if ( *(_BYTE *)(a1 + 984) )
    {
      if ( !*(_QWORD *)(a1 + 480) )
        goto LABEL_10;
      v3 = 0;
      if ( *(_DWORD *)(a1 + 472) == 1 )
        v3 = *(_QWORD *)(a1 + 848);
    }
    else
    {
      v3 = 0;
    }
    return *(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 96LL))(v3, 1);
  }
  result = *(_QWORD *)(a1 + 480);
  if ( !result )
  {
LABEL_10:
    sub_1582F0(a1);
    return sub_163660(a1, a2);
  }
  return result;
}

