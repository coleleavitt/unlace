__int64 __fastcall sub_5778D0(__int64 *a1)
{
  int v1; // eax
  unsigned int v2; // esi
  __int64 v3; // r10
  __int64 v4; // rdx
  __int64 **v6; // rdi
  __int64 **v7; // rdx
  __int64 v8; // rax
  bool v9; // al
  unsigned int v10; // ecx
  __int64 **v11; // r8
  __int64 v12; // rax
  int v13; // r11d
  __int64 v14; // rax
  bool v15; // al
  __int64 v16; // rax

  v1 = *((_DWORD *)a1 + 4);
  if ( v1 == 1 )
    return 0;
  v2 = v1 - 2;
  v3 = *a1;
  v4 = a1[1];
  if ( v1 == 2 )
  {
LABEL_23:
    *((_DWORD *)a1 + 4) = 1;
    return 1;
  }
  else
  {
    v6 = (__int64 **)(v4 + 32LL * v2);
    v7 = (__int64 **)(32LL * (unsigned int)(v1 - 3) + v4);
    v8 = **v6;
    if ( (v8 & 1) == 0 )
      goto LABEL_21;
LABEL_4:
    if ( (v8 & 2) != 0 )
    {
LABEL_22:
      *((_DWORD *)a1 + 4) = v2 + 1;
      return 1;
    }
    else
    {
      while ( 1 )
      {
        v9 = (v8 & 1) != 0 ? (v8 & 8) != 0 : (*(_BYTE *)(v8 + 44) & 4) != 0;
        v10 = v2 - 1;
        v11 = v7;
        if ( !v9 )
        {
          v12 = **v7;
          v13 = *(unsigned __int16 *)(v12 + 66);
          if ( *(_WORD *)(v12 + 66) )
            break;
        }
        v7 -= 4;
        if ( v2 == 1 )
          goto LABEL_23;
        v6 = v11;
        --v2;
        v8 = **v11;
        if ( (v8 & 1) != 0 )
          goto LABEL_4;
LABEL_21:
        if ( (*(_BYTE *)(v8 + 44) & 1) != 0 )
          goto LABEL_22;
      }
LABEL_9:
      if ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 128LL)
                    + 2LL
                    * (*((_DWORD *)v6 + 6) + v13 * (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(v3 + 8) + 36LL))) )
      {
LABEL_26:
        *((_DWORD *)a1 + 4) = v2 + 1;
        return 1;
      }
      else
      {
        while ( 1 )
        {
          v7 -= 4;
          if ( !v10 )
            break;
          while ( 1 )
          {
            v6 = v11;
            v2 = v10;
            v14 = **v11;
            if ( (v14 & 1) != 0 )
            {
              if ( (v14 & 2) != 0 )
                goto LABEL_26;
            }
            else if ( (*(_BYTE *)(v14 + 44) & 1) != 0 )
            {
              goto LABEL_26;
            }
            v15 = (v14 & 1) != 0 ? (**v11 & 8) != 0 : (*(_BYTE *)(v14 + 44) & 4) != 0;
            --v10;
            v11 = v7;
            if ( v15 )
              break;
            v16 = **v7;
            v13 = *(unsigned __int16 *)(v16 + 66);
            if ( *(_WORD *)(v16 + 66) )
              goto LABEL_9;
            v7 -= 4;
            if ( v2 == 1 )
              goto LABEL_18;
          }
        }
LABEL_18:
        *((_DWORD *)a1 + 4) = 1;
        return 1;
      }
    }
  }
}
