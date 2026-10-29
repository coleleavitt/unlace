/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_456F20
// Address: 0x00456F20

//----- (00456F20) --------------------------------------------------------
int *sub_456F20()
{
  char *i; // edi
  _BYTE *v1; // ecx
  unsigned int v2; // esi
  __int8 *v4; // [esp+10h] [ebp-2Ch] BYREF
  int v5; // [esp+14h] [ebp-28h]
  int v6; // [esp+18h] [ebp-24h]
  _BYTE *v7; // [esp+1Ch] [ebp-20h] BYREF
  unsigned int v8; // [esp+20h] [ebp-1Ch]
  int v9; // [esp+24h] [ebp-18h]
  LPCRITICAL_SECTION lpCriticalSection; // [esp+28h] [ebp-14h] BYREF
  __int8 *v11; // [esp+2Ch] [ebp-10h] BYREF
  int v12; // [esp+38h] [ebp-4h]

  sub_4543E0(&lpCriticalSection);
  v12 = 0;
  if ( !dword_4B7338 )
  {
    v4 = nullptr;
    v5 = 0;
    v6 = 0;
    LOBYTE(v12) = 1;
    if ( sub_4560B0("IDAUSR", (void **)&v4) )
    {
      if ( v4 )
      {
        for ( i = sub_45ADE0(v4, ";", &v11); i; i = sub_45ADE0(nullptr, ";", &v11) )
        {
          if ( *i )
          {
            v1 = nullptr;
            v7 = nullptr;
            v8 = 0;
            v9 = 0;
            LOBYTE(v12) = 2;
            v2 = strlen(i);
            if ( v2 != -1 )
            {
              v1 = sub_453B00((int)&v7, nullptr, v2 + 1, 1u);
              v7 = v1;
            }
            v8 = v2 + 1;
            sub_464310((unsigned int)v1, (unsigned int)i, v2);
            v7[v2] = 0;
            LOBYTE(v12) = 3;
            sub_42EA90((int)&dword_4B7334, (char *)&v7);
            LOBYTE(v12) = 4;
            if ( v7 )
            {
              v8 = 0;
              sub_453A20(v7);
              v7 = nullptr;
              v9 = 0;
            }
            LOBYTE(v12) = 1;
          }
        }
      }
    }
    if ( !dword_4B7338 )
    {
      if ( sub_456D40((int)&v4) )
        sub_437560((int)&dword_4B7334, (unsigned int *)&v4);
      if ( !dword_4B7338 )
      {
        if ( byte_4B70F0 )
          __debugbreak();
        sub_4533F0(1450);
      }
    }
    LOBYTE(v12) = 5;
    if ( v4 )
    {
      v5 = 0;
      sub_453A20(v4);
    }
  }
  v12 = 6;
  sub_4562F0(lpCriticalSection);
  return &dword_4B7334;
}
// 4B70F0: using guessed type char byte_4B70F0;
// 4B7334: using guessed type int dword_4B7334;
// 4B7338: using guessed type int dword_4B7338;
