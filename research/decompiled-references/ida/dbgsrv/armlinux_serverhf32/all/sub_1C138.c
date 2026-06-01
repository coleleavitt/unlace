/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1C138
// Address: 0x0001C138

//----- (0001C138) --------------------------------------------------------
void __fastcall sub_1C138(int a1)
{
  int v2; // r0
  int v3; // r0
  unsigned int v4; // r4
  int *v5; // r0
  int v6; // r1
  int v7; // r5
  const char *v8; // r0
  _DWORD v9[2]; // [sp+10h] [bp-1Ch] BYREF
  void *ptr; // [sp+18h] [bp-14h] BYREF
  unsigned int v11; // [sp+1Ch] [bp-10h]
  int v12; // [sp+20h] [bp-Ch]

  v2 = *(_DWORD *)(a1 + 860);
  if ( v2 )
  {
    v9[0] = a1;
    ptr = nullptr;
    v11 = 0;
    v9[1] = &ptr;
    v12 = 0;
    v3 = ((int (__fastcall *)(int, int (__fastcall *)(int, int *), _DWORD *, _DWORD, int, _DWORD, int))off_D3954)(
           v2,
           sub_175CC,
           v9,
           0,
           -20,
           0,
           -1);
    v4 = v3;
    if ( v3 )
    {
      v8 = sub_15B54(v3);
      sub_1700C((int)"%s: %s\n", "td_ta_thr_iter", v8);
      v5 = (int *)ptr;
      if ( ptr )
      {
LABEL_9:
        v11 = 0;
        sub_77E08(v5);
      }
    }
    else
    {
      v5 = (int *)ptr;
      if ( v11 )
      {
        v6 = *((_DWORD *)ptr + 16);
        v7 = 0;
        while ( 1 )
        {
          sub_1B9D0(a1, v6, v5[4]);
          ++v4;
          v5 = (int *)ptr;
          if ( v4 >= v11 )
            break;
          while ( 1 )
          {
            v7 += 336;
            v5 = (int *)((char *)v5 + v7);
            v6 = v5[16];
            if ( !v4 )
              break;
            sub_1BDD0(a1, v6, 0);
            sub_1B9D0(a1, *(_DWORD *)((char *)ptr + v7 + 64), *(_DWORD *)((char *)ptr + v7 + 16));
            ++v4;
            v5 = (int *)ptr;
            if ( v4 >= v11 )
              goto LABEL_8;
          }
        }
      }
LABEL_8:
      if ( v5 )
        goto LABEL_9;
    }
  }
}
// D3954: using guessed type int (__fastcall *off_D3954)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
