__int64 __fastcall sub_364470(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v6; // r13
  unsigned __int64 v7; // rbp
  __int64 (__fastcall *v8)(__int64); // rax
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rsi
  _QWORD *v15; // rax
  _QWORD *v16; // r10
  __int64 v17; // r8
  _QWORD *v18; // rdx
  __int64 v19; // rdi
  __int64 v21; // rbp
  __int64 *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // [rsp+0h] [rbp-58h]
  int v26; // [rsp+8h] [rbp-50h]
  __int64 v27; // [rsp+8h] [rbp-50h]
  __int64 v28; // [rsp+8h] [rbp-50h]
  unsigned int v29; // [rsp+14h] [rbp-44h]
  __int64 v30; // [rsp+18h] [rbp-40h]

  v29 = *(_DWORD *)(a1 + 1336) & 0x20;
  if ( v29 )
  {
    v3 = *(_QWORD *)(a2 + 24);
    v4 = a2 + 8;
    v29 = 0;
    v6 = *(_QWORD *)(a1 + 800);
    if ( a2 + 8 != v3 )
    {
      v25 = v6 + 8;
      while ( 1 )
      {
        while ( 1 )
        {
          v7 = *(_QWORD *)(v3 + 32);
          sub_147D70(*(_QWORD *)(a1 + 112), v7, 0);
          v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v6 + 8) + 64LL);
          if ( v8 == sub_65050 )
            v9 = *(_DWORD *)(v6 + 152);
          else
            v9 = v8(v25);
          if ( !v9 )
            goto LABEL_30;
          v10 = *(_QWORD *)(a1 + 1344);
          if ( v10 )
          {
            if ( *(_QWORD *)(v10 + 40) == v7 )
              goto LABEL_30;
          }
          v26 = sub_3605F0(v25, v7);
          if ( v26 == -1 )
            goto LABEL_30;
          if ( !get_func(v7) )
            goto LABEL_30;
          v11 = v26;
          v12 = *(_QWORD *)(v6 + 184) + 120LL * v26;
          if ( *(_DWORD *)(v12 + 100) == 3 )
            goto LABEL_30;
          if ( *(int *)(v12 + 112) <= 19 && *(_QWORD *)(v12 + 104) <= 0x34630B8A000uLL )
            break;
          if ( (*(_BYTE *)(a1 + 1336) & 0x40) == 0 )
            goto LABEL_30;
          sub_6D0A0((__int64)"%a:    will not redecompile; already spent too much time on it\n", a3);
          v3 = std::_Rb_tree_increment(v3);
          if ( v4 == v3 )
            return v29;
        }
        v13 = *(_QWORD *)(v6 + 328);
        v14 = *(_QWORD *)(v6 + 296);
        v15 = *(_QWORD **)(v6 + 288);
        v16 = *(_QWORD **)(v6 + 272);
        v30 = (__int64)(*(_QWORD *)(v6 + 304) - *(_QWORD *)(v6 + 312)) >> 3;
        v17 = v30 + v15 - v16 + ((((v13 - v14) >> 3) - (v13 != 0)) << 6);
        v18 = v16;
        v19 = v17 >> 2;
        if ( v17 >> 2 > 0 )
          break;
LABEL_36:
        if ( v17 == 2 )
          goto LABEL_50;
        if ( v17 != 3 )
        {
          if ( v17 != 1 )
            goto LABEL_41;
          goto LABEL_39;
        }
        if ( v26 == *v18 )
        {
LABEL_40:
          if ( v18 == *(_QWORD **)(v6 + 304) )
            goto LABEL_41;
LABEL_30:
          v3 = std::_Rb_tree_increment(v3);
          if ( v4 == v3 )
            return v29;
        }
        else
        {
          if ( v15 == ++v18 )
          {
            v18 = *(_QWORD **)(v14 + 8);
            v14 += 8;
            v15 = v18 + 64;
          }
LABEL_50:
          if ( v26 == *v18 )
            goto LABEL_40;
          if ( v15 == ++v18 )
            v18 = *(_QWORD **)(v14 + 8);
LABEL_39:
          if ( v26 == *v18 )
            goto LABEL_40;
LABEL_41:
          if ( (*(_BYTE *)(a1 + 1336) & 0x40) != 0 )
          {
            sub_6D0A0((__int64)"%a:    will redecompile\n", a3);
            v16 = *(_QWORD **)(v6 + 272);
            v11 = v26;
          }
          if ( v16 == *(_QWORD **)(v6 + 280) )
          {
            v21 = *(_QWORD *)(v6 + 296);
            if ( ((__int64)(*(_QWORD *)(v6 + 288) - (_QWORD)v16) >> 3)
               + ((__int64)(*(_QWORD *)(v6 + 304) - *(_QWORD *)(v6 + 312)) >> 3)
               + (((*(_QWORD *)(v6 + 328) == 0) + ((*(_QWORD *)(v6 + 328) - v21) >> 3) - 1) << 6) == 0xFFFFFFFFFFFFFFFLL )
              std::__throw_length_error("cannot create std::deque larger than max_size()");
            if ( v21 == *(_QWORD *)(v6 + 256) )
            {
              v28 = v11;
              sub_364280(v6 + 256, 1u, 1u);
              v21 = *(_QWORD *)(v6 + 296);
              v11 = v28;
            }
            v27 = v11;
            *(_QWORD *)(v21 - 8) = operator new(0x200u);
            v22 = (__int64 *)(*(_QWORD *)(v6 + 296) - 8LL);
            *(_QWORD *)(v6 + 296) = v22;
            v23 = *v22;
            v24 = *v22 + 512;
            *(_QWORD *)(v6 + 280) = v23;
            *(_QWORD *)(v6 + 288) = v24;
            *(_QWORD *)(v6 + 272) = v23 + 504;
            *(_QWORD *)(v23 + 504) = v27;
          }
          else
          {
            *(v16 - 1) = v11;
            *(_QWORD *)(v6 + 272) -= 8LL;
          }
          ++v29;
          v3 = std::_Rb_tree_increment(v3);
          if ( v4 == v3 )
            return v29;
        }
      }
      while ( v26 != *v18 )
      {
        if ( ++v18 == v15 )
        {
          v18 = *(_QWORD **)(v14 + 8);
          v14 += 8;
          v15 = v18 + 64;
        }
        if ( v26 == *v18 )
          break;
        if ( v15 == ++v18 )
        {
          v18 = *(_QWORD **)(v14 + 8);
          v14 += 8;
          v15 = v18 + 64;
        }
        if ( v26 == *v18 )
          break;
        if ( ++v18 == v15 )
        {
          v18 = *(_QWORD **)(v14 + 8);
          v14 += 8;
          v15 = v18 + 64;
        }
        if ( v26 == *v18 )
          break;
        if ( ++v18 == v15 )
        {
          v18 = *(_QWORD **)(v14 + 8);
          v14 += 8;
          v15 = v18 + 64;
        }
        if ( !--v19 )
        {
          v17 = ((((v13 - v14) >> 3) - (v13 != 0)) << 6) + v30 + v15 - v18;
          goto LABEL_36;
        }
      }
      goto LABEL_40;
    }
  }
  return v29;
}
