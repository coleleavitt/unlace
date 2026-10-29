__int64 __fastcall sub_65B980(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  int v7; // r9d
  unsigned int v8; // edx
  int v9; // esi
  int v10; // r13d
  char v11; // bl
  _QWORD *v12; // r11
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rsi
  char v17; // di
  int v18; // esi
  unsigned int *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // r13
  unsigned int v22; // r8d
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned int v25; // r15d
  unsigned int v26; // r14d
  int v27; // edi
  int v28; // edx
  _QWORD *v29; // r11
  char v30; // r15
  __int64 v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // rdi
  int v34; // eax
  unsigned int v35; // eax
  __int64 v36; // r8
  __int64 (__fastcall *v37)(int, __int64); // rcx
  unsigned int v38; // [rsp+10h] [rbp-80h]
  char v39; // [rsp+17h] [rbp-79h]
  __int64 v40; // [rsp+18h] [rbp-78h]
  __int64 v41; // [rsp+20h] [rbp-70h]
  int v43; // [rsp+3Ch] [rbp-54h] BYREF
  void *ptr; // [rsp+40h] [rbp-50h]
  __int128 v45; // [rsp+48h] [rbp-48h]
  unsigned __int64 v46; // [rsp+58h] [rbp-38h]

  v46 = __readfsqword(0x28u);
  if ( (_DWORD)a3 == 1 )
  {
    v10 = *(_DWORD *)(a4 + 44);
    if ( (v10 & 4) != 0 )
    {
LABEL_17:
      v18 = *a2;
      v39 = 1;
      v19 = (unsigned int *)rangeset_t_lower_bound(a1 + 1152, (unsigned int)*a2, a3);
      if ( v19 == (unsigned int *)(*(_QWORD *)(a1 + 1152) + 8LL * *(_QWORD *)(a1 + 1160)) )
        v19 = nullptr;
      goto LABEL_19;
    }
    v11 = 0;
    if ( (v10 & 1) == 0 )
      v11 = toupper(0);
    v12 = *(_QWORD **)(a4 + 24);
    v13 = v12[1];
    if ( !v13 )
    {
      v39 = 0;
      v19 = nullptr;
      v18 = 0;
      goto LABEL_19;
    }
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      a3 = *(_QWORD *)(**(_QWORD **)(a4 + 32) + 8 * v15);
      if ( a3 != -1 )
        break;
LABEL_42:
      ++v15;
      v14 += 80;
      if ( v13 == v15 )
      {
        v39 = 0;
        v19 = nullptr;
        v18 = 0;
LABEL_19:
        v20 = *(_QWORD *)(a1 + 960);
        if ( !v20 )
          return (unsigned int)-1;
        v21 = a1 + 952;
        v22 = *a2;
        do
        {
          while ( 1 )
          {
            v23 = *(_QWORD *)(v20 + 16);
            v24 = *(_QWORD *)(v20 + 24);
            if ( *(_DWORD *)(v20 + 32) < v22 )
              break;
            v21 = v20;
            v20 = *(_QWORD *)(v20 + 16);
            if ( !v23 )
              goto LABEL_24;
          }
          v20 = *(_QWORD *)(v20 + 24);
        }
        while ( v24 );
LABEL_24:
        if ( a1 + 952 == v21 )
          return (unsigned int)-1;
        v41 = a1 + 952;
        v25 = v18;
        v40 = a1;
        while ( 1 )
        {
          v26 = *(_DWORD *)(v21 + 32);
          if ( v26 >= a2[1] )
            return (unsigned int)-1;
          if ( v25 < v26 && v39 && v19 )
          {
            while ( v25 >= v19[1] )
            {
              v19 += 2;
              if ( v19 == (unsigned int *)(*(_QWORD *)(v40 + 1152) + 8LL * *(_QWORD *)(v40 + 1160)) )
              {
                v19 = nullptr;
                goto LABEL_29;
              }
            }
            v35 = *v19;
            if ( v25 < *v19 )
            {
              if ( v35 >= v26 )
              {
                v25 = *(_DWORD *)(v21 + 32);
                goto LABEL_29;
              }
              return *v19;
            }
            else
            {
              if ( v25 < v19[1] )
                return v25;
              return v35;
            }
          }
LABEL_29:
          v27 = *(_DWORD *)(v21 + 40);
          if ( (v27 & 0x100) == 0 )
            goto LABEL_48;
          v18 = *(_DWORD *)(a4 + 44);
          if ( (v18 & 4) != 0 )
            return v26;
          v28 = *(_DWORD *)(v21 + 40);
          if ( (v18 & 1) == 0 )
          {
            v18 = *(_DWORD *)(a4 + 44);
            LOBYTE(v28) = toupper((unsigned __int8)v27);
          }
          v29 = *(_QWORD **)(a4 + 24);
          v13 = v29[1];
          if ( v13 )
            break;
LABEL_48:
          if ( (*(_BYTE *)(a4 + 44) & 2) == 0 )
          {
            v34 = *(_DWORD *)(a4 + 40) - v26;
            if ( v34 < 0 )
              v34 = v26 - *(_DWORD *)(a4 + 40);
            if ( v34 > 0x800000 )
            {
              *(_DWORD *)(a4 + 40) = v26;
              callui(27, v18, (int)&callui, v23, v22, v13);
            }
          }
          if ( !*(_BYTE *)(a4 + 48) )
          {
            v21 = std::_Rb_tree_increment();
            if ( v41 != v21 )
              continue;
          }
          return (unsigned int)-1;
        }
        v38 = v25;
        v23 = 0;
        v18 &= 0x20u;
        v30 = v28;
        v31 = 0;
        while ( 2 )
        {
          v32 = *(_QWORD *)(**(_QWORD **)(a4 + 32) + 8 * v31);
          if ( v32 != -1 )
          {
            v33 = (_QWORD *)(v23 + *v29);
            if ( !v33[4] )
              goto LABEL_44;
            v22 = *(unsigned __int8 *)(v33[3] + (int)v32);
            if ( !v18 )
            {
              if ( !(_BYTE)v22 )
                return v26;
LABEL_44:
              v22 = -1;
            }
            if ( ((unsigned __int8)v22 & (unsigned __int8)(v30 ^ *(_BYTE *)(*v33 + v32))) == 0 )
              return v26;
          }
          ++v31;
          v23 += 80;
          if ( v31 == v13 )
          {
            v25 = v38;
            goto LABEL_48;
          }
          continue;
        }
      }
    }
    v16 = (_QWORD *)(v14 + *v12);
    if ( v16[4] )
    {
      v17 = *(_BYTE *)(v16[3] + (int)a3);
      if ( (v10 & 0x20) != 0 )
        goto LABEL_41;
      if ( !v17 )
        goto LABEL_17;
    }
    v17 = -1;
LABEL_41:
    if ( ((unsigned __int8)v17 & (unsigned __int8)(v11 ^ *(_BYTE *)(*v16 + a3))) == 0 )
      goto LABEL_17;
    goto LABEL_42;
  }
  if ( (_DWORD)a3 == 2 )
  {
    v7 = *(_DWORD *)(a4 + 44);
    v8 = a2[1];
    v9 = *a2;
    if ( (v7 & 4) != 0 )
    {
      v36 = a4 + 16;
      v37 = nullptr;
    }
    else
    {
      if ( (unsigned __int64)((*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 536LL) + 32LL) & 0x4000LL) == 0 ? 0x300 : 0)
         + 256 < v8 - v9 )
      {
        v45 = 0;
        ptr = nullptr;
        callui(1194, (int)&v43, v9, v8, *(_QWORD *)(a4 + 24), v7);
      }
      v36 = a4 + 16;
      v37 = sub_658350;
    }
    return sub_3EA490(a1, v9, v8, (unsigned __int8 (__fastcall *)(_QWORD, __int64))v37, v36);
  }
  else
  {
    if ( (_DWORD)a3 )
    {
      if ( !under_debugger )
        interr(64);
      BUG();
    }
    *(_DWORD *)(a1 + 1016) = -1;
    return sub_895D90(*(_QWORD *)(a1 + 1008), (unsigned int)*a2, (unsigned int)(a2[1] - *a2), a4 + 16);
  }
}

