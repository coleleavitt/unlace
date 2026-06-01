/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40DF60
// Address: 0x0040DF60

//----- (0040DF60) --------------------------------------------------------
int __userpurge sub_40DF60@<eax>(__m128i a1@<xmm0>, int *a2, int a3)
{
  int v4; // eax
  DWORD v5; // ebx
  DWORD v6; // eax
  const char *v7; // eax
  void *v8; // [esp-Ch] [ebp-10h]

  if ( !a2[50] && (a2[84] & 0x80000) != 0 && sub_455100() )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(30191);
  }
  if ( !a3 )
    return -1;
  if ( !a2[19] )
  {
    v4 = sub_410D70(a2 + 151, *(_DWORD *)(a3 + 4));
    v5 = v4;
    if ( v4 )
    {
      if ( (*(_BYTE *)(v4 + 28) & 1) != 0 && sub_4184E0(a2, a3, a2[113]) )
      {
        v8 = (void *)(*(_DWORD *)(a3 + 8) + 7);
        *(_DWORD *)(v5 + 32) = v8;
        if ( !sub_4165C0((int)a2, a1, v5, v8) )
        {
          if ( byte_4B70F0 )
            __debugbreak();
          sub_4533F0(637);
        }
      }
    }
    v6 = -2147418111;
    if ( *(_BYTE *)(a3 + 12) )
      v6 = 65538;
    if ( !ContinueDebugEvent(*(_DWORD *)a3, *(_DWORD *)(a3 + 4), v6) )
    {
      sub_43C950(a1, (int)a2, (int)"ContinueDebugEvent");
      return -1;
    }
    v7 = "yes";
    if ( !*(_BYTE *)(a3 + 12) )
      v7 = "no";
    sub_43C900((int)a2, (int)"ContinueDebugEvent: handled=%s\n", v7);
    if ( (*(_DWORD *)(a3 + 16) & 0xFFFFFFF) == 2 )
    {
      a2[155] = -1;
      a2[156] = -1;
      a2[113] = -1;
      a2[125] = -1;
      sub_40CD70((int)a2, a1);
    }
  }
  a2[164] = 0;
  return 1;
}
// 4B70F0: using guessed type char byte_4B70F0;
