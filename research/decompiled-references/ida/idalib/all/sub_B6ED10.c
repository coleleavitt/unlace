__int64 __fastcall sub_B6ED10(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // r14
  std::__detail::_List_node_base *v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 *v12; // r12
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // r9
  _QWORD *v17; // r15
  __int64 v18; // rax
  _QWORD *v19; // rdi
  __int64 v20; // r10
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  _DWORD *v24; // rax
  __int64 v25; // rdi
  __int64 *v26; // rdi
  __int64 *v28; // [rsp+8h] [rbp-60h]
  __int64 v29; // [rsp+10h] [rbp-58h]
  __int64 *v30; // [rsp+18h] [rbp-50h]
  __int64 v31; // [rsp+20h] [rbp-48h]
  __int64 v32; // [rsp+28h] [rbp-40h]

  v5 = (__int64 *)(a1 + 8);
  v7 = *(std::__detail::_List_node_base **)(a1 + 8);
  if ( (std::__detail::_List_node_base *)(a1 + 8) != v7 )
  {
    while ( 1 )
    {
      v8 = *((_QWORD *)v7 + 2);
      v28 = *(__int64 **)v7;
      v29 = v8 + 24LL * *((unsigned int *)v7 + 6);
      if ( v8 != v29 )
        break;
LABEL_37:
      v7 = (std::__detail::_List_node_base *)v28;
      if ( v5 == v28 )
        return 1;
    }
    while ( 1 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)v8 + 12LL) & 1) != 0 )
      {
        v9 = **(_QWORD **)(*(_QWORD *)v8 + 16LL);
        v10 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(v10 + 8) & 0xF) != 0 )
          v10 = sub_F64F00(v9);
        v11 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(*v11 + 16LL) != 48 )
          goto LABEL_37;
        v30 = (__int64 *)sub_F60F10(*v11, a2, a3, a4, a5);
        if ( !v30 )
          goto LABEL_37;
        v12 = *(__int64 **)(a1 + 8);
        if ( v5 != v12 )
          break;
      }
LABEL_4:
      v8 += 24;
      if ( v29 == v8 )
        goto LABEL_37;
    }
    while ( 1 )
    {
      a3 = v12[2];
      v13 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)(a3 + 24LL * *((unsigned int *)v12 + 6) - 24) + 16LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v13 + 8) & 0xF) != 0 )
        v13 = sub_F64F00(**(_QWORD **)(*(_QWORD *)(a3 + 24LL * *((unsigned int *)v12 + 6) - 24) + 16LL));
      v14 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(*v14 + 16LL) != 48 )
        goto LABEL_4;
      v15 = sub_F60F10(*v14, a2, a3, a4, a5);
      v17 = (_QWORD *)v15;
      if ( !v15 )
        goto LABEL_4;
      a5 = *(_QWORD *)(v15 + 104);
      v18 = *(_QWORD *)(a5 + 96);
      a3 = v18 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v18 & 1) == 0 )
      {
        v19 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v18 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          if ( (v18 & 2) == 0 )
            goto LABEL_18;
          v20 = v19[2295];
          v21 = a5 & 0xFFFFFFFFFFFFFFFBLL;
          if ( v20 )
          {
            a4 = v19[294];
            v19[304] += 24LL;
            v22 = (a4 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v19[295] >= v22 + 24 && a4 )
            {
              v19[294] = v22 + 24;
              v23 = (a4 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              a2 = 24;
              v32 = v20;
              v31 = a5;
              v23 = sub_986170((__int64)(v19 + 294), 24, 24, 3, a5, v16);
              v20 = v32;
              a5 = v31;
              v22 = v23 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)v23 = v20;
            v21 = v22 | 4;
            *(_DWORD *)(v23 + 8) = 0;
            *(_QWORD *)(v23 + 16) = a5;
          }
          a3 = v21 & 0xFFFFFFFFFFFFFFFELL;
          v18 = a3 | 1;
          *(_QWORD *)(a5 + 96) = a3 | 1;
        }
      }
      if ( a3 )
      {
        a3 &= 4u;
        if ( (_DWORD)a3 )
        {
          v24 = (_DWORD *)(v18 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v24 )
          {
            v25 = *(_QWORD *)v24;
            a3 = *(unsigned int *)(*(_QWORD *)v24 + 12LL);
            if ( v24[2] != (_DWORD)a3 )
            {
              v24[2] = a3;
              a2 = a5;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 152LL))(v25, a5);
            }
          }
        }
      }
LABEL_18:
      if ( *(_DWORD *)(v17[16] + 20LL) )
      {
        a2 = (__int64)v30;
        if ( (unsigned __int8)sub_B6E8F0(v17, v30) )
        {
          --*(_QWORD *)(a1 + 24);
          std::__detail::_List_node_base::_M_unhook(v7);
          v26 = *((__int64 **)v7 + 2);
          if ( v26 != (__int64 *)((char *)v7 + 32) )
            free(v26);
          operator delete(v7);
          goto LABEL_37;
        }
      }
      v12 = (__int64 *)*v12;
      if ( v5 == v12 )
        goto LABEL_4;
    }
  }
  return 1;
}
