/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1C560
// Address: 0x0001C560

//----- (0001C560) --------------------------------------------------------
int __fastcall sub_1C560(int a1, int a2, int a3, int a4)
{
  int v4; // r7
  int v5; // r4
  int v6; // r10
  int v10; // r2
  int v11; // r3
  int v12; // r3
  _BOOL4 v13; // r3
  int v14; // r0
  int v15; // r3
  int v17; // [sp+0h] [bp-4h]

  v17 = a4;
  v4 = a1 + 1004;
  v5 = *(_DWORD *)(a1 + 1012);
  if ( v5 != a1 + 1004 )
  {
    v6 = 1;
    while ( 1 )
    {
      if ( (*(_DWORD *)(v5 + 16) == a2) != a3 )
      {
        v10 = *(_DWORD *)(v5 + 40);
        v11 = *(_DWORD *)(v5 + 24);
        if ( v10 || *(_BYTE *)(v5 + 44) || *(_BYTE *)(v5 + 45) )
        {
          if ( v11 > 0 )
          {
            v12 = v11 - 1;
            *(_DWORD *)(v5 + 24) = v12;
            if ( v12 )
              goto LABEL_30;
          }
          if ( *(int *)(v5 + 28) > 0 || *(_BYTE *)(v5 + 45) )
            goto LABEL_30;
          v13 = v10 != 2 && (*(_BYTE *)(a1 + 1112) ^ 1) & 1;
          if ( v13 || *(_BYTE *)(a1 + 1077) || (unsigned int)(v10 - 1) > 1 )
            goto LABEL_30;
          if ( *(_BYTE *)(v5 + 36) )
          {
            *(_BYTE *)(a1 + 1079) = 1;
            v14 = ptrace(PTRACE_SINGLESTEP, *(_DWORD *)(v5 + 20), 0, *(_DWORD *)(v5 + 32), v17);
          }
          else
          {
            v14 = ptrace(PTRACE_CONT, *(_DWORD *)(v5 + 20), 0, *(_DWORD *)(v5 + 32), v17);
          }
          if ( v14 )
          {
            if ( *(_DWORD *)(v5 + 40) == 2 )
              goto LABEL_34;
            if ( sub_16380(*(_DWORD *)(v5 + 20)) != 90 )
            {
              v6 = 0;
              goto LABEL_30;
            }
            sub_1BE50(a1, *(_DWORD *)(v5 + 20), 2);
          }
          v15 = *(_DWORD *)(v5 + 40);
          if ( v15 == 2 )
          {
LABEL_34:
            *(_DWORD *)(v5 + 40) = 3;
            goto LABEL_30;
          }
          if ( v15 != 1 )
          {
            if ( !under_debugger )
              sub_78C64(30178);
LABEL_9:
            __und(0xFFu);
          }
          *(_DWORD *)(v5 + 40) = 0;
        }
        else if ( v11 )
        {
          if ( !under_debugger )
            sub_78C64(30188);
          goto LABEL_9;
        }
      }
LABEL_30:
      v5 = sub_81440(v5);
      if ( v5 == v4 )
        return v6;
    }
  }
  return 1;
}
// 1C5FA: variable 'v17' is possibly undefined
// D6C20: using guessed type char under_debugger;
