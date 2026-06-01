__int64 __fastcall sub_C23B30(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // rbp
  unsigned int v4; // edx

  result = *a1;
  if ( *((_BYTE *)a1 + 8) )
  {
    if ( *((_BYTE *)a1 + 9) )
    {
      v2 = *(_QWORD *)(result + 24);
      v3 = *(_QWORD *)(v2 + 8);
      v4 = *(_DWORD *)(v3 + 8);
      if ( v4 )
      {
        if ( !*(_BYTE *)v2 )
        {
          sub_C239B0(*(_QWORD *)v3, *(_QWORD *)v3 + 32LL * v4);
          *(_DWORD *)(v3 + 8) = 0;
          result = *a1;
        }
      }
    }
  }
  *(_DWORD *)(result + 916) = *((_DWORD *)a1 + 3);
  return result;
}
