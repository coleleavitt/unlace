__int64 sub_1797C0()
{
  __int64 v0; // rdi
  __int64 fchunk; // rax
  unsigned int v2; // edx
  __int64 v4; // [rsp+8h] [rbp-20h] BYREF
  _QWORD v5[3]; // [rsp+10h] [rbp-18h] BYREF

  v5[1] = __readfsqword(0x28u);
  v4 = -1;
  v5[0] = -1;
  if ( (unsigned __int8)sub_1F09E0(0, &v4, v5) )
  {
    v0 = v4;
  }
  else
  {
    v0 = xmmword_8CC810;
    v4 = xmmword_8CC810;
  }
  fchunk = get_fchunk(v0);
  v2 = 3;
  if ( fchunk )
  {
    v2 = 7;
    if ( *(char *)(fchunk + 17) < 0 && *(_QWORD *)fchunk == v4 )
    {
      v2 = 3;
      if ( v5[0] != -1 && v5[0] != *(_QWORD *)(fchunk + 8) )
        return 7;
    }
  }
  return v2;
}
