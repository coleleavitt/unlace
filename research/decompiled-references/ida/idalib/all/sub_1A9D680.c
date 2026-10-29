__int64 __fastcall sub_1A9D680(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4, unsigned __int8 a5)
{
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // r15
  __int16 v16; // ax
  unsigned __int64 v17; // rcx
  bool v18; // zf
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r15
  __int16 v27; // ax
  unsigned __int64 v28; // rcx
  __int64 *v29; // rbp
  __int64 *j; // r12
  __int64 v31; // rdi
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned __int64 v38; // r15
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  __int64 *v41; // rbp
  __int64 *v42; // r12
  __int64 v43; // rdi
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rdx
  __int64 *v48; // rax
  __int64 *i; // r15
  __int64 v50; // rdi
  __int16 v51; // ax
  unsigned __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rax
  unsigned __int64 v55; // rax
  __int16 v56; // ax
  _QWORD *v57; // rax
  unsigned __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rcx
  unsigned __int64 v65; // rax
  __int64 *v66; // [rsp+0h] [rbp-58h]
  unsigned __int64 v69; // [rsp+10h] [rbp-48h] BYREF
  int v70; // [rsp+18h] [rbp-40h]

  result = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (_BYTE)result == 20 )
  {
    v10 = sub_B8E970(a1 + 48);
    v15 = v10;
    if ( v10 )
    {
      if ( (*(_BYTE *)(v10 + 28) & 0x7F) != 0x4B )
      {
        while ( 1 )
        {
          v32 = *(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v15 = v32;
          if ( !v32 )
            break;
          if ( (*(_BYTE *)(v32 + 28) & 0x7F) == 0x4B )
            goto LABEL_4;
        }
        v20 = *(_QWORD *)(a1 + 120);
        if ( v20 )
        {
LABEL_12:
          v21 = v20 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v21 )
          {
            if ( (*(_BYTE *)(v21 + 72) & 1) != 0 )
            {
              sub_BA8900(a1);
              v21 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
            }
            v22 = *(_QWORD *)(v21 + 56);
            if ( v22 )
            {
              while ( 1 )
              {
                if ( *(char *)(v22 + 28) >= 0 )
                {
                  v11 = *(_QWORD *)(v22 + 40);
                  if ( ((v11 & 7) != 0 || (v11 & 0xFFFFFFFFFFFFFFF8LL) == 0) && (*(_BYTE *)(v22 + 8) & 6) == 0 )
                    break;
                }
                v22 = *(_QWORD *)(v22 + 128);
                if ( !v22 )
                  goto LABEL_29;
              }
LABEL_22:
              sub_1A9D680(v22, a2, a3, a4, a5);
              while ( 1 )
              {
                v22 = *(_QWORD *)(v22 + 128);
                if ( !v22 )
                  break;
                while ( *(char *)(v22 + 28) >= 0 )
                {
                  v11 = *(_QWORD *)(v22 + 40);
                  if ( (v11 & 7) == 0 && (v11 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                    break;
                  if ( (*(_BYTE *)(v22 + 8) & 6) == 0 )
                    goto LABEL_22;
                  v22 = *(_QWORD *)(v22 + 128);
                  if ( !v22 )
                    goto LABEL_29;
                }
              }
            }
          }
LABEL_29:
          if ( !a5 )
            goto LABEL_30;
          v44 = *(_QWORD *)(a1 + 120);
          if ( !v44 )
          {
            sub_A794E0((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), v11, v12, v13, v14);
            v44 = *(_QWORD *)(a1 + 120);
          }
          v45 = v44 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v44 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            if ( (*(_BYTE *)(v45 + 72) & 1) == 0 )
            {
              v12 = *(unsigned int *)(v45 + 48);
              if ( (_DWORD)v12 )
              {
LABEL_69:
                v45 = *(_QWORD *)(v45 + 40);
                v66 = (__int64 *)(v45 + 8 * v12);
                goto LABEL_70;
              }
LABEL_117:
              if ( (*(_BYTE *)(v45 + 72) & 1) != 0 )
              {
                sub_BA8900(a1);
                v44 = *(_QWORD *)(a1 + 120);
                v45 = v44 & 0xFFFFFFFFFFFFFFF8LL;
              }
              v12 = *(unsigned int *)(v45 + 24);
              v45 = *(_QWORD *)(v45 + 16);
              v66 = (__int64 *)(v45 + 8 * v12);
LABEL_70:
              if ( v44 )
                goto LABEL_71;
              goto LABEL_108;
            }
            sub_BA8900(a1);
            v44 = *(_QWORD *)(a1 + 120);
            v45 = v44 & 0xFFFFFFFFFFFFFFF8LL;
            v12 = *(unsigned int *)((v44 & 0xFFFFFFFFFFFFFFF8LL) + 48);
            if ( (_DWORD)v12 )
              goto LABEL_69;
            if ( v44 )
            {
              if ( v45 )
                goto LABEL_117;
LABEL_30:
              result = *(_BYTE *)(a1 + 28) & 0x7F;
              goto LABEL_31;
            }
            sub_A794E0((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), v45, v12, v13, v14);
            v44 = *(_QWORD *)(a1 + 120);
            v45 = v44 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v44 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
              goto LABEL_117;
          }
          if ( !v44 )
          {
            v66 = nullptr;
LABEL_108:
            sub_A794E0((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), v45, v12, v13, v14);
            v44 = *(_QWORD *)(a1 + 120);
LABEL_71:
            v46 = v44 & 0xFFFFFFFFFFFFFFF8LL;
            v47 = v46;
            if ( !v46 )
            {
              v48 = nullptr;
LABEL_75:
              for ( i = v48; v66 != i; ++i )
              {
                v50 = *i;
                sub_1A9D680(v50, a2, a3, a4, 1);
              }
              goto LABEL_30;
            }
            if ( (*(_BYTE *)(v46 + 72) & 1) != 0 )
            {
              sub_BA8900(a1);
              v47 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
              v64 = *(unsigned int *)(v47 + 48);
              if ( (_DWORD)v64 )
                goto LABEL_74;
              if ( !*(_QWORD *)(a1 + 120) )
              {
                sub_A794E0((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), v47, v64, v62, v63);
                v47 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
              }
              v48 = nullptr;
              if ( !v47 )
                goto LABEL_75;
            }
            else if ( *(_DWORD *)(v46 + 48) )
            {
LABEL_74:
              v48 = *(__int64 **)(v47 + 40);
              goto LABEL_75;
            }
            v65 = v47;
            if ( (*(_BYTE *)(v47 + 72) & 1) != 0 )
            {
              sub_BA8900(a1);
              v65 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
            }
            v48 = *(__int64 **)(v65 + 16);
            goto LABEL_75;
          }
          goto LABEL_30;
        }
LABEL_48:
        sub_A794E0((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), v11, v12, v13, v14);
        v20 = *(_QWORD *)(a1 + 120);
        goto LABEL_12;
      }
LABEL_4:
      v16 = *(_WORD *)(v15 + 72) & 0x4000;
      if ( !a4 || v16 )
      {
        v17 = *(_QWORD *)(v15 + 40) & 0xFFFFFFFFFFFFFFF8LL;
        v18 = (*(_QWORD *)(v15 + 40) & 7) == 0;
        v70 = v16 != 0;
        if ( !v18 )
          v17 = 0;
        v69 = v17;
        *(_QWORD *)sub_1A9D420(a2, (__int64)&v69, v11, v17, v13, v14) = v15;
      }
      while ( 1 )
      {
        v19 = *(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v15 = v19;
        if ( !v19 )
          break;
        if ( (*(_BYTE *)(v19 + 28) & 0x7F) == 0x4B )
          goto LABEL_4;
      }
    }
    v20 = *(_QWORD *)(a1 + 120);
    if ( v20 )
      goto LABEL_12;
    goto LABEL_48;
  }
LABEL_31:
  if ( (_BYTE)result != 23 )
  {
    if ( (_BYTE)result != 19 )
      return result;
    v33 = sub_B8E970(a1 + 48);
    v38 = v33;
    if ( v33 )
    {
      if ( (*(_BYTE *)(v33 + 28) & 0x7F) == 0x4B )
      {
LABEL_78:
        v51 = *(_WORD *)(v38 + 72) & 0x4000;
        if ( a4 && !v51 )
          goto LABEL_91;
        v52 = *(_QWORD *)(v38 + 40) & 0xFFFFFFFFFFFFFFF8LL;
        v18 = (*(_QWORD *)(v38 + 40) & 7) == 0;
        v70 = v51 != 0;
        if ( !v18 )
          v52 = 0;
        v69 = v52;
        v53 = *(_QWORD *)sub_1A9D420(a3, (__int64)&v69, v52, 0, v36, v37);
        if ( v53 )
        {
          v35 = *(_QWORD *)(v38 + 40);
          v54 = *(_QWORD *)(v53 + 40);
          v34 = v35 & 7;
          if ( (v54 & 7) != 0 )
          {
            v55 = 0;
            if ( (v35 & 7) != 0 )
              goto LABEL_91;
          }
          else
          {
            v55 = v54 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v35 & 7) != 0 )
            {
              if ( !v55 )
                goto LABEL_91;
              v53 = 0;
              v56 = (*(_WORD *)(v38 + 72) >> 14) & 1;
              goto LABEL_88;
            }
          }
          v34 = v35 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v55 == (v35 & 0xFFFFFFFFFFFFFFF8LL) )
            goto LABEL_91;
          v56 = (*(_WORD *)(v38 + 72) >> 14) & 1;
        }
        else
        {
          v35 = *(_QWORD *)(v38 + 40);
          v56 = (*(_WORD *)(v38 + 72) >> 14) & 1;
          if ( (v35 & 7) != 0 )
          {
LABEL_88:
            v69 = v53;
            v70 = (unsigned __int8)v56;
            v57 = (_QWORD *)sub_1A9D420(a2, (__int64)&v69, v53, v35, v36, v37);
            if ( !*v57 )
              *v57 = v38;
LABEL_91:
            while ( 1 )
            {
              v58 = *(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              v38 = v58;
              if ( !v58 )
                break;
              if ( (*(_BYTE *)(v58 + 28) & 0x7F) == 0x4B )
                goto LABEL_78;
            }
            v40 = *(_QWORD *)(a1 + 104);
            if ( !v40 )
            {
LABEL_93:
              sub_A79820((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), v34, v35, v36, v37);
              result = *(_QWORD *)(a1 + 104) & 0xFFFFFFFFFFFFFFF8LL;
              if ( !result )
              {
                if ( *(_QWORD *)(a1 + 104) )
                  return result;
                sub_A79820((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), 0, v59, v60, v61);
                result = *(_QWORD *)(a1 + 104) & 0xFFFFFFFFFFFFFFF8LL;
                if ( !result )
                  return result;
                v41 = *(__int64 **)(result + 8);
                v42 = nullptr;
                goto LABEL_61;
              }
LABEL_60:
              v41 = *(__int64 **)(result + 8);
              result = *(unsigned int *)(result + 16);
              v42 = &v41[result];
LABEL_61:
              while ( v42 != v41 )
              {
                v43 = *v41++;
                result = sub_1A9D680(v43, a2, a3, a4, 1);
              }
              return result;
            }
LABEL_59:
            result = v40 & 0xFFFFFFFFFFFFFFF8LL;
            if ( !result )
              return result;
            goto LABEL_60;
          }
        }
        v35 &= 0xFFFFFFFFFFFFFFF8LL;
        v53 = v35;
        goto LABEL_88;
      }
      while ( 1 )
      {
        v39 = *(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v38 = v39;
        if ( !v39 )
          break;
        if ( (*(_BYTE *)(v39 + 28) & 0x7F) == 0x4B )
          goto LABEL_78;
      }
    }
    v40 = *(_QWORD *)(a1 + 104);
    if ( !v40 )
      goto LABEL_93;
    goto LABEL_59;
  }
  result = sub_B8E970(a1 + 48);
  v26 = result;
  if ( result )
  {
    if ( (*(_BYTE *)(result + 28) & 0x7F) == 0x4B )
    {
LABEL_34:
      v27 = *(_WORD *)(v26 + 72) & 0x4000;
      if ( !a4 || v27 )
      {
        v28 = *(_QWORD *)(v26 + 40) & 0xFFFFFFFFFFFFFFF8LL;
        v18 = (*(_QWORD *)(v26 + 40) & 7) == 0;
        v70 = v27 != 0;
        if ( !v18 )
          v28 = 0;
        v69 = v28;
        *(_QWORD *)sub_1A9D420(a2, (__int64)&v69, v23, v28, v24, v25) = v26;
      }
      while ( 1 )
      {
        result = *(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v26 = result;
        if ( !result )
          break;
        if ( (*(_BYTE *)(result + 28) & 0x7F) == 0x4B )
          goto LABEL_34;
      }
    }
    else
    {
      while ( 1 )
      {
        result = *(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v26 = result;
        if ( !result )
          break;
        if ( (*(_BYTE *)(result + 28) & 0x7F) == 0x4B )
          goto LABEL_34;
      }
    }
  }
  if ( a5 )
  {
    v29 = *(__int64 **)(a1 + 104);
    result = *(unsigned int *)(a1 + 112);
    for ( j = &v29[result]; j != v29; result = sub_1A9D680(v31, a2, a3, a4, 1) )
      v31 = *v29++;
  }
  return result;
}
