/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41BE40
// Address: 0x0041BE40

//----- (0041BE40) --------------------------------------------------------
int __usercall sub_41BE40@<eax>(int a1@<ebx>, int a2@<edi>, __m128i a3@<xmm0>, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // esi
  __m128i *v9; // edi
  __int8 *v10; // eax
  __m128i *v11; // eax
  int result; // eax
  int v13; // [esp+8h] [ebp-2808h]
  _DWORD v14[2560]; // [esp+Ch] [ebp-2804h] BYREF

  v8 = 0;
  v13 = 0;
  switch ( a4 )
  {
    case 23:
      sub_453E60(a1, a2, a3, (char *)a5, a6);
      break;
    case 24:
      if ( a5 != 10 )
      {
        v9 = (__m128i *)"<null>";
        if ( a6 )
          v9 = (__m128i *)a6;
        while ( 1 )
        {
          while ( !sub_467F80((int)v9, "ICON ", 5u)
               || !sub_467F80((int)v9, "AUTOHIDE ", 9u)
               || !sub_467F80((int)v9, "@0:", 3u) )
          {
            v10 = sub_464F10(v9->m128i_i8, 0xAu);
            if ( !v10 )
              break;
            v9 = (__m128i *)(v10 + 1);
          }
          if ( sub_467F80((int)v9, "HELP\n", 5u) )
            break;
          v11 = sub_464A10(a3, v9, (const __m128i *)"ENDHELP\n");
          if ( !v11 )
            break;
          v9 = (__m128i *)&v11->m128i_u64[1];
        }
        sub_453E80(a3, v14, 10240, v9->m128i_i8, a7);
        sub_41C110(a5, (int)v9, a3, (int)"%s: %s\n", off_48BB9C[a5], (const char *)v14);
        if ( !a5 || a5 == 3 || a5 == 4 || a5 == 6 || a5 == 7 || a5 == 8 )
          sub_4535B0(0, 1u);
      }
      return result;
    case 28:
      v8 = a8;
      break;
    case 52:
      sub_453D50(a3, (_DWORD *)a5, a6, "%d.%d", 9, 30);
      LOBYTE(v13) = 1;
      v8 = v13;
      break;
    case 86:
      v8 = (**(int (__stdcall ***)(int))a5)(a5);
      break;
    default:
      return v8;
  }
  return v8;
}
// 48BB9C: using guessed type char *off_48BB9C[12];
