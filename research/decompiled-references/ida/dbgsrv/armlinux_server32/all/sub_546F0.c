/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_546F0
// Address: 0x000546F0

//----- (000546F0) --------------------------------------------------------
_DWORD *__fastcall sub_546F0(int a1, int a2, unsigned int a3)
{
  _DWORD *v4; // r4
  _DWORD *v7; // r6
  unsigned int v8; // r3
  unsigned int v9; // r6
  char *v10; // r10
  char *v11; // r0
  int v13; // r4
  double v14; // [sp+0h] [bp-4Ch]
  unsigned __int8 v15[8]; // [sp+8h] [bp-44h] BYREF
  __int64 v16; // [sp+10h] [bp-3Ch]
  int v17; // [sp+18h] [bp-34h]
  int v18; // [sp+1Ch] [bp-30h]
  char v19[32]; // [sp+24h] [bp-28h] BYREF

  v4 = *(_DWORD **)(a1 + 208);
  if ( v4 )
  {
    v7 = (_DWORD *)(a1 + 204);
    do
    {
      v8 = v4[4];
      if ( v8 < a3 )
        v4 = (_DWORD *)v4[3];
      else
        v7 = v4;
      if ( v8 >= a3 )
        v4 = (_DWORD *)v4[2];
    }
    while ( v4 );
    if ( (_DWORD *)(a1 + 204) != v7 && v7[4] <= a3 )
    {
      v15[0] = 2;
      v16 = 0;
      v17 = 0;
      v18 = 0;
      sub_7EBB4(v19, 32, "__lc%a", v14);
      sub_5723C();
      sub_57244(a1, a2);
      if ( !*((_BYTE *)v7 + 268) )
      {
        if ( !sub_3FD54(
                v19,
                (const char *)v7[6],
                (void **)*((unsigned __int8 *)v7 + 268),
                *((unsigned __int8 *)v7 + 268),
                1) )
        {
          sub_57240();
          goto LABEL_14;
        }
        *((_BYTE *)v7 + 268) = 1;
      }
      v13 = sub_4B150(v15, v19, nullptr, 0, 0, 0);
      sub_57240();
      if ( v13 )
      {
        sub_46594((int)v15);
        if ( v16 )
        {
          v4 = nullptr;
          sub_45758(v15);
          return v4;
        }
        v4 = v7 + 5;
        goto LABEL_15;
      }
LABEL_14:
      v9 = sub_70B7C();
      v10 = (char *)sub_70D34(0);
      v11 = (char *)sub_70D74(0);
      sub_59840(*(_DWORD *)(a1 + 248), a3, v9, v10, v11);
      v4 = nullptr;
LABEL_15:
      sub_45758(v15);
    }
  }
  return v4;
}
// 54752: variable 'v14' is possibly undefined
