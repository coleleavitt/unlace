__int64 __fastcall sub_3E2AA0(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // r13d
  __int64 v5; // r15
  unsigned __int64 v6; // rdx
  int v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // rax
  void *v10; // r8
  int v12; // r12d
  __int64 v13; // rax
  int v14; // esi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  void *v18; // [rsp+8h] [rbp-50h]
  __int64 v19; // [rsp+8h] [rbp-50h]
  void *v20; // [rsp+8h] [rbp-50h]
  void *v21; // [rsp+18h] [rbp-40h]

  if ( (unsigned __int8)sub_7C9E0(a1, a2) )
  {
    if ( (unsigned __int8)sub_7CA50((__int64)a2, (_QWORD *)(a1 + 56)) )
    {
      v3 = sub_7CD70((__int64)a2, (__int64 *)(a1 + 104));
      if ( (_BYTE)v3 )
      {
        v5 = a1 + 136;
        sub_3E28D0(*(_QWORD **)(a1 + 144));
        *(_QWORD *)(a1 + 152) = a1 + 136;
        *(_QWORD *)(a1 + 144) = 0;
        *(_QWORD *)(a1 + 160) = a1 + 136;
        *(_QWORD *)(a1 + 168) = 0;
        v6 = (int)sub_7C790(a2);
        if ( a2[1] - *a2 >= v6 )
        {
          v7 = v6 - 1;
          if ( (int)v6 - 1 < 0 )
          {
LABEL_28:
            *(_DWORD *)(a1 + 176) = sub_7BFC0(a2);
            return v3;
          }
          while ( 1 )
          {
            v12 = sub_7BFC0(a2);
            v13 = operator new(0x28u);
            *(_DWORD *)(v13 + 32) = v12;
            v10 = (void *)v13;
            if ( a1 + 136 == v5 )
              break;
            v14 = *(_DWORD *)(v5 + 32);
            if ( v12 < v14 )
            {
              v8 = *(_QWORD *)(a1 + 152);
              if ( v5 == v8 )
                goto LABEL_13;
              v18 = (void *)v13;
              v9 = std::_Rb_tree_decrement();
              v10 = v18;
              v8 = v9;
              if ( v12 > *(_DWORD *)(v9 + 32) )
              {
                if ( *(_QWORD *)(v9 + 24) )
                  v8 = v5;
                else
LABEL_30:
                  v5 = 0;
LABEL_13:
                if ( !v8 )
                  goto LABEL_26;
                goto LABEL_14;
              }
              goto LABEL_25;
            }
            if ( v12 <= v14 )
              goto LABEL_26;
            v8 = *(_QWORD *)(a1 + 160);
            if ( v5 == v8 )
              goto LABEL_30;
            v21 = (void *)v13;
            v15 = std::_Rb_tree_increment();
            v10 = v21;
            v8 = v15;
            if ( v12 >= *(_DWORD *)(v15 + 32) )
              goto LABEL_25;
            if ( *(_QWORD *)(v5 + 24) )
            {
              v5 = v15;
              goto LABEL_13;
            }
            if ( !v5 )
            {
LABEL_26:
              if ( v10 )
                operator delete(v10, 0x28u);
              goto LABEL_15;
            }
LABEL_14:
            v19 = (__int64)v10;
            std::_Rb_tree_insert_and_rebalance();
            ++*(_QWORD *)(a1 + 168);
            v5 = v19;
LABEL_15:
            if ( v7-- == 0 )
              goto LABEL_28;
          }
          if ( *(_QWORD *)(a1 + 168) )
          {
            v8 = *(_QWORD *)(a1 + 160);
            v5 = 0;
            if ( v12 > *(_DWORD *)(v8 + 32) )
              goto LABEL_13;
          }
LABEL_25:
          v20 = v10;
          v16 = sub_3E0E40(a1 + 128, v12);
          v10 = v20;
          v5 = v16;
          if ( !v17 )
            goto LABEL_26;
          goto LABEL_14;
        }
      }
    }
  }
  return 0;
}
