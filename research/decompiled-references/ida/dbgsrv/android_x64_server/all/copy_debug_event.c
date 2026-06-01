/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: copy_debug_event
// Address: 0x00000000000B54E0

//----- (00000000000B54E0) ----------------------------------------------------
char __fastcall copy_debug_event(__int64 a1, __int64 a2)
{
  char result; // al
  unsigned int v3; // eax
  int v4; // ecx
  unsigned __int64 v5; // r15
  const void *v6; // r13
  void *v7; // rax
  int v8; // eax
  unsigned __int64 v9; // r15
  const void *v10; // r13
  void *v11; // rax
  int v12; // eax
  unsigned __int64 v13; // r15
  const void *v14; // r13
  void *v15; // rax

  if ( a1 != a2 )
  {
    set_debug_event_code(a1, *(_DWORD *)(a2 + 20) & 0xFFFFFFF);
    switch ( *(_DWORD *)(a2 + 20) & 0xFFFFFFF )
    {
      case 1:
      case 8:
      case 0xB:
        v3 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
        if ( v3 <= 0xB )
        {
          v4 = 2306;
          if ( _bittest(&v4, v3) )
          {
            v5 = *(_QWORD *)(a2 + 32);
            if ( v5 < 2 )
            {
              *(_QWORD *)(a1 + 32) = 0;
            }
            else
            {
              v6 = *(const void **)(a2 + 24);
              v7 = *(void **)(a1 + 24);
              if ( *(_QWORD *)(a1 + 40) < v5 )
              {
                v7 = qvector_reserve(a1 + 24, *(char **)(a1 + 24), *(_QWORD *)(a2 + 32), 1u);
                *(_QWORD *)(a1 + 24) = v7;
              }
              *(_QWORD *)(a1 + 32) = v5;
              memmove(v7, v6, v5 - 1);
              *(_BYTE *)(*(_QWORD *)(a1 + 24) + v5 - 1) = 0;
            }
            *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
            *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
            goto LABEL_29;
          }
        }
        if ( !(_BYTE)under_debugger )
          interr(3295);
        break;
      case 2:
      case 4:
        v12 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
        if ( v12 == 2 || v12 == 4 )
        {
          *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
LABEL_29:
          *(_DWORD *)a1 = *(_DWORD *)a2;
          *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
          *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
          result = *(_BYTE *)(a2 + 16);
          *(_BYTE *)(a1 + 16) = result;
          return result;
        }
        if ( !(_BYTE)under_debugger )
          interr(3296);
        return result;
      case 3:
      case 9:
      case 0xA:
        v8 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
        if ( (unsigned int)(v8 - 9) < 2 || v8 == 3 )
        {
          v9 = *(_QWORD *)(a2 + 32);
          if ( v9 < 2 )
          {
            *(_QWORD *)(a1 + 32) = 0;
          }
          else
          {
            v10 = *(const void **)(a2 + 24);
            v11 = *(void **)(a1 + 24);
            if ( *(_QWORD *)(a1 + 40) < v9 )
            {
              v11 = qvector_reserve(a1 + 24, *(char **)(a1 + 24), *(_QWORD *)(a2 + 32), 1u);
              *(_QWORD *)(a1 + 24) = v11;
            }
            *(_QWORD *)(a1 + 32) = v9;
            memmove(v11, v10, v9 - 1);
            *(_BYTE *)(*(_QWORD *)(a1 + 24) + v9 - 1) = 0;
          }
          goto LABEL_29;
        }
        if ( !(_BYTE)under_debugger )
          interr(3297);
        break;
      case 5:
        if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFF) == 5 )
        {
          *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
          goto LABEL_29;
        }
        if ( !(_BYTE)under_debugger )
          interr(3298);
        return result;
      case 7:
        if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFF) == 7 )
        {
          *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
          v13 = *(_QWORD *)(a2 + 48);
          if ( v13 < 2 )
          {
            *(_QWORD *)(a1 + 48) = 0;
          }
          else
          {
            v14 = *(const void **)(a2 + 40);
            v15 = *(void **)(a1 + 40);
            if ( *(_QWORD *)(a1 + 56) < v13 )
            {
              v15 = qvector_reserve(a1 + 40, *(char **)(a1 + 40), *(_QWORD *)(a2 + 48), 1u);
              *(_QWORD *)(a1 + 40) = v15;
            }
            *(_QWORD *)(a1 + 48) = v13;
            memmove(v15, v14, v13 - 1);
            *(_BYTE *)(*(_QWORD *)(a1 + 40) + v13 - 1) = 0;
          }
          goto LABEL_29;
        }
        if ( !(_BYTE)under_debugger )
          interr(3299);
        break;
      default:
        goto LABEL_29;
    }
    BUG();
  }
  return result;
}
// 158B40: using guessed type __int64 under_debugger;
