unsigned __int64 __fastcall sub_1A2F650(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r12
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  __int64 v8; // r14
  unsigned __int64 result; // rax
  __int64 v10; // rdx
  unsigned __int64 *v11; // rcx

  v3 = a2;
  if ( a3 == a2 )
  {
    v8 = 0;
  }
  else
  {
    v5 = a2;
    v6 = 0;
    do
    {
      do
      {
        v7 = *(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v5 = v7;
      }
      while ( v7 && (*(_BYTE *)(v7 + 28) & 0x7Fu) - 49 > 2 );
      ++v6;
    }
    while ( a3 != v7 );
    v8 = v6;
  }
  result = *(unsigned int *)(a1 + 8);
  v10 = result + v8;
  if ( result + v8 > *(unsigned int *)(a1 + 12) )
  {
    sub_2237220(a1, a1 + 16, v10, 8);
    result = *(unsigned int *)(a1 + 8);
    LODWORD(v10) = v8 + result;
  }
  v11 = (unsigned __int64 *)(*(_QWORD *)a1 + 8 * result);
  if ( a3 != a2 )
  {
    do
    {
      *v11 = v3;
      do
      {
        result = *(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v3 = result;
        if ( !result )
          break;
        result = (*(_BYTE *)(result + 28) & 0x7Fu) - 49;
      }
      while ( (unsigned int)result > 2 );
      ++v11;
    }
    while ( a3 != v3 );
  }
  *(_DWORD *)(a1 + 8) = v10;
  return result;
}
