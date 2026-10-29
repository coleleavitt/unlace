/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42E690
// Address: 0x0042E690

//----- (0042E690) --------------------------------------------------------
int __thiscall sub_42E690(const char **this, int a2)
{
  const char *v3; // eax
  __int16 v4; // cx
  char v6; // al
  int v7; // [esp+4h] [ebp-4h] BYREF

  v3 = MultiByteStr;
  if ( *(this + 5) )
    v3 = *(this + 4);
  v4 = sub_42D200(this, v3, &v7);
  switch ( v7 )
  {
    case 1:
      v6 = 4 * (a2 <= 0) - 64;
      break;
    case 2:
      v6 = 4 * (a2 <= 0) - 62;
      break;
    case 3:
      v6 = 2 * (a2 <= 0) - 37;
      break;
    default:
      return sub_45CC20(58);
  }
  sub_42E270((int)this, v6, v4);
  return 0;
}
