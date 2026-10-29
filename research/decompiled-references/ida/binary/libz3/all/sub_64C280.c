__int64 __fastcall sub_64C280(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rcx

  result = 0;
  if ( *(_QWORD *)(a3 + 40) == *(_QWORD *)(a2 + 40) )
  {
    v4 = *(unsigned int *)(a2 + 56);
    if ( (_DWORD)v4 )
    {
      v5 = *(unsigned int *)(a3 + 56);
      if ( !(_DWORD)v5 )
        return result;
      v6 = a2;
      v7 = a2 + 8 * v4;
      v8 = a3 + 8 * v5;
      while ( 2 )
      {
        v9 = a3;
        while ( (*(_QWORD *)(v6 + 80) & 0xFFFFFFFFFFFFFFF8LL) != (*(_QWORD *)(v9 + 80) & 0xFFFFFFFFFFFFFFF8LL) )
        {
          v9 += 8;
          if ( v8 == v9 )
            return 0;
        }
        v6 += 8;
        if ( v7 != v6 )
          continue;
        break;
      }
    }
    return 1;
  }
  return result;
}

