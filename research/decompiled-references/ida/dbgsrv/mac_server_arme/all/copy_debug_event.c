/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: copy_debug_event
// Address: 0x000000010006AEBC

//----- (000000010006AEBC) ----------------------------------------------------
void __fastcall copy_debug_event(__int64 a1, __int64 a2)
{
  unsigned int v4; // w8
  int v5; // w8
  unsigned __int64 v7; // x8
  size_t v8; // x21
  int v9; // w8
  const void *v10; // x22
  _QWORD *v11; // x1
  unsigned __int64 v13; // x8
  size_t v14; // x21
  const void *v15; // x22
  _QWORD *v16; // x1
  __int128 v17; // q0
  unsigned __int64 v18; // x8
  size_t v19; // x21
  const void *v20; // x22
  _QWORD *v21; // x1
  __int64 v22; // x0
  int v23; // w1

  if ( a1 != a2 )
  {
    set_debug_event_code(a1, *(_DWORD *)(a2 + 20) & 0xFFFFFFF);
    v4 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF;
    if ( v4 > 6 )
    {
      if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFFu) <= 8 )
      {
        if ( v4 == 7 )
        {
          if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFF) == 7 )
          {
            *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
            v18 = *(_QWORD *)(a2 + 48);
            if ( v18 )
              v19 = v18 - 1;
            else
              v19 = 0;
            if ( v18 >= 2 )
            {
              v20 = *(const void **)(a2 + 40);
              v21 = *(_QWORD **)(a1 + 40);
              if ( *(_QWORD *)(a1 + 56) <= v19 )
              {
                v21 = qvector_reserve((_QWORD *)(a1 + 40), v21, v19 + 1, 1u);
                *(_QWORD *)(a1 + 40) = v21;
              }
              *(_QWORD *)(a1 + 48) = v19 + 1;
              memmove(v21, v20, v19);
              *(_BYTE *)(*(_QWORD *)(a1 + 40) + v19) = 0;
            }
            else
            {
              *(_QWORD *)(a1 + 48) = 0;
            }
            goto LABEL_46;
          }
LABEL_63:
          if ( under_debugger == 1 )
            goto LABEL_66;
          interr(3299);
          goto LABEL_65;
        }
        if ( v4 != 8 )
          goto LABEL_46;
      }
      else
      {
        if ( v4 - 9 < 2 )
        {
LABEL_11:
          v5 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
          if ( (unsigned int)(v5 - 9) < 2 || v5 == 3 )
          {
            v7 = *(_QWORD *)(a2 + 32);
            if ( v7 )
              v8 = v7 - 1;
            else
              v8 = 0;
            if ( v7 >= 2 )
            {
              v10 = *(const void **)(a2 + 24);
              v11 = *(_QWORD **)(a1 + 24);
              if ( *(_QWORD *)(a1 + 40) <= v8 )
              {
                v11 = qvector_reserve((_QWORD *)(a1 + 24), v11, v8 + 1, 1u);
                *(_QWORD *)(a1 + 24) = v11;
              }
              *(_QWORD *)(a1 + 32) = v8 + 1;
              memmove(v11, v10, v8);
              *(_BYTE *)(*(_QWORD *)(a1 + 24) + v8) = 0;
            }
            else
            {
              *(_QWORD *)(a1 + 32) = 0;
            }
            goto LABEL_46;
          }
          if ( under_debugger == 1 )
            goto LABEL_66;
          interr(3297);
          goto LABEL_59;
        }
        if ( v4 != 11 )
          goto LABEL_46;
      }
    }
    else
    {
      if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFFu) > 2 )
      {
        if ( v4 != 3 )
        {
          if ( v4 != 4 )
          {
            if ( v4 != 5 )
            {
LABEL_46:
              *(_DWORD *)a1 = *(_DWORD *)a2;
              *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
              *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
              *(_BYTE *)(a1 + 16) = *(_BYTE *)(a2 + 16);
              return;
            }
            if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFF) == 5 )
            {
              *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
              goto LABEL_46;
            }
LABEL_65:
            if ( under_debugger != 1 )
            {
LABEL_67:
              interr(3298);
              set_debug_event_code(v22, v23);
              return;
            }
LABEL_66:
            __break(1u);
            goto LABEL_67;
          }
          goto LABEL_23;
        }
        goto LABEL_11;
      }
      if ( v4 != 1 )
      {
        if ( v4 != 2 )
          goto LABEL_46;
LABEL_23:
        v9 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
        if ( v9 == 2 || v9 == 4 )
        {
          *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
          goto LABEL_46;
        }
LABEL_61:
        if ( under_debugger == 1 )
          goto LABEL_66;
        interr(3296);
        goto LABEL_63;
      }
    }
    if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFFu) <= 0xB && ((1 << *(_BYTE *)(a1 + 20)) & 0x902) != 0 )
    {
      v13 = *(_QWORD *)(a2 + 32);
      if ( v13 )
        v14 = v13 - 1;
      else
        v14 = 0;
      if ( v13 >= 2 )
      {
        v15 = *(const void **)(a2 + 24);
        v16 = *(_QWORD **)(a1 + 24);
        if ( *(_QWORD *)(a1 + 40) <= v14 )
        {
          v16 = qvector_reserve((_QWORD *)(a1 + 24), v16, v14 + 1, 1u);
          *(_QWORD *)(a1 + 24) = v16;
        }
        *(_QWORD *)(a1 + 32) = v14 + 1;
        memmove(v16, v15, v14);
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v14) = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 32) = 0;
      }
      v17 = *(_OWORD *)(a2 + 48);
      *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
      *(_OWORD *)(a1 + 48) = v17;
      goto LABEL_46;
    }
LABEL_59:
    if ( under_debugger == 1 )
      goto LABEL_66;
    interr(3295);
    goto LABEL_61;
  }
}
// 10006B205: variable 'v22' is possibly undefined
// 10006B205: variable 'v23' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
