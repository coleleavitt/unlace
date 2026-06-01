unsigned __int64 __fastcall sub_2991A0(__int64 *a1, _QWORD *a2, int *a3, double a4)
{
  __int64 v4; // rbp
  char v6; // r13
  __int64 *v7; // r15
  unsigned int v8; // esi
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // r12d
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 (__fastcall *v17)(__int64, __int64); // rdx
  __int64 v18; // rdi
  __int64 v19; // rsi
  _QWORD *v20; // rax
  int *v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  void *v25; // r9
  int v26; // ecx
  int *v27; // rdx
  __int64 v28; // rax
  _BOOL8 v29; // rdi
  __int64 v30; // rdi
  int j; // ebp
  __int64 v32; // rax
  int v33; // edx
  void *v34; // rdi
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // ecx
  int v39; // eax
  __int64 v40; // [rsp+8h] [rbp-F0h]
  __int64 v41; // [rsp+10h] [rbp-E8h]
  int *v42; // [rsp+18h] [rbp-E0h]
  int *v43; // [rsp+18h] [rbp-E0h]
  void *v44; // [rsp+18h] [rbp-E0h]
  int *v45; // [rsp+20h] [rbp-D8h]
  void *v46; // [rsp+20h] [rbp-D8h]
  int v47; // [rsp+20h] [rbp-D8h]
  int v48; // [rsp+2Ch] [rbp-CCh]
  __int64 v49; // [rsp+38h] [rbp-C0h]
  int *v50; // [rsp+40h] [rbp-B8h]
  void *v51; // [rsp+40h] [rbp-B8h]
  _QWORD *v52; // [rsp+48h] [rbp-B0h]
  int *v53; // [rsp+50h] [rbp-A8h]
  int v54; // [rsp+58h] [rbp-A0h]
  int v55; // [rsp+5Ch] [rbp-9Ch]
  int v56; // [rsp+60h] [rbp-98h]
  int i; // [rsp+64h] [rbp-94h]
  __int64 v58; // [rsp+68h] [rbp-90h]
  __int64 (__fastcall **v61)(); // [rsp+80h] [rbp-78h] BYREF
  int v62; // [rsp+88h] [rbp-70h] BYREF
  void *v63; // [rsp+90h] [rbp-68h]
  int *v64; // [rsp+98h] [rbp-60h]
  int *v65; // [rsp+A0h] [rbp-58h]
  __int64 v66; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v67; // [rsp+B8h] [rbp-40h]

  v67 = __readfsqword(0x28u);
  v40 = a2[1];
  v55 = v40 - 1;
  if ( (_DWORD)v40 == 1 )
    goto LABEL_68;
  v56 = -1;
  v6 = 1;
  for ( i = 0; ; i = v39 )
  {
    v54 = v55;
    v58 = v55;
    do
    {
      v49 = 0;
      v54 += v56;
      v52 = (_QWORD *)(*a2 + 32 * v58);
      v58 = v54;
      v7 = (__int64 *)(32LL * v54 + *a2);
      if ( v52[1] )
      {
        while ( 1 )
        {
          v8 = *(_DWORD *)(*v52 + 4 * v49);
          v9 = *a1;
          v64 = &v62;
          v62 = 0;
          LODWORD(v40) = v8;
          v63 = nullptr;
          v65 = &v62;
          v66 = 0;
          v10 = v6
              ? (*(__int64 (__fastcall **)(__int64 *))(v9 + 104))(a1)
              : (*(unsigned __int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 96))(a1, v8);
          v48 = v10;
          v11 = 0;
          if ( v10 > 0 )
            break;
LABEL_36:
          v30 = (__int64)v64;
          for ( j = 1; (int *)v30 != &v62; v30 = std::_Rb_tree_increment(v30) )
          {
            while ( 1 )
            {
              v32 = *(_QWORD *)(v30 + 40);
              v33 = j - 1;
              if ( !v6 )
                break;
              *(_DWORD *)(v32 + 12) = v33;
              ++j;
              v30 = std::_Rb_tree_increment(v30);
              if ( (int *)v30 == &v62 )
                goto LABEL_41;
            }
            *(_DWORD *)(v32 + 8) = v33;
            ++j;
          }
LABEL_41:
          v4 = (__int64)v63;
          if ( v63 )
          {
            do
            {
              sub_290AE0(*(_QWORD **)(v4 + 24));
              v34 = (void *)v4;
              v4 = *(_QWORD *)(v4 + 16);
              operator delete(v34, 0x30u);
            }
            while ( v4 );
          }
          if ( (unsigned __int64)++v49 >= v52[1] )
            goto LABEL_44;
        }
        while ( 1 )
        {
          v12 = *a1;
          if ( v6 )
          {
            v13 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v12 + 120))(a1, (unsigned int)v40, v11);
            v14 = *v7;
            v15 = v7[1];
            v16 = *v7 + 4 * v15;
            if ( *v7 == v16 )
              goto LABEL_50;
          }
          else
          {
            v13 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v12 + 112))(a1, (unsigned int)v40, v11);
            v14 = *v7;
            v15 = v7[1];
            v16 = *v7 + 4 * v15;
            if ( *v7 == v16 )
              goto LABEL_50;
          }
          v15 = v14;
          while ( (_DWORD)v13 != *(_DWORD *)v15 )
          {
            v15 += 4;
            if ( v16 == v15 )
              goto LABEL_50;
          }
          v15 -= v14;
          v4 = v15 >> 2;
          if ( v15 == -4 )
          {
LABEL_50:
            if ( under_debugger )
              BUG();
            interr(40150, v14, v15, v16, a4);
LABEL_52:
            v27 = v21;
            if ( !v21 )
              goto LABEL_53;
LABEL_63:
            v38 = v27[8];
LABEL_64:
            v29 = (int)v4 < v38;
            goto LABEL_34;
          }
          v17 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 160);
          if ( v6 )
          {
            v18 = (__int64)a1;
            v19 = (v40 << 32) | (unsigned int)v13;
            if ( v17 != interactive_graph_t__::vfunc_20 )
              goto LABEL_48;
          }
          else
          {
            v18 = (__int64)a1;
            v19 = (v13 << 32) | (unsigned int)v40;
            if ( v17 != interactive_graph_t__::vfunc_20 )
            {
LABEL_48:
              v41 = v17(v18, v19);
              goto LABEL_17;
            }
          }
          v41 = interactive_graph_t__::vfunc_20(v18, v19);
