__int64 __fastcall sub_1601E90(__int64 a1, __int64 a2)
{
  int v4; // eax
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  _QWORD *v17; // rdi
  unsigned __int64 v18; // rdx
  _QWORD *v19; // rsi
  __int64 result; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdi
  int v25; // eax
  _QWORD *v26; // rax
  _QWORD *v27; // r13
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r13
  __int64 v34; // r14
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  _QWORD *v37; // rdi
  unsigned __int64 v38; // rdx
  _QWORD *v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  _QWORD *v46; // rsi
  __int64 v47; // rbx
  __int64 v48; // rdx
  unsigned __int64 v49; // rax
  _QWORD *v50; // rdi
  __int64 v51; // rdx
  unsigned __int64 v52; // rdx
  __int64 v53; // rdi
  int v54; // eax
  __int64 v55; // rdi
  int v56; // eax
  unsigned __int64 v57; // [rsp+8h] [rbp-40h]
  unsigned __int64 v58; // [rsp+8h] [rbp-40h]
  unsigned __int64 v59; // [rsp+8h] [rbp-40h]
  _QWORD *v60; // [rsp+18h] [rbp-30h] BYREF

  v4 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)(v4 - 34) > 5 )
    goto LABEL_20;
  v5 = (_QWORD *)sub_B77A30(a2);
  v10 = v5;
  if ( v5 )
  {
    v11 = sub_BC39F0(v5);
    v12 = *(_QWORD *)(v11 + 16) + 8LL * *(unsigned int *)(v11 + 24);
    v13 = *(_QWORD *)(sub_BC39F0(v10) + 16);
    if ( v12 != v13 )
    {
      while ( 1 )
      {
        v14 = *(_QWORD *)((*(_QWORD *)(*(_QWORD *)v13 + 8LL) & 0xFFFFFFFFFFFFFFF8LL) + 112);
        v15 = *(_QWORD *)(v14 + 104);
        v16 = v15 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v15 & 1) != 0 )
          goto LABEL_13;
        v17 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v15 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
          goto LABEL_13;
        v18 = v15 & 2;
        v19 = v17;
        if ( (_DWORD)v18 )
          break;
LABEL_7:
        result = sub_16021F0(a1, v19, v18);
        if ( (_BYTE)result )
          return result;
        v13 += 8;
        if ( v12 == v13 )
          goto LABEL_9;
      }
      v16 = sub_6E2500(
              v17,
              *(_QWORD *)((*(_QWORD *)(*(_QWORD *)v13 + 8LL) & 0xFFFFFFFFFFFFFFF8LL) + 112),
              v18,
              v7,
              v8,
              v9)
          & 0xFFFFFFFFFFFFFFFELL;
      v15 = v16 | 1;
      *(_QWORD *)(v14 + 104) = v16 | 1;
LABEL_13:
      v18 = v15 & 0xFFFFFFFFFFFFFFF8LL;
      v19 = (_QWORD *)v18;
      if ( v16 )
      {
        if ( (v16 & 4) != 0 )
        {
          v19 = nullptr;
          if ( v18 )
          {
            v24 = *(_QWORD *)v18;
            v25 = *(_DWORD *)(*(_QWORD *)v18 + 12LL);
            if ( *(_DWORD *)(v18 + 8) != v25 )
            {
              *(_DWORD *)(v18 + 8) = v25;
              v57 = v18;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 152LL))(v24, v14);
              v18 = v57;
            }
            v19 = *(_QWORD **)(v18 + 16);
          }
        }
      }
      goto LABEL_7;
    }
  }
