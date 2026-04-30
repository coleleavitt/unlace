__int64 __fastcall sub_2A8530(__int64 a1, __int64 (__fastcall *a2)(QT::QAbstractScrollArea **))
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 result; // rax

  v2 = sub_17D870(a1);
  v3 = v2;
  if ( v2 )
  {
    if ( *(_BYTE *)(v2 + 741) )
      v3 = *(_QWORD *)(v2 + 896);
    else
      v3 = 0;
  }
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 504LL))(v3);
  if ( !*(_DWORD *)(v3 + 384) && (int)result >= 0 )
    return sub_2A8140((QT::QAbstractScrollArea **)v3, a2, result);
  return result;
}
