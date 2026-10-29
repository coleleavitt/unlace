/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B964
// Address: 0x0004B964

//----- (0004B964) --------------------------------------------------------
void __fastcall sub_4B964(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        unsigned int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        unsigned int a29,
        int a30,
        int a31,
        unsigned int a32)
{
  _DWORD *v32; // r0
  unsigned __int8 *v33; // r1
  int v34; // r0
  int v35; // r0
  int v36; // r1
  int v37; // r2
  int v38; // r3

  v32 = *(_DWORD **)(a21 + 68);
  if ( !v32 )
  {
LABEL_2:
    sub_4B9BE((int)v32, a2, a3, a4, a5, a6, a7, a8, a9);
    return;
  }
  while ( !sub_40530(v32, *(_DWORD *)(a21 + 60) - 1, &a29) )
  {
    v32 = *(_DWORD **)(a21 + 28);
    if ( (unsigned int)v32 > a18 )
    {
      if ( !sub_487AC((void **)a21) )
        sub_4CFA4();
      v32 = *(_DWORD **)(a21 + 68);
      if ( v32 )
        continue;
    }
    goto LABEL_2;
  }
  *(_DWORD *)(a21 + 60) = a30;
  switch ( a31 )
  {
    case 1:
      v34 = *(_DWORD *)(a21 + 52) + a32;
      if ( v34 < 0 )
        sub_4D0B6();
      if ( (unsigned int)v34 >= *(_DWORD *)(a21 + 16) )
        sub_4D0B6();
      break;
    case 2:
      v34 = *(_DWORD *)(a21 + 48) + a32;
      if ( v34 < 0 || (unsigned int)v34 >= *(_DWORD *)(a21 + 16) )
      {
        if ( under_debugger )
          sub_4D148();
        interr(287);
      }
      break;
    case 3:
      v33 = (unsigned __int8 *)sub_43AF4(*(_DWORD *)(a21 + 4), a32);
      goto LABEL_25;
    default:
      sub_4D0E0();
  }
  v33 = (unsigned __int8 *)(*(_DWORD *)(a21 + 12) + 24 * v34);
LABEL_25:
  v35 = sub_4AA10((int *)(a21 + 12), v33);
  sub_4B2F6(v35, v36, v37, v38);
}
// 4B96C: variable 'a2' is possibly undefined
// 4B96C: variable 'a3' is possibly undefined
// 4B96C: variable 'a4' is possibly undefined
// 4BA52: variable 'v36' is possibly undefined
// 4BA52: variable 'v37' is possibly undefined
// 4BA52: variable 'v38' is possibly undefined
// 4B2F6: using guessed type int __fastcall sub_4B2F6(_DWORD, _DWORD, _DWORD, _DWORD);
// 4D148: using guessed type void __noreturn sub_4D148(void);
// E0550: using guessed type char under_debugger;
