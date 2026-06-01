/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47B213
// Address: 0x0047B213

//----- (0047B213) --------------------------------------------------------
void __usercall sub_47B213(int a1@<edi>)
{
  int v1; // eax
  _WORD *v2; // edi
  unsigned int v3; // [esp+Ch] [ebp-20Ch] BYREF
  unsigned int v4; // [esp+10h] [ebp-208h] BYREF
  _WORD v5[256]; // [esp+14h] [ebp-204h] BYREF

  dword_4B62CC = -1;
  dword_4B62C0 = -1;
  dword_4B7EC0 = 0;
  v1 = sub_471E14(a1, &v4, v5, 0x100u, (unsigned __int16 *)"T");
  if ( v1 )
  {
    if ( v1 == 34 )
    {
      v2 = sub_479531(2 * v4);
      if ( v2 )
      {
        if ( !sub_471E14((int)v2, &v3, v2, v4, (unsigned __int16 *)"T") )
        {
          sub_479216(nullptr);
          goto LABEL_11;
        }
        sub_479216(v2);
      }
      else
      {
        sub_479216(nullptr);
      }
      v2 = nullptr;
    }
    else
    {
      v2 = nullptr;
    }
  }
  else
  {
    v2 = v5;
  }
LABEL_11:
  if ( v2 && *v2 )
    sub_47AE18(v2, v2);
  else
    sub_47B0B9();
  sub_479216(v5 != v2 ? v2 : nullptr);
}
// 4B62C0: using guessed type int dword_4B62C0;
// 4B62CC: using guessed type int dword_4B62CC;
// 4B7EC0: using guessed type int dword_4B7EC0;
