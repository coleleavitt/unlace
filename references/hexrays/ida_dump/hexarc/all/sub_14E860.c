__int64 __fastcall sub_14E860(unsigned int *a1)
{
  unsigned int v1; // eax
  unsigned int v2; // ebx
  char v3; // al
  unsigned int v4; // eax

  LOBYTE(v1) = *((_BYTE *)a1 + 32) == 2 || *((_BYTE *)a1 + 32) == 13;
  if ( (_BYTE)v1 && (v2 = v1, v3 = *((_BYTE *)a1 + 48), v3 != 13) && v3 != 2 && (v4 = sub_3274C0(*a1)) != 0 )
  {
    *a1 = v4;
    sub_116350((char *)a1 + 32, (char *)a1 + 48);
  }
  else
  {
    return 0;
  }
  return v2;
}
