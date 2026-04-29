__int64 __fastcall sub_3FF810(__int64 a1, __int64 *a2, int a3, signed int a4, double a5)
{
  __int64 v6; // rdx
  unsigned int v9; // r12d
  const void *v10; // rbx
  int v11; // r14d
  size_t v12; // rax
  size_t v13; // r8
  int v14; // r8d
  int v15; // eax
  int v16; // r9d
  char *v17; // rdx
  void *v19; // rdi
  size_t v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rbx
  int v23; // r14d
  char v24; // al
  int v25; // ebx
  unsigned int v26; // esi
  __int64 v27; // rax
  int v28; // eax
  int v29; // ebx
  __int64 v30; // rax
  size_t v31; // [rsp+0h] [rbp-48h]
  size_t v32; // [rsp+0h] [rbp-48h]
  size_t v33; // [rsp+8h] [rbp-40h]

  if ( a3 < 0 )
  {
    if ( !under_debugger )
      sub_3835A0(0xCD1Bu, (__int64)a2, a5);
    goto LABEL_59;
  }
  v6 = *(_QWORD *)(a1 + 688);
  if ( !*(_BYTE *)(v6 + 8) )
    goto LABEL_57;
  while ( a3 >= *(_DWORD *)(v6 + 40) )
  {
    v6 += 24;
    if ( !*(_BYTE *)(v6 + 8) )
      goto LABEL_57;
  }
  if ( !v6 )
  {
LABEL_57:
    if ( !under_debugger )
      sub_3835A0(0xC853u, (__int64)a2, a5);
    goto LABEL_59;
  }
  v9 = *(__int16 *)(v6 + 14);
  if ( (int)v9 > a4 )
    v9 = a4;
  if ( !a2 )
    return v9;
  v10 = (const void *)(v6 + 8);
  v11 = *(_DWORD *)(v6 + 16);
  v12 = strlen((const char *)(v6 + 8));
  v13 = v12;
  if ( v12 )
  {
    v19 = (void *)*a2;
    v20 = v12 + 1;
    if ( a2[2] < v12 + 1 )
    {
      v32 = v12 + 1;
      v33 = v12;
      v27 = qvector_reserve(a2, *a2, v20, 1);
      v13 = v33;
      v20 = v32;
      *a2 = v27;
      v19 = (void *)v27;
    }
    a2[1] = v20;
    v31 = v13;
    memmove(v19, v10, v13);
    *(_BYTE *)(*a2 + v31) = 0;
    v14 = a3 - v11;
    if ( *(_DWORD *)(a1 + 80) != 8 )
      goto LABEL_12;
LABEL_27:
    if ( (unsigned int)(a3 - 8) <= 0x107 && (int)v9 <= 4 && !v14 )
    {
      v21 = *a2;
      if ( *(_DWORD *)(a1 + 484) == a3 )
      {
        if ( (unsigned __int64)a2[2] <= 3 )
        {
          v30 = qvector_reserve(a2, v21, 4, 1);
          *a2 = v30;
          v21 = v30;
        }
        a2[1] = 4;
        *(_WORD *)v21 = 29559;
        *(_BYTE *)(v21 + 2) = 112;
        *(_BYTE *)(*a2 + 3) = 0;
      }
      else
      {
        *(_BYTE *)v21 = 119;
      }
      return v9;
    }
    v15 = *(_DWORD *)(a1 + 612);
    goto LABEL_13;
  }
  a2[1] = 0;
  v14 = a3 - v11;
  if ( *(_DWORD *)(a1 + 80) == 8 )
    goto LABEL_27;
LABEL_12:
  v15 = *(_DWORD *)(a1 + 548);
LABEL_13:
  if ( a3 >= *(_DWORD *)(a1 + 488) && a3 < v15 + 16 )
  {
    *(_BYTE *)*a2 = 118;
    if ( *(_DWORD *)(a1 + 80) == 8 )
    {
      v22 = v9 - 1;
    }
    else
    {
      if ( sub_3EAF40(*(_DWORD *)(a1 + 488), a3, v9) )
      {
        if ( ((v9 - 4) & 0xFFFFFFFB) == 0 )
        {
          v17 = "d";
          if ( v9 == 4 )
            v17 = (char *)&unk_4130E1;
          sub_6B2B0(a2, (__int64)"%s%d", v17, (unsigned int)((a3 - v16) / (int)v9));
          return v9;
        }
        if ( !under_debugger )
          sub_3835A0(0xC8E1u, (unsigned int)a3, a5);
LABEL_59:
        BUG();
      }
      v22 = v9 - 1;
      if ( a3 >= v16 && a3 <= v16 + 256 && ((unsigned int)v22 <= 1 || v9 == 4) )
      {
        v23 = a3 & 7;
        if ( (int)(v9 + v23) <= 8 )
        {
          sub_6B2B0(a2, (__int64)"d%d", (unsigned int)((a3 - v16 - v23) / 8));
LABEL_38:
          v14 = v23;
          v24 = aBhqsqqqd[v22];
          v25 = dword_42E1A0[v22];
          v26 = v24;
          if ( !v23 )
          {
            if ( v25 != 16 && *(_DWORD *)(a1 + 80) != 8 )
            {
              sub_FA510(a2, (__int64)".%c[%d]", (unsigned int)v24, 0);
              return v9;
            }
LABEL_45:
            *(_BYTE *)*a2 = v24;
            return v9;
          }
          goto LABEL_47;
        }
LABEL_37:
        v23 = v14;
        goto LABEL_38;
      }
    }
    if ( (unsigned int)v22 > 7 )
    {
      v24 = 113;
      v26 = 113;
      v25 = 16;
      if ( !v14 )
        goto LABEL_45;
LABEL_47:
      v28 = v14 / v25;
      v29 = v14 % v25;
      sub_FA510(a2, (__int64)".%c[%d]", v26, v28);
      if ( v29 )
        sub_FA510(a2, (__int64)"^%d", v29);
      return v9;
    }
    goto LABEL_37;
  }
  if ( v14 )
    sub_FA510(a2, (__int64)"^%d", v14);
  return v9;
}
