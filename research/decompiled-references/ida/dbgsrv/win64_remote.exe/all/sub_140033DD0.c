/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140033DD0
// Address: 0x0000000140033DD0

//----- (0000000140033DD0) ----------------------------------------------------
__int64 __fastcall sub_140033DD0(_QWORD *a1, char *a2)
{
  unsigned __int64 v4; // rax
  unsigned int v5; // ecx
  char v6; // bl
  int v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = sub_1400333C0(a1, a2, &v8);
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      v6 = -7;
    }
    else if ( v8 == 2 )
    {
      v6 = -8;
    }
    else
    {
      if ( v8 != 3 )
      {
        if ( v8 == 6 )
          v5 = 1565;
        else
          v5 = 1564;
        goto LABEL_13;
      }
      v6 = -6;
    }
    sub_140034550((__int64)a1, v4);
    sub_1400344E0((__int64)a1, v6);
    return 0;
  }
  v5 = 53;
LABEL_13:
  sub_1400640B0(v5);
  sub_140063F70(0, a2);
  return sub_1400640B0(0x35u);
}
