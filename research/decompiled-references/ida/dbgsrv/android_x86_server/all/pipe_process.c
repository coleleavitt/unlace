/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: pipe_process
// Address: 0x000BAEF0

//----- (000BAEF0) --------------------------------------------------------
int __cdecl pipe_process(int *a1, int *a2, _DWORD *a3, int a4)
{
  int v4; // edi
  int v5; // esi
  int v6; // ecx
  bool v7; // zf
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  char *v11; // edx
  int pipedes[2]; // [esp+14h] [ebp-28h] BYREF
  int v14; // [esp+1Ch] [ebp-20h]
  int v15; // [esp+20h] [ebp-1Ch]
  unsigned int v16; // [esp+28h] [ebp-14h]

  v16 = __readgsdword(0x14u);
  v4 = -1;
  v5 = -1;
  if ( a2 )
  {
    if ( pipe(&pipedes[1]) )
    {
      v7 = *(_DWORD *)__errno(v6) == 0;
      v5 = -1;
      v8 = -1;
      if ( !v7 )
      {
        if ( !(_BYTE)under_debugger )
          interr(3181);
        goto LABEL_30;
      }
    }
    else
    {
      v5 = pipedes[1];
      v8 = v14;
    }
    *a2 = v8;
  }
  if ( a1 )
  {
    if ( pipe(&pipedes[1]) )
    {
      v7 = *(_DWORD *)__errno(v9) == 0;
      v10 = -1;
      v4 = -1;
      if ( !v7 )
      {
        if ( !(_BYTE)under_debugger )
          interr(3182);
LABEL_30:
        BUG();
      }
    }
    else
    {
      v10 = pipedes[1];
      v4 = v14;
    }
    *a1 = v10;
  }
  a3[4] = v5;
  a3[5] = v4;
  pipedes[1] = 0;
  v14 = 0;
  v15 = 0;
  pipedes[0] = (int)launch_process((int)a3, (char **)&pipedes[1]);
  if ( v5 != -1 )
    close(v5);
  if ( v4 != -1 )
    close(v4);
  if ( !pipedes[0] )
  {
    if ( v14 )
      v11 = (char *)pipedes[1];
    else
      v11 = byte_EF875;
    sub_1F400(a4, "%s: %s", a3[2], v11);
    if ( a1 )
      close(*a1);
    if ( a2 )
      close(*a2);
  }
  if ( pipedes[1] )
  {
    v14 = 0;
    qfree((void *)pipedes[1]);
    pipedes[1] = 0;
    v15 = 0;
  }
  return pipedes[0];
}
// BAF32: variable 'v6' is possibly undefined
// BAF87: variable 'v9' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
// 13E34C: using guessed type int under_debugger;
