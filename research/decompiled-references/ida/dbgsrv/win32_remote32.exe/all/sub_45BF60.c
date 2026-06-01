/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45BF60
// Address: 0x0045BF60

//----- (0045BF60) --------------------------------------------------------
char __usercall sub_45BF60@<al>(int a1@<ebx>, int a2@<edi>, int a3, int a4)
{
  CHAR *v4; // eax
  unsigned __int8 *v5; // ecx
  unsigned __int8 *v6; // eax
  CHAR *v8; // [esp+8h] [ebp-18h] BYREF
  int v9; // [esp+Ch] [ebp-14h]
  int v10; // [esp+10h] [ebp-10h]
  int v11; // [esp+1Ch] [ebp-4h]

  if ( (*(_BYTE *)(a4 + 564) & 0x10) != 0 || (*(_BYTE *)(a3 + 8) & 0x10) == 0 )
  {
    if ( !*(_BYTE *)(a4 + 580) )
      return 0;
    v8 = nullptr;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    if ( sub_45A700((int)&v8, (unsigned __int16 *)(a4 + 36), -1) )
    {
      v4 = (CHAR *)MultiByteStr;
      if ( v9 )
        v4 = v8;
      v5 = (unsigned __int8 *)sub_460570(v4);
      if ( !v5 )
        goto LABEL_11;
      v6 = (unsigned __int8 *)MultiByteStr;
      if ( *(_DWORD *)(a4 + 572) )
        v6 = *(unsigned __int8 **)(a4 + 568);
      if ( !sub_468261(a1, a2, v5, v6) )
      {
LABEL_11:
        v11 = 3;
        if ( v8 )
        {
          v9 = 0;
          sub_453A20(v8);
        }
        return 0;
      }
    }
    v11 = 2;
    if ( v8 )
    {
      v9 = 0;
      sub_453A20(v8);
    }
  }
  return 1;
}
