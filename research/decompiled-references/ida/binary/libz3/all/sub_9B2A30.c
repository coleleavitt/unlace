__int64 __fastcall sub_9B2A30(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // r15
  int v4; // r13d
  unsigned int v6; // ebp
  __int64 v7; // rcx
  unsigned __int64 v8; // r8
  void *v9; // rdi
  __int64 v10; // rcx
  unsigned __int64 v11; // r12
  void *v12; // rbp
  bool v13; // al
  int v15; // eax
  bool v16; // al
  __int64 v17; // rax
  int *v18; // rax
  int v19; // eax
  int v20; // eax
  bool v21; // al
  int v22; // eax
  int *v23; // rax
  int *v24; // rax
  __int64 v25; // [rsp+0h] [rbp-58h]
  void *v26; // [rsp+0h] [rbp-58h]
  unsigned __int64 v27; // [rsp+0h] [rbp-58h]
  __int64 v28; // [rsp+0h] [rbp-58h]
  __int64 v29; // [rsp+0h] [rbp-58h]
  __int64 v30; // [rsp+0h] [rbp-58h]
  unsigned __int64 v31; // [rsp+8h] [rbp-50h]
  __int64 v32; // [rsp+8h] [rbp-50h]
  __int64 v33; // [rsp+10h] [rbp-48h]

  v2 = *a2;
  if ( *a2 )
  {
    v3 = v2 + 40LL * *(unsigned int *)(v2 - 4);
    if ( v3 != v2 )
    {
      v4 = *((_DWORD *)a2 + 3);
      while ( 1 )
      {
        v6 = *(_DWORD *)(v2 + 32);
        if ( v4 == v6 || v6 == -1 )
          goto LABEL_29;
        v7 = *(_QWORD *)(a1[85] + 8LL * v6);
        if ( !v7 )
          break;
        if ( ((*(_BYTE *)(a1[82] + 4LL * v6 + 3) >> 4) & 3) == 2 )
        {
          v29 = *(_QWORD *)(a1[85] + 8LL * v6);
          v23 = sub_9AA360((__int64)a1, v6);
          v7 = v29;
          v8 = (unsigned __int64)v23;
        }
        else
        {
          v8 = a1[83] + ((unsigned __int64)v6 << 6);
        }
        v9 = qword_1C7F2C0;
        if ( (*(_BYTE *)(v8 + 4) & 1) != 0 || (*(_BYTE *)(v7 + 20) & 1) != 0 )
        {
          v33 = v7;
          v31 = v8;
          v26 = qword_1C7F2C0;
          v19 = sub_182C7B0(qword_1C7F2C0, v8, v7 + 16);
          v9 = v26;
          v8 = v31;
          v7 = v33;
          if ( v19 )
            break;
        }
        else if ( *(_DWORD *)v8 != *(_DWORD *)(v7 + 16) )
        {
          break;
        }
        if ( (*(_BYTE *)(v8 + 20) & 1) != 0 || (*(_BYTE *)(v7 + 36) & 1) != 0 )
        {
          v32 = v7;
          v27 = v8;
          v20 = sub_182C7B0(v9, v8 + 16, v7 + 32);
          v8 = v27;
          v7 = v32;
          v21 = v20 == 0;
        }
        else
        {
          v21 = *(_DWORD *)(v8 + 16) == *(_DWORD *)(v7 + 32);
        }
        if ( !v21 || !sub_3ED680((__int64)qword_1C7F2C0, v8 + 32, v7 + 48) )
          break;
LABEL_25:
        v17 = *(unsigned int *)(v2 + 32);
        if ( (_DWORD)v17 != -1 && ((*(_BYTE *)(a1[82] + 4 * v17 + 3) >> 4) & 3) == 2 )
          v18 = sub_9AA360((__int64)a1, v17);
        else
          v18 = (int *)(a1[83] + (v17 << 6));
        if ( v18[8] )
          return 0;
LABEL_29:
        v2 += 40;
        if ( v2 == v3 )
          return 1;
      }
      v10 = *(_QWORD *)(a1[86] + 8LL * v6);
      if ( !v10 )
        return 0;
      if ( ((*(_BYTE *)(a1[82] + 4LL * v6 + 3) >> 4) & 3) == 2 )
      {
        v30 = *(_QWORD *)(a1[86] + 8LL * v6);
        v24 = sub_9AA360((__int64)a1, v6);
        v10 = v30;
        v11 = (unsigned __int64)v24;
      }
      else
      {
        v11 = a1[83] + ((unsigned __int64)v6 << 6);
      }
      v12 = qword_1C7F2C0;
      if ( (*(_BYTE *)(v11 + 4) & 1) != 0 || (*(_BYTE *)(v10 + 20) & 1) != 0 )
      {
        v28 = v10;
        v22 = sub_182C7B0(qword_1C7F2C0, v11, v10 + 16);
        v10 = v28;
        v13 = v22 == 0;
      }
      else
      {
        v13 = *(_DWORD *)v11 == *(_DWORD *)(v10 + 16);
      }
      if ( !v13 )
        return 0;
      if ( (*(_BYTE *)(v11 + 20) & 1) != 0 || (*(_BYTE *)(v10 + 36) & 1) != 0 )
      {
        v25 = v10;
        v15 = sub_182C7B0(v12, v11 + 16, v10 + 32);
        v10 = v25;
        v16 = v15 == 0;
      }
      else
      {
        v16 = *(_DWORD *)(v11 + 16) == *(_DWORD *)(v10 + 32);
      }
      if ( !v16 || !sub_3ED680((__int64)qword_1C7F2C0, v11 + 32, v10 + 48) )
        return 0;
      goto LABEL_25;
    }
  }
  return 1;
}

