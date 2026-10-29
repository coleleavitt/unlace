__int64 __fastcall sub_11EA310(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // r12

  if ( (a1[9] & 1) != 0 )
  {
    v2 = *a1;
    if ( v2 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  else if ( *((_BYTE *)a1 + 64) )
  {
    v3 = *((unsigned int *)a1 + 14);
    v4 = a1[5];
    v5 = 104 * v3;
    if ( (_DWORD)v3 )
    {
      v6 = v4 + 104 * v3;
      do
      {
        if ( *(_QWORD *)v4 != -2 && *(_QWORD *)v4 != -1 )
        {
          if ( *(_BYTE *)(v4 + 96) )
            operator delete(*(_QWORD *)(v4 + 72), 32LL * *(unsigned int *)(v4 + 88), 4);
        }
        v4 += 104;
      }
      while ( v6 != v4 );
      v4 = a1[5];
      v5 = 104LL * *((unsigned int *)a1 + 14);
    }
    return operator delete(v4, v5, 8);
  }
  return result;
}
