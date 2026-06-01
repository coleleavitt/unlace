__int64 __fastcall sub_6D6840(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 **v6; // r14
  __int64 *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 **v10; // rbp
  __int64 *v11; // r15
  __int64 v12; // r12
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 **v15; // rcx
  __int64 **v16; // r12
  __int64 **v17; // r15
  __int64 v19; // r8
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  _QWORD *v22; // rdx
  __int64 v23; // r12
  __int64 v24; // rsi
  _DWORD *v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  _DWORD *v29; // rdx
  unsigned __int64 v30; // rax
  _QWORD *v31; // rdx
  __int64 v32; // rsi
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rdi
  int v37; // eax
  __int64 v38; // rax
  unsigned __int64 v39; // rax
  __int64 v40; // rdi
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // [rsp+8h] [rbp-60h]
  __int64 v45; // [rsp+18h] [rbp-50h]
  __int64 v47; // [rsp+28h] [rbp-40h]
  __int64 v48; // [rsp+28h] [rbp-40h]

  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v4 + 16) - 34 > 1 )
  {
    v43 = sub_B0D320(v4);
    v45 = v43 + 8 * ((*(_BYTE *)(v43 + 19) >> 2) + (unsigned __int64)((*(_WORD *)(v43 + 18) >> 3) & 0x7F)) + 48;
    v4 = *(_QWORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v4 + 16) - 34 > 1 )
      v4 = sub_B0D320(v4);
    v5 = (*(_WORD *)(v4 + 18) >> 3) & 0x7F;
  }
  else
  {
    v5 = (*(_WORD *)(v4 + 18) >> 3) & 0x7F;
    v45 = v4 + 8 * (v5 + (*(_BYTE *)(v4 + 19) >> 2)) + 48;
  }
  v6 = (__int64 **)(v4 + 8 * v5 + 48);
  if ( v6 != (__int64 **)v45 )
  {
LABEL_4:
    v7 = *v6;
    v8 = *(_QWORD *)(*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v8 + 16) - 34 > 1 )
    {
      v38 = sub_B0D320(v8);
      v44 = v38 + 8 * ((*(_BYTE *)(v38 + 19) >> 2) + (unsigned __int64)((*(_WORD *)(v38 + 18) >> 3) & 0x7F)) + 48;
      v8 = *(_QWORD *)(*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v8 + 16) - 34 > 1 )
        v8 = sub_B0D320(v8);
      v9 = (*(_WORD *)(v8 + 18) >> 3) & 0x7F;
    }
    else
    {
      v9 = (*(_WORD *)(v8 + 18) >> 3) & 0x7F;
      v44 = v8 + 8 * (v9 + (*(_BYTE *)(v8 + 19) >> 2)) + 48;
    }
    v10 = (__int64 **)(v8 + 8 * v9 + 48);
    if ( v10 == (__int64 **)v44 )
      return 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = *v10;
        if ( *v10 )
        {
          if ( v7 )
          {
            if ( v7 == v11
              || (v12 = (*(__int64 (__fastcall **)(__int64 *))(*v7 + 32))(v7),
                  v12 == (*(__int64 (__fastcall **)(__int64 *))(*v11 + 32))(v11)) )
            {
LABEL_20:
              if ( (__int64 **)v45 == ++v6 )
                return 1;
              goto LABEL_4;
            }
          }
        }
        v13 = v11[13];
        if ( v13 )
        {
          if ( v13 <= 7 )
            goto LABEL_18;
LABEL_13:
          v14 = v13 & 0xFFFFFFFFFFFFFFF8LL;
          v15 = *(__int64 ***)(v14 + 8);
          v16 = &v15[*(unsigned int *)(v14 + 16)];
          goto LABEL_14;
        }
        v19 = v11[12];
        v20 = *(_QWORD *)(v19 + 88);
        v21 = v20 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v20 & 1) == 0 )
          break;
        if ( v21 )
          goto LABEL_30;
        if ( (__int64 **)v44 == ++v10 )
          return 0;
      }
      if ( v21 <= 3 )
      {
        if ( !v21 )
          goto LABEL_18;
        goto LABEL_35;
      }
      if ( (v20 & 2) == 0 )
        goto LABEL_18;
      v22 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
      v23 = v22[2275];
      if ( v23 )
      {
        v24 = v22[274];
        v22[284] += 24LL;
        v21 = (v24 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v22[275] >= v21 + 24 && v24 )
        {
          v22[274] = v21 + 24;
        }
        else
        {
          v48 = v19;
          v21 = sub_6A76A0((__int64)(v22 + 274), 24, 3);
          v19 = v48;
        }
        *(_QWORD *)v21 = v23;
        v20 = v21 | 5;
        *(_DWORD *)(v21 + 8) = 0;
        *(_QWORD *)(v21 + 16) = v19;
        *(_QWORD *)(v19 + 88) = v21 | 5;
        LOBYTE(v21) = v21 & 0xFA | 4;
LABEL_30:
        if ( (v21 & 4) != 0 )
        {
          v25 = (_DWORD *)(v20 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v25 )
          {
            v40 = *(_QWORD *)v25;
            v41 = *(_DWORD *)(*(_QWORD *)v25 + 12LL);
            if ( v25[2] != v41 )
            {
              v25[2] = v41;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v40 + 144LL))(v40, v19);
            }
          }
        }
        v13 = v11[13];
        goto LABEL_33;
      }
      *(_QWORD *)(v19 + 88) = v19 & 0xFFFFFFFFFFFFFFFALL | 1;
      v13 = v11[13];
