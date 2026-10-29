bool __fastcall sub_13D34C0(int a1, _BYTE *a2, _BYTE *a3)
{
  char v3; // al
  bool v6; // zf
  _DWORD v7[7]; // [rsp+0h] [rbp-1Ch] BYREF

  v3 = a2[4];
  if ( (v3 & 2) != 0 )
    return 0;
  if ( a1 == 36 && (v3 & 1) != 0 )
    return 1;
  if ( (*(_WORD *)a2 & 0x808) != 0 )
  {
    if ( a1 == 95 )
      return 1;
    v7[0] = a1;
    if ( sub_13D2FE0((char *)&jpt_13DFAB7[-1334], (char *)jpt_13DFAB7, v7)
      || sub_13D2FE0(&byte_2612E90[-3024], byte_2612E90, v7) )
    {
      return 1;
    }
    if ( sub_13D2FE0(&byte_26122A8[-104], byte_26122A8, v7) || sub_13D2FE0(&byte_2612228[-40], byte_2612228, v7) )
    {
      *a3 = 1;
      return 1;
    }
    return 0;
  }
  else
  {
    v6 = (*a2 & 2) == 0;
    v7[0] = a1;
    if ( v6 )
      return sub_13D2FE0(&byte_2612070[-1968], byte_2612070, v7);
    else
      return sub_13D2FE0(&byte_26121E8[-360], byte_26121E8, v7);
  }
}
