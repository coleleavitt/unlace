__int64 __fastcall sub_67A0E0(_QWORD *a1, unsigned __int64 *a2, int a3, __int64 a4)
{
  int v7; // r9d
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  int v11; // ebx
  char v12; // r11
  _QWORD *v13; // r10
  unsigned __int64 v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rsi
  char v19; // di
  unsigned __int64 *v20; // rbx
  _QWORD *v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r15
  __int64 v26; // rax
  int v27; // r8d
  __int64 v28; // r9
  unsigned __int64 *v29; // rcx
  unsigned __int64 v30; // r13
  int v31; // edi
  _QWORD *v32; // r11
  char v33; // bl
  __int64 v34; // rax
  __int64 v35; // rdx
  _QWORD *v36; // rdi
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  __int64 v39; // r8
  __int64 (__fastcall *v40)(int, __int64); // rcx
  unsigned __int64 *v41; // [rsp+10h] [rbp-80h]
  char v42; // [rsp+1Fh] [rbp-71h]
  _QWORD *v44; // [rsp+28h] [rbp-68h]
  void *v45[2]; // [rsp+38h] [rbp-58h] BYREF
  __int128 v46; // [rsp+48h] [rbp-48h]
  unsigned __int64 v47; // [rsp+58h] [rbp-38h]

  v47 = __readfsqword(0x28u);
  if ( a3 == 1 )
  {
    v11 = *(_DWORD *)(a4 + 48);
    if ( (v11 & 4) != 0 )
    {
LABEL_17:
      v14 = a2[1];
      v42 = 1;
      v20 = (unsigned __int64 *)rangeset_t_upper_bound(a1 + 145, v14);
      if ( (unsigned __int64 *)a1[145] == v20 )
        v20 = nullptr;
    }
    else
    {
      v12 = 0;
      if ( (v11 & 1) == 0 )
        v12 = toupper(0);
      v13 = *(_QWORD **)(a4 + 24);
      v14 = v13[1];
      if ( v14 )
      {
        v15 = 0;
        v16 = 0;
        while ( 1 )
        {
          v17 = *(_QWORD *)(**(_QWORD **)(a4 + 32) + 8 * v16);
          if ( v17 != -1 )
            break;
LABEL_42:
          ++v16;
          v15 += 80;
          if ( v16 == v14 )
          {
            v42 = 0;
            v20 = nullptr;
            v14 = 0;
            goto LABEL_19;
          }
        }
        v18 = (_QWORD *)(v15 + *v13);
        if ( v18[4] )
        {
          v19 = *(_BYTE *)(v18[3] + (int)v17);
          if ( (v11 & 0x20) != 0 )
            goto LABEL_41;
          if ( !v19 )
            goto LABEL_17;
        }
        v19 = -1;
LABEL_41:
        if ( ((unsigned __int8)v19 & (unsigned __int8)(v12 ^ *(_BYTE *)(*v18 + v17))) == 0 )
          goto LABEL_17;
        goto LABEL_42;
      }
      v42 = 0;
      v20 = nullptr;
    }
LABEL_19:
    v21 = (_QWORD *)a1[121];
    v22 = (__int64)(a1 + 120);
    if ( v21 )
    {
      do
      {
        while ( 1 )
        {
          v23 = v21[2];
          v24 = v21[3];
          if ( v21[4] < a2[1] )
            break;
          v22 = (__int64)v21;
          v21 = (_QWORD *)v21[2];
          if ( !v23 )
            goto LABEL_24;
        }
        v21 = (_QWORD *)v21[3];
      }
      while ( v24 );
    }
LABEL_24:
    if ( a1[122] != v22 )
    {
      v44 = a1;
      v25 = v22;
      while ( 1 )
      {
        v26 = std::_Rb_tree_decrement(v25);
        LODWORD(v29) = (_DWORD)a2;
        v30 = *(_QWORD *)(v26 + 32);
        if ( v30 < *a2 )
          return -1;
        if ( v30 < v14 && v42 )
        {
          while ( 1 )
          {
            if ( !v20 )
              goto LABEL_29;
            v29 = (unsigned __int64 *)v44[145];
            v22 = v44[146];
            if ( v20 != &v29[2 * v22] && *v20 < v14 )
              break;
            if ( v20 == v29 )
            {
              v20 = nullptr;
              goto LABEL_29;
            }
            v20 -= 2;
          }
          v38 = v20[1];
          if ( v38 >= v14 )
            return v14 - 1;
          if ( v30 < v38 )
            return v38 - 1;
          v14 = *(_QWORD *)(v26 + 32);
        }
LABEL_29:
        v31 = *(_DWORD *)(v26 + 48);
        if ( (v31 & 0x100) == 0 )
          goto LABEL_48;
        LODWORD(v22) = *(_DWORD *)(a4 + 48);
        if ( (v22 & 4) != 0 )
          return v30;
        if ( (v22 & 1) == 0 )
        {
          LODWORD(v22) = *(_DWORD *)(a4 + 48);
          LOBYTE(v31) = toupper((unsigned __int8)v31);
        }
        v32 = *(_QWORD **)(a4 + 24);
        v28 = v32[1];
        if ( v28 )
        {
          v41 = v20;
          v29 = nullptr;
          LODWORD(v22) = v22 & 0x20;
          v33 = v31;
          v34 = 0;
          while ( 1 )
          {
            v35 = *(_QWORD *)(**(_QWORD **)(a4 + 32) + 8 * v34);
            if ( v35 != -1 )
              break;
LABEL_46:
            ++v34;
            v29 += 10;
            if ( v34 == v28 )
            {
              v20 = v41;
              goto LABEL_48;
            }
          }
          v36 = (unsigned __int64 *)((char *)v29 + *v32);
          if ( v36[4] )
          {
            v27 = *(unsigned __int8 *)(v36[3] + (int)v35);
            if ( !(_DWORD)v22 )
            {
              if ( !(_BYTE)v27 )
                return v30;
              goto LABEL_44;
            }
          }
          else
          {
LABEL_44:
            v27 = -1;
          }
          if ( ((unsigned __int8)v27 & (unsigned __int8)(v33 ^ *(_BYTE *)(*v36 + v35))) == 0 )
            return v30;
          goto LABEL_46;
        }
LABEL_48:
        if ( (*(_BYTE *)(a4 + 48) & 2) == 0 )
        {
          v37 = *(_QWORD *)(a4 + 40) - v30;
          if ( v37 < 0 )
            v37 = v30 - *(_QWORD *)(a4 + 40);
          if ( v37 > (__int64)&loc_800000 )
          {
            *(_QWORD *)(a4 + 40) = v30;
            callui(27, v22, (int)&callui, (int)v29, v27, v28);
          }
        }
        if ( !*(_BYTE *)(a4 + 52) )
        {
          v25 = std::_Rb_tree_decrement(v25);
          if ( v25 != v44[122] )
            continue;
        }
        return -1;
      }
    }
    return -1;
  }
  if ( a3 == 2 )
  {
    v7 = *(_DWORD *)(a4 + 48);
    v8 = a2[1];
    v9 = *a2;
    if ( (v7 & 4) != 0 )
    {
      v39 = a4 + 16;
      v40 = nullptr;
    }
    else
    {
      if ( (unsigned __int64)((*(_QWORD *)(*(_QWORD *)(*a1 + 624LL) + 32LL) & 0x4000LL) == 0 ? 0x300 : 0) + 256 < v8 - v9 )
      {
        v10 = a2[1];
        v46 = 0;
        v45[1] = nullptr;
        callui(1194, (int)v45, v9, v10, *(_QWORD *)(a4 + 24), v7);
      }
      v39 = a4 + 16;
      v40 = sub_676240;
    }
    return sub_3FD510(a1, v8, v9, (unsigned __int8 (__fastcall *)(_QWORD, __int64))v40, v39);
  }
  else
  {
    if ( a3 )
    {
      if ( !under_debugger )
        interr(65);
      BUG();
    }
    a1[128] = -1;
    return sub_8B9740(a1[127], *a2, a2[1] - *a2, a4 + 16);
  }
}
