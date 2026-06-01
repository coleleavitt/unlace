__int64 __fastcall sub_781A70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  unsigned __int64 v10; // rax

  result = *(_QWORD *)(a1 + 120);
  v6 = (result >> 2) & 1;
  if ( a2 )
  {
    if ( !(_BYTE)v6 )
    {
      v7 = sub_798D40(a1);
      v8 = *(_QWORD *)(v7 + 2192);
      *(_QWORD *)(v7 + 2272) += 32LL;
      v9 = v7;
      v10 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v9 + 2200) >= v10 + 32 && v8 )
        *(_QWORD *)(v9 + 2192) = v10 + 32;
      else
        v10 = sub_779030(v9 + 2192, 32, 3);
      *(_DWORD *)(v10 + 16) = 0;
      *(_QWORD *)(v10 + 24) = 0;
      *(_OWORD *)v10 = 0;
      result = v10 | 4;
      *(_QWORD *)(a1 + 120) = result;
    }
    result &= 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)result = a2;
    *(_QWORD *)(result + 8) = a3;
  }
  else if ( (_BYTE)v6 )
  {
    result &= 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_DWORD *)(result + 16) )
    {
      *(_QWORD *)result = 0;
      *(_QWORD *)(result + 8) = a3;
    }
    else
    {
      *(_QWORD *)(a1 + 120) = 0;
    }
  }
  return result;
}

