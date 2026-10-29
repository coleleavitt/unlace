__int64 __fastcall sub_413E0(__int64 a1, __int64 a2, double a3, double a4)
{
  __int64 result; // rax
  __int64 v5; // rdx
  int v6; // r8d
  __int64 v7; // rcx
  _QWORD *v8; // rax

  result = 0;
  v5 = 0;
  v6 = *(_QWORD *)(a2 + 296);
  if ( v6 )
  {
    while ( 1 )
    {
      result = (unsigned int)(result + 1);
      v5 += 96;
      if ( (_DWORD)result == v6 )
        break;
      v7 = v5 + *(_QWORD *)(a2 + 288);
      if ( *(_BYTE *)(v7 + 92) != 0xFE && !*(_BYTE *)(v7 + 93) && *(_QWORD *)(v7 + 80) == *(_QWORD *)(a1 + 312) )
      {
        v8 = (_QWORD *)sub_41120(a1, a2, 7, ".prgend", 0, 1u, a3, a4, 0);
        return set_name(*v8, "_end", 6144);
      }
    }
  }
  return result;
}

