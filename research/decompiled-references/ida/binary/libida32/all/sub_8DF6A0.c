unsigned __int64 __fastcall sub_8DF6A0(unsigned __int64 a1, unsigned int *a2, char a3)
{
  unsigned int *v3; // r8
  unsigned __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned int *v7; // rdx

  v3 = a2;
  v4 = a3 & 0x1F;
  if ( (a3 & 0x18) != 0 )
  {
    v3 = &a2[2 * ((v4 - 8) >> 3) + 2];
    do
    {
      v5 = *(_QWORD *)a2;
      a2 += 2;
      a1 = 0x9E3779B185EBCA87LL * __ROL8__(a1 ^ (0x9E3779B185EBCA87LL * __ROL8__(0xC2B2AE3D27D4EB4FLL * v5, 31)), 27)
         - 0x7A1435883D4D519DLL;
    }
    while ( a2 != v3 );
    v4 = a3 & 7;
  }
  if ( v4 > 3 )
  {
    v6 = *v3;
    v4 -= 4LL;
    ++v3;
    a1 = 0xC2B2AE3D27D4EB4FLL * __ROL8__(a1 ^ (0x9E3779B185EBCA87LL * v6), 23) + 0x165667B19E3779F9LL;
  }
  if ( v4 )
  {
    v7 = (unsigned int *)((char *)v3 + v4);
    do
    {
      v3 = (unsigned int *)((char *)v3 + 1);
      a1 = 0x9E3779B185EBCA87LL * __ROL8__(a1 ^ (0x27D4EB2F165667C5LL * *((unsigned __int8 *)v3 - 1)), 11);
    }
    while ( v3 != v7 );
  }
  return ((0x165667B19E3779F9LL
         * ((0xC2B2AE3D27D4EB4FLL * (a1 ^ (a1 >> 33))) ^ ((0xC2B2AE3D27D4EB4FLL * (a1 ^ (a1 >> 33))) >> 29))) >> 32)
       ^ (0x165667B19E3779F9LL
        * ((0xC2B2AE3D27D4EB4FLL * (a1 ^ (a1 >> 33))) ^ ((0xC2B2AE3D27D4EB4FLL * (a1 ^ (a1 >> 33))) >> 29)));
}

