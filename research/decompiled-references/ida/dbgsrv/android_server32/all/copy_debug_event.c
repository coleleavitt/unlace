/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: copy_debug_event
// Address: 0x000744E8

//----- (000744E8) --------------------------------------------------------
int __fastcall copy_debug_event(int result, int a2)
{
  int v3; // r4
  unsigned int v4; // r7
  size_t v5; // r2
  void *v6; // r3
  const void *v7; // r1
  void *v8; // r0
  size_t v9; // r6
  unsigned int v10; // r7
  size_t v11; // r2
  void *v12; // r3
  const void *v13; // r1
  void *v14; // r0
  size_t v15; // r6
  int v16; // r0
  int v17; // r1
  unsigned int v18; // r7
  size_t v19; // r2
  void *v20; // r3
  const void *v21; // r1
  void *v22; // r0
  int v23; // r1
  const void *v24; // [sp+4h] [bp-8h]
  const void *v25; // [sp+4h] [bp-8h]
  const void *v26; // [sp+4h] [bp-8h]

  if ( result != a2 )
  {
    v3 = result;
    set_debug_event_code(result, *(_DWORD *)(a2 + 16) & 0xFFFFFFF);
    switch ( *(_DWORD *)(a2 + 16) & 0xFFFFFFF )
    {
      case 1:
      case 8:
      case 0xB:
        if ( (*(_DWORD *)(v3 + 16) & 0xFFFFFFFu) <= 0xB && ((1 << *(_BYTE *)(v3 + 16)) & 0x902) != 0 )
        {
          v4 = *(_DWORD *)(a2 + 24);
          v5 = v4 - 1;
          if ( v4 < 2 )
          {
            *(_DWORD *)(v3 + 24) = 0;
          }
          else
          {
            v6 = *(void **)(v3 + 20);
            v7 = *(const void **)(a2 + 20);
            if ( *(_DWORD *)(v3 + 28) < v4 )
            {
              v24 = *(const void **)(a2 + 20);
              v8 = qvector_reserve(v3 + 20, v6, v4, 1u);
              v7 = v24;
              v5 = v4 - 1;
              v6 = v8;
              *(_DWORD *)(v3 + 20) = v8;
            }
            *(_DWORD *)(v3 + 24) = v4;
            v9 = v5;
            memmove(v6, v7, v5);
            *(_BYTE *)(*(_DWORD *)(v3 + 20) + v9) = 0;
          }
          *(_DWORD *)(v3 + 40) = *(_DWORD *)(a2 + 40);
          *(_DWORD *)(v3 + 36) = *(_DWORD *)(a2 + 36);
          *(_DWORD *)(v3 + 32) = *(_DWORD *)(a2 + 32);
          goto LABEL_30;
        }
        if ( !under_debugger )
          interr(3295);
        break;
      case 2:
      case 4:
        v17 = *(_DWORD *)(v3 + 16) & 0xFFFFFFF;
        if ( v17 == 2 || v17 == 4 )
        {
          *(_DWORD *)(v3 + 20) = *(_DWORD *)(a2 + 20);
LABEL_30:
          *(_DWORD *)v3 = *(_DWORD *)a2;
          *(_DWORD *)(v3 + 4) = *(_DWORD *)(a2 + 4);
          *(_DWORD *)(v3 + 8) = *(_DWORD *)(a2 + 8);
          result = *(unsigned __int8 *)(a2 + 12);
          *(_BYTE *)(v3 + 12) = result;
          return result;
        }
        if ( !under_debugger )
          interr(3296);
        break;
      case 3:
      case 9:
      case 0xA:
        if ( (*(_DWORD *)(v3 + 16) & 0xFFFFFFFu) - 9 < 2 || (*(_DWORD *)(v3 + 16) & 0xFFFFFFF) == 3 )
        {
          v10 = *(_DWORD *)(a2 + 24);
          v11 = v10 - 1;
          if ( v10 < 2 )
          {
            *(_DWORD *)(v3 + 24) = 0;
            goto LABEL_30;
          }
          v12 = *(void **)(v3 + 20);
          v13 = *(const void **)(a2 + 20);
          if ( *(_DWORD *)(v3 + 28) < v10 )
          {
            v25 = *(const void **)(a2 + 20);
            v14 = qvector_reserve(v3 + 20, v12, v10, 1u);
            v13 = v25;
            v11 = v10 - 1;
            v12 = v14;
            *(_DWORD *)(v3 + 20) = v14;
          }
          *(_DWORD *)(v3 + 24) = v10;
          v15 = v11;
          memmove(v12, v13, v11);
          v16 = *(_DWORD *)(v3 + 20);
LABEL_26:
          *(_BYTE *)(v16 + v15) = 0;
          goto LABEL_30;
        }
        if ( !under_debugger )
          interr(3297);
        return result;
      case 5:
        if ( (*(_DWORD *)(v3 + 16) & 0xFFFFFFF) == 5 )
        {
          v23 = *(_DWORD *)(a2 + 24);
          *(_DWORD *)(v3 + 20) = *(_DWORD *)(a2 + 20);
          *(_DWORD *)(v3 + 24) = v23;
          goto LABEL_30;
        }
        if ( !under_debugger )
          interr(3298);
        break;
      case 7:
        if ( (*(_DWORD *)(v3 + 16) & 0xFFFFFFF) == 7 )
        {
          *(_DWORD *)(v3 + 28) = *(_DWORD *)(a2 + 28);
          *(_DWORD *)(v3 + 24) = *(_DWORD *)(a2 + 24);
          *(_DWORD *)(v3 + 20) = *(_DWORD *)(a2 + 20);
          v18 = *(_DWORD *)(a2 + 36);
          v19 = v18 - 1;
          if ( v18 < 2 )
          {
            *(_DWORD *)(v3 + 36) = 0;
            goto LABEL_30;
          }
          v20 = *(void **)(v3 + 32);
          v21 = *(const void **)(a2 + 32);
          if ( *(_DWORD *)(v3 + 40) < v18 )
          {
            v26 = *(const void **)(a2 + 32);
            v22 = qvector_reserve(v3 + 32, v20, v18, 1u);
            v21 = v26;
            v19 = v18 - 1;
            v20 = v22;
            *(_DWORD *)(v3 + 32) = v22;
          }
          *(_DWORD *)(v3 + 36) = v18;
          v15 = v19;
          memmove(v20, v21, v19);
          v16 = *(_DWORD *)(v3 + 32);
          goto LABEL_26;
        }
        if ( !under_debugger )
          interr(3299);
        return result;
      default:
        goto LABEL_30;
    }
    __debugbreak();
  }
  return result;
}
// E0550: using guessed type char under_debugger;
