__int64 __fastcall sub_54BB0(_QWORD *a1, __int64 a2, unsigned __int64 a3, const char *a4, _BYTE *a5, __int64 a6)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 *v11; // r15
  unsigned int v12; // r14d
  int v13; // ebx
  __int64 v14; // rdx
  _QWORD *v15; // r11
  _QWORD *v16; // rcx
  int v17; // eax
  int v18; // eax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r10
  void *v26; // r11
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 *v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  int v32; // eax
  unsigned int v33; // eax
  __int64 v37; // [rsp+18h] [rbp-60h]
  _QWORD *v38; // [rsp+18h] [rbp-60h]
  const char *v39; // [rsp+18h] [rbp-60h]
  __int64 v40; // [rsp+18h] [rbp-60h]
  __int64 v41; // [rsp+18h] [rbp-60h]
  _QWORD *v42; // [rsp+20h] [rbp-58h]
  _QWORD *v43; // [rsp+20h] [rbp-58h]
  void *v44; // [rsp+20h] [rbp-58h]
  void *v45; // [rsp+20h] [rbp-58h]
  _QWORD *v46; // [rsp+28h] [rbp-50h]
  _QWORD *v47; // [rsp+28h] [rbp-50h]
  __int64 v48; // [rsp+28h] [rbp-50h]
  char v49; // [rsp+37h] [rbp-41h] BYREF
  unsigned __int64 v50; // [rsp+38h] [rbp-40h]

  v8 = 0;
  v50 = __readfsqword(0x28u);
  v49 = 1;
  v9 = sub_4A4B0((__int64)a1, a2, &v49, 0);
  if ( v9 )
  {
    v10 = *(_QWORD *)(a2 + 288);
    v11 = (__int64 *)v9;
    if ( a3 && a3 >= v10 && v10 + 96LL * *(_QWORD *)(a2 + 296) >= a3 )
    {
      v13 = 1;
      v30 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(a3 - v10) >> 5);
      v31 = *(_QWORD *)(a2 + 312);
      v12 = v30;
      if ( v30 >= v31 )
      {
        v12 = v30 - v31;
        v13 = 2;
      }
    }
    else
    {
      v12 = 0;
      v13 = 0;
    }
    v14 = a1[5];
    v15 = a1 + 4;
    v16 = a1 + 4;
    if ( !v14 )
      goto LABEL_28;
    do
    {
      while ( 1 )
      {
        v17 = *(_DWORD *)(v14 + 32);
        if ( v17 < v13 || v17 <= v13 && *(_DWORD *)(v14 + 36) < v12 )
          break;
        if ( v17 == v13 && *(_DWORD *)(v14 + 36) == v12 )
        {
          v46 = v16;
          v42 = v15;
          v37 = v14;
          v20 = strcmp(*(const char **)(v14 + 40), a4);
          v14 = v37;
          v15 = v42;
          v16 = v46;
          if ( v20 < 0 )
            break;
        }
        v16 = (_QWORD *)v14;
        v14 = *(_QWORD *)(v14 + 16);
        if ( !v14 )
          goto LABEL_14;
      }
      v14 = *(_QWORD *)(v14 + 24);
    }
    while ( v14 );
LABEL_14:
    if ( v15 == v16
      || (v18 = *((_DWORD *)v16 + 8), v18 > v13)
      || v18 >= v13 && v12 < *((_DWORD *)v16 + 9)
      || v18 == v13
      && *((_DWORD *)v16 + 9) == v12
      && (v43 = v15, v38 = v16, v21 = strcmp(a4, (const char *)v16[5]), v16 = v38, v15 = v43, v21 < 0) )
    {
LABEL_28:
      v39 = (const char *)v16;
      v47 = v15;
      v22 = operator new(0x38u);
      *(_DWORD *)(v22 + 32) = v13;
      *(_DWORD *)(v22 + 36) = v12;
      *(_QWORD *)(v22 + 48) = -1;
      *(_QWORD *)(v22 + 40) = a4;
      v44 = (void *)v22;
      v23 = sub_54980(a1 + 3, v39, (const char **)(v22 + 32));
      v25 = (__int64)v44;
      v40 = v23;
      if ( v24 )
      {
        v26 = v47;
        if ( v47 == (_QWORD *)v24 || v23 )
        {
          v27 = 1;
        }
        else
        {
          v32 = *(_DWORD *)(v24 + 32);
          v27 = 1;
          if ( v13 >= v32 && (v13 > v32 || v12 >= *(_DWORD *)(v24 + 36)) )
          {
            v27 = 0;
            if ( v32 == v13 && *(_DWORD *)(v24 + 36) == v12 )
            {
              v48 = (__int64)v44;
              v45 = v26;
              v41 = v24;
              v33 = strcmp(a4, *(const char **)(v24 + 40));
              v24 = v41;
              v26 = v45;
              v25 = v48;
              v27 = v33 >> 31;
            }
          }
        }
        v40 = v25;
        std::_Rb_tree_insert_and_rebalance(v27, v25, v24, v26);
        ++a1[8];
      }
      else if ( v44 )
      {
        operator delete(v44, 0x38u);
      }
      v8 = *v11;
      if ( !v49 )
        v8 = v11[1];
      v28 = 4;
      if ( *(_BYTE *)(a2 + 617) )
        v28 = 8;
      set_segm_end(*v11, *(_QWORD *)(a2 + 456) & (v8 + v28 * a6), 0);
      v29 = (__int64 *)sub_49020(a3, (_QWORD *)a2);
      if ( (unsigned __int64)v29[1] > 1 )
        sub_428B0(v8, *v29, 0x400u, a4);
      *(_QWORD *)(v40 + 48) = v8;
      if ( a5 )
        *a5 = 1;
    }
    else
    {
      if ( a5 )
        *a5 = 0;
      return v16[6];
    }
  }
  return v8;
}
