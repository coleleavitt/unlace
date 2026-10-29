__int64 __fastcall sub_5FD2E0(__int64 *a1, __int64 a2, unsigned int a3, _BYTE *a4, int a5)
{
  unsigned int v7; // ebx
  __int64 v9[8]; // [rsp+0h] [rbp-40h] BYREF

  v9[1] = __readfsqword(0x28u);
  if ( !a2 )
    a2 = a1[1];
  v9[0] = 0;
  v7 = sub_5EE420(a1, v9, 0, 0, a2, a4, 268);
  if ( (_BYTE)v7 )
    v7 = sub_5FC4F0(a1, a3, (__int64)v9, a5 | 1u);
  clear_tinfo_t(v9);
  return v7;
}

