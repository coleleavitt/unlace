/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41E9C0
// Address: 0x000000000041E9C0

//----- (000000000041E9C0) ----------------------------------------------------
__int64 __fastcall sub_41E9C0(
        __int64 a1,
        int a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  char v11; // dl
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rbp
  _QWORD *v15; // rdi
  unsigned __int64 v16; // rcx
  _QWORD *v17; // r14
  _QWORD *v18; // rbx
  unsigned __int64 v19; // rax
  _QWORD *v20; // rdx
  bool v21; // al
  char v22; // al
  _QWORD *i; // rax
  __int64 v25; // r9
  __int64 v26; // rsi
  _QWORD *v27; // rdi
  void *v28; // rax
  __int64 v30; // [rsp+8h] [rbp-40h]

  if ( *(_QWORD *)(a1 + 440) )
  {
    *(_BYTE *)(a1 + 1412) = 1;
  }
  else
  {
    v11 = sub_412F90((_QWORD *)a1);
    v12 = *(_QWORD *)(a1 + 1392);
    if ( v11 )
    {
      *(_BYTE *)(a1 + 1412) = 0;
      if ( v12 && !*(_DWORD *)(a1 + 1408) )
      {
LABEL_5:
        v13 = *(_QWORD *)(a1 + 1376);
        v14 = a1 + 520;
        v30 = a1 + 1360;
        while ( v30 != v13 )
        {
          v15 = *(_QWORD **)(a1 + 528);
          v16 = *(_QWORD *)(v13 + 32);
          v17 = (_QWORD *)(a1 + 520);
          if ( v15 )
          {
            v18 = *(_QWORD **)(a1 + 528);
            while ( 1 )
            {
              while ( 1 )
              {
                v19 = v18[4];
                if ( v19 >= v16 )
                  break;
                v18 = (_QWORD *)v18[3];
                if ( !v18 )
                  goto LABEL_12;
              }
              v20 = (_QWORD *)v18[2];
              if ( v16 >= v19 )
                break;
              v17 = v18;
              v18 = (_QWORD *)v18[2];
              if ( !v20 )
              {
LABEL_12:
                v21 = v14 == (_QWORD)v17;
                goto LABEL_13;
              }
            }
            for ( i = (_QWORD *)v18[3]; i; i = (_QWORD *)i[2] )
            {
              while ( 1 )
              {
                v25 = i[3];
                if ( v16 < i[4] )
                  break;
                i = (_QWORD *)i[3];
                if ( !v25 )
                  goto LABEL_30;
              }
              v17 = i;
            }
LABEL_30:
            while ( v20 )
            {
              while ( 1 )
              {
                v26 = v20[3];
                if ( v20[4] >= v16 )
                  break;
                v20 = (_QWORD *)v20[3];
                if ( !v26 )
                  goto LABEL_33;
              }
              v18 = v20;
              v20 = (_QWORD *)v20[2];
            }
LABEL_33:
            if ( *(_QWORD **)(a1 + 536) != v18 || v17 != (_QWORD *)v14 )
            {
              for ( ; v17 != v18; --*(_QWORD *)(a1 + 552) )
              {
                v27 = v18;
                v18 = (_QWORD *)std::_Rb_tree_increment(v18);
                v28 = (void *)std::_Rb_tree_rebalance_for_erase(v27, a1 + 520);
                operator delete(v28, 0x40u);
              }
              goto LABEL_16;
            }
          }
          else
          {
            v21 = 1;
LABEL_13:
            if ( *(_QWORD **)(a1 + 536) != v17 || !v21 )
              goto LABEL_16;
          }
          sub_40EDE0(v15);
          *(_QWORD *)(a1 + 536) = v14;
          *(_QWORD *)(a1 + 528) = 0;
          *(_QWORD *)(a1 + 544) = v14;
          *(_QWORD *)(a1 + 552) = 0;
LABEL_16:
          v13 = std::_Rb_tree_increment(v13);
        }
        sub_40FDA0(*(_QWORD **)(a1 + 1368));
        *(_QWORD *)(a1 + 1368) = 0;
        *(_QWORD *)(a1 + 1392) = 0;
        *(_QWORD *)(a1 + 1376) = v30;
        *(_QWORD *)(a1 + 1384) = v30;
        if ( a2 )
          goto LABEL_18;
LABEL_21:
        v22 = sub_41CFB0(a1, 0, 1, a3, a4, a5, a6, a7, a8, a9, a10);
        return v22 & 1;
      }
    }
    else
    {
      *(_BYTE *)(a1 + 1412) = 1;
      if ( v12 && !*(_DWORD *)(a1 + 1408) )
        goto LABEL_5;
    }
  }
  if ( !a2 )
    goto LABEL_21;
LABEL_18:
  v22 = sub_41CFB0(a1, a2, 0, a3, a4, a5, a6, a7, a8, a9, a10);
  return v22 & 1;
}
// 41EB39: variable 'a7' is possibly undefined
// 41EB39: variable 'a8' is possibly undefined
// 4053F0: using guessed type __int64 __fastcall std::_Rb_tree_rebalance_for_erase(_QWORD, _QWORD);
// 405760: using guessed type __int64 __fastcall std::_Rb_tree_increment(_QWORD);
