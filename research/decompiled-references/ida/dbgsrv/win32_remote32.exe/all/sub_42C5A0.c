/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42C5A0
// Address: 0x0042C5A0

//----- (0042C5A0) --------------------------------------------------------
void ***__thiscall sub_42C5A0(void ***this, char a2)
{
  void **v3; // edi
  void *v4; // eax
  void **v5; // edi
  void *v6; // eax
  void **v7; // edi
  void *v8; // eax

  switch ( (unsigned int)*this )
  {
    case 1u:
      v3 = *(this + 2);
      if ( v3 )
      {
        v4 = *v3;
        if ( *v3 )
        {
          v3[1] = nullptr;
          sub_453A20(v4);
          *v3 = nullptr;
          v3[2] = nullptr;
        }
        sub_4627F2(v3);
      }
      break;
    case 2u:
    case 3u:
    case 4u:
      v7 = *(this + 1);
      if ( v7 )
      {
        v8 = *v7;
        if ( *v7 )
        {
          v7[1] = nullptr;
          sub_453A20(v8);
          *v7 = nullptr;
          v7[2] = nullptr;
        }
        sub_453A20(v7);
      }
      goto LABEL_14;
    case 5u:
      v5 = *(this + 1);
      if ( v5 )
      {
        v6 = *v5;
        if ( *v5 )
        {
          v5[1] = nullptr;
          sub_453A20(v6);
          *v5 = nullptr;
          v5[2] = nullptr;
        }
        sub_4627F2(v5);
      }
LABEL_14:
      if ( *(this + 2) )
        sub_42C5A0(1);
      break;
    default:
      break;
  }
  if ( (a2 & 1) != 0 )
    sub_4627F2(this);
  return this;
}
