/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_28310
// Address: 0x00028310

//----- (00028310) --------------------------------------------------------
int __cdecl sub_28310(int a1)
{
  int v1; // esi
  _DWORD *v2; // ecx
  _DWORD *v3; // edi
  __pid_t v4; // esi
  int v5; // ecx
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // esi
  _DWORD *v10; // eax
  int v11; // edi
  bool v12; // zf
  int result; // eax
  char *v14; // [esp-Ch] [ebp-38h]
  int v15; // [esp-8h] [ebp-34h]
  char *v16; // [esp-4h] [ebp-30h]
  char v17; // [esp+Ch] [ebp-20h]
  int *v18; // [esp+10h] [ebp-1Ch]

  v1 = a1;
  sub_1E2C0(a1, 0, 1);
  v3 = *(_DWORD **)(a1 + 568);
  if ( (_DWORD *)(a1 + 572) == v3 )
  {
LABEL_29:
    *(_DWORD *)(v1 + 624) = -1;
    *(_BYTE *)(v1 + 632) = 0;
    result = 1;
    goto LABEL_30;
  }
  v17 = 1;
  do
  {
    v4 = v3[5];
    if ( v3[10] == 1 )
    {
      if ( ptrace(PTRACE_KILL, v4, 0, 9) )
      {
        v6 = *(_DWORD *)__errno(v5);
        if ( v6 != 3 )
        {
          v7 = v3[5];
          v16 = strerror(v6);
          v15 = v7;
          v14 = "PTRACE_KILL %d: %s\n";
LABEL_20:
          v1 = a1;
          sub_1C9D0(a1, v14, v15, v16);
          v17 = 0;
          goto LABEL_21;
        }
      }
      goto LABEL_16;
    }
    if ( v4 == -1 )
      goto LABEL_16;
    v18 = (int *)__errno(v2);
    *v18 = 0;
    if ( byte_13BD20 )
      goto LABEL_13;
    v8 = syscall(238, v4, 9);
    if ( v8 && *v18 == 38 )
    {
      *v18 = 0;
      byte_13BD20 = 1;
LABEL_13:
      v8 = kill(v4, 9);
      goto LABEL_14;
    }
    if ( byte_13BD20 == 1 )
      goto LABEL_13;
LABEL_14:
    if ( v8 && *v18 != 3 )
    {
      v9 = v3[5];
      v16 = strerror(*v18);
      v15 = v9;
      v14 = "SIGKILL %d: %s\n";
      goto LABEL_20;
    }
LABEL_16:
    if ( (v17 & 1) != 0 )
    {
      v3[10] = 0;
      v3[6] = 0;
    }
    v1 = a1;
LABEL_21:
    v2 = (_DWORD *)v3[1];
    if ( v2 )
    {
      do
      {
        v10 = v2;
        v2 = (_DWORD *)*v2;
      }
      while ( v2 );
    }
    else
    {
      v10 = (_DWORD *)v3[2];
      if ( (_DWORD *)*v10 != v3 )
      {
        v11 = (int)(v3 + 2);
        do
        {
          v2 = *(_DWORD **)v11;
          v10 = *(_DWORD **)(*(_DWORD *)v11 + 8);
          v12 = *v10 == *(_DWORD *)v11;
          v11 = *(_DWORD *)v11 + 8;
        }
        while ( !v12 );
      }
    }
    v3 = v10;
  }
  while ( (_DWORD *)(a1 + 572) != v10 );
  result = -1;
  if ( (v17 & 1) != 0 )
    goto LABEL_29;
LABEL_30:
  *(_BYTE *)(v1 + 676) = 1;
  *(_BYTE *)(v1 + 633) = 1;
  return result;
}
// 28390: variable 'v5' is possibly undefined
// 283C5: variable 'v2' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
// 13BD20: using guessed type char byte_13BD20;
