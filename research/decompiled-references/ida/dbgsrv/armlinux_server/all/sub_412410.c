/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_412410
// Address: 0x0000000000412410

//----- (0000000000412410) ----------------------------------------------------
__int64 __fastcall sub_412410(__int64 a1, int a2, unsigned __int8 a3)
{
  __int64 v3; // x22
  __int64 v4; // x19
  unsigned int v5; // w25
  int v7; // w23
  unsigned int *v9; // x20
  int v10; // w0
  int v11; // w2
  int v12; // w2
  __int64 v13; // x0
  int v14; // w0

  v3 = a1 + 1920;
  v4 = *(_QWORD *)(a1 + 1936);
  if ( v4 == a1 + 1920 )
  {
    return 1;
  }
  else
  {
    v5 = 1;
    v7 = a3;
    do
    {
      if ( (*(_DWORD *)(v4 + 32) == a2) != v7 )
      {
        v9 = (unsigned int *)(v4 + 40);
        v10 = *(_DWORD *)(v4 + 60);
        v11 = *(_DWORD *)(v4 + 44);
        if ( v10 || *(_BYTE *)(v4 + 64) || *(_BYTE *)(v4 + 65) )
        {
          while ( 1 )
          {
            if ( v11 > 0 )
            {
              v12 = v11 - 1;
              *(_DWORD *)(v4 + 44) = v12;
              if ( v12 )
                break;
            }
            if ( *(int *)(v4 + 48) > 0
              || *(_BYTE *)(v4 + 65)
              || ((v10 != 2) & (*(unsigned __int8 *)(a1 + 2116) ^ 1)) != 0
              || *(_BYTE *)(a1 + 2053)
              || (unsigned int)(v10 - 1) > 1 )
            {
              break;
            }
            if ( *(_BYTE *)(v4 + 56) )
            {
              *(_BYTE *)(a1 + 2055) = 1;
              v13 = ptrace(PTRACE_SINGLESTEP, *v9, 0, *(int *)(v4 + 52));
            }
            else
            {
              v13 = ptrace(PTRACE_CONT, *v9, 0, *(int *)(v4 + 52));
            }
            if ( v13 )
            {
              if ( *(_DWORD *)(v4 + 60) == 2 )
                goto LABEL_30;
              if ( (unsigned __int8)sub_408F10(*v9) != 90 )
              {
                v5 = 0;
                break;
              }
              sub_4118D0(a1, *v9, 2);
            }
            v14 = *(_DWORD *)(v4 + 60);
            if ( v14 == 2 )
            {
LABEL_30:
              *(_DWORD *)(v4 + 60) = 3;
              break;
            }
            if ( v14 == 1 )
            {
              *(_DWORD *)(v4 + 60) = 0;
              break;
            }
            v10 = (unsigned __int8)under_debugger;
            if ( !under_debugger )
              sub_492270(30178);
LABEL_9:
            __break(0x3E8u);
          }
        }
        else if ( v11 )
        {
          v10 = (unsigned __int8)under_debugger;
          if ( !under_debugger )
            sub_492270(30188);
          goto LABEL_9;
        }
      }
      v4 = sub_49F6E8(v4);
    }
    while ( v4 != v3 );
  }
  return v5;
}
// 4124A8: variable 'v11' is possibly undefined
// 52451C: using guessed type char under_debugger;
