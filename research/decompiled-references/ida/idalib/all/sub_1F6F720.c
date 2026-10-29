__int64 __fastcall sub_1F6F720(unsigned int a1, char *a2, __int64 a3, __int64 a4)
{
  char *v4; // r14
  char v7; // dl
  __int64 v8; // rax
  __int64 v9; // rbx

  v4 = a2;
  *(_DWORD *)(a4 + 8) = 0;
  sub_9B9C90(a4, a1);
  v7 = *a2;
  if ( *a2 )
  {
    v8 = *(unsigned int *)(a4 + 8);
    do
    {
      v9 = v7;
      ++v4;
      if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a4 + 12) )
      {
        sub_2237220(a4, a4 + 16, v8 + 1, 8);
        *(_QWORD *)(*(_QWORD *)a4 + 8LL * *(unsigned int *)(a4 + 8)) = v9;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)a4 + 8 * v8) = v7;
      }
      v8 = (unsigned int)(*(_DWORD *)(a4 + 8) + 1);
      *(_DWORD *)(a4 + 8) = v8;
      v7 = *v4;
    }
    while ( *v4 );
  }
  return sub_1F6E900(a3, 3u, a4);
}
