/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: pipe_process
// Address: 0x00084EBC

//----- (00084EBC) --------------------------------------------------------
void *__fastcall pipe_process(int *a1, int *a2, int a3, int a4)
{
  int v6; // r6
  int v7; // r4
  int v8; // r0
  bool v9; // zf
  int v10; // r0
  int v11; // r0
  int v12; // r5
  const char *v13; // r3
  int *v16; // [sp+8h] [bp-20h]
  void *v17; // [sp+10h] [bp-18h]
  int pipedes[2]; // [sp+18h] [bp-10h] BYREF
  int v20; // [sp+20h] [bp-8h]

  v6 = -1;
  v7 = -1;
  if ( a2 )
  {
    v8 = pipe(pipedes);
    if ( v8 )
    {
      v9 = *(_DWORD *)_errno(v8) == 0;
      v7 = -1;
      v10 = -1;
      if ( !v9 )
      {
        if ( !under_debugger )
          interr(3181);
        goto LABEL_31;
      }
    }
    else
    {
      v10 = pipedes[1];
      v7 = pipedes[0];
    }
    *a2 = v10;
  }
  v16 = a2;
  if ( a1 )
  {
    v11 = pipe(pipedes);
    if ( v11 )
    {
      v12 = -1;
      if ( *(_DWORD *)_errno(v11) )
      {
        if ( !under_debugger )
          interr(3182);
LABEL_31:
        __debugbreak();
      }
    }
    else
    {
      v12 = pipedes[1];
      v6 = pipedes[0];
    }
    *a1 = v6;
  }
  else
  {
    v12 = -1;
  }
  *(_DWORD *)(a3 + 16) = v7;
  *(_DWORD *)(a3 + 20) = v12;
  pipedes[1] = 0;
  pipedes[0] = 0;
  v20 = 0;
  v17 = launch_process(a3, (char **)pipedes);
  if ( v7 != -1 )
    close(v7);
  if ( v12 != -1 )
    close(v12);
  if ( !v17 )
  {
    if ( pipedes[1] )
      v13 = (const char *)pipedes[0];
    else
      v13 = &byte_B3CBE;
    sub_1DA58(a4, "%s: %s", *(const char **)(a3 + 8), v13);
    if ( a1 )
      close(*a1);
    if ( v16 )
      close(*v16);
  }
  if ( pipedes[0] )
  {
    pipedes[1] = 0;
    qfree((void *)pipedes[0]);
    v20 = 0;
    pipedes[0] = 0;
  }
  return v17;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
// B3CBE: using guessed type char byte_B3CBE;
// E0550: using guessed type char under_debugger;
