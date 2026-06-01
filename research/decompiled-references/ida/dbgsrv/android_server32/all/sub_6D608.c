/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6D608
// Address: 0x0006D608

//----- (0006D608) --------------------------------------------------------
void *__fastcall sub_6D608(int a1, int a2)
{
  void *v4; // r5
  unsigned int v5; // r0
  unsigned __int8 *v6; // r1
  unsigned int i; // r2
  int v8; // r6
  __suseconds_t v9; // r0
  int v10; // r1
  void *v12; // r0
  __suseconds_t v13; // r0
  int v14; // r1
  _DWORD v15[2]; // [sp+10h] [bp-28h] BYREF
  _BYTE v16[28]; // [sp+18h] [bp-20h] BYREF

  v4 = nullptr;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1) && !*(_BYTE *)(a1 + 4) )
  {
    v5 = *(_DWORD *)(a1 + 28);
    if ( v5 )
    {
      v6 = *(unsigned __int8 **)(a1 + 24);
      for ( i = 0; i < v5; ++i )
      {
        if ( *v6 == a2 )
          break;
        v6 += 8;
      }
    }
    v4 = nullptr;
    if ( !sub_6D4B0(a1, (int)v15, 5) )
    {
      v8 = (v15[0] << 24) + ((v15[0] << 8) & 0xFF0000) + ((v15[0] >> 8) & 0xFF00) + HIBYTE(v15[0]);
      v15[0] = v8;
      if ( v8 >= 0 && (v8 < 8193 || *(_BYTE *)(a1 + 37)) )
      {
        v12 = qalloc(v8 + 5);
        if ( v12 )
        {
          v4 = v12;
          qmemcpy(v12, v15, 5u);
          if ( sub_6D4B0(a1, (int)v4 + 5, v8) )
          {
            qfree(v4);
            return nullptr;
          }
        }
        else
        {
          v13 = qtime64();
          v4 = nullptr;
          format_timestamp(v16, 25, v13, v14, 0);
          sub_6D728("%s rpc: no local memory", v16);
        }
      }
      else
      {
        v9 = qtime64();
        v4 = nullptr;
        format_timestamp(v16, 25, v9, v10, 0);
        sub_6D728("%s rpc: bad packet length", v16);
      }
    }
  }
  return v4;
}
// 6D6AA: variable 'v10' is possibly undefined
// 6D708: variable 'v14' is possibly undefined
