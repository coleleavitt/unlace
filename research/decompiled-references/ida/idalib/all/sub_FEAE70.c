__int64 __fastcall sub_FEAE70(_DWORD *a1, unsigned int *a2)
{
  __int64 v2; // rdx
  unsigned int v3; // ecx
  __int64 v4; // rax
  unsigned int v5; // r8d

  v2 = (unsigned int)*a1;
  v3 = *a2;
  v4 = 3 * (unsigned int)((*a1 & 3) != (*a2 & 3));
  if ( ((*a1 & 4) != 0) != ((*a2 & 4) != 0) )
    v4 = 3 * (unsigned int)((*a1 & 3) != (*a2 & 3)) + 4;
  if ( (((unsigned int)v2 >> 3) & 7) != ((v3 >> 3) & 7) )
    v4 = (unsigned int)v4 | 0x38;
  v5 = v4;
  if ( (unsigned __int8)v2 >> 6 != (unsigned __int8)v3 >> 6 )
  {
    LOBYTE(v5) = v4 | 0xC0;
    v4 = v5;
  }
  if ( (BYTE1(v2) & 1) != (BYTE1(v3) & 1) )
    v4 = (unsigned int)v4 | 0x100;
  if ( ((*a2 & 0x200) != 0) != ((*a1 & 0x200) != 0) )
    v4 = (unsigned int)v4 | 0x200;
  if ( ((*a2 & 0x400) != 0) != ((*a1 & 0x400) != 0) )
    v4 = (unsigned int)v4 | 0x400;
  if ( ((*a2 & 0x800) != 0) != ((*a1 & 0x800) != 0) )
    v4 = (unsigned int)v4 | 0x800;
  if ( ((*a2 & 0x1000) != 0) != ((*a1 & 0x1000) != 0) )
    v4 = (unsigned int)v4 | 0x1000;
  if ( ((*a2 & 0x2000) != 0) != ((*a1 & 0x2000) != 0) )
    v4 = (unsigned int)v4 | 0x2000;
  if ( ((*a2 & 0x4000) != 0) != ((*a1 & 0x4000) != 0) )
    v4 = (unsigned int)v4 | 0x4000;
  if ( ((v3 >> 15) & 3) != (((unsigned int)v2 >> 15) & 3) )
    v4 = (unsigned int)v4 | 0x18000;
  if ( ((v3 >> 17) & 3) != (((unsigned int)v2 >> 17) & 3) )
    v4 = (unsigned int)v4 | 0x60000;
  if ( ((v3 >> 19) & 3) != (((unsigned int)v2 >> 19) & 3) )
    v4 = (unsigned int)v4 | 0x180000;
  if ( ((*a2 & 0x200000) != 0) != ((v2 & 0x200000) != 0) )
    v4 = (unsigned int)v4 | 0x200000;
  if ( ((v3 >> 22) & 7) != (((unsigned int)v2 >> 22) & 7) )
    v4 = (unsigned int)v4 | 0x1C00000;
  return v2 | (v4 << 32);
}
