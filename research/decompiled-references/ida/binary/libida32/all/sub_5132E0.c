__int64 __fastcall sub_5132E0(__int64 a1, __int64 a2, _BYTE *a3, int a4, int a5, int a6)
{
  char v7; // [rsp+0h] [rbp-18h]
  unsigned int v8; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  if ( *a3 == 1 && (unsigned int)qsscanf((int)a3 + 1, (int)"%a", (int)&v8, a4, a5, a6, v7) == 1 )
    return v8;
  else
    return 0xFFFFFFFFLL;
}

