/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A7FC
// Address: 0x0003A7FC

//----- (0003A7FC) --------------------------------------------------------
int __fastcall sub_3A7FC(int a1)
{
  int v2; // r5
  int v3; // r3
  _BYTE *v4; // r2
  __int64 v5; // r2
  int v6; // r1
  int v7; // r5
  int v8; // r3
  _BYTE *v9; // r0
  __int64 v10; // kr10_8
  size_t v11; // r2
  char *v12; // r1
  _BYTE *v14; // r0
  void *ptr; // [sp+0h] [bp-10h] BYREF
  size_t v16; // [sp+4h] [bp-Ch]
  int v17; // [sp+8h] [bp-8h]

  switch ( *(_WORD *)(a1 + 36) )
  {
    case 3:
    case 5:
      sub_3A6E4(a1, *(_DWORD *)(a1 + 40));
      break;
    case 4:
      ptr = nullptr;
      v16 = 0;
      v17 = 0;
      sub_37DD8(&ptr, a1 + 24);
      v11 = v16;
      if ( v16 )
      {
        v12 = (char *)ptr;
        v11 = v16 - 1;
      }
      else
      {
        v12 = (char *)&dword_8DA5C;
      }
      sub_3A2A4(a1, v12, v11);
      if ( ptr )
      {
        v16 = 0;
        sub_77E08(ptr);
      }
      break;
    case 7:
      v7 = *(_DWORD *)(a1 + 112);
      *(_BYTE *)(a1 + 120) = -46;
      v8 = *(_DWORD *)(v7 + 4);
      if ( (unsigned int)(v8 + 1) > *(_DWORD *)(v7 + 8) )
      {
        v9 = sub_77EB0(v7, *(void **)v7, v8 + 1, 1u);
        v8 = *(_DWORD *)(v7 + 4);
        *(_DWORD *)v7 = v9;
      }
      else
      {
        v9 = *(_BYTE **)v7;
      }
      v9[v8] = -46;
      ++*(_DWORD *)(v7 + 4);
      v10 = *(_QWORD *)(a1 + 112);
      *(_DWORD *)(a1 + 116) = HIDWORD(v10) + 1;
      sub_3E4F8((void **)v10, (const void *)(a1 + 48), 0x10u);
      *(_DWORD *)(a1 + 116) += 16;
      break;
    case 8:
      v2 = *(_DWORD *)(a1 + 112);
      *(_BYTE *)(a1 + 120) = -45;
      v3 = *(_DWORD *)(v2 + 4);
      if ( (unsigned int)(v3 + 1) > *(_DWORD *)(v2 + 8) )
      {
        v14 = sub_77EB0(v2, *(void **)v2, v3 + 1, 1u);
        v3 = *(_DWORD *)(v2 + 4);
        v4 = v14;
        *(_DWORD *)v2 = v14;
      }
      else
      {
        v4 = *(_BYTE **)v2;
      }
      v4[v3] = -45;
      ++*(_DWORD *)(v2 + 4);
      v5 = *(_QWORD *)(a1 + 48);
      v6 = *(_DWORD *)(a1 + 116) + 1;
      *(_DWORD *)(a1 + 116) = v6;
      sub_3A278(a1, v6, v5, HIDWORD(v5));
      break;
    default:
      if ( under_debugger )
        __und(0xFFu);
      sub_78AFC(275);
  }
  return 0;
}
// 8DA5C: using guessed type int dword_8DA5C;
// D5C00: using guessed type char under_debugger;
