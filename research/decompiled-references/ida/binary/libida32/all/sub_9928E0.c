__int64 __fastcall sub_9928E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  unsigned int v4; // ecx
  __int64 *v5; // rdx
  __int64 v6; // r9
  int v8; // edx
  int v9; // r11d
  __int64 v10; // r9
  unsigned int v12; // ebx
  unsigned __int64 v13; // rcx
  __int64 v14; // r13
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  bool v17; // zf
  __int64 v18; // r9
  __int64 v19; // rax
  int v20; // edi
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // esi
  __int64 v24; // r8
  __int64 v25; // rdx
  _QWORD *v26; // rax
  __int64 v27; // [rsp+0h] [rbp-40h] BYREF
  __int64 v28; // [rsp+8h] [rbp-38h] BYREF
  _QWORD v29[6]; // [rsp+10h] [rbp-30h] BYREF

  v2 = *(unsigned int *)(a1 + 112);
  v3 = *(_QWORD *)(a1 + 96);
  if ( (_DWORD)v2 )
  {
    v4 = (v2 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v5 = (__int64 *)(v3 + 16LL * v4);
    v6 = *v5;
    if ( a2 != *v5 )
    {
      v8 = 1;
      if ( v6 == -4096 )
        goto LABEL_8;
      while ( 1 )
      {
        v9 = v8 + 1;
        v4 = (v2 - 1) & (v8 + v4);
        v5 = (__int64 *)(v3 + 16LL * v4);
        v10 = *v5;
        if ( a2 == *v5 )
          break;
        v8 = v9;
        if ( v10 == -4096 )
          goto LABEL_8;
      }
    }
    if ( v5 != (__int64 *)(v3 + 16 * v2) )
      return *((unsigned int *)v5 + 2);
  }
LABEL_8:
  if ( (*(_WORD *)a2 & 0x1FF) == 0x47 )
    return sub_992730((int *)a1, *(_QWORD *)(a2 + 16));
  v12 = *(_DWORD *)a1;
  v13 = *(unsigned int *)(a1 + 20);
  v14 = a2 | 2;
  ++*(_DWORD *)a1;
  v15 = *(unsigned int *)(a1 + 16);
  if ( v15 >= v13 )
  {
    if ( v13 < v15 + 1 )
    {
      sub_22134E0(a1 + 8, a1 + 24, v15 + 1, 16);
      v15 = *(unsigned int *)(a1 + 16);
    }
    v26 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 16 * v15);
    *v26 = v12;
    v26[1] = v14;
    ++*(_DWORD *)(a1 + 16);
  }
  else
  {
    v16 = *(_QWORD *)(a1 + 8) + 16 * v15;
    *(_DWORD *)v16 = v12;
    *(_QWORD *)(v16 + 8) = v14;
    ++*(_DWORD *)(a1 + 16);
  }
  v27 = a2;
  v17 = (unsigned __int8)sub_991650((__int64 *)(a1 + 96), &v27, &v28) == 0;
  v19 = v28;
  if ( v17 )
  {
    v20 = *(_DWORD *)(a1 + 104);
    v21 = *(unsigned int *)(a1 + 112);
    v29[0] = v28;
    v22 = (unsigned int)(v20 + 1);
    v23 = 2 * v21;
    v24 = (unsigned int)(4 * v22);
    if ( (unsigned int)v24 < 3 * (int)v21 )
    {
      if ( (int)v21 - *(_DWORD *)(a1 + 108) - (int)v22 > (unsigned int)v21 >> 3 )
      {
LABEL_15:
        v17 = *(_QWORD *)v19 == -4096;
        *(_DWORD *)(a1 + 104) = v22;
        if ( !v17 )
          --*(_DWORD *)(a1 + 108);
        v25 = v27;
        *(_DWORD *)(v19 + 8) = 0;
        *(_QWORD *)v19 = v25;
        goto LABEL_18;
      }
      v23 = v21;
    }
    sub_991D80(a1 + 96, v23, v22, v21, v24, v18);
    sub_991650((__int64 *)(a1 + 96), &v27, v29);
    LODWORD(v22) = *(_DWORD *)(a1 + 104) + 1;
    v19 = v29[0];
    goto LABEL_15;
  }
LABEL_18:
  *(_DWORD *)(v19 + 8) = v12;
  return v12;
}

