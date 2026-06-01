unsigned __int64 __fastcall sub_2D300(__int64 a1, double a2, double a3)
{
  __int64 v3; // rdx
  __int64 v5; // rdi
  __int64 v6; // r12
  char v7; // al
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbp
  int v11; // eax
  int v12; // esi
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // r13
  int v16; // eax
  __int64 v17; // rcx
  signed int v18; // eax
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rax
  bool v21; // dl
  __int64 v22; // rsi
  unsigned __int64 v23; // rsi
  bool v24; // dl
  signed int v25; // r8d
  __int64 v26; // r10
  __int64 v27; // r9
  signed int v28; // r11d
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // r8
  unsigned __int64 v32; // rax
  bool v33; // dl
  unsigned __int8 v34; // al
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rdi
  int v38; // edx
  int v39; // r9d
  __int64 v40; // r8
  __int64 v41; // rdi
  int v43; // esi
  int v44; // ecx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // r12
  unsigned __int64 v48; // rax
  int v49; // esi
  __int64 v50; // [rsp+8h] [rbp-40h] BYREF
  __int64 v51; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v52; // [rsp+18h] [rbp-30h]

  v52 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 64);
  if ( !v3 || (v5 = *(_QWORD *)(a1 + 40)) == 0 )
  {
    if ( !under_debugger )
      interr(20095);
    BUG();
  }
  v6 = *(_QWORD *)(a1 + 144);
  v7 = *(_BYTE *)(a1 + 128);
  if ( *(_BYTE *)(a1 + 24) )
  {
    if ( v7 )
    {
      v8 = *(_DWORD *)(a1 + 120);
      if ( v8 <= *(_DWORD *)(a1 + 16) )
      {
        v48 = (v6 + v8 - 1) & -v8;
        if ( v48 < *(_QWORD *)(a1 + 8) )
          v6 = v48;
      }
    }
    goto LABEL_6;
  }
  if ( *(_BYTE *)(a1 + 96) )
  {
    if ( !v7 )
    {
      v16 = *(_DWORD *)(a1 + 120);
      v17 = *(_QWORD *)(a1 + 144);
      goto LABEL_61;
    }
LABEL_14:
    v16 = *(_DWORD *)(a1 + 120);
    v6 = (v6 + v16 - 1) & -v16;
    v17 = v6 + *(_QWORD *)(a1 + 112);
LABEL_61:
    *(_QWORD *)(a1 + 8) = v17;
    v43 = *(_DWORD *)(a1 + 88);
    v44 = *(_DWORD *)(a1 + 16);
    if ( v43 > v44 )
    {
      *(_DWORD *)(a1 + 16) = v43;
      v44 = v43;
    }
    if ( v44 < v16 )
      *(_DWORD *)(a1 + 16) = v16;
    *(_BYTE *)(a1 + 24) = 1;
    goto LABEL_6;
  }
  if ( v7 )
    goto LABEL_14;
  if ( !*(_DWORD *)(v5 + 12) )
    return v52 - __readfsqword(0x28u);
