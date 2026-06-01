unsigned __int64 __fastcall sub_1730960(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r15d
  __int64 v8; // rbp
  char v10; // al
  __int64 v11; // rax
  unsigned __int64 result; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 *v15; // r14
  __int64 v16; // rcx
  __int64 *v17; // rbp
  unsigned __int64 v18; // rdx
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 *v21; // r14
  __int64 *v22; // rbp
  __int64 v23; // rsi
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 *v26; // r14
  __int64 *v27; // rax
  __int64 *v28; // rbp
  __int64 *v29; // r12
  __int64 v30; // rsi
  _QWORD *v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 v34; // rbp
  unsigned __int64 v35; // rbx
  __int64 v36; // rdi
  unsigned int v37; // r12d
  unsigned __int64 v38; // rcx
  unsigned int v39; // esi
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rsi
  int v45; // eax
  int v46; // r10d
  unsigned __int8 v47; // [rsp+8h] [rbp-70h]
  __int64 v48; // [rsp+8h] [rbp-70h]
  __int64 v49; // [rsp+8h] [rbp-70h]
  __int64 *v50; // [rsp+10h] [rbp-68h]
  __int64 *v51; // [rsp+10h] [rbp-68h]
  unsigned __int64 v52; // [rsp+10h] [rbp-68h]
  __int64 v53; // [rsp+10h] [rbp-68h]
  unsigned __int8 v54; // [rsp+18h] [rbp-60h]
  __int64 v55; // [rsp+20h] [rbp-58h]
  __int64 v56; // [rsp+20h] [rbp-58h]
  __int64 v57; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v58; // [rsp+38h] [rbp-40h] BYREF

  v6 = a3;
  v8 = a2;
  v47 = a6;
  v10 = *(_BYTE *)(a2 + 28) & 0x7F;
  v54 = a6;
  if ( v10 == 20 )
  {
    v11 = *(_QWORD *)(a2 + 120);
    if ( v11 )
    {
      result = v11 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !result )
        return result;
    }
    else
    {
      a2 = *(_QWORD *)(a2 + 96);
      sub_A794E0((__int64 *)(a2 + 88), a2, a3, a4, a5, a6);
      result = *(_QWORD *)(v8 + 120) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !result )
        return result;
    }
    v8 = *(_QWORD *)result;
    v13 = *(_QWORD *)(*(_QWORD *)result + 120LL);
    v14 = v13 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)((v13 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) != 0 )
    {
      sub_BA8900(*(_QWORD *)result);
      v13 = *(_QWORD *)(v8 + 120);
      v14 = v13 & 0xFFFFFFFFFFFFFFF8LL;
    }
    v15 = *(__int64 **)(v14 + 16);
    v16 = *(unsigned int *)(v14 + 24);
    v50 = &v15[v16];
    if ( v50 != v15 )
    {
      v55 = v8;
      v17 = v15;
      do
      {
        a2 = *v17++;
        sub_1730960(a1, a2, v6, a4, a5, v47);
      }
      while ( v17 != v50 );
      v8 = v55;
      v13 = *(_QWORD *)(v55 + 120);
    }
    if ( !v13 )
    {
      a2 = *(_QWORD *)(v8 + 96);
      sub_A794E0((__int64 *)(a2 + 88), a2, 0, v16, a5, a6);
      v13 = *(_QWORD *)(v8 + 120);
    }
    v18 = v13 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v18 )
    {
      if ( (*(_BYTE *)(v18 + 72) & 1) != 0 )
      {
        sub_BA8900(v8);
        v18 = *(_QWORD *)(v8 + 120) & 0xFFFFFFFFFFFFFFF8LL;
      }
      v19 = *(_QWORD *)(v18 + 56);
      if ( v19 )
      {
        while ( *(char *)(v19 + 28) < 0 || (*(_BYTE *)(v19 + 8) & 6) != 0 )
        {
          v19 = *(_QWORD *)(v19 + 128);
          if ( !v19 )
            goto LABEL_20;
        }
LABEL_43:
        a2 = v19;
        sub_1730960(a1, v19, v6, a4, a5, 0);
        while ( 1 )
        {
          v19 = *(_QWORD *)(v19 + 128);
          if ( !v19 )
            break;
          if ( *(char *)(v19 + 28) >= 0 && (*(_BYTE *)(v19 + 8) & 6) == 0 )
            goto LABEL_43;
        }
      }
    }
LABEL_20:
    if ( sub_BAB630(v8, a2, v18, v16, a5, a6) )
    {
      v20 = sub_BAB630(v8, a2, a3, a4, a5, a6);
      sub_1730960(a1, v20, v6, a4, a5, 0);
    }
    v10 = *(_BYTE *)(v8 + 28) & 0x7F;
  }
  if ( v10 == 23 )
  {
    v21 = *(__int64 **)(v8 + 104);
    a3 = *(unsigned int *)(v8 + 112);
    v51 = &v21[a3];
    if ( v21 == v51 )
    {
      if ( !v47 )
        goto LABEL_37;
    }
    else
    {
      v56 = v8;
      v22 = *(__int64 **)(v8 + 104);
      do
      {
        v23 = *v22++;
        sub_1730960(a1, v23, v6, a4, a5, v47);
      }
      while ( v22 != v51 );
      v8 = v56;
      if ( !v47 )
        goto LABEL_28;
    }
    v44 = *(_QWORD *)(v8 + 88);
    if ( !v44 )
    {
LABEL_28:
      v10 = *(_BYTE *)(v8 + 28) & 0x7F;
      goto LABEL_29;
    }
    sub_1730960(a1, v44, v6, a4, a5, 0);
    v10 = *(_BYTE *)(v8 + 28) & 0x7F;
  }