LABEL_17:
          v20 = v63;
          v21 = &v62;
          if ( v63 )
          {
            do
            {
              while ( 1 )
              {
                v22 = v20[2];
                v23 = v20[3];
                if ( (int)v4 > *((_DWORD *)v20 + 8) )
                  break;
                v21 = (int *)v20;
                v20 = (_QWORD *)v20[2];
                if ( !v22 )
                  goto LABEL_22;
              }
              v20 = (_QWORD *)v20[3];
            }
            while ( v23 );
LABEL_22:
            if ( v21 != &v62 && (int)v4 >= v21[8] )
              goto LABEL_35;
          }
          v45 = v21;
          v24 = operator new(0x30u);
          v21 = v45;
          *(_DWORD *)(v24 + 32) = v4;
          v25 = (void *)v24;
          *(_QWORD *)(v24 + 40) = 0;
          if ( v45 == &v62 )
          {
            if ( !v66 )
              goto LABEL_57;
            v27 = v65;
            v21 = nullptr;
            if ( (int)v4 <= v65[8] )
              goto LABEL_57;
          }
          else
          {
            v26 = v45[8];
            if ( (int)v4 >= v26 )
            {
              v47 = v45[8];
              if ( (int)v4 <= v26 )
                goto LABEL_53;
              if ( v65 == v21 )
                goto LABEL_52;
              v51 = (void *)v24;
              v53 = v21;
              v37 = std::_Rb_tree_increment(v21);
              v25 = v51;
              v27 = (int *)v37;
              if ( (int)v4 >= *(_DWORD *)(v37 + 32) )
                goto LABEL_57;
              v21 = v53;
              v38 = v47;
              if ( !*((_QWORD *)v53 + 3) )
              {
                v27 = v53;
                if ( !v53 )
                {
LABEL_53:
                  if ( v25 )
                  {
                    v43 = v21;
                    operator delete(v25, 0x30u);
                    v21 = v43;
                  }
                  goto LABEL_35;
                }
                goto LABEL_64;
              }
              v21 = (int *)v37;
            }
            else
            {
              v27 = v45;
              if ( v64 == v45 )
                goto LABEL_30;
              v46 = (void *)v24;
              v50 = v21;
              v28 = std::_Rb_tree_decrement(v21);
              v25 = v46;
              v27 = (int *)v28;
              if ( (int)v4 <= *(_DWORD *)(v28 + 32) )
              {
LABEL_57:
                v44 = v25;
                v36 = sub_28F800((__int64)&v61, v4);
                v25 = v44;
                v21 = (int *)v36;
                goto LABEL_30;
              }
              v21 = nullptr;
              if ( *(_QWORD *)(v28 + 24) )
              {
                v21 = v50;
                v27 = v50;
              }
            }
          }
LABEL_30:
          if ( !v27 )
            goto LABEL_53;
          if ( !v21 && v27 != &v62 )
            goto LABEL_63;
          v29 = 1;
LABEL_34:
          v42 = (int *)v25;
          std::_Rb_tree_insert_and_rebalance(v29, v25, v27, &v62);
          v21 = v42;
          ++v66;
LABEL_35:
          ++v11;
          *((_QWORD *)v21 + 5) = v41;
          if ( v11 == v48 )
            goto LABEL_36;
        }
      }
LABEL_44:
      ;
    }
    while ( v54 != i );
    if ( v56 == 1 )
      break;
LABEL_68:
    v56 = 1;
    v6 = 0;
    if ( !v55 )
      break;
    v39 = v55;
    v55 = 0;
  }
  v61 = drawable_graph_t::assign_edge_ports;
  v63 = a1;
  v64 = a3;
  sub_298EA0((__int64)a1, &v61, 0, a4);
  return v67 - __readfsqword(0x28u);
}
