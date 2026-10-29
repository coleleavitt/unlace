/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400623C0
// Address: 0x00000001400623C0

//----- (00000001400623C0) ----------------------------------------------------
void __fastcall sub_1400623C0(__int64 a1, __int64 a2)
{
  unsigned int v4; // edx
  int v5; // eax
  const void **v6; // r14
  int v7; // eax
  __int64 v8; // rax
  size_t v9; // r8
  int v10; // eax
  int v11; // eax
  __int64 v12; // rax
  size_t v13; // r8

  if ( a1 != a2 )
  {
    sub_140063190(a1, *(_DWORD *)(a2 + 20) & 0xFFFFFFF);
    v4 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF;
    switch ( v4 )
    {
      case 1u:
      case 8u:
      case 0xBu:
        if ( v4 > 0xB
          || (v5 = 2306, !_bittest(&v5, v4))
          || (v6 = (const void **)(a2 + 24), v7 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF, v7 != 1) && v7 != 11 && v7 != 8 )
        {
          if ( byte_1400CB61C )
            __debugbreak();
          sub_14005A480(3295);
        }
        if ( (const void **)(a1 + 24) != v6 )
        {
          v8 = *(_QWORD *)(a2 + 32);
          v9 = v8 - 1;
          if ( !v8 )
            v9 = 0;
          if ( v9 )
            sub_140001810(a1 + 24, *v6, v9);
          else
            *(_QWORD *)(a1 + 32) = 0;
        }
        *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
        *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
        *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
        break;
      case 2u:
      case 4u:
        if ( ((v4 - 2) & 0xFFFFFFFD) != 0 || (v10 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF, v10 != 2) && v10 != 4 )
        {
          if ( byte_1400CB61C )
            __debugbreak();
          sub_14005A480(3296);
        }
        *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
        break;
      case 3u:
      case 9u:
      case 0xAu:
        if ( v4 != 3 && v4 - 9 > 1 || (v11 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF, v11 != 3) && (unsigned int)(v11 - 9) > 1 )
        {
          if ( byte_1400CB61C )
            __debugbreak();
          sub_14005A480(3297);
        }
        sub_140003700(a1 + 24, a2 + 24);
        break;
      case 5u:
        if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFF) != 5 )
        {
          if ( byte_1400CB61C )
            __debugbreak();
          sub_14005A480(3298);
        }
        *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
        break;
      case 7u:
        if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFF) != 7 )
        {
          if ( byte_1400CB61C )
            __debugbreak();
          sub_14005A480(3299);
        }
        *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
        *(_BYTE *)(a1 + 28) = *(_BYTE *)(a2 + 28);
        *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
        if ( a1 + 40 != a2 + 40 )
        {
          v12 = *(_QWORD *)(a2 + 48);
          v13 = v12 - 1;
          if ( !v12 )
            v13 = 0;
          if ( v13 )
            sub_140001810(a1 + 40, *(const void **)(a2 + 40), v13);
          else
            *(_QWORD *)(a1 + 48) = 0;
        }
        break;
      default:
        break;
    }
    *(_DWORD *)a1 = *(_DWORD *)a2;
    *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
    *(_BYTE *)(a1 + 16) = *(_BYTE *)(a2 + 16);
  }
}
// 1400CB61C: using guessed type char byte_1400CB61C;