LABEL_29:
  if ( v10 == 19 )
  {
    v24 = *(_QWORD *)(v8 + 104);
    if ( !v24 )
    {
      sub_A79820((__int64 *)(*(_QWORD *)(v8 + 96) + 88LL), *(_QWORD *)(v8 + 96), a3, a4, a5, a6);
      v24 = *(_QWORD *)(v8 + 104);
    }
    result = v24 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !result )
      return result;
    v8 = *(_QWORD *)result;
    v25 = *(_QWORD *)(*(_QWORD *)result + 104LL) & 0xFFFFFFFFFFFFFFF8LL;
    v26 = *(__int64 **)(v25 + 8);
    v27 = &v26[*(unsigned int *)(v25 + 16)];
    if ( v26 != v27 )
    {
      v48 = v8;
      v28 = v26;
      v29 = v27;
      do
      {
        v30 = *v28++;
        sub_1730960(a1, v30, v6, a4, a5, 0);
      }
      while ( v28 != v29 );
      v8 = v48;
    }
  }
LABEL_37:
  result = sub_B8E970(v8 + 48);
  v34 = result;
  if ( result )
  {
    if ( (*(_BYTE *)(result + 28) & 0x7F) == 0x12 )
    {
LABEL_48:
      v35 = a4 & 0xFFFFFFFFFFFFFFF0LL;
      v49 = 4LL * v54;
LABEL_49:
      if ( !BYTE1(v6) || ((*(_QWORD *)(v34 + 56) & 0x20000LL) != 0) == (_BYTE)v6 )
      {
        if ( !v35
          || (v31 = (_QWORD *)(*(_QWORD *)(v35 + 8) & 0xFFFFFFFFFFFFFFF0LL),
              *v31 == *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v34 + 80) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL)) )
        {
          v36 = *(_QWORD *)(v34 + 40);
          v37 = *(_DWORD *)(a5 + 16);
          v38 = v49 | v34 & 0xFFFFFFFFFFFFFFFBLL;
          v57 = v36;
          if ( !v37 )
          {
            v58 = nullptr;
            goto LABEL_59;
          }
          v53 = *(_QWORD *)a5;
          LODWORD(v42) = sub_FDE780(v36);
          v32 = v37 - 1;
          v38 = v49 | v34 & 0xFFFFFFFFFFFFFFFBLL;
          LODWORD(v42) = v32 & v42;
          v31 = (_QWORD *)(v53 + 16LL * (unsigned int)v42);
          v43 = *v31;
          if ( v57 == *v31 )
          {
LABEL_65:
            *++v31 = v38;
            goto LABEL_53;
          }
          if ( v43 == -1 )
          {
            v39 = *(_DWORD *)(a5 + 16);
          }
          else
          {
            v46 = 1;
            v33 = 0;
            while ( 1 )
            {
              if ( !v33 && v43 == -2 )
                v33 = (__int64)v31;
              v42 = (unsigned int)v32 & ((_DWORD)v42 + v46);
              v31 = (_QWORD *)(v53 + 16 * v42);
              v43 = *v31;
              if ( v57 == *v31 )
                goto LABEL_65;
              if ( v43 == -1 )
                break;
              ++v46;
            }
            v39 = *(_DWORD *)(a5 + 16);
            v37 = v39;
            if ( v33 )
            {
              v31 = (_QWORD *)v33;
LABEL_74:
              v45 = *(_DWORD *)(a5 + 8);
              v58 = v31;
              v40 = v45 + 1;
              v33 = (unsigned int)(4 * v40);
              if ( (unsigned int)v33 < 3 * v39 )
              {
                v32 = v39 - (v40 + *(_DWORD *)(a5 + 12));
                if ( (unsigned int)v32 > v39 >> 3 )
                  goto LABEL_61;
                v52 = v49 | v34 & 0xFFFFFFFFFFFFFFFBLL;
LABEL_60:
                sub_1730750(a5, v39, (__int64)v31, v38, v32, v33);
                sub_1712BC0((__int64 *)a5, &v57, &v58);
                v31 = v58;
                v38 = v52;
                v40 = *(_DWORD *)(a5 + 8) + 1;
LABEL_61:
                *(_DWORD *)(a5 + 8) = v40;
                if ( *v31 != -1 )
                  --*(_DWORD *)(a5 + 12);
                v41 = v57;
                v31[1] = 0;
                *v31 = v41;
                goto LABEL_65;
              }
LABEL_59:
              v52 = v38;
              v39 = 2 * v37;
              goto LABEL_60;
            }
          }
          v37 = v39;
          goto LABEL_74;
        }
      }
LABEL_53:
      while ( 1 )
      {
        result = *(_QWORD *)(v34 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v34 = result;
        if ( !result )
          break;
        if ( (*(_BYTE *)(result + 28) & 0x7F) == 0x12 )
          goto LABEL_49;
      }
    }
    else
    {
      while ( 1 )
      {
        result = *(_QWORD *)(v34 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v34 = result;
        if ( !result )
          break;
        if ( (*(_BYTE *)(result + 28) & 0x7F) == 0x12 )
          goto LABEL_48;
      }
    }
  }
  return result;
}
