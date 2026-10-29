/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_446F0
// Address: 0x00000000000446F0

//----- (00000000000446F0) ----------------------------------------------------
__int64 __fastcall sub_446F0(__int64 a1)
{
  __int64 v1; // r12
  _QWORD *v2; // r15
  _QWORD *v3; // r13
  char v4; // r14
  unsigned int v5; // ebp
  unsigned int v6; // ebx
  char *v7; // rcx
  _DWORD *v8; // rbx
  int v9; // eax
  unsigned int v10; // ebx
  char *v11; // rcx
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // r15
  bool v15; // zf
  __int64 result; // rax

  v1 = a1;
  sub_3AAD0(a1, 0, 1);
  v2 = *(_QWORD **)(a1 + 1032);
  v3 = (_QWORD *)(a1 + 1040);
  if ( v2 == (_QWORD *)(a1 + 1040) )
  {
LABEL_27:
    *(_DWORD *)(v1 + 1140) = -1;
    *(_BYTE *)(v1 + 1148) = 0;
    result = 1;
    goto LABEL_28;
  }
  v4 = 1;
  do
  {
    v5 = *((_DWORD *)v2 + 10);
    if ( *((_DWORD *)v2 + 15) == 1 )
    {
      a1 = 8;
      if ( ptrace(PTRACE_KILL, v5, 0, 9) )
      {
        a1 = *(unsigned int *)__errno(8);
        if ( (_DWORD)a1 != 3 )
        {
          v6 = *((_DWORD *)v2 + 10);
          v7 = strerror(a1);
          v4 = 0;
          a1 = v1;
          sub_391F0(v1, "PTRACE_KILL %d: %s\n", v6, v7);
          goto LABEL_19;
        }
      }
      goto LABEL_16;
    }
    if ( v5 != -1 )
    {
      v8 = (_DWORD *)__errno(a1);
      *v8 = 0;
      if ( !byte_155770 )
      {
        a1 = 200;
        v9 = syscall(200, v5, 9);
        if ( v9 && *v8 == 38 )
        {
          *v8 = 0;
          byte_155770 = 1;
        }
        else if ( byte_155770 != 1 )
        {
LABEL_14:
          if ( v9 )
          {
            a1 = (unsigned int)*v8;
            if ( (_DWORD)a1 != 3 )
            {
              v10 = *((_DWORD *)v2 + 10);
              v11 = strerror(a1);
              v4 = 0;
              a1 = v1;
              sub_391F0(v1, "SIGKILL %d: %s\n", v10, v11);
              goto LABEL_19;
            }
          }
          goto LABEL_16;
        }
      }
      a1 = v5;
      v9 = kill(v5, 9);
      goto LABEL_14;
    }
LABEL_16:
    if ( (v4 & 1) != 0 )
    {
      *((_DWORD *)v2 + 15) = 0;
      *((_DWORD *)v2 + 11) = 0;
    }
LABEL_19:
    v12 = (_QWORD *)v2[1];
    if ( v12 )
    {
      do
      {
        v13 = v12;
        v12 = (_QWORD *)*v12;
      }
      while ( v12 );
    }
    else
    {
      v13 = (_QWORD *)v2[2];
      if ( (_QWORD *)*v13 != v2 )
      {
        v14 = (__int64)(v2 + 2);
        do
        {
          v13 = *(_QWORD **)(*(_QWORD *)v14 + 16LL);
          v15 = *v13 == *(_QWORD *)v14;
          v14 = *(_QWORD *)v14 + 16LL;
        }
        while ( !v15 );
      }
    }
    v2 = v13;
  }
  while ( v13 != v3 );
  result = 0xFFFFFFFFLL;
  if ( (v4 & 1) != 0 )
    goto LABEL_27;
LABEL_28:
  *(_BYTE *)(v1 + 1228) = 1;
  *(_BYTE *)(v1 + 1149) = 1;
  return result;
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
// 155770: using guessed type char byte_155770;
