/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140042750
// Address: 0x0000000140042750

//----- (0000000140042750) ----------------------------------------------------
__int64 __fastcall sub_140042750(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v5; // ebp
  int v6; // esi
  int v7; // r8d

  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 208LL))(
             a1,
             *(unsigned int *)(a2 + 4),
             1);
  if ( (int)result > 0 )
  {
    v5 = *(_DWORD *)(a2 + 4);
    v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 160LL))(a1, a2);
    if ( v6 > 0 )
    {
      while ( !(*(unsigned int (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, a2, 0xFFFFFFFFLL) )
        ;
      v7 = *(_DWORD *)(a2 + 4);
      if ( v5 != v7 )
      {
        if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 3 )
          sub_140012410(
            a1,
            (struct __crt_locale_pointers *)"unexpected event from thread %d arrived (expected thread %d)\n",
            v7,
            v5);
        return (unsigned int)-1;
      }
    }
    return (unsigned int)v6;
  }
  return result;
}
