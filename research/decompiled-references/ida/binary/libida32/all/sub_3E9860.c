__int64 __fastcall sub_3E9860(_QWORD *a1, int *a2, unsigned int a3)
{
  int v6; // eax
  int v7; // ebp
  int v8; // eax
  unsigned __int64 v9; // rbp
  unsigned int v10; // r13d
  __int64 v11; // r14
  int v12; // eax
  unsigned __int64 v13; // rdx
  unsigned __int8 *v14; // r13
  unsigned __int8 *v15; // rdx
  int v16; // ecx
  unsigned int addr; // eax
  __int64 v19; // rax
  _QWORD *v20; // r15
  __int64 v21; // rax
  _QWORD *v22; // r10
  unsigned int v23; // esi
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 (__fastcall *v27)(_QWORD, _QWORD, _QWORD); // rax
  __int16 v28; // ax
  unsigned __int64 v29; // rbp
  unsigned __int64 v30; // rax
  void *v31; // rdi
  __int64 v32; // rdx
  int v33; // esi
  char v34; // cl
  __int64 v35; // rsi
  __int64 v36; // rax
  bool v37; // zf
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned __int64 v43; // [rsp+8h] [rbp-60h]
  __int64 v44; // [rsp+10h] [rbp-58h]
  int v45; // [rsp+18h] [rbp-50h]
  int v46; // [rsp+1Ch] [rbp-4Ch]
  _QWORD *v47; // [rsp+20h] [rbp-48h]
  _QWORD *v48; // [rsp+20h] [rbp-48h]
  _QWORD *v49; // [rsp+20h] [rbp-48h]
  _QWORD *v50; // [rsp+20h] [rbp-48h]
  unsigned int v51[15]; // [rsp+2Ch] [rbp-3Ch] BYREF

  v51[0] = a3;
  if ( a3 != -1 && *(_QWORD *)(*a1 + 536LL) )
  {
    v6 = nbits(a3);
    v7 = v6 + 14;
    v8 = v6 + 7;
    if ( v8 >= 0 )
      v7 = v8;
    v45 = v8;
    v46 = v7 >> 3;
    v43 = v7 >> 3;
    v9 = (*(_QWORD *)(*(_QWORD *)(*a1 + 536LL) + 32LL) & 0x4000LL) == 0 ? 1024LL : 256LL;
    v10 = a3 - a3 % (v9 / v43);
    sub_3E9710((__int64)a1, 0);
    if ( rangeset_t_find_range(a1 + 101, v10) )
    {
LABEL_6:
      v11 = sub_3E9520(a1, v51);
      if ( v11 )
      {
LABEL_7:
        if ( a2 )
        {
          v12 = -1;
          if ( *(__int16 *)(v11 + 24) > 0 )
          {
            v13 = v43 * v51[0];
            if ( *(_QWORD *)(v11 + 8) >= v43 + v13 )
            {
              v14 = (unsigned __int8 *)(*(_QWORD *)v11 + v13);
              if ( (unsigned __int8)sub_615160(*a1, 3, 64) )
              {
                if ( v43 )
                {
                  v15 = v14;
                  v12 = 0;
                  do
                  {
                    v12 = *v15 | (v12 << 8);
                    v16 = 1 - (_DWORD)v14 + (_DWORD)v15++;
                  }
                  while ( v16 < v43 );
                }
                else
                {
                  v12 = 0;
                }
              }
              else
              {
                v32 = 0;
                v12 = 0;
                if ( v45 > 7 )
                {
                  do
                  {
                    v33 = v14[v32];
                    v34 = 8 * v32++;
                    v12 |= v33 << v34;
                  }
                  while ( v32 != v46 );
                }
              }
            }
          }
          *a2 = v12;
        }
        return (unsigned int)*(__int16 *)(v11 + 24);
      }
      v19 = a1[108];
      if ( !v19 )
        goto LABEL_57;
      v20 = a1 + 107;
      do
      {
        if ( *(_DWORD *)(v19 + 32) >= v10 )
        {
          v20 = (_QWORD *)v19;
          v19 = *(_QWORD *)(v19 + 16);
        }
        else
        {
          v19 = *(_QWORD *)(v19 + 24);
        }
      }
      while ( v19 );
      if ( a1 + 107 == v20 )
      {
LABEL_57:
        v44 = (__int64)(a1 + 106);
        v36 = operator new(0x48u);
        v37 = a1[111] == 0;
        *(_DWORD *)(v36 + 32) = v10;
        v22 = (_QWORD *)v36;
        *(_DWORD *)(v36 + 64) = 0;
        *(_QWORD *)(v36 + 40) = 0;
        *(_OWORD *)(v36 + 48) = 0;
        if ( !v37 )
        {
          v24 = a1[110];
          v20 = nullptr;
          if ( *(_DWORD *)(v24 + 32) < v10 )
          {
LABEL_35:
            if ( v24 )
            {
LABEL_36:
              v48 = v22;
              std::_Rb_tree_insert_and_rebalance();
              v20 = v48;
              ++*(_QWORD *)(v44 + 40);
              goto LABEL_37;
            }
LABEL_55:
            if ( v22 )
              operator delete(v22, 0x48u);
LABEL_37:
            v26 = v20[6];
            v11 = (__int64)(v20 + 5);
            if ( v26 < v9 )
            {
              v35 = v20[5];
              if ( v20[7] < v9 )
              {
                v41 = qvector_reserve(v20 + 5, v35, v9, 1);
                v26 = v20[6];
                v20[5] = v41;
                v35 = v41;
              }
              memset((void *)(v35 + v26), 0, v9 - v26);
              v20[6] = v9;
            }
            else if ( v9 != v26 )
            {
              v20[6] = v9;
            }
            *((_WORD *)v20 + 33) = v9 / v43;
            v27 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))a1[97];
            if ( !v27 )
            {
              if ( !under_debugger )
                interr(1325);
              BUG();
            }
            v28 = v27(v10, v20[5], (unsigned int)v9);
            *((_WORD *)v20 + 32) = v28;
            if ( v28 <= 0 )
            {
              v31 = (void *)v20[5];
              if ( v31 )
              {
                v20[6] = 0;
                qfree(v31);
                v20[5] = 0;
                v20[7] = 0;
              }
              goto LABEL_46;
            }
            v29 = v28;
            v30 = v20[6];
            if ( v30 < v29 )
            {
              v40 = v20[5];
              if ( v20[7] < v29 )
              {
                v42 = qvector_reserve(v20 + 5, v40, v29, 1);
                v20[5] = v42;
                v40 = v42;
                v30 = v20[6];
              }
              memset((void *)(v40 + v30), 0, v29 - v30);
            }
            else if ( v29 == v30 )
            {
LABEL_45:
              *((_WORD *)v20 + 33) = v30 / v43;
              *((_WORD *)v20 + 32) = 1;
LABEL_46:
              v51[0] -= v10;
              goto LABEL_7;
            }
            v20[6] = v29;
            v30 = v29;
            goto LABEL_45;
          }
        }
      }
      else
      {
        if ( v10 >= *((_DWORD *)v20 + 8) )
          goto LABEL_37;
        v44 = (__int64)(a1 + 106);
        v21 = operator new(0x48u);
        *(_DWORD *)(v21 + 32) = v10;
        v22 = (_QWORD *)v21;
        *(_DWORD *)(v21 + 64) = 0;
        *(_QWORD *)(v21 + 40) = 0;
        *(_OWORD *)(v21 + 48) = 0;
        v23 = *((_DWORD *)v20 + 8);
        if ( v10 >= v23 )
        {
          if ( v23 >= v10 )
            goto LABEL_55;
          if ( (_QWORD *)a1[110] != v20 )
          {
            v50 = (_QWORD *)v21;
            v39 = std::_Rb_tree_increment();
            v22 = v50;
            v24 = v39;
            if ( v10 >= *(_DWORD *)(v39 + 32) )
              goto LABEL_59;
            if ( v20[3] )
            {
              v20 = (_QWORD *)v39;
              goto LABEL_35;
            }
          }
          if ( v20 )
            goto LABEL_36;
          goto LABEL_55;
        }
        v24 = (__int64)v20;
        if ( (_QWORD *)a1[109] == v20 )
          goto LABEL_35;
        v47 = (_QWORD *)v21;
        v25 = std::_Rb_tree_decrement();
        v22 = v47;
        v24 = v25;
        if ( *(_DWORD *)(v25 + 32) < v10 )
        {
          if ( *(_QWORD *)(v25 + 24) )
            v24 = (__int64)v20;
          else
            v20 = nullptr;
          goto LABEL_35;
        }
      }
LABEL_59:
      v49 = v22;
      v38 = sub_3E8B40(v44, v10);
      v22 = v49;
      v20 = (_QWORD *)v38;
      goto LABEL_35;
    }
    sub_3E9710((__int64)a1, 0);
    addr = rangeset_t_next_addr(a1 + 101, v10);
    if ( a3 >= addr && v10 < addr )
    {
      v10 = addr;
      v9 -= v43 * (a3 % (v9 / v43) - a3 + addr);
      goto LABEL_6;
    }
  }
  if ( a2 )
    *a2 = -1;
  return 0;
}

