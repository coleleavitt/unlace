__int64 __fastcall sub_65BFA0(__int64 a1, unsigned int *a2, int a3, __int64 a4)
{
  int v7; // r9d
  unsigned int v8; // esi
  unsigned int v9; // edx
  int v10; // r13d
  char v11; // bl
  _QWORD *v12; // r11
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned int **v17; // rsi
  char v18; // di
  unsigned int v19; // r15d
  unsigned int *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  int v26; // r8d
  __int64 v27; // r9
  unsigned int *v28; // rcx
  unsigned int v29; // r14d
  int v30; // edi
  char v31; // al
  _QWORD *v32; // r11
  char v33; // bl
  __int64 v34; // rax
  __int64 v35; // rdx
  unsigned int **v36; // rsi
  char v37; // di
  int v38; // eax
  unsigned int *v39; // rdx
  unsigned int v40; // edx
  __int64 v41; // r8
  __int64 (__fastcall *v42)(int, __int64); // rcx
  int v43; // [rsp+10h] [rbp-80h]
  unsigned int *v44; // [rsp+10h] [rbp-80h]
  char v45; // [rsp+1Fh] [rbp-71h]
  unsigned int *v46; // [rsp+20h] [rbp-70h]
  _QWORD *v47; // [rsp+28h] [rbp-68h]
  int v48; // [rsp+3Ch] [rbp-54h] BYREF
  void *ptr; // [rsp+40h] [rbp-50h]
  __int128 v50; // [rsp+48h] [rbp-48h]
  unsigned __int64 v51; // [rsp+58h] [rbp-38h]

  v46 = a2;
  v51 = __readfsqword(0x28u);
  if ( a3 == 1 )
  {
    v10 = *(_DWORD *)(a4 + 44);
    if ( (v10 & 4) != 0 )
    {
LABEL_17:
      v19 = v46[1];
      LODWORD(a2) = v19;
      v45 = 1;
      v20 = (unsigned int *)rangeset_t_upper_bound(a1 + 1152, v19);
      if ( *(unsigned int **)(a1 + 1152) == v20 )
        v20 = nullptr;
    }
    else
    {
      v11 = 0;
      if ( (v10 & 1) == 0 )
        v11 = toupper(0);
      v12 = *(_QWORD **)(a4 + 24);
      v13 = v12[1];
      if ( v13 )
      {
        v14 = 0;
        v15 = 0;
        while ( 1 )
        {
          v16 = *(_QWORD *)(**(_QWORD **)(a4 + 32) + 8 * v15);
          if ( v16 != -1 )
            break;
LABEL_42:
          ++v15;
          v14 += 80;
          if ( v15 == v13 )
          {
            v45 = 0;
            v20 = nullptr;
            v19 = 0;
            goto LABEL_19;
          }
        }
        v17 = (unsigned int **)(v14 + *v12);
        if ( v17[4] )
        {
          v18 = *((_BYTE *)v17[3] + (int)v16);
          if ( (v10 & 0x20) != 0 )
            goto LABEL_41;
          if ( !v18 )
            goto LABEL_17;
        }
        v18 = -1;
LABEL_41:
        a2 = *v17;
        if ( ((unsigned __int8)v18 & (unsigned __int8)(v11 ^ *((_BYTE *)a2 + v16))) == 0 )
          goto LABEL_17;
        goto LABEL_42;
      }
      v45 = 0;
      v20 = nullptr;
      v19 = 0;
    }
LABEL_19:
    v21 = *(_QWORD *)(a1 + 960);
    v22 = a1 + 952;
    if ( v21 )
    {
      LODWORD(a2) = v46[1];
      do
      {
        while ( 1 )
        {
          v23 = *(_QWORD *)(v21 + 16);
          v24 = *(_QWORD *)(v21 + 24);
          if ( *(_DWORD *)(v21 + 32) < (unsigned int)a2 )
            break;
          v22 = v21;
          v21 = *(_QWORD *)(v21 + 16);
          if ( !v23 )
            goto LABEL_24;
        }
        v21 = *(_QWORD *)(v21 + 24);
      }
      while ( v24 );
    }
LABEL_24:
    if ( *(_QWORD *)(a1 + 968) != v22 )
    {
      v47 = (_QWORD *)a1;
      do
      {
        v25 = std::_Rb_tree_decrement();
        LODWORD(v28) = (_DWORD)v46;
        v29 = *(_DWORD *)(v25 + 32);
        if ( v29 < *v46 )
          return (unsigned int)-1;
        if ( v29 < v19 && v45 )
        {
          while ( 1 )
          {
            if ( !v20 )
              goto LABEL_29;
            v39 = (unsigned int *)v47[144];
            v28 = &v39[2 * v47[145]];
            if ( v20 != v28 && *v20 < v19 )
              break;
            if ( v20 == v39 )
            {
              v20 = nullptr;
              goto LABEL_29;
            }
            v20 -= 2;
          }
          v40 = v20[1];
          if ( v40 >= v19 )
            return v19 - 1;
          if ( v29 < v40 )
            return v40 - 1;
          v19 = *(_DWORD *)(v25 + 32);
        }
LABEL_29:
        v30 = *(_DWORD *)(v25 + 40);
        if ( (v30 & 0x100) == 0 )
          goto LABEL_48;
        v26 = *(_DWORD *)(a4 + 44);
        if ( (v26 & 4) != 0 )
          return v29;
        if ( (v26 & 1) == 0 )
        {
          v43 = *(_DWORD *)(a4 + 44);
          v31 = toupper((unsigned __int8)v30);
          v26 = v43;
          LOBYTE(v30) = v31;
        }
        v32 = *(_QWORD **)(a4 + 24);
        v27 = v32[1];
        if ( v27 )
        {
          v44 = v20;
          v28 = nullptr;
          v26 &= 0x20u;
          v33 = v30;
          v34 = 0;
          while ( 1 )
          {
            v35 = *(_QWORD *)(**(_QWORD **)(a4 + 32) + 8 * v34);
            if ( v35 != -1 )
              break;
LABEL_46:
            ++v34;
            v28 += 20;
            if ( v34 == v27 )
            {
              v20 = v44;
              goto LABEL_48;
            }
          }
          v36 = (unsigned int **)((char *)v28 + *v32);
          if ( v36[4] )
          {
            v37 = *((_BYTE *)v36[3] + (int)v35);
            if ( !v26 )
            {
              if ( !v37 )
                return v29;
              goto LABEL_44;
            }
          }
          else
          {
LABEL_44:
            v37 = -1;
          }
          a2 = *v36;
          if ( ((unsigned __int8)v37 & (unsigned __int8)(v33 ^ *((_BYTE *)a2 + v35))) == 0 )
            return v29;
          goto LABEL_46;
        }
LABEL_48:
        if ( (*(_BYTE *)(a4 + 44) & 2) == 0 )
        {
          v38 = *(_DWORD *)(a4 + 40) - v29;
          if ( v38 < 0 )
            v38 = v29 - *(_DWORD *)(a4 + 40);
          if ( v38 > 0x800000 )
          {
            *(_DWORD *)(a4 + 40) = v29;
            callui(27, (int)a2, (int)&callui, (int)v28, v26, v27);
          }
        }
      }
      while ( !*(_BYTE *)(a4 + 48) && std::_Rb_tree_decrement() != v47[121] );
    }
    return (unsigned int)-1;
  }
  if ( a3 == 2 )
  {
    v7 = *(_DWORD *)(a4 + 44);
    v8 = a2[1];
    v9 = *v46;
    if ( (v7 & 4) != 0 )
    {
      v41 = a4 + 16;
      v42 = nullptr;
    }
    else
    {
      if ( (unsigned __int64)((*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 536LL) + 32LL) & 0x4000LL) == 0 ? 0x300 : 0)
         + 256 < v8 - v9 )
      {
        v50 = 0;
        ptr = nullptr;
        callui(1194, (int)&v48, v9, v8, *(_QWORD *)(a4 + 24), v7);
      }
      v41 = a4 + 16;
      v42 = sub_658350;
    }
    return sub_3EA5A0(a1, v8, v9, (unsigned __int8 (__fastcall *)(_QWORD, __int64))v42, v41);
  }
  else
  {
    if ( a3 )
    {
      if ( !under_debugger )
        interr(65);
      BUG();
    }
    *(_DWORD *)(a1 + 1016) = -1;
    return sub_895D00(*(_QWORD *)(a1 + 1008), *a2, a2[1] - *a2, a4 + 16);
  }
}

