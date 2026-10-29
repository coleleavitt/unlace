unsigned __int64 __fastcall sub_16A2930(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  char v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // r15
  __int64 v17; // rdi
  _QWORD *v18; // rax
  unsigned __int64 v19; // r12
  __int64 v20; // rbx
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  _QWORD *v23; // rsi
  unsigned __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbp
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // rdi
  int v35; // eax
  unsigned __int64 v36; // rax
  __int64 v37; // r13
  unsigned __int64 v38; // rax
  _QWORD *v39; // r14
  __int64 *v40; // r15
  int v41; // r12d
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned int v45; // eax
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rdx
  __int64 v50; // r13
  __int64 v51; // rax
  _QWORD *v52; // rdx
  __int64 v53; // r14
  __int64 v54; // rsi
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rdx
  _DWORD *v58; // rax
  __int64 v59; // rdi
  int v60; // edx
  unsigned __int64 v61; // [rsp+8h] [rbp-60h]
  __int64 v62; // [rsp+8h] [rbp-60h]
  __int64 *v63; // [rsp+8h] [rbp-60h]
  __int64 *v64; // [rsp+18h] [rbp-50h]
  __int64 v65[8]; // [rsp+28h] [rbp-40h] BYREF

  v6 = *(_QWORD *)(a2 + 8);
  if ( !v6 )
    return 0;
  v8 = a3;
  v9 = a2;
  if ( sub_E917A0(*(_QWORD *)(a2 + 8), a2, a3, a4, a5, a6) )
  {
    if ( ((*(__int64 *)(v6 + 8) >> 1) & 3) != 2 )
      return 0;
    v15 = *(_QWORD *)(v6 + 16);
    if ( !v15 )
      return 0;
    v16 = *(_QWORD *)(a1 + 544);
    v14 = v15 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (v15 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      v14 = *(unsigned __int8 *)(v17 + 16);
      if ( (_BYTE)v14 == 48 )
      {
        v18 = sub_F60F10(v17, a2, v14, v10, v11, v12);
        a2 = v16;
        v19 = (unsigned __int64)v18;
        if ( !(unsigned __int8)sub_B67000((__int64)v18, v16) )
          goto LABEL_61;
        goto LABEL_11;
      }
      if ( (_BYTE)v14 == 29 )
      {
        v19 = (unsigned __int64)sub_F61460(v17, a2, v14, v10, v11, v12);
LABEL_11:
        if ( v19 )
          return v19 + 64;
LABEL_61:
        if ( !v8 )
          return 0;
        if ( ((*(__int64 *)(v6 + 8) >> 1) & 3) != 2 )
          return 0;
        v15 = *(_QWORD *)(v6 + 16);
        if ( !v15 )
          return 0;
LABEL_44:
        v36 = *(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL;
        v37 = *(_QWORD *)v36;
        if ( *(_BYTE *)(*(_QWORD *)v36 + 16LL) != 49 )
        {
          v46 = *(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL;
          v25 = *(_QWORD *)v46;
          if ( *(_BYTE *)(*(_QWORD *)v46 + 16LL) == 48 )
          {
LABEL_20:
            v26 = (__int64)sub_F60F10(v25, a2, v14, v10, v11, v12);
            if ( v26 )
              return v26 + 64;
          }
          return 0;
        }
        v65[0] = *(_QWORD *)(v37 + 32);
        v38 = sub_F22BD0(v65, 0);
        v39 = (_QWORD *)v38;
        if ( v38 && (*(_BYTE *)(v38 + 28) & 0x7F) == 0x48 )
        {
          v62 = *(_QWORD *)(v9 + 40);
          if ( !v62 )
          {
            v19 = sub_BC5440((_QWORD *)v38, v37 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_57:
            if ( v19 )
            {
              if ( !*(_QWORD *)(v19 + 128) )
              {
                v50 = *(_QWORD *)(v19 + 104);
                v51 = *(_QWORD *)(v50 + 96);
                if ( (v51 & 1) == 0 )
                {
                  v52 = (_QWORD *)(v51 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v51 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
                  {
                    if ( (v51 & 2) == 0 )
                      return v19 + 64;
                    v53 = v52[2295];
                    if ( v53 )
                    {
                      v54 = v52[294];
                      v52[304] += 24LL;
                      v55 = (v54 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                      if ( v52[295] >= v55 + 24 && v54 )
                        v52[294] = v55 + 24;
                      else
                        v55 = sub_986170((__int64)(v52 + 294), 24, 24, 3, v43, v44);
                      *(_QWORD *)v55 = v53;
                      *(_DWORD *)(v55 + 8) = 0;
                      *(_QWORD *)(v55 + 16) = v50;
                      v56 = v55 | 4;
                    }
                    else
                    {
                      v56 = v50 & 0xFFFFFFFFFFFFFFFBLL;
                    }
                    *(_QWORD *)(v50 + 96) = v56 | 1;
                  }
                }
                v57 = *(_QWORD *)(v50 + 96) & 0xFFFFFFFFFFFFFFFELL;
                if ( v57 )
                {
                  if ( (v57 & 4) != 0 )
                  {
                    v58 = (_DWORD *)(*(_QWORD *)(v50 + 96) & 0xFFFFFFFFFFFFFFF8LL);
                    if ( v58 )
                    {
                      v59 = *(_QWORD *)v58;
                      v60 = *(_DWORD *)(*(_QWORD *)v58 + 12LL);
                      if ( v58[2] != v60 )
                      {
                        v58[2] = v60;
                        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v59 + 152LL))(v59, v50);
                      }
                    }
                  }
                }
                if ( !*(_QWORD *)(v19 + 128) )
                  return v19 + 64;
              }
              if ( !(unsigned __int8)sub_1E61510(a1, v19, v65, 0) )
              {
                v45 = sub_15AB9A0(v9);
                sub_1A5FAE0(a1, v45, v19, 4, 1);
              }
              return v19 + 64;
            }
            goto LABEL_74;
          }
          v40 = *(__int64 **)(v9 + 32);
          v41 = sub_BBD7B0(*(_QWORD *)(v38 + 56));
          v42 = (8 * v62) >> 5;
          v64 = &v40[v62];
          if ( v42 > 0 )
          {
            v63 = &v40[4 * v42];
            while ( v41 != (unsigned int)sub_BBD7B0(*v40) )
            {
              if ( v41 == (unsigned int)sub_BBD7B0(v40[1]) )
              {
                ++v40;
                break;
              }
              if ( v41 == (unsigned int)sub_BBD7B0(v40[2]) )
              {
                v40 += 2;
                break;
              }
              if ( v41 == (unsigned int)sub_BBD7B0(v40[3]) )
              {
                v40 += 3;
                break;
              }
              v40 += 4;
              if ( v63 == v40 )
                goto LABEL_70;
            }
LABEL_55:
            if ( v64 != v40 )
            {
              v65[0] = 0;
              v19 = (unsigned __int64)sub_BC50F0(v39, v37 + 48, *(unsigned int *)(v37 + 20), *v40, (__int64)v65);
              goto LABEL_57;
            }
LABEL_74:
            v48 = sub_BC3930((__int64)v39);
            v49 = ((unsigned __int8)*(_QWORD *)&byte_8[v48 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v48) & 7
                | *(_QWORD *)&byte_8[v48 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL;
            result = 0;
            if ( v49 == *(_QWORD *)&byte_8[v37 & 0xFFFFFFFFFFFFFFF0LL] )
            {
              result = v39[6];
              if ( result )
                result += 64LL;
            }
            return result;
          }
LABEL_70:
          v47 = v64 - v40;
          if ( v47 != 2 )
          {
            if ( v47 != 3 )
            {
              if ( v47 != 1 )
                goto LABEL_74;
              goto LABEL_73;
            }
            if ( v41 == (unsigned int)sub_BBD7B0(*v40) )
              goto LABEL_55;
            ++v40;
          }
          if ( v41 == (unsigned int)sub_BBD7B0(*v40) )
            goto LABEL_55;
          ++v40;
LABEL_73:
          if ( v41 != (unsigned int)sub_BBD7B0(*v40) )
            goto LABEL_74;
          goto LABEL_55;
        }
        return 0;
      }
    }
    if ( !v8 )
      return 0;
    goto LABEL_44;
  }
  switch ( (unsigned int)sub_E90000(v6) )
  {
    case 0u:
    case 5u:
      v26 = sub_E900C0(v6);
      if ( v26 )
        return v26 + 64;
      return 0;
    case 1u:
      v27 = sub_E90060(v6);
      if ( !v27 )
        return 0;
      return v27 + 48;
    case 2u:
      v27 = sub_E90090(v6);
      do
        v27 = *(_QWORD *)(v27 + 88);
      while ( (*(_BYTE *)(v27 + 28) & 0x7F) == 0x4D );
      return v27 + 48;
    case 3u:
      if ( ((*(__int64 *)(v6 + 8) >> 1) & 3) != 2 )
        BUG();
      v25 = *(_QWORD *)(v6 + 16);
      if ( (unsigned int)*(unsigned __int8 *)(v25 + 16) - 47 > 1 )
      {
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 47 > 1 )
          v25 = 0;
        else
          v25 = sub_F63050(v25, a2, v14, v10);
      }
      goto LABEL_20;
    case 4u:
      v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2264LL) + 80LL);
      v21 = *(_QWORD *)(v20 + 72);
      v22 = v21 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v21 & 1) != 0 )
        goto LABEL_35;
      v23 = (_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v21 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
        goto LABEL_35;
      v24 = v21 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v21 & 2) == 0 )
        goto LABEL_16;
      v28 = v23[2295];
      v29 = v20 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v28 )
      {
        v30 = v23[294];
        v23[304] += 24LL;
        v31 = (v30 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v23[295] >= v31 + 24 && v30 )
        {
          v23[294] = v31 + 24;
          v32 = (v30 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v32 = sub_986170((__int64)(v23 + 294), 24, 24, 3, v11, v12);
          v31 = v32 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v32 = v28;
        v29 = v31 | 4;
        *(_DWORD *)(v32 + 8) = 0;
        *(_QWORD *)(v32 + 16) = v20;
      }
      v22 = v29 & 0xFFFFFFFFFFFFFFFELL;
      v21 = v22 | 1;
      *(_QWORD *)(v20 + 72) = v22 | 1;
LABEL_35:
      v33 = v21 & 0xFFFFFFFFFFFFFFF8LL;
      v24 = v33;
      if ( !v22 || (v22 & 4) == 0 )
        goto LABEL_16;
      if ( !v33 )
        return 0;
      v34 = *(_QWORD *)v33;
      v35 = *(_DWORD *)(*(_QWORD *)v33 + 12LL);
      if ( *(_DWORD *)(v33 + 8) != v35 )
      {
        *(_DWORD *)(v33 + 8) = v35;
        v61 = v33;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 152LL))(v34, v20);
        v33 = v61;
      }
      v24 = *(_QWORD *)(v33 + 16);
LABEL_16:
      if ( !v24 )
        return 0;
      result = v24 + 40;
      break;
  }
  return result;
}
