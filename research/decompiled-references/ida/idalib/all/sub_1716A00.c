void __fastcall sub_1716A00(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  _QWORD *v28; // rbx
  _QWORD *v29; // r13
  _QWORD *v30; // rdi
  _QWORD *v31; // rbx
  _QWORD *v32; // r13
  _QWORD *v33; // rdi
  __int64 v34; // rdx
  unsigned __int64 v35; // [rsp+8h] [rbp-110h]
  _QWORD v37[3]; // [rsp+20h] [rbp-F8h] BYREF
  int v38; // [rsp+38h] [rbp-E0h]
  int v39; // [rsp+40h] [rbp-D8h]
  void *v40[2]; // [rsp+48h] [rbp-D0h]
  __int64 v41; // [rsp+58h] [rbp-C0h]
  char v42; // [rsp+60h] [rbp-B8h]
  unsigned __int64 v43; // [rsp+68h] [rbp-B0h]
  __int64 v44; // [rsp+70h] [rbp-A8h]
  __int64 v45; // [rsp+78h] [rbp-A0h]
  _BYTE v46[40]; // [rsp+80h] [rbp-98h] BYREF
  void *v47; // [rsp+A8h] [rbp-70h]
  _QWORD *v48; // [rsp+B0h] [rbp-68h]

  v35 = *(_QWORD *)(a5 + 88);
  if ( (*(_BYTE *)(a2[290] + 1LL) & 8) != 0 && !*(_QWORD *)(a5 + 88) )
  {
    v35 = 0;
    if ( *(_DWORD *)(a5 + 16) == *(_DWORD *)(a5 + 12) )
    {
      v34 = a3 + 64;
      if ( !a3 )
        v34 = 0;
      v35 = sub_16FF440(a2, a4, v34, 0, a5, a6);
    }
  }
  v9 = operator new(0x28u);
  *(_QWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 24) = 0;
  *(_DWORD *)(v9 + 32) = 0;
  std::__detail::_List_node_base::_M_hook(
    (std::__detail::_List_node_base *)v9,
    (std::__detail::_List_node_base *)(a1 + 29));
  ++a1[31];
  sub_B7E870(a3, (__int64)(a1 + 29), v10, v11, v12, v13);
  v18 = sub_B7E870(a3, (__int64)(a1 + 29), v14, v15, v16, v17);
  if ( !v18 )
    v18 = (_QWORD *)a3;
  v19 = sub_B8E970((__int64)(v18 + 8));
  v23 = v19;
  if ( v19 )
  {
    if ( (*(_BYTE *)(v19 + 28) & 0x7F) == 0x21 )
    {
LABEL_11:
      if ( *(_BYTE *)(a5 + 20) )
      {
        v25 = *(_QWORD **)a5;
        v26 = *(_QWORD *)a5 + 8LL * *(unsigned int *)(a5 + 12);
        if ( *(_QWORD *)a5 != v26 )
        {
          do
          {
            if ( *v25 == v23 )
              goto LABEL_18;
            ++v25;
          }
          while ( (_QWORD *)v26 != v25 );
        }
      }
      else if ( sub_2236570(a5, v23) )
      {
        goto LABEL_18;
      }
      *(_OWORD *)v40 = 0;
      v37[0] = v23;
      v38 = 0;
      v42 = v42 & 0x80 | 0x40;
      v37[2] = 7;
      v43 = v35;
      v39 = 0;
      v41 = 0;
      v44 = 0;
      v45 = 0;
      sub_15A3440((unsigned int *)v37, 1, v26, v20, v21, v22);
      sub_17048E0((__int64)v46, (__int64)v37);
      sub_1715C60((__int64)a1, (__int64)v46, a4, 0, 0, 0);
      v28 = v48;
      v29 = v47;
      if ( v48 != v47 )
      {
        do
        {
          while ( 1 )
          {
            v30 = (_QWORD *)v29[3];
            if ( v30 == v29 + 5 )
              break;
            operator delete(v30);
            v29 += 8;
            if ( v28 == v29 )
              goto LABEL_24;
          }
          v29 += 8;
        }
        while ( v28 != v29 );
LABEL_24:
        v29 = v47;
      }
      if ( v29 )
        operator delete(v29);
      v31 = v40[1];
      v32 = v40[0];
      if ( v40[1] != v40[0] )
      {
        do
        {
          while ( 1 )
          {
            v33 = (_QWORD *)v32[3];
            if ( v33 == v32 + 5 )
              break;
            operator delete(v33);
            v32 += 8;
            if ( v31 == v32 )
              goto LABEL_30;
          }
          v32 += 8;
        }
        while ( v31 != v32 );
LABEL_30:
        v32 = v40[0];
      }
      if ( v32 )
        operator delete(v32);
LABEL_18:
      while ( 1 )
      {
        v27 = *(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v23 = v27;
        if ( !v27 )
          break;
        if ( (*(_BYTE *)(v27 + 28) & 0x7F) == 0x21 )
          goto LABEL_11;
      }
    }
    else
    {
      while ( 1 )
      {
        v24 = *(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v23 = v24;
        if ( !v24 )
          break;
        if ( (*(_BYTE *)(v24 + 28) & 0x7F) == 0x21 )
          goto LABEL_11;
      }
    }
  }
  sub_16FF8C0((__int64)(a1 + 29), a1[30]);
}
