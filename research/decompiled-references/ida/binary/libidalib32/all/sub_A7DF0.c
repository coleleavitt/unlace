__int64 __fastcall sub_A7DF0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v4; // ebp
  __int64 v5; // r12
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 result; // rax

  if ( a3 )
  {
    v4 = 0;
    v5 = 0;
    while ( 1 )
    {
      v6 = *(_QWORD *)(a1 + 32);
      v7 = *(_QWORD *)(a1 + 16);
      if ( v7 < v6 )
        break;
      if ( v6 == v7 )
      {
        if ( v6 )
          *(_QWORD *)(a1 + 16) = 0;
        *(_QWORD *)(a1 + 32) = 0;
        if ( !(unsigned __int8)sub_A7600(*(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 48), (__int64 *)(a1 + 8)) )
        {
          result = v4;
          goto LABEL_11;
        }
        v6 = *(_QWORD *)(a1 + 32);
      }
      ++v4;
      *(_QWORD *)(a1 + 32) = v6 + 1;
      *(_BYTE *)(a2 + v5) = *(_BYTE *)(*(_QWORD *)(a1 + 8) + v6);
      v5 = v4;
      if ( v4 >= a3 )
      {
        result = v4;
        goto LABEL_11;
      }
    }
    if ( under_debugger )
      BUG();
    interr();
    return sub_A7EC0(40235);
  }
  else
  {
    result = 0;
    v4 = 0;
LABEL_11:
    **(_DWORD **)(a1 + 56) += v4;
  }
  return result;
}

