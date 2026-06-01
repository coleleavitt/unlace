/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_410320
// Address: 0x0000000000410320

//----- (0000000000410320) ----------------------------------------------------
__int64 __fastcall sub_410320(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  int v8; // esi
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // r15
  int i; // r12d
  unsigned int v15; // r12d

  v6 = a1 + 1216;
  sub_45A850();
  v7 = *(_QWORD *)(a1 + 1224);
  v8 = *(_DWORD *)(a1 + 204);
  if ( v7 )
  {
    v9 = a1 + 1216;
    do
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(v7 + 16);
        v11 = *(_QWORD *)(v7 + 24);
        if ( v8 > *(_DWORD *)(v7 + 32) )
          break;
        v9 = v7;
        v7 = *(_QWORD *)(v7 + 16);
        if ( !v10 )
          goto LABEL_6;
      }
      v7 = *(_QWORD *)(v7 + 24);
    }
    while ( v11 );
LABEL_6:
    if ( v9 != v6 )
    {
      v12 = *(_DWORD *)(v9 + 32);
      if ( v8 >= v12 && *(_BYTE *)(v9 + 65) && *(int *)(v9 + 48) <= 0 && *(int *)(v9 + 44) <= 0 )
        goto LABEL_27;
    }
  }
  v13 = *(_QWORD *)(a1 + 1232);
  for ( i = 0; i != 3; ++i )
  {
LABEL_9:
    if ( v6 != v13 )
    {
      v9 = v13;
      while ( 1 )
      {
        if ( *(int *)(v9 + 48) <= 0 && *(int *)(v9 + 44) <= 0 && *(_BYTE *)(v9 + 65) )
        {
          if ( i )
          {
            if ( i != 1 )
              goto LABEL_22;
            if ( (unsigned __int8)*(_DWORD *)(v9 + 68) == 127 && (*(_DWORD *)(v9 + 68) & 0xFF00) == 0x500 )
            {
LABEL_18:
              ++i;
              goto LABEL_9;
            }
          }
          else if ( *(_BYTE *)(v9 + 56) )
          {
            goto LABEL_18;
          }
        }
        v9 = std::_Rb_tree_increment(v9);
        if ( v9 == v6 )
          goto LABEL_21;
      }
    }
    v9 = v6;
LABEL_21:
    ;
  }
LABEL_22:
  v15 = 0;
  if ( v6 == v9 )
    goto LABEL_23;
  v12 = *(_DWORD *)(v9 + 32);
LABEL_27:
  *a2 = v12;
  *a3 = *(_DWORD *)(v9 + 68);
  *(_BYTE *)(v9 + 65) = 0;
  if ( --*(_DWORD *)(a1 + 1408) < 0 )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(30186);
    BUG();
  }
  v15 = 1;
LABEL_23:
  sub_45A860();
  return v15;
}
// 405450: using guessed type __int64 __fastcall std::_Rb_tree_increment(_QWORD);
// 4C94E1: using guessed type char byte_4C94E1;
