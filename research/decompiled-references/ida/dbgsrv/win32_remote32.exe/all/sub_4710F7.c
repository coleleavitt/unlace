/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4710F7
// Address: 0x004710F7

//----- (004710F7) --------------------------------------------------------
char __usercall sub_4710F7@<al>(unsigned __int64 a1@<ebx:ecx>, int a2@<edi>)
{
  char result; // al
  int v3; // esi
  int v4; // eax
  int v5; // [esp-4h] [ebp-4h]

  switch ( *(_DWORD *)(a1 + 64) )
  {
    case 0:
      result = sub_4712C3(a1, a2, 0);
      break;
    case 1:
      result = sub_4712C3(a1, a2, 1);
      break;
    case 2:
      result = sub_47119B(a1, a2, 0, 1);
      break;
    case 3:
      v5 = 1;
      goto LABEL_9;
    case 4:
      result = sub_47119B(a1, a2, 8, 0);
      break;
    case 5:
      v5 = 0;
LABEL_9:
      result = sub_47119B(a1, a2, 10, v5);
      break;
    case 6:
      result = sub_47119B(a1, a2, 16, 0);
      break;
    case 7:
      v3 = a1;
      sub_47130B(a1);
      v4 = sub_471003(v3 + 24);
      if ( v4 == 4 )
      {
        result = sub_46E149(v3, SHIDWORD(a1), a2);
      }
      else if ( v4 == 8 )
      {
        result = sub_46E1AF(v3, SHIDWORD(a1), a2);
      }
      else
      {
        result = 0;
      }
      break;
    case 8:
      result = sub_4712C3(a1, a2, 8);
      break;
    case 9:
      if ( *(_BYTE *)(a1 + 46) )
        result = 1;
      else
        result = sub_4719D4(a1, SHIDWORD(a1), a2, *(_DWORD *)(a1 + 16) - *(_DWORD *)(a1 + 8), 0);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
