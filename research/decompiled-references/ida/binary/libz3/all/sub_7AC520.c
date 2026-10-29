__int64 __fastcall sub_7AC520(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // r14d
  unsigned int i; // ebp
  __int64 v4; // r13
  __int64 (__fastcall *v5)(); // rax
  __int64 v6; // rax
  char v7; // al
  __int64 v8; // rdx

  result = *(_QWORD *)(a1 + 760);
  if ( result )
  {
    v2 = *(_DWORD *)(a1 + 776);
    for ( i = v2; i < *(_DWORD *)(result - 4); ++i )
    {
      v4 = *(_QWORD *)(result + 8LL * i);
      v5 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 568LL);
      if ( v5 == sub_7C5740 )
      {
        v6 = *(_QWORD *)(a1 + 160);
        if ( v6 )
          v7 = *(_BYTE *)(v6 + 832);
        else
          v7 = *(_BYTE *)(*(_QWORD *)(a1 + 24) + 3184LL);
      }
      else
      {
        v7 = ((__int64 (__fastcall *)(__int64))v5)(a1);
      }
      if ( v7 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, a1 + 80) )
      {
        result = *(_QWORD *)(a1 + 760);
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 3612LL) )
        {
          v8 = v2++;
          *(_QWORD *)(result + 8 * v8) = v4;
        }
      }
      else
      {
        result = *(_QWORD *)(a1 + 760);
      }
      if ( !result )
        return result;
    }
    *(_DWORD *)(result - 4) = v2;
  }
  return result;
}

