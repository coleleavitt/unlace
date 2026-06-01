__int64 __fastcall sub_DAC7D0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v9; // r12
  unsigned int v10; // r13d
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdi
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 *v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40[6]; // [rsp+8h] [rbp-30h] BYREF

  v5 = *(_DWORD *)(a3 + 24);
  if ( v5 )
  {
    if ( v5 == 2 )
    {
      if ( !*(_QWORD *)(a3 + 32) )
        return 1;
    }
    else if ( v5 != 3 && !*(_QWORD *)(a3 + 40) && !*(_QWORD *)a3 )
    {
      return 1;
    }
  }
  else
  {
    v6 = *(_QWORD *)(a3 + 32);
    if ( !v6 || *(_BYTE *)(v6 + 26) )
      return 1;
  }
  v7 = *(_QWORD *)(a1 + 80);
  v9 = (__int64)a2;
  v10 = 0;
  v11 = v7 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v7 & 2) != 0 )
  {
    if ( v11 )
      v10 = sub_C00A40(v11, (__int64)a2, a3, a4, a5);
  }
  else if ( v11 )
  {
    a2 = v40;
    v12 = sub_B7D120(v11, v40);
    v16 = sub_C00A40(v12, (__int64)v40, v13, v14, v15);
    v5 = *(_DWORD *)(a3 + 24);
    v10 = v16;
  }
  if ( v5 == 1 )
  {
    v23 = *(_QWORD *)(a3 + 32);
    v20 = *(_QWORD *)(v23 + 32);
    if ( v20 )
      return sub_DAA7B0(v9, v10, a3, v20);
    goto LABEL_33;
  }
  if ( v5 )
  {
    if ( v5 == 2 || v5 == 3 )
      BUG();
    v17 = *(_QWORD *)(a3 + 32);
    v18 = *(_QWORD *)(v17 + 32);
  }
  else
  {
    v17 = *(_QWORD *)(a3 + 32);
    if ( v17 )
    {
      v18 = *(_QWORD *)(v17 + 32);
      v19 = *(unsigned int *)(a3 + 40);
      if ( *(_DWORD *)(v18 + 24) != (_DWORD)v19 && (_DWORD)v19 )
      {
        v20 = *(_QWORD *)(*(_QWORD *)(v17 + (unsigned int)v19 + 32) + 32LL);
        if ( v20 )
          return sub_DAA7B0(v9, v10, a3, v20);
        goto LABEL_25;
      }
    }
    else
    {
      v18 = 64;
    }
  }
  v20 = *(_QWORD *)(v18 + 32);
  if ( v20 )
    return sub_DAA7B0(v9, v10, a3, v20);
  if ( v5 )
    goto LABEL_42;
  if ( !v17 )
  {
    if ( *(_QWORD *)(v18 + 40) || !*(_BYTE *)(v18 + 60) || *(_DWORD *)(a3 + 40) == *(_QWORD *)a3 )
      goto LABEL_50;
    goto LABEL_56;
  }
  v19 = *(unsigned int *)(a3 + 40);
LABEL_25:
  if ( *(_DWORD *)(v18 + 24) != (_DWORD)v19 && (_DWORD)v19 )
    v22 = *(_QWORD *)(v17 + (unsigned int)v19 + 32);
  else
    v22 = v18;
  if ( *(_QWORD *)(v22 + 40) || !*(_BYTE *)(v22 + 60) || *(_QWORD *)a3 == (unsigned int)v19 )
    goto LABEL_30;
  if ( *(_DWORD *)(v18 + 24) != (_DWORD)v19 && (_DWORD)v19 )
    v18 = *(_QWORD *)(v17 + (unsigned int)v19 + 32);
