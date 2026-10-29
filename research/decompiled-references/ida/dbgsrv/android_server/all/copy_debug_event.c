/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: copy_debug_event
// Address: 0x00000000000B0914

//----- (00000000000B0914) ----------------------------------------------------
void __fastcall copy_debug_event(__int64 a1, __int64 a2)
{
  pthread_mutex_t *v4; // x0
  int v5; // w1
  unsigned __int64 v6; // x22
  const void *v7; // x23
  void *v8; // x1
  int v9; // w8
  unsigned __int64 v10; // x22
  const void *v11; // x23
  void *v12; // x1
  int v13; // w8
  __int128 v14; // q0
  unsigned __int64 v15; // x22
  const void *v16; // x23
  void *v17; // x1

  if ( a1 != a2 )
  {
    set_debug_event_code(a1, *(_DWORD *)(a2 + 20) & 0xFFFFFFF);
    switch ( *(_DWORD *)(a2 + 20) & 0xFFFFFFF )
    {
      case 1:
      case 8:
      case 0xB:
        if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFFu) <= 0xB && ((1 << *(_BYTE *)(a1 + 20)) & 0x902) != 0 )
        {
          v6 = *(_QWORD *)(a2 + 32);
          if ( v6 < 2 )
          {
            *(_QWORD *)(a1 + 32) = 0;
          }
          else
          {
            v7 = *(const void **)(a2 + 24);
            v8 = *(void **)(a1 + 24);
            if ( *(_QWORD *)(a1 + 40) < v6 )
            {
              v8 = qvector_reserve((pthread_mutex_t *)(a1 + 24), v8, *(_QWORD *)(a2 + 32), 1u);
              *(_QWORD *)(a1 + 24) = v8;
            }
            *(_QWORD *)(a1 + 32) = v6;
            memmove(v8, v7, v6 - 1);
            *(_BYTE *)(*(_QWORD *)(a1 + 24) + v6 - 1) = 0;
          }
          v14 = *(_OWORD *)(a2 + 48);
          *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
          *(_OWORD *)(a1 + 48) = v14;
          goto LABEL_29;
        }
        if ( under_debugger )
          goto LABEL_41;
        v4 = interr(3295);
        goto LABEL_33;
      case 2:
      case 4:
        v13 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
        if ( v13 != 2 && v13 != 4 )
          goto LABEL_35;
        *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
        goto LABEL_29;
      case 3:
      case 9:
      case 0xA:
        v9 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
        if ( (unsigned int)(v9 - 9) < 2 || v9 == 3 )
        {
          v10 = *(_QWORD *)(a2 + 32);
          if ( v10 < 2 )
          {
            *(_QWORD *)(a1 + 32) = 0;
          }
          else
          {
            v11 = *(const void **)(a2 + 24);
            v12 = *(void **)(a1 + 24);
            if ( *(_QWORD *)(a1 + 40) < v10 )
            {
              v12 = qvector_reserve((pthread_mutex_t *)(a1 + 24), v12, *(_QWORD *)(a2 + 32), 1u);
              *(_QWORD *)(a1 + 24) = v12;
            }
            *(_QWORD *)(a1 + 32) = v10;
            memmove(v12, v11, v10 - 1);
            *(_BYTE *)(*(_QWORD *)(a1 + 24) + v10 - 1) = 0;
          }
LABEL_29:
          *(_DWORD *)a1 = *(_DWORD *)a2;
          *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
          *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
          *(_BYTE *)(a1 + 16) = *(_BYTE *)(a2 + 16);
        }
        else
        {
LABEL_33:
          if ( !under_debugger )
          {
            v4 = interr(3297);
LABEL_35:
            if ( !under_debugger )
            {
              v4 = interr(3296);
LABEL_37:
              if ( !under_debugger )
              {
                v4 = interr(3299);
LABEL_39:
                if ( !under_debugger )
                  v4 = interr(3298);
              }
            }
          }
LABEL_41:
          __break(1u);
          set_debug_event_code((__int64)v4, v5);
        }
        break;
      case 5:
        if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFF) != 5 )
          goto LABEL_39;
        *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
        goto LABEL_29;
      case 7:
        if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFF) != 7 )
          goto LABEL_37;
        *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
        v15 = *(_QWORD *)(a2 + 48);
        if ( v15 < 2 )
        {
          *(_QWORD *)(a1 + 48) = 0;
        }
        else
        {
          v16 = *(const void **)(a2 + 40);
          v17 = *(void **)(a1 + 40);
          if ( *(_QWORD *)(a1 + 56) < v15 )
          {
            v17 = qvector_reserve((pthread_mutex_t *)(a1 + 40), v17, *(_QWORD *)(a2 + 48), 1u);
            *(_QWORD *)(a1 + 40) = v17;
          }
          *(_QWORD *)(a1 + 48) = v15;
          memmove(v17, v16, v15 - 1);
          *(_BYTE *)(*(_QWORD *)(a1 + 40) + v15 - 1) = 0;
        }
        goto LABEL_29;
      default:
        goto LABEL_29;
    }
  }
}
// B0BF1: variable 'v4' is possibly undefined
// B0BF1: variable 'v5' is possibly undefined
// 168DF0: using guessed type char under_debugger;
