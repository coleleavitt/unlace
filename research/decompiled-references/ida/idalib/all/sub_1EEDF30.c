void __fastcall sub_1EEDF30(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r13
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbp
  size_t v7; // rax
  void *v8; // rdi
  int **v9; // rbx
  int **v10; // r15
  int v11; // esi
  unsigned int v12; // esi
  unsigned int v13; // r14d
  __int64 v14; // r13
  int v15; // r9d
  int *v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rdx
  _QWORD *v20; // rdi
  int v21; // eax
  int v22; // esi
  __int64 v23; // r9
  __int64 v24; // r8
  int v25; // eax
  _QWORD *v26; // rax
  _QWORD *v27; // rdi
  unsigned __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rcx
  bool v31; // zf
  unsigned __int64 v32; // rax
  unsigned __int64 *v33; // rsi
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  __int64 v37; // [rsp+20h] [rbp-2E0h]
  char v38; // [rsp+28h] [rbp-2D8h]
  __int64 v39; // [rsp+30h] [rbp-2D0h]
  char v40; // [rsp+40h] [rbp-2C0h]
  __int64 v41; // [rsp+48h] [rbp-2B8h]
  char v42; // [rsp+48h] [rbp-2B8h]
  int v43; // [rsp+50h] [rbp-2B0h]
  __int64 v44; // [rsp+50h] [rbp-2B0h]
  int *v45; // [rsp+58h] [rbp-2A8h] BYREF
  _QWORD *v46; // [rsp+60h] [rbp-2A0h] BYREF
  _QWORD v47[2]; // [rsp+68h] [rbp-298h] BYREF
  _QWORD *v48; // [rsp+78h] [rbp-288h] BYREF
  char v49; // [rsp+80h] [rbp-280h]
  _QWORD *v50; // [rsp+88h] [rbp-278h] BYREF
  char v51; // [rsp+90h] [rbp-270h]
  void *v52[2]; // [rsp+98h] [rbp-268h] BYREF
  unsigned __int64 *v53; // [rsp+A8h] [rbp-258h]
  void *ptr; // [rsp+B8h] [rbp-248h] BYREF
  __int64 v55; // [rsp+C0h] [rbp-240h]
  _BYTE v56[568]; // [rsp+C8h] [rbp-238h] BYREF

  v1 = *(_QWORD *)(a1 + 144);
  v2 = *(_QWORD *)(a1 + 13464);
  *(_OWORD *)v52 = 0;
  v37 = v1;
  v3 = *(unsigned int *)(a1 + 13472);
  v53 = nullptr;
  v39 = v2 + 352 * v3;
  if ( v39 != v2 )
  {
LABEL_2:
    v4 = *(_QWORD *)(v2 + 16);
    v5 = *(unsigned int *)(v2 + 32);
    v6 = *(_QWORD *)(v2 + 344);
    v47[0] = v2;
    v47[1] = 8 * v4 - v5;
    ptr = v56;
    v55 = 0x4000000000LL;
    while ( 1 )
    {
      sub_1EB0460((__int64)&v48, v2, 1);
      if ( (v49 & 1) != 0 )
        break;
      if ( (_DWORD)v48 == 1 )
      {
        sub_A0B030((__int64 *)&v48);
        v9 = (int **)v52[1];
        v10 = (int **)v52[0];
        if ( v52[1] == v52[0] )
          goto LABEL_31;
        v41 = v2;
        while ( 2 )
        {
          while ( 2 )
          {
            v11 = **v10;
            v45 = *v10;
            if ( !v11 )
              goto LABEL_18;
            v12 = v11 & 0x7FFFFFFF;
            v13 = v12;
            v14 = *(_QWORD *)(a1 + 80);
            if ( v12 < *(_DWORD *)(v14 + 476) || v12 >= *(_DWORD *)(v14 + 480) )
              v15 = sub_101D590(*(_QWORD *)(a1 + 80), v12);
            else
              v15 = *(_DWORD *)(v14 + 472);
            LOBYTE(v50) = 0;
            if ( (unsigned int)(v15 + 1) <= 1 )
              goto LABEL_18;
            if ( v15 >= 0 )
            {
              v16 = (int *)(*(_QWORD *)(v14 + 184) + 24LL * (unsigned int)v15);
              break;
            }
            v43 = v15;
            v28 = (unsigned int)(-2 - v15);
            v29 = *(_QWORD *)(*(_QWORD *)(v14 + 320) + 8LL * ((unsigned int)(-2 - v15) >> 6));
            v16 = (int *)(_bittest64(&v29, v28) ? sub_101F8A0(v14 + 264, (int)v28) : sub_101F930(v14, v28, &v50));
            v15 = v43;
            if ( (_BYTE)v50 )
            {
LABEL_18:
              if ( v9 == ++v10 )
                goto LABEL_30;
              continue;
            }
            break;
          }
          if ( !v16 )
            goto LABEL_18;
          v17 = *v16;
          LODWORD(v50) = v15;
          HIDWORD(v50) = v13 - (v17 & 0x7FFFFFFF);
          if ( (unsigned __int8)sub_1EB41D0((__int64 *)(v37 + 18392), (unsigned int *)&v50, &v46) )
          {
            sub_1EB4290(v46 + 1, (unsigned int *)&v50 + 1, (__int64 *)&v45);
            goto LABEL_29;
          }
          v19 = *(unsigned int *)(v37 + 18408);
          v20 = v46;
          v21 = *(_DWORD *)(v37 + 18400) + 1;
          v22 = 2 * v19;
          v23 = (unsigned int)(4 * v21);
          v24 = (unsigned int)(3 * v19);
          v48 = v46;
          if ( (unsigned int)v23 >= (unsigned int)v24 )
            goto LABEL_52;
          v24 = (unsigned int)v19 >> 3;
          if ( (int)v19 - *(_DWORD *)(v37 + 18404) - v21 <= (unsigned int)v24 )
          {
            v22 = v19;
LABEL_52:
            sub_1EDE150((__int64 *)(v37 + 18392), v22, v19, v18, v24, v23);
            sub_1EB41D0((__int64 *)(v37 + 18392), (unsigned int *)&v50, &v48);
            v20 = v48;
            v21 = *(_DWORD *)(v37 + 18400) + 1;
          }
          *(_DWORD *)(v37 + 18400) = v21;
          if ( *(_DWORD *)v20 )
            --*(_DWORD *)(v37 + 18404);
          v25 = (int)v50;
          *((_DWORD *)v20 + 4) = 0;
          v20[3] = 0;
          *(_DWORD *)v20 = v25;
          v26 = v20 + 2;
          v27 = v20 + 1;
          v27[3] = v26;
          v27[4] = v26;
          v27[5] = 0;
          sub_1EB4290(v27, (unsigned int *)&v50 + 1, (__int64 *)&v45);
LABEL_29:
          if ( v9 != ++v10 )
            continue;
          break;
        }
LABEL_30:
        v2 = v41;
LABEL_31:
        if ( ptr != v56 )
          free(ptr);
        v2 += 352;
        sub_1EAF840((__int64)v47);
        if ( v2 == v39 )
        {
          v8 = v52[0];
          if ( !v52[0] )
            return;
LABEL_14:
          operator delete(v8);
          return;
        }
        if ( v52[0] != v52[1] )
          v52[1] = v52[0];
        goto LABEL_2;
      }
      if ( !(_DWORD)v48 || (_DWORD)v48 == 2 )
      {
        v7 = j__strlen("malformed block record in AST file");
        sub_1EAD680(a1, "malformed block record in AST file", v7);
        goto LABEL_11;
      }
      LODWORD(v55) = 0;
      sub_2027F10(&v50, v2, HIDWORD(v48), &ptr, 0);
      if ( (v51 & 1) != 0 )
      {
        v35 = v50;
        v50 = nullptr;
        v46 = v35;
        sub_1EBF0A0(a1, &v46);
        if ( v46 )
          (*(void (__fastcall **)(_QWORD *))(*v46 + 8LL))(v46);
        sub_A0AE90((__int64 *)&v50);
        goto LABEL_11;
      }
      if ( !(_DWORD)v50 )
      {
        LODWORD(v45) = 0;
        v44 = sub_1EEDED0(a1, v6, &ptr, &v45);
        v30 = *((_QWORD *)ptr + (unsigned int)v45);
        v40 = *((_QWORD *)ptr + (unsigned int)((_DWORD)v45 + 1)) != 0;
        v31 = *((_QWORD *)ptr + (unsigned int)((_DWORD)v45 + 2)) == 0;
        LODWORD(v45) = (_DWORD)v45 + 3;
        v42 = !v31;
        v38 = v30;
        v32 = sub_1EC2080((__int64 *)(v37 + 2352), 40, 3u);
        *(_QWORD *)(v32 + 8) = 0;
        *(_QWORD *)v32 = v44;
        *(_QWORD *)(v32 + 16) = 0;
        *(_QWORD *)(v32 + 24) = 0;
        v33 = (unsigned __int64 *)v52[1];
        *(_BYTE *)(v32 + 32) = (v42 << 7) | (v40 << 6) | (4 * (v38 & 7));
        v46 = (_QWORD *)v32;
        if ( v33 == v53 )
        {
          sub_1ECE0B0((__int64)v52, v33, (__int64 *)&v46);
        }
        else
        {
          *v33 = v32;
          v52[1] = v33 + 1;
        }
      }
      sub_A0AE90((__int64 *)&v50);
      sub_A0B030((__int64 *)&v48);
    }
    v34 = v48;
    v48 = nullptr;
    v50 = v34;
    sub_1EBF0A0(a1, &v50);
    if ( v50 )
      (*(void (__fastcall **)(_QWORD *))(*v50 + 8LL))(v50);
LABEL_11:
    sub_A0B030((__int64 *)&v48);
    if ( ptr != v56 )
      free(ptr);
    sub_1EAF840((__int64)v47);
    v8 = v52[0];
    if ( v52[0] )
      goto LABEL_14;
  }
}