LABEL_56:
  v29 = *(_QWORD *)(sub_CEF5A0((__int64 *)v18) & 0xFFFFFFFFFFFFFFF0LL);
  v30 = *(unsigned __int8 *)(v29 + 16);
  if ( (unsigned __int8)(v30 - 2) <= 4u )
    goto LABEL_57;
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v29 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
  {
    v29 = sub_F63050(
            v29,
            a2,
            (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v29 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2,
            v30);
    if ( v29 )
      goto LABEL_57;
  }
  v31 = *(_DWORD *)(a3 + 24);
  if ( v31 == 1 )
  {
    v34 = *(__int64 **)(a3 + 32);
  }
  else if ( v31 )
  {
    if ( v31 != 2 && v31 != 3 )
    {
      v32 = *(_QWORD *)(a3 + 32);
LABEL_69:
      v34 = *(__int64 **)(v32 + 32);
      goto LABEL_70;
    }
    v34 = nullptr;
  }
  else
  {
    v32 = 0;
    if ( !*(_QWORD *)(a3 + 32) )
      goto LABEL_69;
    v32 = *(_QWORD *)(a3 + 32);
    v33 = *(unsigned int *)(a3 + 40);
    if ( *(_DWORD *)(*(_QWORD *)(v32 + 32) + 24LL) == (_DWORD)v33 || !(_DWORD)v33 )
      goto LABEL_69;
    v34 = *(__int64 **)(v32 + v33 + 32);
  }
LABEL_70:
  v29 = *(_QWORD *)(sub_CEF5A0(v34) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v29 + 16) != 14 )
  {
    v36 = *(_QWORD *)(*(_QWORD *)(v29 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v36 + 16) != 14 || (v29 = sub_F63050(v29, a2, v36, v35)) == 0 )
    {
      v37 = (__int64 *)sub_CFDF60(a3);
      v29 = *(_QWORD *)(sub_CEF5A0(v37) & 0xFFFFFFFFFFFFFFF0LL);
      v39 = (unsigned int)*(unsigned __int8 *)(v29 + 16) - 57;
      if ( (unsigned int)v39 > 1 )
      {
        v29 = sub_DAA710(v29, (__int64)a2, v39, v38);
        if ( !v29 )
        {
          v5 = *(_DWORD *)(a3 + 24);
          if ( v5 == 1 )
          {
            v23 = *(_QWORD *)(a3 + 32);
            goto LABEL_33;
          }
          if ( v5 )
          {
LABEL_42:
            v23 = 0;
            if ( (unsigned int)(v5 - 2) <= 1 )
            {
LABEL_33:
              v24 = sub_CEF5A0((__int64 *)v23) & 0xFFFFFFFFFFFFFFF0LL;
              goto LABEL_34;
            }
            if ( !*(_QWORD *)(a3 + 40) )
            {
              v27 = *(_QWORD *)(a3 + 32);
LABEL_45:
              v23 = *(_QWORD *)(v27 + 32);
              goto LABEL_33;
            }
LABEL_50:
            v27 = *(_QWORD *)(a3 + 32);
            goto LABEL_45;
          }
          v17 = *(_QWORD *)(a3 + 32);
          v27 = v17;
          if ( !v17 )
            goto LABEL_45;
          v19 = *(unsigned int *)(a3 + 40);
LABEL_30:
          v23 = *(_QWORD *)(v17 + 32);
          if ( *(_DWORD *)(v23 + 24) != (_DWORD)v19 && (_DWORD)v19 )
            v23 = *(_QWORD *)(v17 + v19 + 32);
          goto LABEL_33;
        }
      }
    }
  }
LABEL_57:
  v24 = *(_QWORD *)(v29 + 32) & 0xFFFFFFFFFFFFFFF0LL;
LABEL_34:
  v25 = *(_QWORD *)v24;
  v26 = *(unsigned __int8 *)(*(_QWORD *)v24 + 16LL);
  if ( (unsigned __int8)(v26 - 2) > 4u )
  {
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
      return 1;
    v28 = sub_F63050(v25, a2, v26, v25);
    v25 = v28;
    if ( !v28 )
      return 1;
    LODWORD(v26) = *(unsigned __int8 *)(v28 + 16);
  }
  if ( (unsigned int)(v26 - 2) > 1 )
    return 1;
  return sub_DAB900(v9, v10, a3, v25);
}
