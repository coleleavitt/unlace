__int64 __fastcall sub_679A80(_QWORD *a1, unsigned __int64 *a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  int v9; // r9d
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  int v13; // ebx
  char v14; // r11
  _QWORD *v15; // r10
  unsigned __int64 v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // rsi
  char v20; // di
  unsigned __int64 *v21; // rbx
  _QWORD *v22; // rax
  __int64 v23; // r13
  unsigned __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned __int64 v27; // r15
  int v28; // edi
  int v29; // edx
  _QWORD *v30; // r11
  char v31; // r14
  __int64 v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // rdi
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned __int64 v38; // rax
  __int64 v39; // r8
  __int64 (__fastcall *v40)(int, __int64); // rcx
  unsigned __int64 v41; // [rsp+8h] [rbp-88h]
  char v42; // [rsp+17h] [rbp-79h]
  _QWORD *v43; // [rsp+18h] [rbp-78h]
  _QWORD *v45; // [rsp+28h] [rbp-68h]
  void *v46[2]; // [rsp+38h] [rbp-58h] BYREF
  __int128 v47; // [rsp+48h] [rbp-48h]
  unsigned __int64 v48; // [rsp+58h] [rbp-38h]

  v48 = __readfsqword(0x28u);
  if ( (_DWORD)a3 == 1 )
  {
    v13 = *(_DWORD *)(a4 + 48);
    if ( (v13 & 4) != 0 )
    {
LABEL_17:
      v16 = *a2;
      v42 = 1;
      v21 = (unsigned __int64 *)rangeset_t_lower_bound(a1 + 145, *a2, a3);
      if ( v21 == (unsigned __int64 *)(a1[145] + 16LL * a1[146]) )
        v21 = nullptr;
      goto LABEL_19;
    }
    v14 = 0;
    if ( (v13 & 1) == 0 )
      v14 = toupper(0);
    v15 = *(_QWORD **)(a4 + 24);
    v16 = v15[1];
    if ( !v16 )
    {
      v42 = 0;
      v21 = nullptr;
      goto LABEL_19;
    }
    v17 = 0;
    a5 = v13 & 0x20;
    a6 = **(_QWORD **)(a4 + 32);
    v18 = 0;
    while ( 1 )
    {
      a3 = *(_QWORD *)(a6 + 8 * v18);
      if ( a3 != -1 )
        break;
LABEL_43:
      ++v18;
      v17 += 80;
      if ( v16 == v18 )
      {
        v42 = 0;
        v21 = nullptr;
        v16 = 0;
LABEL_19:
        v22 = (_QWORD *)a1[121];
        if ( !v22 )
          return -1;
        v23 = (__int64)(a1 + 120);
        v24 = *a2;
        do
        {
          while ( 1 )
          {
            v25 = v22[2];
            v26 = v22[3];
            if ( v22[4] < v24 )
              break;
            v23 = (__int64)v22;
            v22 = (_QWORD *)v22[2];
            if ( !v25 )
              goto LABEL_24;
          }
          v22 = (_QWORD *)v22[3];
        }
        while ( v26 );
LABEL_24:
        if ( a1 + 120 == (_QWORD *)v23 )
          return -1;
        v43 = a1 + 120;
        v45 = a1;
        while ( 1 )
        {
          v27 = *(_QWORD *)(v23 + 32);
          if ( v27 >= a2[1] )
            return -1;
          if ( v16 < v27 && v42 && v21 )
          {
            while ( v16 >= v21[1] )
            {
              v21 += 2;
              if ( v21 == (unsigned __int64 *)(v45[145] + 16LL * v45[146]) )
              {
                v21 = nullptr;
                goto LABEL_29;
              }
            }
            v38 = *v21;
            if ( v16 < *v21 )
            {
              if ( v38 >= v27 )
              {
                v16 = *(_QWORD *)(v23 + 32);
                goto LABEL_29;
              }
              return *v21;
            }
            else
            {
              if ( v16 < v21[1] )
                return v16;
              return v38;
            }
          }
LABEL_29:
          v28 = *(_DWORD *)(v23 + 48);
          if ( (v28 & 0x100) == 0 )
            goto LABEL_49;
          v24 = *(unsigned int *)(a4 + 48);
          if ( (v24 & 4) != 0 )
            return v27;
          v29 = *(_DWORD *)(v23 + 48);
          if ( (v24 & 1) == 0 )
          {
            v24 = *(unsigned int *)(a4 + 48);
            LOBYTE(v29) = toupper((unsigned __int8)v28);
          }
          v30 = *(_QWORD **)(a4 + 24);
          a6 = v30[1];
          if ( a6 )
            break;
LABEL_49:
          if ( (*(_BYTE *)(a4 + 48) & 2) == 0 )
          {
            v36 = *(_QWORD *)(a4 + 40) - v27;
            if ( v36 < 0 )
              v36 = v27 - *(_QWORD *)(a4 + 40);
            if ( v36 > (__int64)&loc_800000 )
            {
              *(_QWORD *)(a4 + 40) = v27;
              callui(27, v24, (int)&callui, v25, a5, a6);
            }
          }
          v37 = *(unsigned __int8 *)(a4 + 52);
          if ( !(_BYTE)v37 )
          {
            v23 = std::_Rb_tree_increment(v23, v24, v37, v25);
            if ( v43 != (_QWORD *)v23 )
              continue;
          }
          return -1;
        }
        v25 = 0;
        v24 &= 0x20u;
        v41 = v16;
        v31 = v29;
        v32 = 0;
        while ( 2 )
        {
          v33 = *(_QWORD *)(**(_QWORD **)(a4 + 32) + 8 * v32);
          if ( v33 != -1 )
          {
            v34 = (_QWORD *)(v25 + *v30);
            if ( !v34[4] )
              goto LABEL_45;
            a5 = *(unsigned __int8 *)(v34[3] + (int)v33);
            if ( !(_DWORD)v24 )
            {
              if ( !(_BYTE)a5 )
                return v27;
LABEL_45:
              a5 = -1;
            }
            if ( ((unsigned __int8)a5 & (unsigned __int8)(v31 ^ *(_BYTE *)(*v34 + v33))) == 0 )
              return v27;
          }
          ++v32;
          v25 += 80;
          if ( v32 == a6 )
          {
            v16 = v41;
            goto LABEL_49;
          }
          continue;
        }
      }
    }
    v19 = (_QWORD *)(v17 + *v15);
    if ( v19[4] )
    {
      v20 = *(_BYTE *)(v19[3] + (int)a3);
      if ( (v13 & 0x20) != 0 )
        goto LABEL_42;
      if ( !v20 )
        goto LABEL_17;
    }
    v20 = -1;
LABEL_42:
    if ( ((unsigned __int8)v20 & (unsigned __int8)(v14 ^ *(_BYTE *)(*v19 + a3))) == 0 )
      goto LABEL_17;
    goto LABEL_43;
  }
  if ( (_DWORD)a3 == 2 )
  {
    v9 = *(_DWORD *)(a4 + 48);
    v10 = a2[1];
    v11 = *a2;
    if ( (v9 & 4) != 0 )
    {
      v39 = a4 + 16;
      v40 = nullptr;
    }
    else
    {
      if ( (unsigned __int64)((*(_QWORD *)(*(_QWORD *)(*a1 + 624LL) + 32LL) & 0x4000LL) == 0 ? 0x300 : 0) + 256 < v10 - v11 )
      {
        v12 = a2[1];
        v47 = 0;
        v46[1] = nullptr;
        callui(1194, (int)v46, v11, v12, *(_QWORD *)(a4 + 24), v9);
      }
      v39 = a4 + 16;
      v40 = sub_676240;
    }
    return sub_3FD400(a1, v11, v10, (unsigned __int8 (__fastcall *)(_QWORD, __int64))v40, v39);
  }
  else
  {
    if ( (_DWORD)a3 )
    {
      if ( !under_debugger )
        interr(64);
      BUG();
    }
    a1[128] = -1;
    return sub_8B97D0(a1[127], *a2, a2[1] - *a2, a4 + 16);
  }
}