LABEL_6:
  v9 = *(_QWORD *)(a1 + 56);
  v10 = *(_QWORD *)(v9 + 240);
  v11 = *(_DWORD *)(v10 + 336);
  if ( v11 < 0 )
  {
    v15 = *(_QWORD *)(v9 + 512);
    *(_QWORD *)(a1 + 32) = v15;
    v18 = *(_DWORD *)(v10 + 340) & 0xFFFFFFFE;
    v14 = v18;
    if ( *(int *)(v10 + 340) < 0 || v18 == 0 )
    {
      v49 = -*(_DWORD *)(v10 + 336);
      v20 = v49;
      if ( v15 == -1 )
      {
        v21 = v49 == 0;
LABEL_19:
        if ( !v21 )
          goto LABEL_91;
        *(_QWORD *)(v9 + 512) = v15 + v20;
        v9 = *(_QWORD *)(a1 + 56);
        v22 = v9;
        if ( *(_BYTE *)(a1 + 24) )
        {
          v12 = *(_DWORD *)(a1 + 16);
          v3 = *(_QWORD *)(a1 + 64);
          v13 = *(_QWORD *)(v3 + 456) & -v12 & (*(_QWORD *)(v9 + 512) + v12 - 1);
          *(_QWORD *)a1 = v13;
          if ( v15 != -1 )
          {
LABEL_22:
            v23 = *(_QWORD *)(a1 + 8);
            if ( v13 == -1 )
            {
              if ( !v23 )
                goto LABEL_26;
            }
            else
            {
              if ( v23 == -1 )
                v24 = v13 == 0;
              else
                v24 = *(_QWORD *)(v3 + 456) - v13 >= v23;
              if ( v24 )
              {
LABEL_26:
                *(_QWORD *)(v9 + 512) = v13 + v23;
                if ( *(int *)(v10 + 336) <= 0 )
                  goto LABEL_36;
                v9 = *(_QWORD *)(a1 + 56);
                v3 = *(_QWORD *)(a1 + 64);
                v25 = *(_DWORD *)(v10 + 340) & 0xFFFFFFFE;
                v26 = *(_QWORD *)(v9 + 512);
                v27 = *(_QWORD *)(v3 + 456);
                if ( *(_BYTE *)(a1 + 24) )
                {
                  v28 = *(_DWORD *)(a1 + 16);
                  v29 = (v26 + v28 - 1) & v27 & -v28;
                  *(_QWORD *)(a1 + 32) = v29;
                  if ( v28 >= v25 || (v30 = v25 - 1, (v29 & v30) == 0) )
                  {
                    v32 = *(int *)(v10 + 336);
                    if ( v29 == -1 )
                    {
                      v33 = v32 == 0;
                      goto LABEL_34;
                    }
LABEL_32:
                    if ( v32 == -1 )
                      v33 = v29 == 0;
                    else
                      v33 = *(_QWORD *)(v3 + 456) - v29 >= v32;
LABEL_34:
                    if ( v33 )
                    {
                      *(_QWORD *)(v9 + 512) = v29 + v32;
LABEL_36:
                      v22 = *(_QWORD *)(a1 + 56);
                      if ( *(_BYTE *)(a1 + 24) )
                      {
                        if ( *(_BYTE *)(a1 + 96) )
                          *(_QWORD *)(a1 + 72) = *(_QWORD *)a1;
                        if ( *(_BYTE *)(a1 + 128) )
                        {
                          v46 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 456LL);
                          v47 = v46 & (*(_QWORD *)a1 + v6);
                          if ( v46 == v47 )
                            v47 = -1;
                          *(_QWORD *)(a1 + 104) = v47;
                        }
                      }
                      goto LABEL_40;
                    }
LABEL_91:
                    sub_BFC0(
                      (__int64)"AUTOHIDE SESSION\nNo address space from 0x%a for TLS TCB (size 0x%a), removing TLS",
                      a2,
                      a3);
                    *(_BYTE *)(a1 + 24) = 0;
                    return v52 - __readfsqword(0x28u);
                  }
                  v31 = (v29 + v30) & *(_QWORD *)(v3 + 456) & -v25;
                  v15 = v31 + *(_QWORD *)a1 - v29;
                  v29 = v31;
                  *(_QWORD *)a1 = v15;
LABEL_31:
                  *(_QWORD *)(a1 + 32) = v29;
                  v32 = *(int *)(v10 + 336);
                  goto LABEL_32;
                }
LABEL_68:
                v45 = v27 & -v25;
                v29 = v45 & (v26 + v25 - 1);
                if ( v15 == -1 )
                {
                  v14 = v25;
                  v15 = v45 & (v26 + v25 - 1);
                }
                goto LABEL_31;
              }
            }
            sub_BFC0((__int64)"AUTOHIDE SESSION\nThe size 0x%a of the TLS template is too big, removing TLS", a2);
            *(_BYTE *)(a1 + 24) = 0;
            return v52 - __readfsqword(0x28u);
          }
LABEL_11:
          v14 = v12;
          v15 = v13;
          goto LABEL_22;
        }
        if ( *(int *)(v10 + 336) <= 0 )
        {
LABEL_40:
          if ( v15 < *(_QWORD *)(v22 + 512) )
          {
            v34 = sub_40B90(v14);
            v35 = *(_QWORD *)(a1 + 56);
            v36 = *(_QWORD *)(v35 + 512);
            *(_QWORD *)(v35 + 512) = v15;
            sub_41120(*(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64), 3, (unsigned int)".tls", v36 - v15, v34, 0);
            v22 = *(_QWORD *)(a1 + 56);
            *(_QWORD *)(a1 + 48) = *(_QWORD *)(v22 + 512);
          }
          goto LABEL_42;
        }
        goto LABEL_78;
      }
    }
    else
    {
      v19 = (v15 + v18 - 1) & *(_QWORD *)(v3 + 456) & -v18;
      *(_QWORD *)(a1 + 32) = v19;
      v15 = v19;
      v20 = -*(_DWORD *)(v10 + 336);
    }
    if ( v20 == -1 )
      v21 = v15 == 0;
    else
      v21 = *(_QWORD *)(v3 + 456) - v15 >= v20;
    goto LABEL_19;
  }
  if ( !*(_DWORD *)(v5 + 12) || !v11 )
  {
    if ( *(_BYTE *)(a1 + 24) )
    {
LABEL_10:
      v12 = *(_DWORD *)(a1 + 16);
      v13 = (*(_QWORD *)(v9 + 512) + v12 - 1) & *(_QWORD *)(v3 + 456) & -v12;
      *(_QWORD *)a1 = v13;
      goto LABEL_11;
    }
    v14 = 0;
    v15 = -1;
    if ( !v11 )
      goto LABEL_45;
LABEL_67:
    v26 = *(_QWORD *)(v9 + 512);
    v27 = *(_QWORD *)(v3 + 456);
    v25 = *(_DWORD *)(v10 + 340) & 0xFFFFFFFE;
    goto LABEL_68;
  }
  sub_41E20(v5, *(_QWORD *)(a1 + 56));
  v9 = *(_QWORD *)(a1 + 56);
  v22 = v9;
  if ( *(_BYTE *)(a1 + 24) )
  {
    v3 = *(_QWORD *)(a1 + 64);
    goto LABEL_10;
  }
  v14 = 0;
  v15 = -1;
  if ( *(int *)(v10 + 336) > 0 )
  {
LABEL_78:
    v3 = *(_QWORD *)(a1 + 64);
    goto LABEL_67;
  }
