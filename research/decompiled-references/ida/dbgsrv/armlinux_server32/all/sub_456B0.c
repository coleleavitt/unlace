/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_456B0
// Address: 0x000456B0

//----- (000456B0) --------------------------------------------------------
void __fastcall sub_456B0(int a1, unsigned __int8 *a2)
{
  int v3; // r3
  int v4; // r2
  unsigned int v5; // r4
  int v7; // r5
  int v8; // r3
  _BOOL4 v9; // r4
  _BYTE v10[80]; // [sp+4h] [bp-58h] BYREF
  int v11; // [sp+54h] [bp-8h]

  v3 = *(_DWORD *)(a1 + 24) - 1;
  v4 = _stack_chk_guard;
  *(_DWORD *)(a1 + 24) = v3;
  v11 = v4;
  if ( !v3 )
  {
    v5 = *(_DWORD *)(a1 + 28);
    if ( v5 )
    {
      while ( 1 )
      {
        v7 = sub_3F378(v5);
        v5 = *(_DWORD *)(v7 + 24);
        if ( *(_DWORD *)(v7 + 52) != -1 )
        {
          *(_DWORD *)(a1 + 24) += 32;
          sub_45A40((int)v10, 0, 1);
          sub_455D8((int)v10, *(_DWORD *)(v7 + 52), a2);
          sub_46F18((int)v10);
          v8 = *(_DWORD *)(a1 + 24) - 32;
          *(_DWORD *)(a1 + 24) = v8;
          if ( v8 )
            break;
        }
        if ( !v5 )
        {
          v5 = *(_DWORD *)(a1 + 24);
          goto LABEL_7;
        }
      }
    }
    else
    {
LABEL_7:
      v9 = v5 == 0;
      if ( !a1 )
        v9 = 0;
      if ( v9 )
      {
        sub_3FCE4(a1, *(unsigned __int8 **)(a1 + 8));
        sub_808A0((void *)a1);
      }
    }
  }
}
