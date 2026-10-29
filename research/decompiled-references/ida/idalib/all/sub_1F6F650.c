__int64 __fastcall sub_1F6F650(unsigned int a1, char *a2, __int64 a3, __int64 a4)
{
  char *v4; // r13
  __int64 result; // rax
  char v8; // dl
  __int64 v9; // rax
  __int64 v10; // rbp

  v4 = a2;
  *(_DWORD *)(a4 + 8) = 0;
  sub_9B9C90(a4, a1);
  result = sub_1F6E900(a3, 1u, a4);
  if ( *a2 )
  {
    *(_DWORD *)(a4 + 8) = 0;
    v8 = *a2;
    v9 = 0;
    if ( *a2 )
    {
      do
      {
        v10 = v8;
        ++v4;
        if ( v9 + 1 > (unsigned __int64)*(unsigned int *)(a4 + 12) )
        {
          sub_2237220(a4, a4 + 16, v9 + 1, 8);
          *(_QWORD *)(*(_QWORD *)a4 + 8LL * *(unsigned int *)(a4 + 8)) = v10;
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)a4 + 8 * v9) = v8;
        }
        v9 = (unsigned int)(*(_DWORD *)(a4 + 8) + 1);
        *(_DWORD *)(a4 + 8) = v9;
        v8 = *v4;
      }
      while ( *v4 );
    }
    return sub_1F6E900(a3, 2u, a4);
  }
  return result;
}
