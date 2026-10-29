/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42B380
// Address: 0x0042B380

//----- (0042B380) --------------------------------------------------------
int __stdcall sub_42B380(int a1)
{
  int result; // eax
  const char *v2; // eax
  char *v3; // [esp+8h] [ebp-18h] BYREF
  int v4; // [esp+Ch] [ebp-14h]
  int v5; // [esp+10h] [ebp-10h]
  int v6; // [esp+1Ch] [ebp-4h]

  switch ( *(_WORD *)(a1 + 28) )
  {
    case 3:
    case 5:
      sub_42E3C0(a1, *(_DWORD *)(a1 + 32));
      result = 0;
      break;
    case 4:
      v3 = nullptr;
      v4 = 0;
      v5 = 0;
      v6 = 0;
      sub_42C7D0((int)&v3, a1 + 16);
      v2 = MultiByteStr;
      if ( v4 )
        v2 = v3;
      sub_42E870(a1, v2, v4 != 0 ? v4 - 1 : 0);
      v6 = 1;
      if ( v3 )
      {
        v4 = 0;
        sub_453A20(v3);
      }
      result = 0;
      break;
    case 7:
      sub_42E650(a1, 210);
      sub_4272C0(*(unsigned int **)(a1 + 104), a1 + 40, 0x10u);
      *(_DWORD *)(a1 + 108) += 16;
      result = 0;
      break;
    case 8:
      sub_42E650(a1, 211);
      sub_42E380((int *)a1, *(_DWORD *)(a1 + 40), *(_DWORD *)(a1 + 44));
      result = 0;
      break;
    default:
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(275);
  }
  return result;
}
// 4B70F0: using guessed type char byte_4B70F0;
