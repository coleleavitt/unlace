/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_440A0
// Address: 0x00000000000440A0

//----- (00000000000440A0) ----------------------------------------------------
unsigned __int64 __fastcall sub_440A0(__int64 a1)
{
  _QWORD *v1; // rbx
  unsigned int v2; // eax
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rbx
  bool v6; // zf
  int v8; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v1 = *(_QWORD **)(a1 + 1032);
  if ( v1 != (_QWORD *)(a1 + 1040) )
  {
    do
    {
      if ( *((_BYTE *)v1 + 64) )
      {
        if ( *(_BYTE *)(a1 + 1150) )
        {
          *((_BYTE *)v1 + 64) = 0;
        }
        else
        {
          if ( *((_DWORD *)v1 + 15) != 1 )
          {
            if ( !(_BYTE)under_debugger )
              interr(30181);
            BUG();
          }
          ptrace(PTRACE_CONT, *((unsigned int *)v1 + 10), 0, 0);
          v2 = sub_4C880(a1, &v8, *((_DWORD *)v1 + 10), -1);
          if ( v2 != *((_DWORD *)v1 + 10) )
            sub_390A0((int)"%d: failed to clean up pending SIGSTOP\n", v2);
        }
      }
      v3 = (_QWORD *)v1[1];
      if ( v3 )
      {
        do
        {
          v4 = v3;
          v3 = (_QWORD *)*v3;
        }
        while ( v3 );
      }
      else
      {
        v4 = (_QWORD *)v1[2];
        if ( (_QWORD *)*v4 != v1 )
        {
          v5 = (__int64)(v1 + 2);
          do
          {
            v4 = *(_QWORD **)(*(_QWORD *)v5 + 16LL);
            v6 = *v4 == *(_QWORD *)v5;
            v5 = *(_QWORD *)v5 + 16LL;
          }
          while ( !v6 );
        }
      }
      v1 = v4;
    }
    while ( v4 != (_QWORD *)(a1 + 1040) );
  }
  return __readfsqword(0x28u);
}
// 158B40: using guessed type __int64 under_debugger;
