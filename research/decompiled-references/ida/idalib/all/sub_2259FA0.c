__int64 __fastcall sub_2259FA0(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v6[3]; // [rsp+0h] [rbp-18h] BYREF

  v6[0] = a1;
  v6[1] = a2;
  v2 = j__strlen("/\\");
  v3 = sub_2246EC0(v6, "/\\", v2, 0);
  v4 = 0;
  if ( v3 != -1 )
    return 2 * (unsigned int)(*(_BYTE *)(v6[0] + v3) != 47) + 1;
  return v4;
}
