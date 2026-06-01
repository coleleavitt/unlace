__int64 __fastcall unregister_custom_fixup(__int16 a1)
{
  __int64 result; // rax
  int v2; // edi
  __int64 v3; // rdx
  _QWORD *v4; // rdi

  result = 0;
  if ( a1 < 0 )
  {
    v2 = a1 & 0x7FFF;
    if ( v2 )
    {
      v3 = *(_QWORD *)(**(_QWORD **)(qword_2CA1698 + 1480) + 1408LL);
      if ( (unsigned __int64)v2 < *(_QWORD *)(v3 + 24) )
      {
        v4 = (_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL * v2);
        if ( *v4 )
        {
          *v4 = 0;
          return 1;
        }
      }
    }
  }
  return result;
}