LABEL_33:
      if ( v13 > 7 )
        goto LABEL_13;
      if ( v13 )
        goto LABEL_18;
LABEL_35:
      v26 = v11[12];
      v27 = *(_QWORD *)(v26 + 88);
      v28 = v27 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v27 & 1) != 0 )
      {
        if ( !v28 || (v27 & 4) == 0 )
          goto LABEL_18;
        v29 = (_DWORD *)(v27 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v29 )
        {
LABEL_51:
          v36 = *(_QWORD *)v29;
          v37 = *(_DWORD *)(*(_QWORD *)v29 + 12LL);
          if ( v29[2] != v37 )
          {
            v29[2] = v37;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v36 + 144LL))(v36, v26);
          }
        }
LABEL_39:
        v30 = v11[13];
        if ( v30 <= 7 )
          goto LABEL_18;
        v16 = nullptr;
        v15 = *(__int64 ***)((v30 & 0xFFFFFFFFFFFFFFF8LL) + 8);
        goto LABEL_14;
      }
      if ( v28 <= 3 || (v27 & 2) == 0 )
        goto LABEL_18;
      v31 = (_QWORD *)(v27 & 0xFFFFFFFFFFFFFFFCLL);
      v16 = (__int64 **)v31[2275];
      if ( v16 )
      {
        v32 = v31[274];
        v31[284] += 24LL;
        v33 = (v32 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v31[275] >= v33 + 24 && v32 )
        {
          v31[274] = v33 + 24;
          v34 = (v32 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v47 = v26;
          v42 = sub_6A76A0((__int64)(v31 + 274), 24, 3);
          v26 = v47;
          v34 = v42;
        }
        *(_QWORD *)v34 = v16;
        *(_DWORD *)(v34 + 8) = 0;
        *(_QWORD *)(v34 + 16) = v26;
        v35 = v34 | 5;
        *(_QWORD *)(v26 + 88) = v35;
        v29 = (_DWORD *)(v35 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v29 )
          goto LABEL_51;
        goto LABEL_39;
      }
      *(_QWORD *)(v26 + 88) = v26 & 0xFFFFFFFFFFFFFFFALL | 1;
      v39 = v11[13];
      if ( v39 <= 7 )
        goto LABEL_18;
      v15 = *(__int64 ***)((v39 & 0xFFFFFFFFFFFFFFF8LL) + 8);
LABEL_14:
      if ( v16 != v15 )
      {
        v17 = v15;
        while ( !(unsigned __int8)sub_6D4F10(a1, v7, *v17) )
        {
          if ( v16 == ++v17 )
            goto LABEL_18;
        }
        goto LABEL_20;
      }
LABEL_18:
      if ( (__int64 **)v44 == ++v10 )
        return 0;
    }
  }
  return 1;
}

