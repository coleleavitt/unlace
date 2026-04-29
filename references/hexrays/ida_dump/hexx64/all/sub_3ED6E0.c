__int64 __fastcall sub_3ED6E0(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // r13d
  __int64 v6; // r15
  unsigned __int64 v7; // rdx
  int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  void *v12; // r8
  _BOOL8 v13; // rdi
  int v15; // r12d
  _DWORD *v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+0h] [rbp-58h]
  void *v21; // [rsp+8h] [rbp-50h]
  __int64 v22; // [rsp+8h] [rbp-50h]
  void *v23; // [rsp+8h] [rbp-50h]
  __int64 v24; // [rsp+10h] [rbp-48h]
  void *v25; // [rsp+18h] [rbp-40h]

  if ( (unsigned __int8)sub_7D640(a1, a2) )
  {
    if ( (unsigned __int8)sub_7D6B0((__int64)a2, a1 + 56) )
    {
      v4 = sub_7D9D0((__int64)a2, (__int64 *)(a1 + 104));
      if ( (_BYTE)v4 )
      {
        v6 = a1 + 136;
        sub_3ED510(*(_QWORD **)(a1 + 144));
        *(_QWORD *)(a1 + 152) = a1 + 136;
        *(_QWORD *)(a1 + 144) = 0;
        *(_QWORD *)(a1 + 160) = a1 + 136;
        *(_QWORD *)(a1 + 168) = 0;
        v20 = a1 + 136;
        v7 = (int)sub_7D4F0(a2);
        if ( a2[1] - *a2 >= v7 )
        {
          v24 = a1 + 128;
          v8 = v7 - 1;
          if ( (int)v7 - 1 < 0 )
          {
LABEL_31:
            *(_DWORD *)(a1 + 176) = sub_7CD20(a2);
            return v4;
          }
          while ( 1 )
          {
            v15 = sub_7CD20(a2);
            v16 = (_DWORD *)operator new(0x28u);
            v16[8] = v15;
            v12 = v16;
            if ( v20 == v6 )
            {
              if ( *(_QWORD *)(a1 + 168) )
              {
                v9 = *(_QWORD *)(a1 + 160);
                v6 = 0;
                if ( v15 > *(_DWORD *)(v9 + 32) )
                  goto LABEL_13;
              }
            }
            else
            {
              v17 = *(unsigned int *)(v6 + 32);
              if ( v15 < (int)v17 )
              {
                v9 = *(_QWORD *)(a1 + 152);
                if ( v6 == v9 )
                  goto LABEL_13;
                v21 = v16;
                v10 = std::_Rb_tree_decrement(v6, v17, v9, v11, v16);
                v12 = v21;
                v9 = v10;
                if ( v15 > *(_DWORD *)(v10 + 32) )
                {
                  if ( *(_QWORD *)(v10 + 24) )
                    v9 = v6;
                  else
LABEL_34:
                    v6 = 0;
LABEL_13:
                  if ( !v9 )
                    goto LABEL_29;
                  goto LABEL_14;
                }
              }
              else
              {
                if ( v15 <= (int)v17 )
                  goto LABEL_29;
                v9 = *(_QWORD *)(a1 + 160);
                if ( v6 == v9 )
                  goto LABEL_34;
                v25 = v16;
                v18 = std::_Rb_tree_increment(v6);
                v12 = v25;
                v9 = v18;
                if ( v15 < *(_DWORD *)(v18 + 32) )
                {
                  if ( !*(_QWORD *)(v6 + 24) )
                  {
                    v9 = v6;
                    if ( !v6 )
                    {
LABEL_29:
                      if ( v12 )
                        operator delete(v12, 0x28u);
                      goto LABEL_18;
                    }
                    goto LABEL_33;
                  }
                  v6 = v18;
                  goto LABEL_13;
                }
              }
            }
            v23 = v12;
            v19 = sub_3EBA80(v24, (unsigned int)v15, v9, v11, (__int64)v12);
            v12 = v23;
            v6 = v19;
            if ( !v9 )
              goto LABEL_29;
LABEL_14:
            if ( !v6 && v9 != v20 )
            {
              LODWORD(v17) = *(_DWORD *)(v9 + 32);
LABEL_33:
              v13 = v15 < (int)v17;
              goto LABEL_17;
            }
            v13 = 1;
LABEL_17:
            v22 = (__int64)v12;
            std::_Rb_tree_insert_and_rebalance(v13, v12, v9, v20);
            ++*(_QWORD *)(a1 + 168);
            v6 = v22;
LABEL_18:
            if ( v8-- == 0 )
              goto LABEL_31;
          }
        }
      }
    }
  }
  return 0;
}
