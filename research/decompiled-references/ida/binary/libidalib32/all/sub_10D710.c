__int64 __fastcall sub_10D710(int a1)
{
  const char *v1; // rbp
  unsigned int v2; // ebx
  const char *v4; // [rsp+0h] [rbp-38h] BYREF
  __int128 v5; // [rsp+8h] [rbp-30h]
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v4 = nullptr;
  v5 = 0;
  if ( (unsigned __int8)sub_9DA30((__int64)&v4, 0, (__int64)"Enter an encoding name") )
  {
    v1 = s1;
    if ( (_QWORD)v5 )
      v1 = v4;
    if ( (unsigned __int8)sub_10D660(v1) )
    {
      if ( !a1 || a1 == (unsigned int)get_encoding_bpu_by_name() )
      {
        v2 = add_encoding();
        goto LABEL_7;
      }
      sub_92120((__int64)"Encoding \"%s\" is not suitable for %d-bit encodings", v1, 8 * a1);
    }
  }
  v2 = -1;
LABEL_7:
  if ( v4 )
  {
    *(_QWORD *)&v5 = 0;
    qfree();
  }
  return v2;
}

