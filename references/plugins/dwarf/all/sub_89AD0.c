__int64 __fastcall sub_89AD0(_QWORD *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v7; // rdi
  unsigned __int8 *v8; // rbp
  unsigned __int8 *v9; // r13
  unsigned __int8 v10; // r10
  const char *v11; // r15
  unsigned __int64 v12; // rax
  __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  int v17; // r15d
  __int64 v18; // rax
  unsigned __int8 (__fastcall *v19)(__int64, const char **, __int64); // rcx
  __int64 v20; // rdx
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  __int64 v32; // r15
  __int64 v33; // rax
  __int64 v34; // r15
  int v35; // eax
  char v36; // al
  __int64 v37; // rax
  bool v38; // zf
  int v39; // eax
  int v40; // eax
  __int64 v41; // rax
  unsigned __int64 v43; // [rsp+8h] [rbp-88h]
  unsigned __int8 v44; // [rsp+1Eh] [rbp-72h]
  const char *v46; // [rsp+30h] [rbp-60h] BYREF
  unsigned __int8 *v47; // [rsp+38h] [rbp-58h] BYREF
  __int128 v48; // [rsp+40h] [rbp-50h]
  unsigned __int64 v49; // [rsp+50h] [rbp-40h]

  v5 = a1[1];
  v49 = __readfsqword(0x28u);
  v48 = 0;
  v47 = nullptr;
  v44 = sub_84600(v5, a2, (__int64 *)&v47);
  v7 = (__int64)v47;
  if ( v44 )
  {
    v8 = &v47[40 * v48];
    if ( v8 != v47 )
    {
      v9 = v47;
      while ( 1 )
      {
        v10 = v9[32];
        if ( v10 > 0x23u )
        {
          if ( v10 == 0xE0 )
          {
            v33 = a1[3];
            if ( !v33 )
            {
LABEL_63:
              v44 = 0;
              v7 = (__int64)v47;
              goto LABEL_14;
            }
            v34 = *(_QWORD *)(*a1 + 136LL);
            v43 = *(_QWORD *)(a1[2] + 8 * v33 - 8);
            v35 = *(_DWORD *)(v34 + 280);
            if ( !v35 )
            {
              *(_DWORD *)(v34 + 280) = 1;
              netnode_check(&v46, "$ tls", 0, 0);
              v36 = netnode_exist(&v46);
              v10 = -32;
              if ( v36 )
              {
                *(_QWORD *)(v34 + 216) = netnode_altval(v46, 0, 65) - 1;
                v37 = netnode_altval(v46, -1, 65);
                v38 = *(_QWORD *)(v34 + 216) == -1;
                *(_QWORD *)(v34 + 224) = v37;
                v10 = -32;
                if ( !v38 )
                {
                  if ( v37 )
                  {
                    *(_DWORD *)(v34 + 280) = 2;
                    *(_QWORD *)(v34 + 240) = netnode_altval(v46, -2, 65);
                    v39 = netnode_altval(v46, -3, 65);
                    v38 = *(_QWORD *)(v34 + 240) == 0;
                    *(_DWORD *)(v34 + 248) = v39;
                    if ( !v38 )
                      *(_BYTE *)(v34 + 252) = 1;
                    *(_QWORD *)(v34 + 256) = netnode_altval(v46, -4, 65);
                    *(_QWORD *)(v34 + 264) = netnode_altval(v46, -5, 65);
                    v40 = netnode_altval(v46, -6, 65);
                    v38 = *(_QWORD *)(v34 + 264) == 0;
                    *(_DWORD *)(v34 + 272) = v40;
                    v10 = -32;
                    if ( !v38 )
                      *(_BYTE *)(v34 + 276) = 1;
                  }
                }
              }
              v35 = *(_DWORD *)(v34 + 280);
            }
            if ( v35 == 2 && v43 < *(_QWORD *)(v34 + 224) )
            {
              v11 = (const char *)(*(_QWORD *)(v34 + 216) + v43);
              if ( v11 != (const char *)-1LL )
              {
                v12 = a1[3];
                v13 = a1[2];
                v14 = 1;
                if ( v12 )
                {
                  v14 = a1[3];
                  a1[3] = --v12;
                }
                if ( a1[4] < v14 )
                {
LABEL_28:
                  v22 = qvector_reserve(a1 + 2, v13, v14, 8);
                  a1[2] = v22;
                  v13 = v22;
                  v12 = a1[3];
                }
LABEL_9:
                *(_QWORD *)(v13 + 8 * v12) = v11;
                ++a1[3];
                goto LABEL_10;
              }
            }
          }
        }
        else if ( v10 > 2u )
        {
          switch ( v10 )
          {
            case 3u:
              v11 = (const char *)(*(_QWORD *)(*a1 + 176LL)
                                 + sub_1D000(*(_QWORD *)(*a1 + 128LL), *(_QWORD *)v9)
                                 - *(_QWORD *)(*a1 + 184LL));
              goto LABEL_8;
            case 6u:
              if ( *(_DWORD *)(a4 + 8) != 1 )
                goto LABEL_63;
              v18 = a1[3];
              if ( !v18 )
                goto LABEL_63;
              v19 = **(unsigned __int8 (__fastcall ***)(__int64, const char **, __int64))a4;
              v20 = *(_QWORD *)(a1[2] + 8 * v18 - 8);
              a1[3] = v18 - 1;
              if ( !v19(a4, &v46, v20) )
                goto LABEL_63;
              v11 = v46;
              goto LABEL_8;
            case 8u:
            case 9u:
            case 0xAu:
            case 0xBu:
            case 0xCu:
            case 0xDu:
            case 0xEu:
            case 0xFu:
            case 0x10u:
            case 0x11u:
              v11 = *(const char **)v9;
LABEL_8:
              v12 = a1[3];
              v13 = a1[2];
              v14 = v12 + 1;
              if ( a1[4] >= v12 + 1 )
                goto LABEL_9;
              goto LABEL_28;
            case 0x12u:
              v28 = a1[3];
              if ( !v28 )
                goto LABEL_63;
              v29 = a1[2];
              v30 = 8 * v28;
              v31 = v28 + 1;
              v32 = *(_QWORD *)(v29 + v30 - 8);
              if ( a1[4] < v31 )
              {
                v41 = qvector_reserve(a1 + 2, v29, v31, 8);
                a1[2] = v41;
                v29 = v41;
                v30 = 8LL * a1[3];
              }
              *(_QWORD *)(v29 + v30) = v32;
              ++a1[3];
              goto LABEL_10;
            case 0x13u:
              v27 = a1[3];
              if ( !v27 )
                goto LABEL_63;
              a1[3] = v27 - 1;
              goto LABEL_10;
            case 0x14u:
              v12 = a1[3];
              if ( v12 <= 1 )
                goto LABEL_63;
              v13 = a1[2];
              v14 = v12 + 1;
              v11 = *(const char **)(v13 + 8);
              if ( a1[4] < v12 + 1 )
                goto LABEL_28;
              goto LABEL_9;
            case 0x15u:
              v12 = a1[3];
              v26 = *v9;
              if ( v26 >= v12 )
                goto LABEL_63;
              v13 = a1[2];
              v11 = *(const char **)(v13 + 8 * v26);
              v14 = v12 + 1;
              if ( a1[4] < v12 + 1 )
                goto LABEL_28;
              goto LABEL_9;
            case 0x22u:
              v23 = a1[3];
              if ( !v23 )
                goto LABEL_63;
              v13 = a1[2];
              v14 = v23 - 1;
              v24 = *(_QWORD *)(v13 + 8 * v23 - 8);
              a1[3] = v23 - 1;
              if ( v23 == 1 )
                goto LABEL_63;
              v25 = *(_QWORD *)(v13 + 8 * v14 - 8);
              v12 = v23 - 2;
              a1[3] = v12;
              v11 = (const char *)(v25 + v24);
              if ( a1[4] < v14 )
                goto LABEL_28;
              goto LABEL_9;
            case 0x23u:
              v14 = a1[3];
              if ( !v14 )
                goto LABEL_63;
              v13 = a1[2];
              v12 = v14 - 1;
              v21 = *(_QWORD *)(v13 + 8 * v14 - 8);
              a1[3] = v14 - 1;
              v11 = (const char *)(*(_QWORD *)v9 + v21);
              if ( a1[4] < v14 )
                goto LABEL_28;
              goto LABEL_9;
            default:
              break;
          }
        }
        v17 = v10;
        v46 = nullptr;
        if ( (*(unsigned int (__fastcall **)(_QWORD, const char **))(a2 + 552))(v10, &v46) )
          v46 = "<unknown>";
        if ( (debug & 0x400000) != 0 )
          sub_88B80((__int64)"Unhandled OP: %s (%d)\n", v46, v17);
LABEL_10:
        v9 += 40;
        if ( v8 == v9 )
        {
          v7 = (__int64)v47;
          break;
        }
      }
    }
    v15 = a1[3];
    if ( v15 )
      *a3 = *(_QWORD *)(a1[2] + 8 * v15 - 8);
    else
      v44 = 0;
  }
LABEL_14:
  if ( v7 )
  {
    *(_QWORD *)&v48 = 0;
    qfree(v7);
  }
  return v44;
}