LABEL_42:
  v37 = *(_QWORD *)(a1 + 40);
  if ( *(_DWORD *)(v37 + 12) && *(int *)(v10 + 336) < 0 )
    sub_41E20(v37, v22);
LABEL_45:
  if ( (*(_BYTE *)(v10 + 340) & 1) == 0 )
    goto LABEL_50;
  v38 = -*(_DWORD *)(v10 + 336);
  if ( *(int *)(v10 + 336) > 0 )
    v38 = *(_DWORD *)(v10 + 336);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 64) + 618LL) )
  {
    if ( v38 <= 7 )
      goto LABEL_50;
    v39 = 12;
  }
  else
  {
    v39 = 4;
    if ( v38 <= 3 )
      goto LABEL_50;
  }
  sub_42050(v10, *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 32), 0, v39, 0, 0, 0);
LABEL_50:
  if ( *(_BYTE *)(a1 + 24) )
  {
    v40 = *(_QWORD *)(a1 + 144);
    if ( v40 )
      sub_496A0(
        *(_QWORD *)(a1 + 56),
        *(_QWORD *)(a1 + 64),
        *(_QWORD *)(a1 + 136),
        *(_QWORD *)a1,
        *(_QWORD *)(*(_QWORD *)(a1 + 64) + 456LL) & (*(_QWORD *)a1 + v40),
        0);
  }
  v41 = *(_QWORD *)(a1 + 32);
  if ( v41 != -1 )
  {
    sub_E890(v41, 1u, (__int64)"Thread control block");
    set_name(*(_QWORD *)(a1 + 32), "static_TP", 6144);
  }
  if ( *(_BYTE *)(a1 + 128) )
    sub_E890(*(_QWORD *)(a1 + 104), 1u, (__int64)"TLS uninitialized data");
  if ( *(_BYTE *)(a1 + 24) )
  {
    v50 = -1;
    netnode_check(&v50, "$ tls", 0, 1);
    v51 = *(_QWORD *)a1 + 1LL;
    netnode_supset(v50, 0, &v51, 8, 65);
    v51 = *(_QWORD *)(a1 + 8);
    netnode_supset(v50, -1, &v51, 8, 65);
    if ( *(_BYTE *)(a1 + 96) )
    {
      v51 = *(_QWORD *)(a1 + 80);
      netnode_supset(v50, -2, &v51, 8, 65);
      v51 = *(unsigned int *)(a1 + 92);
      netnode_supset(v50, -3, &v51, 8, 65);
    }
    if ( *(_BYTE *)(a1 + 128) )
    {
      v51 = *(_QWORD *)(a1 + 104) - *(_QWORD *)a1;
      netnode_supset(v50, -4, &v51, 8, 65);
      v51 = *(_QWORD *)(a1 + 112);
      netnode_supset(v50, -5, &v51, 8, 65);
      v51 = *(unsigned int *)(a1 + 124);
      netnode_supset(v50, -6, &v51, 8, 65);
    }
  }
  return v52 - __readfsqword(0x28u);
}

