/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8062200
// Address: 0x08062200

//----- (08062200) --------------------------------------------------------
int __cdecl sub_8062200(int a1, int a2, char a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  enum __ptrace_request v7; // eax
  int v8; // eax
  char v10; // al
  int v11; // eax
  int v12; // [esp-14h] [ebp-38h]
  int v13; // [esp-10h] [ebp-34h]
  int v14; // [esp-Ch] [ebp-30h]
  int v15; // [esp+0h] [ebp-24h]
  int v16; // [esp+4h] [ebp-20h]

  v16 = 1;
  if ( *(_DWORD *)(a1 + 668) != a1 + 660 )
  {
    v3 = *(_DWORD *)(a1 + 668);
    do
    {
      if ( (*(_DWORD *)(v3 + 16) == a2) != a3 )
      {
        v4 = *(_DWORD *)(v3 + 40);
        v5 = *(_DWORD *)(v3 + 24);
        if ( v4 || *(_BYTE *)(v3 + 44) || *(_BYTE *)(v3 + 45) )
        {
          if ( v5 > 0 )
          {
            v6 = v5 - 1;
            *(_DWORD *)(v3 + 24) = v6;
            if ( v6 )
              goto LABEL_6;
          }
          if ( *(int *)(v3 + 28) > 0 || *(_BYTE *)(v3 + 45) )
            goto LABEL_6;
          if ( *(_BYTE *)(a1 + 768) )
          {
            if ( *(_BYTE *)(a1 + 733) || (unsigned int)(v4 - 1) > 1 )
              goto LABEL_6;
          }
          else if ( v4 != 2 || *(_BYTE *)(a1 + 733) )
          {
            goto LABEL_6;
          }
          v7 = PTRACE_CONT;
          if ( *(_BYTE *)(v3 + 36) )
          {
            *(_BYTE *)(a1 + 735) = 1;
            v7 = PTRACE_SINGLESTEP;
          }
          v15 = v3;
          v8 = ptrace(v7, *(_DWORD *)(v3 + 20), 0, *(_DWORD *)(v3 + 32));
          v3 = v15;
          if ( v8 )
          {
            if ( *(_DWORD *)(v15 + 40) == 2 )
              goto LABEL_20;
            v10 = sub_8055520(*(_DWORD *)(v15 + 20));
            v3 = v15;
            if ( v10 != 90 )
            {
              v16 = 0;
              goto LABEL_6;
            }
            sub_8061680(a1, *(_DWORD *)(v15 + 20), 2);
            v3 = v15;
          }
          v11 = *(_DWORD *)(v3 + 40);
          if ( v11 == 2 )
          {
LABEL_20:
            *(_DWORD *)(v3 + 40) = 3;
            goto LABEL_6;
          }
          if ( v11 != 1 )
          {
            if ( !byte_811F8A1 )
              sub_80CFF40(30178, v12, v13, v14);
LABEL_35:
            JUMPOUT(0x804C70A);
          }
          *(_DWORD *)(v3 + 40) = 0;
        }
        else if ( v5 )
        {
          if ( !byte_811F8A1 )
            sub_80CFF40(30188, v12, v13, v14);
          goto LABEL_35;
        }
      }
LABEL_6:
      v3 = std::_Rb_tree_increment(v3);
    }
    while ( v3 != a1 + 660 );
  }
  return v16;
}
// 806239F: control flows out of bounds to 804C70A
// 80623AD: variable 'v12' is possibly undefined
// 80623AD: variable 'v13' is possibly undefined
// 80623AD: variable 'v14' is possibly undefined
// 804B4A0: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
// 811F8A1: using guessed type char byte_811F8A1;
