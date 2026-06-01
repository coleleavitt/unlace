__int64 __fastcall sub_1E61100(__int64 a1, unsigned __int64 a2, __int64 *a3, int a4, __int64 a5, __int64 a6)
{
  unsigned int v9; // ebp
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int8 v12; // al
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // rbp
  unsigned int v16; // edx
  __int64 v18; // rdi
  unsigned __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // edx
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 *v29; // r15
  __int64 v30; // rbx
  __int64 v31; // rax
  unsigned int v32; // edx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 *v37; // rax
  __int64 v38; // rax
  unsigned __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rbp
  __int64 v42; // rax
  char v43; // [rsp+Fh] [rbp-49h]
  __int64 v44[8]; // [rsp+18h] [rbp-40h] BYREF

  v9 = a5;
  v10 = a2;
  v11 = *(_QWORD *)(a1 + 232);
  if ( (*(_BYTE *)(v11 + 21) & 2) == 0 && *(char *)(v11 + 22) >= 0 )
    return 1;
  v12 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)v12 - 58 <= 4 && (*(_BYTE *)(a2 + 74) & 2) != 0 )
    return 1;
  v13 = (unsigned int)v12 - 59;
  if ( (unsigned int)v13 > 2 )
  {
    if ( v12 == 62 )
    {
      v29 = sub_B7E890(a2, a2, 62, v13, a5, a6);
      if ( !v29 )
        v29 = (__int64 *)a2;
      if ( (_BYTE)v9 && ((*((_BYTE *)v29 + 77) & 2) != 0 || (**(_BYTE **)(a1 + 232) & 0x20) != 0) )
      {
        *a3 = 0;
        v30 = (__int64)v29;
        v43 = 0;
        do
        {
          v31 = *(_QWORD *)(v30 + 8) & 6LL;
          if ( a4 )
          {
            if ( !v31 )
              return v9;
            v32 = 1;
          }
          else
          {
            if ( !v31 )
              return v9;
            v32 = 0;
          }
          if ( sub_1A427C0(a1, v30, v32, v26, v27, v28) )
            return v9;
          if ( (*(_BYTE *)(v30 + 74) & 1) != 0
            || v30 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 32LL))(v30) && !*a3 )
          {
            *a3 = v30;
          }
          if ( (*(_BYTE *)(v30 + 96) & 3) != 0 )
          {
            if ( v43 )
              return 0;
            v43 = 1;
          }
          v37 = sub_7052B0((__int64 *)(v30 + 96), v30, v33, v34, v35, v36);
          v30 = (__int64)v37;
        }
        while ( v29 != v37 && v37 );
        return 0;
      }
      v10 = (__int64)sub_B7E870((__int64)v29, a2, v25, v26, v27, v28);
    }
    else if ( (unsigned int)v12 - 34 > 5 )
    {
      if ( (unsigned int)v12 - 40 <= 6 )
      {
        v41 = sub_B7CEC0(a2);
        if ( !v41 )
          v41 = a2;
        v42 = sub_B8C330(v41);
        v10 = sub_B7D8D0(v41, v42);
      }
    }
    else
    {
      v39 = sub_B7D580(a2, 1, v12, v13);
      if ( !v39 )
        v39 = a2;
      v10 = 0;
      if ( (unsigned __int8)sub_B7D390(v39, (__int64)v44, 0, v40) )
        v10 = v44[0];
    }
  }
  else
  {
    v15 = sub_B9DFE0(a2, a2, v12, v13, a5, a6);
    if ( !v15 )
      v15 = a2;
    v10 = *(_QWORD *)(v15 + 128);
    if ( v10
      || (sub_7052B0((__int64 *)(*(_QWORD *)(v15 + 104) + 96LL), *(_QWORD *)(v15 + 104), v14, v13, a5, a6),
          (v10 = *(_QWORD *)(v15 + 128)) != 0) )
    {
      v10 = *(_QWORD *)(v10 + 88);
    }
  }
  *a3 = v10;
  if ( a4 )
  {
    if ( (*(_BYTE *)(v10 + 8) & 6) == 0 )
      return 1;
    v16 = 1;
  }
  else
  {
    v16 = 0;
    if ( (*(_BYTE *)(v10 + 8) & 6) == 0 )
      return 1;
  }
  if ( sub_1A427C0(a1, v10, v16, v13, a5, a6) )
    return 1;
  if ( (*(_QWORD *)(v10 + 8) & 7LL) == 4 )
    v9 = sub_1A421C0(a1, v10);
  else
    v9 = sub_1A471B0((__int64 *)a1, (__int64 *)v10);
  if ( (_BYTE)v9 )
  {
    if ( !*(_DWORD *)(a1 + 11320) && *(char *)(*(_QWORD *)(a1 + 232) + 22LL) >= 0 )
    {
      v38 = *(_QWORD *)(v10 + 8);
      if ( (v38 & 6) != 0 )
      {
        *(_QWORD *)(v10 + 8) = v38 & 0xFFFFFFFFFFFFFFF8LL | 1;
        return v9;
      }
    }
    return 1;
  }
  v18 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18360LL);
  if ( !v18 )
    return v9;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 152LL))(v18, v10);
  if ( a4 )
  {
    if ( (*(_BYTE *)(v10 + 8) & 6) == 0 )
      return 1;
    v22 = 1;
  }
  else
  {
    v22 = 0;
    if ( (*(_BYTE *)(v10 + 8) & 6) == 0 )
      return 1;
  }
  if ( sub_1A427C0(a1, v10, v22, v19, v20, v21) )
    return 1;
  if ( (*(_QWORD *)(v10 + 8) & 7LL) == 4 )
    v23 = sub_1A421C0(a1, v10);
  else
    v23 = sub_1A471B0((__int64 *)a1, (__int64 *)v10);
  if ( (_BYTE)v23 )
  {
    if ( !*(_DWORD *)(a1 + 11320) && *(char *)(*(_QWORD *)(a1 + 232) + 22LL) >= 0 )
    {
      v24 = *(_QWORD *)(v10 + 8);
      if ( (v24 & 6) != 0 )
      {
        v9 = v23;
        *(_QWORD *)(v10 + 8) = v24 & 0xFFFFFFFFFFFFFFF8LL | 1;
        return v9;
      }
    }
    return 1;
  }
  return v9;
}
