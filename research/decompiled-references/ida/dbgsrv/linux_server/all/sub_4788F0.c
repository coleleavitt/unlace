/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4788F0
// Address: 0x00000000004788F0

//----- (00000000004788F0) ----------------------------------------------------
void __fastcall sub_4788F0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  unsigned __int64 v6; // r12
  int v7; // eax
  __int64 v8; // rdi
  unsigned __int64 v9; // r12
  const void *v10; // r14
  void *v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // r12
  const void *v14; // r14
  void *v15; // rax
  const void *v16; // r14
  void *v17; // rax

  if ( a1 != a2 )
  {
    sub_4787B0(a1, *(_DWORD *)(a2 + 20) & 0xFFFFFFF);
    switch ( *(_DWORD *)(a2 + 20) & 0xFFFFFFF )
    {
      case 1:
      case 8:
      case 0xB:
        v3 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
        if ( (unsigned int)v3 > 0xB || (v4 = 2306, !_bittest64(&v4, v3)) )
          sub_478190();
        v5 = a1 + 24;
        if ( a1 + 24 != a2 + 24 )
        {
          v6 = *(_QWORD *)(a2 + 32);
          if ( v6 > 1 )
          {
            v16 = *(const void **)(a2 + 24);
            v17 = *(void **)(a1 + 24);
            if ( *(_QWORD *)(a1 + 40) < v6 )
            {
              v17 = sub_481540(v5, *(void **)(a1 + 24), *(_QWORD *)(a2 + 32), 1u);
              *(_QWORD *)(a1 + 24) = v17;
            }
            *(_QWORD *)(a1 + 32) = v6;
            memmove(v17, v16, v6 - 1);
            *(_BYTE *)(*(_QWORD *)(a1 + 24) + v6 - 1) = 0;
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
        if ( (((*(_DWORD *)(a1 + 20) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) != 0 )
          sub_4781B0();
        *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
        goto LABEL_9;
      case 3:
      case 9:
      case 0xA:
        v7 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
        if ( (unsigned int)(v7 - 9) > 1 && v7 != 3 )
          sub_4781D0();
        v8 = a1 + 24;
        if ( a1 + 24 != a2 + 24 )
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
              v11 = sub_481540(v8, *(void **)(a1 + 24), *(_QWORD *)(a2 + 32), 1u);
              *(_QWORD *)(a1 + 24) = v11;
            }
            *(_QWORD *)(a1 + 32) = v9;
            memmove(v11, v10, v9 - 1);
            *(_BYTE *)(*(_QWORD *)(a1 + 24) + v9 - 1) = 0;
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
        if ( !byte_4C94E1 )
          sub_481AC0(3298);
        return;
      case 7:
        if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFF) == 7 )
        {
          v12 = a1 + 40;
          *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
          *(_BYTE *)(a1 + 28) = *(_BYTE *)(a2 + 28);
          *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
          if ( a1 + 40 != a2 + 40 )
          {
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
                v15 = sub_481540(v12, *(void **)(a1 + 40), *(_QWORD *)(a2 + 48), 1u);
                *(_QWORD *)(a1 + 40) = v15;
              }
              *(_QWORD *)(a1 + 48) = v13;
              memmove(v15, v14, v13 - 1);
              *(_BYTE *)(*(_QWORD *)(a1 + 40) + v13 - 1) = 0;
            }
          }
          goto LABEL_9;
        }
        if ( !byte_4C94E1 )
          sub_481AC0(3299);
        return;
      default:
        goto LABEL_9;
    }
    BUG();
  }
}
// 4C94E1: using guessed type char byte_4C94E1;
