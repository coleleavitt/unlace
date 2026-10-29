/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100053DA0
// Address: 0x0000000100053DA0

//----- (0000000100053DA0) ----------------------------------------------------
__int64 __fastcall sub_100053DA0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  size_t v4; // rbx
  bool v5; // cf
  size_t v6; // rax
  unsigned int v7; // eax
  int v8; // ecx
  char *v10; // rdi
  char *v12; // r14
  void *v13; // rax

  if ( *(_BYTE *)(a2 + 29) == 1 )
  {
    if ( a1 != 0 && a1 != a2 )
    {
      v3 = *(_QWORD *)(a2 + 8);
      v4 = 0;
      v5 = v3 == 0;
      v6 = v3 - 1;
      if ( !v5 )
        v4 = v6;
      if ( v5 || v6 == 0 )
      {
        *(_QWORD *)(a1 + 8) = 0;
      }
      else
      {
        v12 = *(char **)a2;
        v13 = *(void **)a1;
        if ( *(_QWORD *)(a1 + 16) <= v4 )
        {
          v13 = qvector_reserve(a1, *(void **)a1, v4 + 1, 1u);
          *(_QWORD *)a1 = v13;
        }
        *(_QWORD *)(a1 + 8) = v4 + 1;
        memmove(v13, v12, v4);
        *(_BYTE *)(*(_QWORD *)a1 + v4) = 0;
      }
    }
    return 0;
  }
  else
  {
    v7 = *(_DWORD *)(a2 + 24);
    if ( v7 <= 0x12 && (v8 = 265216, _bittest(&v8, v7)) )
    {
      return sub_100051F70(a1, a2, a3);
    }
    else
    {
      if ( *(_QWORD *)(a2 + 8) )
        v10 = *(char **)a2;
      else
        v10 = (char *)_s1;
      return sub_100017470(
               v10,
               (unsigned int *)(a2 + 2088),
               (__int64 (__fastcall *)(_QWORD *, __int64, const char *, __int64))sub_100053E80,
               a1);
    }
  }
}
