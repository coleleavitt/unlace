__int64 __fastcall sub_DA9B10(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v7; // rdi
  __int64 (__fastcall *v9)(__int64); // rax
  _QWORD *v10; // rdi
  __int64 (*v11)(void); // rdx
  _QWORD *v12; // rdi
  _QWORD **v13; // rdi
  __int64 v14; // r14
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rdi
  unsigned __int64 v21; // rsi
  unsigned __int64 *v22; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 *v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // rdx

  v7 = *(_QWORD **)(a1 + 24);
  v9 = *(__int64 (__fastcall **)(__int64))(*v7 + 104LL);
  if ( v9 != sub_D8A670 )
    goto LABEL_22;
  v10 = (_QWORD *)v7[3];
  v11 = *(__int64 (**)(void))(*v10 + 104LL);
  if ( (char *)v11 != (char *)v9 )
    goto LABEL_16;
  v12 = (_QWORD *)v10[3];
  v9 = *(__int64 (__fastcall **)(__int64))(*v12 + 104LL);
  if ( (char *)v9 != (char *)v11 )
  {
LABEL_22:
    v14 = ((__int64 (*)(void))v9)();
LABEL_6:
    v15 = *(_DWORD *)(a4 + 24);
    if ( v15 != 3 )
      goto LABEL_7;
    goto LABEL_17;
  }
  v13 = (_QWORD **)v12[3];
  v11 = (__int64 (*)(void))(*v13)[13];
  if ( (char *)v11 == (char *)v9 )
  {
    v14 = (*(__int64 (__fastcall **)(_QWORD *))(*v13[3] + 104LL))(v13[3]);
    goto LABEL_6;
  }
LABEL_16:
  v14 = v11();
  v15 = *(_DWORD *)(a4 + 24);
  if ( v15 != 3 )
  {
LABEL_7:
    if ( v15 )
    {
      if ( v15 != 1 )
      {
LABEL_23:
        v20 = 0;
        if ( (unsigned int)(v15 - 2) > 1 )
        {
          v24 = *(_QWORD *)(a4 + 32);
LABEL_25:
          v20 = *(_QWORD *)(v24 + 32);
        }
LABEL_21:
        v21 = sub_CEF5A0((__int64 *)v20);
        goto LABEL_18;
      }
LABEL_20:
      v20 = *(_QWORD *)(a4 + 32);
      goto LABEL_21;
    }
    v16 = *(_QWORD *)(a4 + 32);
    v17 = *(unsigned int *)(a4 + 40);
    v18 = *(_QWORD *)(v16 + 32);
    if ( *(_DWORD *)(v18 + 24) != (_DWORD)v17 && (_DWORD)v17 )
      v19 = *(_QWORD *)(v16 + (unsigned int)v17 + 32);
    else
      v19 = *(_QWORD *)(v16 + 32);
    if ( *(_QWORD *)(v19 + 40) || !*(_BYTE *)(v19 + 60) || *(_QWORD *)a4 == (unsigned int)v17 )
      goto LABEL_13;
    if ( *(_DWORD *)(v18 + 24) != (_DWORD)v17 && (_DWORD)v17 )
      v18 = *(_QWORD *)(v16 + (unsigned int)v17 + 32);
    v25 = *(_QWORD *)(sub_CEF5A0((__int64 *)v18) & 0xFFFFFFFFFFFFFFF0LL);
    v26 = *(unsigned __int8 *)(v25 + 16);
    if ( (unsigned __int8)(v26 - 2) <= 4u )
      goto LABEL_32;
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
    {
      v25 = sub_F63050(
              v25,
              a2,
              (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2,
              v26);
      if ( v25 )
        goto LABEL_32;
    }
    v27 = *(_DWORD *)(a4 + 24);
    if ( v27 == 1 )
    {
      v29 = *(_QWORD *)(a4 + 32);
    }
    else if ( v27 )
    {
      v29 = 0;
      if ( v27 != 2 && v27 != 3 )
        v29 = *(_QWORD *)(*(_QWORD *)(a4 + 32) + 32LL);
    }
    else
    {
      v28 = *(_QWORD *)(a4 + 32);
      if ( v28 )
      {
        v29 = *(_QWORD *)(v28 + 32);
        v30 = *(unsigned int *)(a4 + 40);
        if ( *(_DWORD *)(v29 + 24) != (_DWORD)v30 && (_DWORD)v30 )
          v29 = *(_QWORD *)(v28 + v30 + 32);
      }
      else
      {
        v29 = 64;
      }
    }
    v25 = *(_QWORD *)(sub_CEF5A0((__int64 *)v29) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v25 + 16) == 14
      || (v32 = *(_QWORD *)(*(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v32 + 16) == 14)
      && (v25 = sub_F63050(v25, a2, v32, v31)) != 0 )
    {
LABEL_32:
      v21 = *(_QWORD *)(v25 + 32);
      goto LABEL_18;
    }
    v33 = *(_DWORD *)(a4 + 24);
    if ( v33 == 1 )
    {
      v36 = *(__int64 **)(a4 + 32);
    }
    else
    {
      if ( v33 )
      {
        if ( v33 == 2 || v33 == 3 )
        {
          v36 = nullptr;
          goto LABEL_50;
        }
        v34 = *(_QWORD *)(a4 + 32);
      }
      else
      {
        v34 = 0;
        if ( *(_QWORD *)(a4 + 32) )
        {
          v34 = *(_QWORD *)(a4 + 32);
          v35 = *(unsigned int *)(a4 + 40);
          if ( *(_DWORD *)(*(_QWORD *)(v34 + 32) + 24LL) != (_DWORD)v35 )
          {
            if ( (_DWORD)v35 )
            {
              v36 = *(__int64 **)(v34 + v35 + 32);
              goto LABEL_50;
            }
          }
        }
      }
      v36 = *(__int64 **)(v34 + 32);
    }
LABEL_50:
    v25 = *(_QWORD *)(sub_CEF5A0(v36) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v25 + 16) - 57 > 1 )
    {
      v38 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57;
      if ( (unsigned int)v38 > 1 || (v25 = sub_F63050(v25, a2, v38, v37)) == 0 )
      {
        v15 = *(_DWORD *)(a4 + 24);
        if ( v15 != 1 )
        {
          if ( !v15 )
          {
            v16 = *(_QWORD *)(a4 + 32);
            v24 = v16;
            if ( v16 )
            {
              v17 = *(unsigned int *)(a4 + 40);
LABEL_13:
              v20 = *(_QWORD *)(v16 + 32);
              if ( *(_DWORD *)(v20 + 24) != (_DWORD)v17 && (_DWORD)v17 )
                v20 = *(_QWORD *)(v16 + v17 + 32);
              goto LABEL_21;
            }
            goto LABEL_25;
          }
          goto LABEL_23;
        }
        goto LABEL_20;
      }
    }
    goto LABEL_32;
  }
LABEL_17:
  v21 = *(_QWORD *)(a4 + 40) & 0xFFFFFFFFFFFFFFF0LL;
LABEL_18:
  v22 = (unsigned __int64 *)sub_AAE980(v14, v21);
  return sub_DA9700(a1, a2, a3, a4, v22);
}
