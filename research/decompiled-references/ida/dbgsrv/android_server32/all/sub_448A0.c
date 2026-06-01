/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_448A0
// Address: 0x000448A0

//----- (000448A0) --------------------------------------------------------
int __fastcall sub_448A0(int a1, unsigned __int8 *a2)
{
  int v3; // r0
  unsigned int v4; // r6
  int v5; // r2
  int v6; // r5
  int v7; // r1
  int v8; // r7
  void *v9; // r0
  void *v12[3]; // [sp+10h] [bp-54h] BYREF
  _DWORD v13[6]; // [sp+1Ch] [bp-48h] BYREF
  void *ptr; // [sp+34h] [bp-30h] BYREF
  int v15; // [sp+38h] [bp-2Ch]
  unsigned int v16; // [sp+3Ch] [bp-28h]
  int v17; // [sp+60h] [bp-4h]

  v3 = *(_DWORD *)(a1 + 12) - 1;
  *(_DWORD *)(a1 + 12) = v3;
  if ( !v3 )
  {
    v4 = *(_DWORD *)(a1 + 16);
    v5 = 0;
    if ( v4 )
    {
      do
      {
        while ( 1 )
        {
          v6 = sub_40F30(v4);
          v4 = *(_DWORD *)(v6 + 12);
          if ( *(_DWORD *)(v6 + 40) == -1 )
            break;
          *(_DWORD *)(a1 + 12) += 32;
          ((void (__fastcall *)(void **, _DWORD, int))loc_48528)(v12, 0, 1);
          v7 = v15;
          v8 = v13[1];
          if ( v16 >= v15 + 1 )
          {
            v9 = ptr;
          }
          else
          {
            v9 = qvector_reserve((int)&ptr, ptr, v15 + 1, 4u);
            ptr = v9;
            v7 = v15;
          }
          *((_DWORD *)v9 + v7) = v8;
          ++v15;
          sub_3DC40((int)v13, a2);
          sub_47A68(v12, 0, nullptr);
          sub_486C4((int)v12);
          v5 = *(_DWORD *)(a1 + 12) - 32;
          *(_DWORD *)(a1 + 12) = v5;
          if ( !v4 || v5 )
            goto LABEL_11;
        }
      }
      while ( v4 );
      v5 = *(_DWORD *)(a1 + 12);
    }
LABEL_11:
    if ( !v5 )
    {
      sub_424B8(a1, *(unsigned __int8 **)(a1 + 4));
      operator delete((void *)a1);
    }
  }
  return _stack_chk_guard - v17;
}
