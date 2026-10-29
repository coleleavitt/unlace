__int64 __fastcall sub_9819E0(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rax
  unsigned int v7; // r14d
  unsigned __int64 v8; // rcx
  int v9; // ebx
  unsigned int v10; // r15d
  void *v11; // rbx
  void *v12; // r14
  void *v13; // rdx
  unsigned int v14; // r12d
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rax
  signed __int64 v19; // rdx
  int v20; // esi
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rsi
  char v27; // al
  char v28; // r14
  __int64 v29; // rsi
  unsigned __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // r12
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int8 v35; // [rsp+0h] [rbp-78h]
  signed __int64 v36; // [rsp+0h] [rbp-78h]
  signed __int64 v37; // [rsp+0h] [rbp-78h]
  signed __int64 v38; // [rsp+8h] [rbp-70h]
  void *v39; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v40; // [rsp+28h] [rbp-50h]
  void *v41; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v42; // [rsp+38h] [rbp-40h]
  char v43; // [rsp+3Ch] [rbp-3Ch]

  v6 = *(_QWORD *)(a3 + 8LL * ((*(_BYTE *)(a3 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(a3 + 3));
  if ( (*(_BYTE *)(v6 + 1) & 6) != 0 )
    v7 = ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8)
                                                                               & 0xFFFFFFFFFFFFFFF0LL)
                                                                   + 8LL)
                                                       & 0xFFFFFFFFFFFFFFF0LL)
                                           + 16LL)
        - 25 < 2)
       + 13;
  else
    v7 = sub_8CA760(*(__int64 **)(a1 + 192), *(_QWORD *)(v6 + 8));
  v8 = 0;
  if ( a2 != 235 )
  {
    v9 = sub_A24BE0(v7);
    v8 = ((v9 + 7) & 0xFFFFFFF8) + (((unsigned int)sub_A24BE0(13) + 7) & 0xFFFFFFF8);
  }
  sub_97E960((__int64)&v39, *(_QWORD *)(a1 + 184), v7, v8);
  v10 = v40;
  v11 = v39;
  if ( v40 > 0x40 )
  {
    v12 = *(void **)v39;
    v13 = *(void **)v39;
    if ( (*(_QWORD *)v39 & (*(_QWORD *)v39 - 1LL)) != 0 )
    {
      v14 = 0;
      if ( a2 != 175 )
      {
LABEL_8:
        operator delete[](v11);
        return v14;
      }
      v14 = 1;
      *(_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = 0;
LABEL_42:
      if ( !v11 )
        return v14;
      goto LABEL_8;
    }
LABEL_11:
    v38 = (signed __int64)v13;
    v35 = *(_BYTE *)(*(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24))
                               + 17288)
                   + 287LL);
    v16 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    if ( (__int64)sub_70CF80(v16, v35) < v38 )
      goto LABEL_39;
    v17 = *(_QWORD *)(a1 + 184);
    if ( v38 == 1 || a2 == 235 )
      goto LABEL_35;
    v18 = sub_A1A5A0(v17, 56);
    v19 = v38;
    v20 = *(_DWORD *)(v18 + 48);
    if ( v20 )
    {
      if ( v20 != 2 )
      {
        if ( v20 != 3 )
        {
          v21 = *(_QWORD *)(v18 + 32);
          if ( !v21 && !*(_QWORD *)v18 )
            goto LABEL_34;
          if ( v20 == 1 )
          {
            v22 = *(_QWORD *)v18;
            v23 = *(_QWORD *)(v18 + 24);
            if ( v23 )
              v24 = *(unsigned int *)(v23 + 8);
            else
              v24 = 1;
            v25 = v22 * v24;
            v43 = 1;
            v26 = 0xFFFFFFFFLL;
            v42 = 64;
            v41 = (void *)(v21 + v25);
            if ( v12 )
              _BitScanReverse64((unsigned __int64 *)&v26, (unsigned __int64)v12);
            v27 = sub_2587460(&v41, v26);
            v19 = v38;
            v28 = v27;
            if ( v42 > 0x40 && v41 )
            {
              operator delete[](v41);
              v19 = v38;
            }
            if ( v28 )
              goto LABEL_34;
          }
        }
LABEL_28:
        v29 = *(_QWORD *)(*(unsigned __int8 *)(a3 + 3) + a3 + 8LL * ((*(_BYTE *)(a3 + 2) & 8) != 0) + 8 + 8);
        if ( (*(_WORD *)v29 & 0x1FF) == 0x50 && ((*(_WORD *)(v29 + 2) >> 3) & 0x7F) == 1 )
          v29 = *(_QWORD *)(v29 + 16);
        v30 = *(_QWORD *)(v29 + 8) & 0xFFFFFFFFFFFFFFF0LL;
        v31 = *(_QWORD *)v30;
        if ( *(_BYTE *)(*(_QWORD *)v30 + 16LL) == 41
          || (v37 = v19, *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v31 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 41)
          && (v34 = sub_B0D320(v31), v19 = v37, (v31 = v34) != 0) )
        {
          v32 = *(_QWORD *)(v31 + 32);
          v36 = v19;
          if ( !(unsigned __int8)sub_B19120(*(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF0LL), 0) )
          {
            v33 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
            if ( (__int64)sub_70CFF0(v33, v32) >= v36 )
              goto LABEL_34;
          }
        }
LABEL_39:
        if ( a2 != 175 )
        {
          v14 = 0;
LABEL_41:
          if ( v10 <= 0x40 )
            return v14;
          goto LABEL_42;
        }
        *(_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = 0;
LABEL_36:
        v14 = 1;
        goto LABEL_41;
      }
      if ( *(_QWORD *)(v18 + 24) )
        goto LABEL_28;
    }
    else if ( *(_QWORD *)(v18 + 24) )
    {
      goto LABEL_28;
    }
LABEL_34:
    v17 = *(_QWORD *)(a1 + 184);
LABEL_35:
    *(_BYTE *)sub_A1A4E0(v17, 8) = 1;
    goto LABEL_36;
  }
  v13 = (void *)((unsigned __int64)v39 & -(__int64)v39);
  if ( v39 == v13 )
  {
    v12 = v39;
    goto LABEL_11;
  }
  if ( a2 == 175 )
  {
    v14 = 1;
    *(_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = 0;
  }
  else
  {
    return 0;
  }
  return v14;
}

