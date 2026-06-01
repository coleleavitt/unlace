__int64 __fastcall sub_655520(__int64 *a1, __int64 a2, __int64 a3, const char *a4, char **a5, unsigned __int8 a6)
{
  char v10; // dl
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rax

  if ( !a2 )
  {
    if ( !under_debugger )
      interr(3219);
    BUG();
  }
  v10 = sub_6473A0(a2, a4);
  result = 2;
  if ( !v10 )
  {
    v12 = sub_655A30(a1, a4, a5, a3, a6);
    v13 = v12;
    if ( v12 )
    {
      if ( (*(_BYTE *)(v12 + 32) & 0x10) == 0 )
      {
        if ( 8LL * (*(_DWORD *)(a2 + 16) + 1) < (unsigned __int64)(*(_DWORD *)(a2 + 16) + 1) )
        {
          *(_QWORD *)(a2 + 24) = 0;
        }
        else
        {
          v14 = qrealloc(*(_QWORD *)(a2 + 24));
          *(_QWORD *)(a2 + 24) = v14;
          if ( v14 )
          {
            *(_QWORD *)(v14 + 8LL * *(int *)(a2 + 16)) = v13;
            result = 1;
            ++*(_DWORD *)(a2 + 16);
            *(_DWORD *)(a2 + 32) |= 0x40u;
            return result;
          }
        }
        sub_35A790(a5);
        return 0;
      }
      sub_35A790(a5);
      sub_651D90(*a1, v13, a6);
    }
    return 0;
  }
  return result;
}
