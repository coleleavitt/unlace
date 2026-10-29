/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001AB20
// Address: 0x000000014001AB20

//----- (000000014001AB20) ----------------------------------------------------
int __fastcall sub_14001AB20(__int64 a1, char a2)
{
  __int64 *i; // rax
  __int64 *v5; // rbx
  void *v6; // rdi
  __int64 **v7; // rcx
  __int64 *v8; // rcx

  i = *(__int64 **)(a1 + 1088);
  v5 = (__int64 *)*i;
  if ( (__int64 *)*i != i )
  {
    do
    {
      v6 = (void *)v5[5];
      if ( a2 )
      {
        LODWORD(i) = ResumeThread((HANDLE)v5[5]);
      }
      else
      {
        for ( ; *((int *)v5 + 19) > 0; --*((_DWORD *)v5 + 19) )
          LODWORD(i) = ResumeThread(v6);
      }
      v7 = (__int64 **)v5[2];
      if ( *((_BYTE *)v7 + 25) )
      {
        for ( i = (__int64 *)v5[1]; !*((_BYTE *)i + 25); i = (__int64 *)i[1] )
        {
          if ( v5 != (__int64 *)i[2] )
            break;
          v5 = i;
        }
        v5 = i;
      }
      else
      {
        v5 = (__int64 *)v5[2];
        v8 = *v7;
        if ( !*((_BYTE *)v8 + 25) )
        {
          do
          {
            i = (__int64 *)*v8;
            v5 = v8;
            v8 = i;
          }
          while ( !*((_BYTE *)i + 25) );
        }
      }
    }
    while ( v5 != *(__int64 **)(a1 + 1088) );
  }
  return (int)i;
}
