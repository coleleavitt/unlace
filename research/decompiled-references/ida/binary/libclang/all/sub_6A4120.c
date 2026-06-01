unsigned __int64 __fastcall sub_6A4120(__int64 *a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax
  unsigned int v5; // edx
  unsigned int v6; // [rsp+0h] [rbp-18h] BYREF
  unsigned int v7; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-10h] BYREF

  v1 = *a1;
  if ( (*a1 & 3uLL) - 2 > 1 )
  {
    v5 = *((_DWORD *)a1 + 3);
    v8 = *a1;
    v7 = v5;
    v6 = *((_DWORD *)a1 + 2);
    return sub_6A40C0(&v8, &v6, &v7);
  }
  else
  {
    v2 = HIDWORD(v1);
    v3 = 0x9DDFEA08EB382D69LL * (HIDWORD(v1) ^ (8LL * (unsigned int)v1 - 0xAE502812AA7333LL));
    return 0x9DDFEA08EB382D69LL
         * (((0x9DDFEA08EB382D69LL * (v3 ^ v2 ^ (v3 >> 47))) >> 47) ^ (0x9DDFEA08EB382D69LL * (v3 ^ v2 ^ (v3 >> 47))));
  }
}

