__int64 __fastcall sub_3FC7A0(_QWORD *a1, int *a2, unsigned __int64 a3)
{
  int v7; // eax
  int v8; // ebp
  unsigned __int64 v9; // rbp
  __int64 v10; // rdx
  unsigned __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int16 *v14; // r14
  int v15; // eax
  unsigned __int64 v16; // r13
  unsigned __int8 *v17; // rdx
  int v18; // ecx
  unsigned __int64 addr; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // r14
  _QWORD *v23; // r15
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD *v27; // r10
  unsigned __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rax
  _BOOL8 v31; // rdi
  unsigned __int64 v32; // rdx
  __int64 (__fastcall *v33)(unsigned __int64, _QWORD, _QWORD); // rax
  __int16 v34; // ax
  unsigned __int64 v35; // rbp
  unsigned __int64 v36; // rax
  void *v37; // rdi
  __int64 v38; // rdx
  int v39; // esi
  char v40; // cl
  __int64 v41; // rsi
  __int64 v42; // rax
  bool v43; // zf
  _QWORD *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned __int64 v49; // [rsp+0h] [rbp-68h]
  __int64 v50; // [rsp+8h] [rbp-60h]
  int v51; // [rsp+10h] [rbp-58h]
  int v52; // [rsp+14h] [rbp-54h]
  _QWORD *v53; // [rsp+18h] [rbp-50h]
  _QWORD *v54; // [rsp+18h] [rbp-50h]
  _QWORD *v55; // [rsp+18h] [rbp-50h]
  _QWORD *v56; // [rsp+18h] [rbp-50h]
  unsigned __int64 v57[8]; // [rsp+28h] [rbp-40h] BYREF

  v57[0] = a3;
  if ( a3 != -1 && *(_QWORD *)(*a1 + 624LL) )
  {
    v7 = nbits(a3);
    v8 = v7 + 14;
    if ( v7 + 7 >= 0 )
      v8 = v7 + 7;
    v51 = v7 + 7;
    v52 = v8 >> 3;
    v49 = v8 >> 3;
    v9 = (*(_QWORD *)(*(_QWORD *)(*a1 + 624LL) + 32LL) & 0x4000LL) == 0 ? 1024LL : 256LL;
    v10 = a3 % (v9 / v49);
    v11 = a3 - v10;
    sub_3FC650((__int64)a1, 0, v10, v49);
    if ( rangeset_t_find_range(a1 + 102, v11) )
    {
LABEL_6:
      v14 = (__int16 *)sub_3FC460(a1, v57);
      if ( v14 )
      {
LABEL_7:
        if ( a2 )
        {
          v15 = -1;
          if ( v14[12] > 0 && *((_QWORD *)v14 + 1) >= v49 + v49 * v57[0] )
          {
            v16 = *(_QWORD *)v14 + v49 * v57[0];
            if ( (unsigned __int8)sub_631C90(*a1, 3, 64) )
            {
              if ( v49 )
              {
                v17 = (unsigned __int8 *)v16;
                v15 = 0;
                do
                {
                  v15 = *v17 | (v15 << 8);
                  v18 = 1 - v16 + (_DWORD)v17++;
                }
                while ( v18 < v49 );
              }
              else
              {
                v15 = 0;
              }
            }
            else
            {
              v38 = 0;
              v15 = 0;
              if ( v51 > 7 )
              {
                do
                {
                  v39 = *(unsigned __int8 *)(v16 + v38);
                  v40 = 8 * v38++;
                  v15 |= v39 << v40;
                }
                while ( v38 != v52 );
              }
            }
          }
          *a2 = v15;
        }
        return (unsigned int)v14[12];
      }
      v21 = (_QWORD *)a1[109];
      v22 = a1 + 108;
      if ( !v21 )
        goto LABEL_60;
      v23 = a1 + 108;
      do
      {
        if ( v21[4] >= v11 )
        {
          v23 = v21;
          v21 = (_QWORD *)v21[2];
        }
        else
        {
          v21 = (_QWORD *)v21[3];
        }
      }
      while ( v21 );
      if ( v22 == v23 )
      {
LABEL_60:
        v50 = (__int64)(a1 + 107);
        v42 = operator new(0x48u);
        v43 = a1[112] == 0;
        *(_QWORD *)(v42 + 32) = v11;
        v27 = (_QWORD *)v42;
        *(_DWORD *)(v42 + 64) = 0;
        *(_QWORD *)(v42 + 40) = 0;
        *(_OWORD *)(v42 + 48) = 0;
        if ( !v43 )
        {
          v29 = a1[111];
          v23 = nullptr;
          if ( *(_QWORD *)(v29 + 32) < v11 )
          {
LABEL_35:
            if ( v29 )
            {
              if ( (_QWORD *)v29 == v22 || v23 )
              {
                v31 = 1;
LABEL_39:
                v54 = v27;
                std::_Rb_tree_insert_and_rebalance(v31, v27, v29, a1 + 108);
                v23 = v54;
                ++*(_QWORD *)(v50 + 40);
                goto LABEL_40;
              }
              v28 = *(_QWORD *)(v29 + 32);
LABEL_73:
              v31 = v11 < v28;
              goto LABEL_39;
            }
LABEL_58:
            if ( v27 )
              operator delete(v27, 0x48u);
LABEL_40:
            v32 = v23[6];
            v14 = (__int16 *)(v23 + 5);
            if ( v32 < v9 )
            {
              v41 = v23[5];
              if ( v23[7] < v9 )
              {
                v47 = qvector_reserve(v23 + 5, v41, v9, 1);
                v32 = v23[6];
                v23[5] = v47;
                v41 = v47;
              }
              memset((void *)(v41 + v32), 0, v9 - v32);
              v23[6] = v9;
            }
            else if ( v9 != v32 )
            {
              v23[6] = v9;
            }
            *((_WORD *)v23 + 33) = v9 / v49;
            v33 = (__int64 (__fastcall *)(unsigned __int64, _QWORD, _QWORD))a1[98];
            if ( !v33 )
            {
              if ( !under_debugger )
                interr(1325);
              BUG();
            }
            v34 = v33(v11, v23[5], (unsigned int)v9);
            *((_WORD *)v23 + 32) = v34;
            if ( v34 <= 0 )
            {
              v37 = (void *)v23[5];
              if ( v37 )
              {
                v23[6] = 0;
                qfree(v37);
                v23[5] = 0;
                v23[7] = 0;
              }
              goto LABEL_49;
            }
            v35 = v34;
            v36 = v23[6];
            if ( v36 < v35 )
            {
              v46 = v23[5];
              if ( v23[7] < v35 )
              {
                v48 = qvector_reserve(v23 + 5, v46, v35, 1);
                v23[5] = v48;
                v46 = v48;
                v36 = v23[6];
              }
              memset((void *)(v46 + v36), 0, v35 - v36);
            }
            else if ( v35 == v36 )
            {
LABEL_48:
              *((_WORD *)v23 + 33) = v36 / v49;
              *((_WORD *)v23 + 32) = 1;
LABEL_49:
              v57[0] -= v11;
              goto LABEL_7;
            }
            v23[6] = v35;
            v36 = v35;
            goto LABEL_48;
          }
        }
      }
      else
      {
        if ( v11 >= v23[4] )
          goto LABEL_40;
        v50 = (__int64)(a1 + 107);
        v24 = operator new(0x48u);
        *(_QWORD *)(v24 + 32) = v11;
        v27 = (_QWORD *)v24;
        *(_DWORD *)(v24 + 64) = 0;
        *(_QWORD *)(v24 + 40) = 0;
        *(_OWORD *)(v24 + 48) = 0;
        v28 = v23[4];
        if ( v11 >= v28 )
        {
          if ( v28 >= v11 )
            goto LABEL_58;
          if ( (_QWORD *)a1[111] != v23 )
          {
            v56 = (_QWORD *)v24;
            v45 = std::_Rb_tree_increment(v23, v28, v25, v26);
            v27 = v56;
            v29 = v45;
            if ( v11 >= *(_QWORD *)(v45 + 32) )
              goto LABEL_62;
            if ( v23[3] )
            {
              v23 = (_QWORD *)v45;
              goto LABEL_35;
            }
          }
          v29 = (__int64)v23;
          if ( v23 )
            goto LABEL_73;
          goto LABEL_58;
        }
        v29 = (__int64)v23;
        if ( (_QWORD *)a1[110] == v23 )
          goto LABEL_35;
        v53 = (_QWORD *)v24;
        v30 = std::_Rb_tree_decrement(v23);
        v27 = v53;
        v29 = v30;
        if ( *(_QWORD *)(v30 + 32) < v11 )
        {
          if ( *(_QWORD *)(v30 + 24) )
            v29 = (__int64)v23;
          else
            v23 = nullptr;
          goto LABEL_35;
        }
      }
LABEL_62:
      v55 = v27;
      v44 = sub_3FBA80(v50, v11);
      v27 = v55;
      v23 = v44;
      goto LABEL_35;
    }
    sub_3FC650((__int64)a1, 0, v12, v13);
    addr = rangeset_t_next_addr(a1 + 102, v11);
    if ( a3 >= addr && v11 < addr )
    {
      v11 = addr;
      v9 -= v49 * (addr + a3 % (v9 / v49) - a3);
      goto LABEL_6;
    }
  }
  if ( a2 )
    *a2 = -1;
  return 0;
}
