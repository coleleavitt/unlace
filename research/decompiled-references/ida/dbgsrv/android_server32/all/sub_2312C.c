/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2312C
// Address: 0x0002312C

//----- (0002312C) --------------------------------------------------------
int __fastcall sub_2312C(int a1)
{
  int v1; // r7
  _DWORD *v2; // r4
  _BYTE *v3; // r6
  __pid_t v4; // r1
  _DWORD *v5; // r0
  _DWORD *v6; // r0
  bool v7; // zf
  int v8; // r1
  __time_t v11[2]; // [sp+Ch] [bp-8h] BYREF

  v1 = a1 + 916;
  v2 = *(_DWORD **)(a1 + 912);
  if ( v2 != (_DWORD *)(a1 + 916) )
  {
    v3 = (_BYTE *)(a1 + 978);
    do
    {
      if ( *((_BYTE *)v2 + 44) )
      {
        if ( *v3 )
        {
          *((_BYTE *)v2 + 44) = 0;
        }
        else
        {
          if ( v2[10] != 1 )
          {
            if ( !under_debugger )
              interr(30181);
            __debugbreak();
          }
          ptrace(PTRACE_CONT, v2[5], 0, 0);
          v4 = sub_2781C(a1, v11, v2[5], -1);
          if ( v4 != v2[5] )
            sub_1BBA0((int)"%d: failed to clean up pending SIGSTOP\n", v4);
        }
      }
      v5 = (_DWORD *)v2[1];
      if ( v5 )
      {
        do
        {
          v2 = v5;
          v5 = (_DWORD *)*v5;
        }
        while ( v5 );
      }
      else
      {
        v6 = v2 + 2;
        v7 = *(_DWORD *)v2[2] == (_DWORD)v2;
        v2 = (_DWORD *)v2[2];
        if ( !v7 )
        {
          do
          {
            v8 = *v6;
            v6 = (_DWORD *)(*v6 + 8);
            v2 = *(_DWORD **)(v8 + 8);
          }
          while ( *v2 != v8 );
        }
      }
    }
    while ( v2 != (_DWORD *)v1 );
  }
  return _stack_chk_guard - v11[1];
}
// E0550: using guessed type char under_debugger;
