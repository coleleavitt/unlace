__int64 __fastcall sub_8B2430(__int64 a1, __int64 a2, int a3, int a4, char **a5)
{
  __int64 v9; // r14
  unsigned int v11; // ebx
  time_t v13; // rax
  __int64 v14; // rdi
  __int64 (__fastcall **v15)(_QWORD, __int64, char *); // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdi
  int v19; // r9d
  __int64 v20; // rcx
  int v21; // esi
  __int64 v22; // rax
  time_t v23; // rax
  unsigned __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // [rsp+8h] [rbp-80h]
  int v31; // [rsp+8h] [rbp-80h]
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  int v33; // [rsp+36h] [rbp-52h]
  __int16 v34; // [rsp+3Ah] [rbp-4Eh]
  int v35; // [rsp+3Ch] [rbp-4Ch]
  __int16 v36; // [rsp+40h] [rbp-48h]
  int v37; // [rsp+42h] [rbp-46h]
  __int16 v38; // [rsp+46h] [rbp-42h]
  unsigned __int64 v39; // [rsp+48h] [rbp-40h]

  v9 = *(_QWORD *)(a1 + 424);
  v39 = __readfsqword(0x28u);
  qmutex_lock(v9);
  if ( sub_8AD0D0(a1, a2) )
  {
LABEL_2:
    v11 = 0;
    goto LABEL_3;
  }
  v30 = sub_8AD170(a1, a2);
  if ( v30 )
  {
    v13 = time(nullptr);
    v14 = *(_QWORD *)(v30 + 104);
    if ( v14 != -1 && v14 > v13 )
    {
      sub_8AE8A0(v14, a5);
      v11 = 1;
      goto LABEL_3;
    }
  }
  v15 = (__int64 (__fastcall **)(_QWORD, __int64, char *))time(nullptr);
  v31 = sub_8B0100(a1, a2, v15);
  if ( v31 )
  {
    v16 = sub_8AD170(a1, a2);
    sub_8B0600(a1, v16, 1, a4, a2);
    v17 = *(_QWORD *)(a1 + 472);
    v18 = *(_QWORD *)(a1 + 464);
    v19 = v31;
    v20 = v18 + 6 * v17;
    if ( v18 == v20 )
      goto LABEL_19;
    v21 = *(_DWORD *)a2;
    v22 = *(_QWORD *)(a1 + 464);
    while ( v21 != *(_DWORD *)v22 || *(_WORD *)(a2 + 4) != *(_WORD *)(v22 + 4) )
    {
      v22 += 6;
      if ( v20 == v22 )
        goto LABEL_19;
    }
    if ( v22 == v20 )
    {
LABEL_19:
      v24 = v17 + 1;
      v37 = *(_DWORD *)a2;
      v38 = *(_WORD *)(a2 + 4);
      if ( *(_QWORD *)(a1 + 480) < v24 )
      {
        v28 = qvector_reserve(a1 + 464, v18, v24, 6);
        v29 = *(_QWORD *)(a1 + 472);
        *(_QWORD *)(a1 + 464) = v28;
        v19 = v31;
        v20 = v28 + 6 * v29;
      }
      *(_DWORD *)v20 = v37;
      *(_WORD *)(v20 + 4) = v38;
      ++*(_QWORD *)(a1 + 472);
    }
    if ( (debug & 0x200) != 0 )
    {
      sub_8AEC60((__int64)&ptr, (int *)a2);
      sub_3879F0();
    }
    if ( v19 == 2 )
    {
      v23 = time(nullptr);
      *(_BYTE *)(a1 + 504) = 1;
      *(_QWORD *)(a1 + 488) = v23;
      if ( (debug & 0x200) != 0 )
        sub_3879F0();
    }
    goto LABEL_2;
  }
  v25 = *(_DWORD *)a2;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v33 = 0;
  v34 = 0;
  if ( v25 || *(_WORD *)(a2 + 4) )
  {
    v26 = *(_QWORD *)(a1 + 464);
    v27 = v26 + 6LL * *(_QWORD *)(a1 + 472);
    if ( v26 != v27 )
    {
      while ( v25 != *(_DWORD *)v26 || *(_WORD *)(a2 + 4) != *(_WORD *)(v26 + 4) )
      {
        v26 += 6;
        if ( v27 == v26 )
          goto LABEL_30;
      }
      if ( v26 != v27 )
      {
        memmove((void *)v26, (const void *)(v26 + 6), v27 - v26 - 6);
        --*(_QWORD *)(a1 + 472);
      }
    }
  }
LABEL_30:
  if ( (debug & 0x200) != 0 )
  {
    sub_8AEC60((__int64)&ptr, (int *)a2);
    sub_3879F0();
  }
  v11 = (unsigned __int8)sub_8B2180((_QWORD *)a1, a2, a3, a4, (__int64)a5) ^ 1;
LABEL_3:
  qmutex_unlock(v9);
  return v11;
}
