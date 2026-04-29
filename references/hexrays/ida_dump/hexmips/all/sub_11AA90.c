__int64 __fastcall sub_11AA90(_BYTE *a1)
{
  int v1; // eax
  unsigned int v2; // edx
  _QWORD v4[5]; // [rsp+0h] [rbp-48h] BYREF
  char v5; // [rsp+28h] [rbp-20h]
  unsigned __int64 v6; // [rsp+38h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v1 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= 2u )
  {
    v2 = 1;
    if ( v1 )
      return v2;
    goto LABEL_4;
  }
  if ( (unsigned int)(v1 - 56) > 1 || (v2 = 1, a1[64]) )
  {
LABEL_4:
    memset(&v4[1], 0, 32);
    v5 = 0;
    v4[0] = &off_4BDCF0;
    LOBYTE(v2) = (unsigned int)sub_11A700(a1, (__int64)v4) != 0;
  }
  return v2;
}
