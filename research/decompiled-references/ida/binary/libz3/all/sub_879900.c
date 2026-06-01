void __fastcall sub_879900(__int64 *a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rax
  _QWORD *v5; // rdx
  __int64 v6; // r13

  v3 = *(_QWORD *)(*a1 + 88);
  if ( v3 )
  {
    if ( a3 < *(_DWORD *)(v3 - 4) )
    {
      v5 = *(_QWORD **)(v3 + 8LL * a2);
      if ( v5 )
      {
        if ( *(_QWORD *)(v3 + 8LL * a3) )
        {
          v6 = sub_15D1F10(*v5);
          if ( v6 == sub_15D1F10(**(_QWORD **)(*(_QWORD *)(*a1 + 88) + 8LL * a3)) )
          {
            if ( (unsigned __int8)sub_1673B10(*a1 + 128, v6) )
              sub_86CF90(*a1, a2, a3);
          }
        }
      }
    }
  }
}

