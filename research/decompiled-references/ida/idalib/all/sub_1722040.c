void __fastcall sub_1722040(_QWORD *a1, _QWORD *a2, char a3, char a4, char a5)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 *v10; // rdx
  __int64 *v11; // rbx
  __int64 *v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rcx
  __int64 *v17; // rdi
  __int64 *v18; // rbp
  __int64 v19; // r15
  int v20; // eax
  char *v21; // rdi
  _QWORD *v22; // rbp
  _QWORD *v23; // r15
  _QWORD *v24; // rdi
  __int64 *v25; // rdx
  __int64 v26; // rax
  __int64 *v27; // rax
  __int64 v28; // rdx
  __int64 *v29; // rax
  __int64 *v30; // [rsp+8h] [rbp-E0h]
  char v32; // [rsp+1Ch] [rbp-CCh]
  _QWORD v33[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+40h] [rbp-A8h]
  _QWORD v35[2]; // [rsp+50h] [rbp-98h] BYREF
  int v36; // [rsp+60h] [rbp-88h]
  __int64 v37; // [rsp+64h] [rbp-84h]
  __int64 v38; // [rsp+6Ch] [rbp-7Ch]
  void *v39[2]; // [rsp+78h] [rbp-70h]
  __int64 v40; // [rsp+88h] [rbp-60h]
  char v41; // [rsp+90h] [rbp-58h]
  __int64 v42; // [rsp+98h] [rbp-50h]
  __int64 v43; // [rsp+A0h] [rbp-48h]
  __int64 *v44; // [rsp+A8h] [rbp-40h]

  v8 = operator new(0x28u);
  *(_QWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 24) = 0;
  *(_DWORD *)(v8 + 32) = 0;
  std::__detail::_List_node_base::_M_hook(
    (std::__detail::_List_node_base *)v8,
    (std::__detail::_List_node_base *)(a2 + 29));
  ++a2[31];
  v9 = sub_145EC70((__int64)a1, a3);
  v11 = v10;
  v12 = (__int64 *)v9;
  v13 = sub_145F720((__int64)a1, a3);
  v16 = v33;
  v30 = (__int64 *)v13;
  if ( v12 != (__int64 *)v13 )
  {
    v32 = a5;
    while ( 1 )
    {
      sub_1423DB0((__int64)v33, a1, *v12, (__int64)v16, v14, v15);
      if ( a4 )
      {
        if ( !v34 )
        {
          v17 = (__int64 *)(v33[0] & 0xFFFFFFFFFFFFFFF8LL);
          if ( (v33[0] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          {
            v18 = nullptr;
            goto LABEL_8;
          }
LABEL_28:
          v29 = sub_13F1C60(v17);
          v18 = v29;
          if ( !v29 )
            goto LABEL_8;
          v18 = (__int64 *)v29[2];
          if ( !v18 )
          {
LABEL_30:
            v18 = nullptr;
LABEL_8:
            v19 = *v12;
            v20 = sub_1704C30((_WORD *)(*(_QWORD *)(*v12 + 16) + 16LL), **(unsigned int **)(*v12 + 16), a1[7], v32);
            v35[1] = v19;
            v21 = (char *)a2[1];
            v36 = v20;
            v37 = 0x200000000LL;
            v35[0] = 0;
            v38 = 501;
            *(_OWORD *)v39 = 0;
            v40 = 0;
            v41 = v41 & 0x80 | 0x40;
            v42 = 0;
            v43 = 0;
            v44 = v18;
            if ( v21 == (char *)a2[2] )
            {
              sub_1706840((__int64)a2, v21, (__int64)v35);
            }
            else
            {
              sub_17048E0((__int64)v21, (__int64)v35);
              a2[1] += 96LL;
            }
            v22 = v39[1];
            v23 = v39[0];
            if ( v39[1] != v39[0] )
            {
              do
              {
                while ( 1 )
                {
                  v24 = (_QWORD *)v23[3];
                  if ( v24 == v23 + 5 )
                    break;
                  operator delete(v24);
                  v23 += 8;
                  if ( v23 == v22 )
                    goto LABEL_13;
                }
                v23 += 8;
              }
              while ( v22 != v23 );
LABEL_13:
              v23 = v39[0];
            }
            if ( v23 )
              operator delete(v23);
            goto LABEL_16;
          }
          goto LABEL_7;
        }
      }
      else
      {
        v17 = (__int64 *)(v33[0] & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v33[0] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          if ( !v34 )
            goto LABEL_28;
        }
        else if ( !v34 )
        {
          goto LABEL_16;
        }
      }
      v18 = *(__int64 **)(*(_QWORD *)(v33[1] + 8 * v34 - 8) + 16LL);
      if ( !v18 )
        goto LABEL_30;
LABEL_7:
      if ( (*((_BYTE *)v18 + 37) & 4) == 0 )
        goto LABEL_8;
LABEL_16:
      v25 = v12 + 2;
      if ( v12 + 2 == v11 )
      {
        v12 = v11;
        if ( v30 == v11 )
          break;
      }
      else
      {
        v26 = v12[2];
        if ( v26 == -8192 || v26 == -4096 )
        {
          v27 = v12 + 4;
          do
          {
            v12 = v27;
            if ( v11 == v27 )
              break;
            v28 = *v27;
            v27 += 2;
          }
          while ( v28 == -8192 || v28 == -4096 );
          if ( v30 == v12 )
            break;
        }
        else
        {
          v12 += 2;
          if ( v30 == v25 )
            break;
        }
      }
    }
  }
  sub_16FF8C0((__int64)(a2 + 29), a2[30]);
}
