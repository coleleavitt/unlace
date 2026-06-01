__int64 __fastcall unregister_custom_refinfo(int a1)
{
  __int64 result; // rax
  signed int v2; // edi
  __int64 v3; // rdx
  _QWORD *v4; // rdi

  result = 0;
  v2 = a1 & 0xFFFFFFBF;
  if ( v2 > 0 )
  {
    v3 = *(_QWORD *)(**(_QWORD **)(qword_2CA1698 + 1480) + 1408LL);
    if ( (unsigned __int64)v2 < *(_QWORD *)(v3 + 136) )
    {
      v4 = (_QWORD *)(*(_QWORD *)(v3 + 128) + 16LL * v2);
      if ( *v4 )
      {
        *v4 = 0;
        return 1;
      }
    }
  }
  return result;
}

