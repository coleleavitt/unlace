__int64 __fastcall sub_EB4740(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v4; // rsi
  int v5; // ecx
  __int64 v6; // r9
  unsigned int v7; // edi
  _QWORD *v8; // rax
  __int64 v9; // r8
  int v10; // r11d
  _QWORD *v11; // rbx

  result = *((unsigned int *)a1 + 4);
  if ( (_DWORD)result )
  {
    v4 = *a2;
    v5 = result - 1;
    v6 = *a1;
    v7 = (result - 1) & (37 * v4);
    v8 = (_QWORD *)(v6 + 16LL * v7);
    v9 = *v8;
    if ( v4 == *v8 )
    {
      *a3 = v8;
      return 1;
    }
    else if ( v9 == 0x7FFFFFFFFFFFFFFFLL )
    {
      *a3 = v8;
      return 0;
    }
    else
    {
      v10 = 1;
      v11 = nullptr;
      while ( 1 )
      {
        if ( !v11 && v9 == 0x7FFFFFFFFFFFFFFELL )
          v11 = v8;
        v7 = v5 & (v10 + v7);
        v8 = (_QWORD *)(v6 + 16LL * v7);
        v9 = *v8;
        if ( *v8 == v4 )
        {
          *a3 = v8;
          return 1;
        }
        if ( v9 == 0x7FFFFFFFFFFFFFFFLL )
          break;
        ++v10;
      }
      if ( v11 )
        v8 = v11;
      *a3 = v8;
      return 0;
    }
  }
  else
  {
    *a3 = 0;
  }
  return result;
}

