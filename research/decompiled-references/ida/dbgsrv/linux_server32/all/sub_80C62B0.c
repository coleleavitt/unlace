/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C62B0
// Address: 0x080C62B0

//----- (080C62B0) --------------------------------------------------------
void __cdecl sub_80C62B0(int a1, int a2)
{
  unsigned int v2; // eax
  int v3; // edx
  unsigned int v4; // ebp
  int v5; // eax
  unsigned int v6; // ebp
  size_t v7; // edx
  void *v8; // ecx
  unsigned int v9; // ebp
  size_t v10; // edx
  void *v11; // ecx
  size_t v12; // edx
  void *v13; // ecx
  void *v14; // eax
  void *v15; // eax
  void *v16; // eax
  int v17; // [esp-14h] [ebp-38h]
  int v18; // [esp-10h] [ebp-34h]
  int v19; // [esp-Ch] [ebp-30h]
  void *src; // [esp+0h] [ebp-24h]
  void *srca; // [esp+0h] [ebp-24h]
  void *srcb; // [esp+0h] [ebp-24h]

  if ( a1 != a2 )
  {
    sub_80C6150((_DWORD *)a1, *(_DWORD *)(a2 + 16) & 0xFFFFFFF);
    switch ( *(_DWORD *)(a2 + 16) & 0xFFFFFFF )
    {
      case 1:
      case 8:
      case 0xB:
        v2 = *(_DWORD *)(a1 + 16) & 0xFFFFFFF;
        if ( v2 <= 0xB )
        {
          v3 = 2306;
          if ( _bittest(&v3, v2) )
          {
            if ( a1 + 20 != a2 + 20 )
            {
              v4 = *(_DWORD *)(a2 + 24);
              if ( !v4 || (v12 = v4 - 1, v4 == 1) )
              {
                *(_DWORD *)(a1 + 24) = 0;
              }
              else
              {
                srcb = *(void **)(a2 + 20);
                v13 = *(void **)(a1 + 20);
                if ( *(_DWORD *)(a1 + 28) < v4 )
                {
                  v15 = sub_80CF920(a1 + 20, v13, v4, 1u);
                  v12 = v4 - 1;
                  *(_DWORD *)(a1 + 20) = v15;
                  v13 = v15;
                }
                *(_DWORD *)(a1 + 24) = v4;
                memmove(v13, srcb, v12);
                *(_BYTE *)(*(_DWORD *)(a1 + 20) + v4 - 1) = 0;
              }
            }
            *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
            *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
            *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
LABEL_9:
            *(_DWORD *)a1 = *(_DWORD *)a2;
            *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
            *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
            *(_BYTE *)(a1 + 12) = *(_BYTE *)(a2 + 12);
            return;
          }
        }
        sub_80C5AD0();
LABEL_37:
        if ( !byte_811F8A1 )
          sub_80CFF40(3298, v17, v18, v19);
        return;
      case 2:
      case 4:
        if ( (((*(_DWORD *)(a1 + 16) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) != 0 )
          sub_80C5B00();
        *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
        goto LABEL_9;
      case 3:
      case 9:
      case 0xA:
        v5 = *(_DWORD *)(a1 + 16) & 0xFFFFFFF;
        if ( (unsigned int)(v5 - 9) > 1 && v5 != 3 )
          sub_80C5B30();
        if ( a1 + 20 != a2 + 20 )
        {
          v6 = *(_DWORD *)(a2 + 24);
          if ( !v6 || (v7 = v6 - 1, v6 == 1) )
          {
            *(_DWORD *)(a1 + 24) = 0;
          }
          else
          {
            src = *(void **)(a2 + 20);
            v8 = *(void **)(a1 + 20);
            if ( *(_DWORD *)(a1 + 28) < v6 )
            {
              v16 = sub_80CF920(a1 + 20, v8, v6, 1u);
              v7 = v6 - 1;
              *(_DWORD *)(a1 + 20) = v16;
              v8 = v16;
            }
            *(_DWORD *)(a1 + 24) = v6;
            memmove(v8, src, v7);
            *(_BYTE *)(*(_DWORD *)(a1 + 20) + v6 - 1) = 0;
          }
        }
        goto LABEL_9;
      case 5:
        if ( (*(_DWORD *)(a1 + 16) & 0xFFFFFFF) != 5 )
          goto LABEL_37;
        *(_QWORD *)(a1 + 20) = *(_QWORD *)(a2 + 20);
        goto LABEL_9;
      case 7:
        if ( (*(_DWORD *)(a1 + 16) & 0xFFFFFFF) == 7 )
        {
          *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
          *(_BYTE *)(a1 + 24) = *(_BYTE *)(a2 + 24);
          *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 28);
          if ( a1 + 32 != a2 + 32 )
          {
            v9 = *(_DWORD *)(a2 + 36);
            if ( !v9 || (v10 = v9 - 1, v9 == 1) )
            {
              *(_DWORD *)(a1 + 36) = 0;
            }
            else
            {
              srca = *(void **)(a2 + 32);
              v11 = *(void **)(a1 + 32);
              if ( *(_DWORD *)(a1 + 40) < v9 )
              {
                v14 = sub_80CF920(a1 + 32, v11, v9, 1u);
                v10 = v9 - 1;
                *(_DWORD *)(a1 + 32) = v14;
                v11 = v14;
              }
              *(_DWORD *)(a1 + 36) = v9;
              memmove(v11, srca, v10);
              *(_BYTE *)(*(_DWORD *)(a1 + 32) + v9 - 1) = 0;
            }
          }
          goto LABEL_9;
        }
        if ( !byte_811F8A1 )
          sub_80CFF40(3299, v17, v18, v19);
        return;
      default:
        goto LABEL_9;
    }
    BUG();
  }
}
// 80C6561: variable 'v17' is possibly undefined
// 80C6561: variable 'v18' is possibly undefined
// 80C6561: variable 'v19' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