LABEL_9:
  if ( (unsigned __int8)sub_B7F5F0((_QWORD *)a2, &v60, v6, v7, v8, v9) )
    return (unsigned int)sub_17A37C0(a1, v60) ^ 1;
  v47 = *(_QWORD *)(a2 + 112);
  v48 = *(_QWORD *)(v47 + 104);
  v49 = v48 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v48 & 1) != 0 )
    goto LABEL_38;
  v50 = (_QWORD *)(v48 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v48 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    goto LABEL_38;
  v51 = v48 & 2;
  v46 = v50;
  if ( (_DWORD)v51 )
  {
    v49 = sub_6E2500(v50, *(_QWORD *)(a2 + 112), v51, v21, v22, v23) & 0xFFFFFFFFFFFFFFFELL;
    v48 = v49 | 1;
    *(_QWORD *)(v47 + 104) = v49 | 1;
LABEL_38:
    v52 = v48 & 0xFFFFFFFFFFFFFFF8LL;
    v46 = (_QWORD *)v52;
    if ( v49 )
    {
      if ( (v49 & 4) != 0 )
      {
        v46 = nullptr;
        if ( v52 )
        {
          v53 = *(_QWORD *)v52;
          v54 = *(_DWORD *)(*(_QWORD *)v52 + 12LL);
          if ( *(_DWORD *)(v52 + 8) != v54 )
          {
            *(_DWORD *)(v52 + 8) = v54;
            v58 = v52;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v53 + 152LL))(v53, v47);
            v52 = v58;
          }
          v46 = *(_QWORD **)(v52 + 16);
        }
      }
    }
  }
  v60 = v46;
  if ( (_QWORD *)a2 != v46 )
    return (unsigned int)sub_17A37C0(a1, v46) ^ 1;
  v4 = *(_BYTE *)(a2 + 28) & 0x7F;
LABEL_20:
  if ( (unsigned int)(v4 - 40) > 6 )
    return 0;
  if ( !sub_B8C090((_BYTE *)a2) || (result = sub_B79830(a2, *(_QWORD *)(a1 + 248)), !(_BYTE)result) )
  {
    v26 = (_QWORD *)sub_B73BE0(a2);
    v27 = v26;
    if ( v26 )
    {
      v28 = sub_BC3660(v26);
      v29 = *(_QWORD *)(v28 + 16) + 8LL * *(unsigned int *)(v28 + 24);
      v33 = *(_QWORD *)(sub_BC3660(v27) + 16);
      if ( v29 != v33 )
      {
        while ( 1 )
        {
          v34 = *(_QWORD *)(*(_QWORD *)v33 + 80LL);
          v35 = *(_QWORD *)(v34 + 72);
          v36 = v35 & 0xFFFFFFFFFFFFFFFELL;
          if ( (v35 & 1) != 0 )
            goto LABEL_45;
          v37 = (_QWORD *)(v35 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v35 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
            goto LABEL_45;
          v38 = v35 & 2;
          v39 = v37;
          if ( (_DWORD)v38 )
            break;
LABEL_28:
          result = sub_16021F0(a1, v39, v38);
          if ( (_BYTE)result )
            return result;
          v33 += 8;
          if ( v29 == v33 )
            goto LABEL_30;
        }
        v36 = sub_6E2500(v37, *(_QWORD *)(*(_QWORD *)v33 + 80LL), v38, v30, v31, v32) & 0xFFFFFFFFFFFFFFFELL;
        v35 = v36 | 1;
        *(_QWORD *)(v34 + 72) = v36 | 1;
LABEL_45:
        v38 = v35 & 0xFFFFFFFFFFFFFFF8LL;
        v39 = (_QWORD *)v38;
        if ( v36 )
        {
          if ( (v36 & 4) != 0 )
          {
            v39 = nullptr;
            if ( v38 )
            {
              v55 = *(_QWORD *)v38;
              v56 = *(_DWORD *)(*(_QWORD *)v38 + 12LL);
              if ( *(_DWORD *)(v38 + 8) != v56 )
              {
                *(_DWORD *)(v38 + 8) = v56;
                v59 = v38;
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v55 + 152LL))(v55, v34);
                v38 = v59;
              }
              v39 = *(_QWORD **)(v38 + 16);
            }
          }
        }
        goto LABEL_28;
      }
    }
LABEL_30:
    v40 = sub_B8C330(a2);
    v41 = sub_B7D8D0(a2, v40);
    if ( v41
      || (v41 = (__int64)sub_705340((__int64 *)(*(_QWORD *)(a2 + 80) + 72LL), *(_QWORD *)(a2 + 80), v42, v43, v44, v45),
          a2 != v41) )
    {
      v46 = (_QWORD *)v41;
      return (unsigned int)sub_17A37C0(a1, v46) ^ 1;
    }
    return 0;
  }
  return result;
}
