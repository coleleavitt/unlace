__int64 __fastcall sub_DF8F60(__int64 a1, __int64 *a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r14d
  __int64 v7; // rbp
  char v8; // al
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // r13
  void *v17; // r13
  __int64 v18; // rdx
  __int64 *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r14
  __int16 v22; // ax
  char v23; // r12
  __int64 result; // rax
  __int64 v25; // rax
  unsigned int v26; // eax
  unsigned __int8 **v27; // rbx
  unsigned __int64 v28; // rax
  __int16 v29; // [rsp+20h] [rbp-38h]

  v6 = a4;
  v7 = a3;
  v8 = *(_BYTE *)(a3 + 504);
  if ( (v8 & 4) != 0 )
  {
    v9 = (unsigned int)(*(_DWORD *)(a3 + 28) + a4);
    if ( (v8 & 8) != 0 )
      v9 -= sub_E05440(13);
    v10 = sub_DFDA20(*(_QWORD *)(a1 + 176), v9);
    a4 = *(unsigned int *)(v10 + 24);
    v11 = v10;
    if ( !(_DWORD)a4 )
    {
      v12 = *(_QWORD *)(v10 + 32);
      if ( v12 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(v12 + 32) + 61LL) && *(char *)(v7 + 504) < 0 )
          return 0;
      }
    }
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 400) + 32LL);
    if ( v13 && *(_DWORD *)(v13 + 8) == 3 && *(_DWORD *)(v7 + 8) == 4 )
      goto LABEL_20;
    if ( !(unsigned __int8)sub_DA6390(a1, a2, v11) )
    {
LABEL_35:
      sub_DA3C90((_QWORD *)a1, (__int64)a2, v7);
      return 0;
    }
    v14 = *(_DWORD *)(v7 + 8);
    a3 = (unsigned int)(v14 - 1);
    if ( (unsigned int)a3 > 1 && v14 != 5 )
    {
      if ( !(unsigned __int8)sub_DA4100(a1, (__int64)a2, v11, 5) )
        return 0;
      v14 = *(_DWORD *)(v7 + 8);
    }
    if ( v14 == 1 )
    {
      if ( *(char *)(sub_D9F200(v7) + 28) < 0 )
        return 0;
      v25 = *(_QWORD *)(sub_CDA220(v11) + 32);
      if ( v25 )
      {
        a3 = *(unsigned int *)(v25 + 496);
        if ( (_DWORD)a3 )
        {
          v26 = sub_DFC980(*(_QWORD *)(a1 + 400));
          v27 = (unsigned __int8 **)sub_E0FF40(a1, v26, 2504, 0);
          v28 = sub_D9F200(v7);
          if ( v27 )
          {
            sub_AC60B0(v27, v28, 0xAu);
            return 0;
          }
          return 0;
        }
      }
      v14 = *(_DWORD *)(v7 + 8);
    }
    if ( v14 != 2 )
      goto LABEL_16;
    if ( (unsigned __int8)sub_DA8BB0(a1, (__int64)a2, v11) )
    {
      v14 = *(_DWORD *)(v7 + 8);
LABEL_16:
      if ( (unsigned int)(v14 - 1) <= 1 )
      {
        v15 = *(unsigned int *)(a1 + 512);
        a4 = *(unsigned int *)(a1 + 516);
        v16 = *(_QWORD *)(v11 + 32);
        if ( v15 + 1 > a4 )
        {
          sub_22134E0(a1 + 504, a1 + 520, v15 + 1, 8);
          v15 = *(unsigned int *)(a1 + 512);
        }
        a3 = *(_QWORD *)(a1 + 504);
        *(_QWORD *)(a3 + 8 * v15) = v16;
        ++*(_DWORD *)(a1 + 512);
      }
LABEL_20:
      v8 = *(_BYTE *)(v7 + 504);
      goto LABEL_21;
    }
    return 0;
  }
LABEL_21:
  if ( (v8 & 2) == 0 )
    sub_DCAFF0(a1, v7, a3, a4, a5, a6);
  if ( !(unsigned __int8)sub_DA6440(a1, (__int64)a2, v7)
    || (*(_BYTE *)(v7 + 504) & 4) != 0
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(*(_QWORD *)(a1 + 24))
    && *(_DWORD *)(v7 + 8) != 1
    || !(unsigned __int8)sub_DA6940(a1, (__int64)a2) )
  {
    goto LABEL_35;
  }
  v17 = (void *)operator new(0xD0u);
  sub_DFACF0(v17, a1, v7, a2, v6);
  v21 = *(_QWORD *)(a1 + 400);
  v22 = *(_WORD *)(a1 + 436);
  *(_QWORD *)(a1 + 400) = v17;
  v29 = v22;
  v23 = *(_BYTE *)(v7 + 505) & 1;
  if ( v23 )
    *(_WORD *)(a1 + 436) = 257;
  result = sub_DEBBD0(a1, a1, v18, v19, v20);
  if ( (unsigned int)(*(_DWORD *)(v7 + 8) - 1) <= 1 )
    --*(_DWORD *)(a1 + 512);
  if ( (_BYTE)result )
  {
    if ( v23 )
      *(_WORD *)(a1 + 436) = v29;
  }
  else
  {
    *(_QWORD *)(a1 + 400) = v21;
    if ( v23 )
      *(_WORD *)(a1 + 436) = v29;
    sub_DFCD30(v17);
    return 0;
  }
  return result;
}

