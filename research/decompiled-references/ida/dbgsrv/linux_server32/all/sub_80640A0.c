/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80640A0
// Address: 0x080640A0

//----- (080640A0) --------------------------------------------------------
int __cdecl sub_80640A0(int a1, int a2)
{
  _DWORD *v2; // eax
  int v3; // ebp
  _DWORD *v4; // ebx
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // eax
  int result; // eax
  int v10; // edi
  int v11; // eax
  _BYTE v12[56]; // [esp+10h] [ebp-64h] BYREF
  int v13; // [esp+48h] [ebp-2Ch]
  unsigned int v14; // [esp+54h] [ebp-20h]

  v14 = __readgsdword(0x14u);
  if ( !a2 )
    goto LABEL_17;
  v2 = *(_DWORD **)(a1 + 664);
  v3 = *(_DWORD *)(a2 + 4);
  if ( v2 )
  {
    v4 = (_DWORD *)(a1 + 660);
    do
    {
      while ( 1 )
      {
        v5 = v2[2];
        v6 = v2[3];
        if ( v3 > v2[4] )
          break;
        v4 = v2;
        v2 = (_DWORD *)v2[2];
        if ( !v5 )
          goto LABEL_7;
      }
      v2 = (_DWORD *)v2[3];
    }
    while ( v6 );
LABEL_7:
    if ( v4 != (_DWORD *)(a1 + 660) && v3 >= v4[4] )
    {
      v7 = *(_DWORD *)(a2 + 16) & 0xFFFFFFF;
      if ( v7 == 7 )
      {
        if ( *(_BYTE *)(a2 + 12) )
          goto LABEL_26;
      }
      else
      {
        if ( (*(_DWORD *)(a2 + 16) & 0xFFFFFF8) != 0 )
        {
          if ( (unsigned int)(v7 - 8) <= 1 )
            goto LABEL_12;
LABEL_26:
          v8 = v4[10];
          v4[8] = 0;
          if ( v8 != 2 )
          {
LABEL_13:
            if ( v8 == 3 )
              sub_805B5E0(a1, *(_DWORD *)(a2 + 4));
            if ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) != 7 )
              goto LABEL_16;
LABEL_28:
            if ( !*((_BYTE *)v4 + 36) && *(_DWORD *)(a2 + 20) == 5 )
            {
              if ( *(_BYTE *)(a2 + 12) )
              {
                v10 = *(_DWORD *)(a2 + 4);
                if ( ptrace(PTRACE_GETREGS, v10, 0, v12)
                  || (v11 = v13, (v13 & 0x100) != 0)
                  && (BYTE1(v11) = BYTE1(v13) & 0xFE, v13 = v11, ptrace(PTRACE_SETREGS, v10, 0, v12)) )
                {
                  sub_8058290();
                }
              }
            }
            goto LABEL_16;
          }
LABEL_27:
          v4[6] = 0;
          v4[7] = 0;
          sub_8062200(a1, v4[5], 0);
          if ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) != 7 )
            goto LABEL_16;
          goto LABEL_28;
        }
        if ( (unsigned int)(v7 - 3) > 1 )
          goto LABEL_26;
      }
LABEL_12:
      v8 = v4[10];
      if ( v8 != 2 )
        goto LABEL_13;
      goto LABEL_27;
    }
  }
  if ( v3 && (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) != 4 && !*(_BYTE *)(a1 + 733) )
  {
    sub_8058E50(a1, "could not find thread %d!\n", v3);
    goto LABEL_17;
  }
LABEL_16:
  *(_BYTE *)(a1 + 770) = 0;
  if ( !(unsigned __int8)sub_8063DA0(a1, 0) )
  {
LABEL_17:
    result = -1;
    goto LABEL_18;
  }
  result = 1;
LABEL_18:
  if ( v14 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
