__int64 __fastcall sub_294080(_QWORD *a1, unsigned int a2, _QWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  _BOOL4 v8; // r12d
  __int64 v9; // rax
  int v10; // r15d
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, int); // rax
  __int64 (__fastcall *v13)(__int64, int, int); // rax
  unsigned int v14; // ecx
  __int64 (*v15)(); // rax
  __int64 v16; // rax
  _QWORD *v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdx
  unsigned int v21; // eax
  char v22; // al
  unsigned int v24; // [rsp+8h] [rbp-40h]
  unsigned int v25; // [rsp+Ch] [rbp-3Ch]

  v5 = sub_28FD20((__int64)(a3 + 1), a2);
  if ( v6 )
  {
    v7 = v6;
    v8 = 1;
    if ( !v5 && (_QWORD *)v6 != a3 + 2 )
      v8 = (int)a2 < *(_DWORD *)(v6 + 32);
    v9 = operator new(0x28u);
    *(_DWORD *)(v9 + 32) = a2;
    std::_Rb_tree_insert_and_rebalance(v8, v9, v7, a3 + 2);
    ++a3[6];
  }
  v24 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))*a3)(a3, a2);
  if ( !v24 )
  {
    v10 = 0;
    v11 = 24LL * (int)a2;
LABEL_6:
    v12 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96LL);
    if ( v12 == interactive_graph_t__::vfunc_12 )
    {
LABEL_7:
      if ( *(_DWORD *)(a1[22] + v11 + 8) > v10 )
        goto LABEL_8;
    }
    else
    {
      while ( (int)v12((__int64)a1, a2) > v10 )
      {
LABEL_8:
        v13 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
        if ( v13 == interactive_graph_t__::vfunc_14 )
          v14 = *(_DWORD *)(*(_QWORD *)(a1[22] + v11) + 4LL * v10);
        else
          v14 = v13((__int64)a1, a2, v10);
        v15 = *(__int64 (**)())(*a3 + 8LL);
        if ( v15 == graph_node_visitor_t__::vfunc_1
          || (v25 = v14, v22 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, _QWORD))v15)(a3, a2, v14), v14 = v25, !v22) )
        {
          v16 = a3[3];
          if ( !v16 )
            goto LABEL_21;
          v17 = a3 + 2;
          do
          {
            while ( 1 )
            {
              v18 = *(_QWORD *)(v16 + 16);
              v19 = *(_QWORD *)(v16 + 24);
              if ( (signed int)v14 > *(_DWORD *)(v16 + 32) )
                break;
              v17 = (_QWORD *)v16;
              v16 = *(_QWORD *)(v16 + 16);
              if ( !v18 )
                goto LABEL_16;
            }
            v16 = *(_QWORD *)(v16 + 24);
          }
          while ( v19 );
LABEL_16:
          if ( v17 == a3 + 2 || (signed int)v14 < *((_DWORD *)v17 + 8) )
          {
LABEL_21:
            ++v10;
            v21 = sub_294080(a1, v14, a3);
            if ( !v21 )
              goto LABEL_6;
            return v21;
          }
        }
        ++v10;
        v12 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96LL);
        if ( v12 == interactive_graph_t__::vfunc_12 )
          goto LABEL_7;
      }
    }
  }
  return v24;
}
