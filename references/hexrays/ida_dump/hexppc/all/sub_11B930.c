__int64 __fastcall sub_11B930(__int64 a1)
{
  int *i; // rbx
  int v2; // eax
  _QWORD v4[5]; // [rsp+0h] [rbp-58h] BYREF
  char v5; // [rsp+28h] [rbp-30h]
  unsigned __int64 v6; // [rsp+38h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  for ( i = *(int **)(a1 + 48); i; i = *((int **)i + 1) )
  {
    v2 = *i;
    if ( (unsigned int)*i > 2 )
    {
      if ( (unsigned int)(v2 - 56) <= 1 && !*((_BYTE *)i + 64) )
        return 1;
    }
    else if ( v2 )
    {
      return 1;
    }
    memset(&v4[1], 0, 32);
    v5 = 0;
    v4[0] = &off_4CA6D0;
    if ( (unsigned int)sub_11AEC0(i, (__int64)v4) )
      return 1;
  }
  return 0;
}
