void __fastcall copy_debug_event(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  unsigned __int64 v8; // r12
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdi
  unsigned __int64 v12; // r12
  const void *v13; // r14
  void *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  unsigned __int64 v17; // r12
  const void *v18; // r14
  void *v19; // rax
  const void *v20; // r14
  void *v21; // rax

  if ( a1 != a2 )
  {
    v4 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF;
    set_debug_event_code(a1, v4);
    switch ( *(_DWORD *)(a2 + 20) & 0xFFFFFFF )
    {
      case 1:
      case 8:
      case 0xB:
        v5 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
        if ( (unsigned int)v5 > 0xB || (v6 = 2306, !_bittest64(&v6, v5)) )
          sub_829C20();
        v7 = a1 + 24;
        if ( a1 + 24 != a2 + 24 )
        {
          v8 = *(_QWORD *)(a2 + 32);
          if ( v8 > 1 )
          {
            v20 = *(const void **)(a2 + 24);
            v21 = *(void **)(a1 + 24);
            if ( *(_QWORD *)(a1 + 40) < v8 )
            {
              v21 = (void *)qvector_reserve(v7, *(_QWORD *)(a1 + 24), *(_QWORD *)(a2 + 32), 1);
              *(_QWORD *)(a1 + 24) = v21;
            }
            *(_QWORD *)(a1 + 32) = v8;
            memmove(v21, v20, v8 - 1);
            *(_BYTE *)(*(_QWORD *)(a1 + 24) + v8 - 1) = 0;
          }
          else
          {
            *(_QWORD *)(a1 + 32) = 0;
          }
        }
        *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
        *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
        *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
        goto LABEL_9;
      case 2:
      case 4:
        v15 = *(unsigned int *)(a2 + 24);
        if ( (((*(_DWORD *)(a1 + 20) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) != 0 )
          sub_829C40(a1, v4, v15);
        *(_DWORD *)(a1 + 24) = v15;
        goto LABEL_9;
      case 3:
      case 9:
      case 0xA:
        v9 = a2 + 24;
        v10 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
        if ( (unsigned int)(v10 - 9) > 1 && v10 != 3 )
          sub_829C60(a1, v4, v9);
        v11 = a1 + 24;
        if ( a1 + 24 != v9 )
        {
          v12 = *(_QWORD *)(a2 + 32);
          if ( v12 < 2 )
          {
            *(_QWORD *)(a1 + 32) = 0;
          }
          else
          {
            v13 = *(const void **)(a2 + 24);
            v14 = *(void **)(a1 + 24);
            if ( *(_QWORD *)(a1 + 40) < v12 )
            {
              v14 = (void *)qvector_reserve(v11, *(_QWORD *)(a1 + 24), *(_QWORD *)(a2 + 32), 1);
              *(_QWORD *)(a1 + 24) = v14;
            }
            *(_QWORD *)(a1 + 32) = v12;
            memmove(v14, v13, v12 - 1);
            *(_BYTE *)(*(_QWORD *)(a1 + 24) + v12 - 1) = 0;
          }
        }
        goto LABEL_9;
      case 5:
        if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFF) == 5 )
        {
          *(__m128i *)(a1 + 24) = _mm_loadu_si128((const __m128i *)(a2 + 24));
LABEL_9:
          *(_DWORD *)a1 = *(_DWORD *)a2;
          *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
          *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
          *(_BYTE *)(a1 + 16) = *(_BYTE *)(a2 + 16);
          return;
        }
        if ( !under_debugger )
          interr(3298);
        return;
      case 7:
        if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFF) == 7 )
        {
          v16 = a1 + 40;
          *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
          *(_BYTE *)(a1 + 28) = *(_BYTE *)(a2 + 28);
          *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
          if ( a1 + 40 != a2 + 40 )
          {
            v17 = *(_QWORD *)(a2 + 48);
            if ( v17 < 2 )
            {
              *(_QWORD *)(a1 + 48) = 0;
            }
            else
            {
              v18 = *(const void **)(a2 + 40);
              v19 = *(void **)(a1 + 40);
              if ( *(_QWORD *)(a1 + 56) < v17 )
              {
                v19 = (void *)qvector_reserve(v16, *(_QWORD *)(a1 + 40), *(_QWORD *)(a2 + 48), 1);
                *(_QWORD *)(a1 + 40) = v19;
              }
              *(_QWORD *)(a1 + 48) = v17;
              memmove(v19, v18, v17 - 1);
              *(_BYTE *)(*(_QWORD *)(a1 + 40) + v17 - 1) = 0;
            }
          }
          goto LABEL_9;
        }
        if ( !under_debugger )
          interr(3299);
        return;
      default:
        goto LABEL_9;
    }
    BUG();
  }
}
