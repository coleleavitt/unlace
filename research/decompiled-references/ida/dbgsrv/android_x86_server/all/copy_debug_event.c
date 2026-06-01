/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: copy_debug_event
// Address: 0x000A1830

//----- (000A1830) --------------------------------------------------------
char __cdecl copy_debug_event(int a1, _DWORD *a2)
{
  char result; // al
  _DWORD *v3; // edx
  unsigned int v4; // eax
  int v5; // ecx
  unsigned int v6; // edi
  size_t v7; // ecx
  const void *v8; // edx
  void *v9; // eax
  int v10; // eax
  unsigned int v11; // ecx
  size_t v12; // edi
  const void *v13; // edx
  void *v14; // eax
  unsigned int v15; // edi
  int v16; // eax
  int v17; // eax
  size_t v18; // ecx
  const void *v19; // edx
  void *v20; // eax
  size_t v21; // [esp-8h] [ebp-24h]
  unsigned int v22; // [esp+0h] [ebp-1Ch]
  const void *v23; // [esp+4h] [ebp-18h]
  const void *v24; // [esp+4h] [ebp-18h]
  const void *v25; // [esp+4h] [ebp-18h]
  unsigned int v26; // [esp+8h] [ebp-14h]

  result = (char)a2;
  if ( (_DWORD *)a1 != a2 )
  {
    set_debug_event_code((_DWORD *)a1, a2[4] & 0xFFFFFFF);
    v3 = a2;
    switch ( a2[4] & 0xFFFFFFF )
    {
      case 1:
      case 8:
      case 0xB:
        v4 = *(_DWORD *)(a1 + 16) & 0xFFFFFFF;
        if ( v4 <= 0xB )
        {
          v5 = 2306;
          if ( _bittest(&v5, v4) )
          {
            v6 = a2[6];
            if ( !v6 || (v7 = v6 - 1, v6 == 1) )
            {
              *(_DWORD *)(a1 + 24) = 0;
            }
            else
            {
              v8 = (const void *)a2[5];
              v9 = *(void **)(a1 + 20);
              if ( *(_DWORD *)(a1 + 28) < v6 )
              {
                v23 = (const void *)a2[5];
                v9 = qvector_reserve(a1 + 20, v9, v6, 1u);
                v8 = v23;
                v7 = v6 - 1;
                *(_DWORD *)(a1 + 20) = v9;
              }
              *(_DWORD *)(a1 + 24) = v6;
              memmove(v9, v8, v7);
              *(_BYTE *)(*(_DWORD *)(a1 + 20) + v6 - 1) = 0;
              v3 = a2;
            }
            *(_DWORD *)(a1 + 40) = v3[10];
            *(_QWORD *)(a1 + 32) = *((_QWORD *)v3 + 4);
            goto LABEL_33;
          }
        }
        if ( !(_BYTE)under_debugger )
          interr(3295);
        break;
      case 2:
      case 4:
        v17 = *(_DWORD *)(a1 + 16) & 0xFFFFFFF;
        if ( v17 == 2 || v17 == 4 )
        {
          *(_DWORD *)(a1 + 20) = a2[5];
LABEL_33:
          *(_DWORD *)a1 = *v3;
          *(_DWORD *)(a1 + 4) = v3[1];
          *(_DWORD *)(a1 + 8) = v3[2];
          result = *((_BYTE *)v3 + 12);
          *(_BYTE *)(a1 + 12) = result;
          return result;
        }
        if ( !(_BYTE)under_debugger )
          interr(3296);
        break;
      case 3:
      case 9:
      case 0xA:
        v10 = *(_DWORD *)(a1 + 16) & 0xFFFFFFF;
        if ( (unsigned int)(v10 - 9) < 2 || v10 == 3 )
        {
          v11 = a2[6];
          if ( !v11 || (v12 = v11 - 1, v11 == 1) )
          {
            *(_DWORD *)(a1 + 24) = 0;
            goto LABEL_33;
          }
          v13 = (const void *)a2[5];
          v14 = *(void **)(a1 + 20);
          if ( *(_DWORD *)(a1 + 28) < v11 )
          {
            v26 = v11 - 1;
            v22 = a2[6];
            v24 = (const void *)a2[5];
            v14 = qvector_reserve(a1 + 20, v14, v11, 1u);
            v13 = v24;
            v11 = v22;
            *(_DWORD *)(a1 + 20) = v14;
            v12 = v26;
          }
          *(_DWORD *)(a1 + 24) = v11;
          v21 = v12;
          v15 = v11;
          memmove(v14, v13, v21);
          v16 = *(_DWORD *)(a1 + 20);
LABEL_29:
          *(_BYTE *)(v16 + v15 - 1) = 0;
          v3 = a2;
          goto LABEL_33;
        }
        if ( !(_BYTE)under_debugger )
          interr(3297);
        return result;
      case 5:
        if ( (*(_DWORD *)(a1 + 16) & 0xFFFFFFF) == 5 )
        {
          *(_QWORD *)(a1 + 20) = *(_QWORD *)(a2 + 5);
          goto LABEL_33;
        }
        if ( !(_BYTE)under_debugger )
          interr(3298);
        break;
      case 7:
        if ( (*(_DWORD *)(a1 + 16) & 0xFFFFFFF) == 7 )
        {
          *(_DWORD *)(a1 + 28) = a2[7];
          *(_QWORD *)(a1 + 20) = *(_QWORD *)(a2 + 5);
          v15 = a2[9];
          if ( !v15 || (v18 = v15 - 1, v15 == 1) )
          {
            *(_DWORD *)(a1 + 36) = 0;
            goto LABEL_33;
          }
          v19 = (const void *)a2[8];
          v20 = *(void **)(a1 + 32);
          if ( *(_DWORD *)(a1 + 40) < v15 )
          {
            v25 = (const void *)a2[8];
            v20 = qvector_reserve(a1 + 32, v20, v15, 1u);
            v19 = v25;
            v18 = v15 - 1;
            *(_DWORD *)(a1 + 32) = v20;
          }
          *(_DWORD *)(a1 + 36) = v15;
          memmove(v20, v19, v18);
          v16 = *(_DWORD *)(a1 + 32);
          goto LABEL_29;
        }
        if ( !(_BYTE)under_debugger )
          interr(3299);
        return result;
      default:
        goto LABEL_33;
    }
    BUG();
  }
  return result;
}
// 13E34C: using guessed type int under_debugger;
