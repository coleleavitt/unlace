__int64 __fastcall sub_17BE150(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // rsi
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 *v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // eax
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // r15
  _QWORD *v17; // r14
  __int64 v18; // r13
  unsigned int v19; // ebp
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rdx
  __int64 v24; // rdi
  unsigned __int64 *v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // [rsp+0h] [rbp-118h]
  __int64 *v41; // [rsp+10h] [rbp-108h]
  __int64 v43; // [rsp+28h] [rbp-F0h]
  bool v44; // [rsp+37h] [rbp-E1h] BYREF
  __int64 v45; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v46; // [rsp+40h] [rbp-D8h] BYREF
  unsigned __int64 v47; // [rsp+48h] [rbp-D0h]
  _QWORD v48[2]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+60h] [rbp-B8h]
  unsigned __int8 *v50; // [rsp+70h] [rbp-A8h] BYREF
  char v51; // [rsp+C8h] [rbp-50h]
  unsigned int v52; // [rsp+D0h] [rbp-48h]
  char v53; // [rsp+D4h] [rbp-44h]

  result = (*(_BYTE *)(a2 + 28) & 0x7Fu) - 34;
  if ( (unsigned int)result <= 5 )
  {
    v7 = *(_QWORD *)(a2 + 112);
    v8 = sub_7053D0((__int64 *)(v7 + 104), v7, a3, a4, a5, a6);
    v9 = v8[7];
    v10 = (__int64)v8;
    v11 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v9 & 4) != 0 )
      v11 = (__int64 *)v11[4];
    v12 = *v11;
    v47 = (unsigned __int64)(v11 + 1);
    v46 = v12;
    v41 = (__int64 *)(a1 + 8);
    while ( 1 )
    {
      v16 = sub_15991B0(&v46);
      v17 = v14;
      if ( !v16 )
        break;
      v18 = *v14;
      if ( !*v14 || *(_WORD *)(v18 + 36) != 67 )
        goto LABEL_9;
      if ( (*(_BYTE *)(v10 + 28) & 0x7Fu) - 35 > 3 )
      {
        v40 = 0;
LABEL_6:
        sub_168B9F0((__int64)v48, v41, *(_DWORD *)(v18 + 24), 0x1006u, 0);
        if ( v51 )
        {
          sub_AE9DF0(&v50, v40, 2u);
        }
        else if ( v53 )
        {
          v34 = sub_168B9E0(v48);
          v38 = v49;
          if ( v49 )
          {
            v43 = v34;
            v38 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 32LL))(v49);
            v34 = v43;
          }
          v45 = v38;
          v39 = sub_1587BC0(v34, &v45, v34, v35, v36, v37);
          sub_AE9DF0((unsigned __int8 **)(*v39 + 32LL * v52 + 8), v40, 2u);
        }
        v45 = *(_QWORD *)(v18 + 24);
        sub_1587DB0((__int64)v48, &v45);
        sub_15F7200(v48);
        goto LABEL_9;
      }
      v40 = 1;
      if ( sub_B979F0((_QWORD *)v10) )
        goto LABEL_6;
      if ( (unsigned __int8)sub_B981D0((_QWORD *)v10, v7) )
      {
        v40 = 2;
        goto LABEL_6;
      }
      if ( (*(_BYTE *)(v10 + 28) & 0x7D) == 0x24 )
      {
        sub_168B9F0((__int64)v48, v41, *(_DWORD *)(v18 + 24), 0x1004u, 0);
        v44 = (*(_BYTE *)(v10 + 28) & 0x7F) == 36;
        v32 = sub_1588420((__int64)v48, (unsigned __int8 *)&v44);
        v45 = *(_QWORD *)(v18 + 24);
        sub_1587DB0(v32, &v45);
        sub_15F7200(v48);
      }
      else
      {
        v33 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_C1D490(v10, v7, v30, v31) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v33 + 16) == 13 && ((*(_WORD *)(v33 + 18) >> 3) & 0x1FF) == 0x1B3 )
        {
          sub_168B9F0((__int64)v48, v41, *(_DWORD *)(v10 + 24), 0x1005u, 0);
          sub_15F7200(v48);
        }
      }
LABEL_9:
      v13 = sub_F6C520(*(_QWORD *)(v16 + 40));
      v7 = v17 + 1 != nullptr;
      v46 = *(_QWORD *)(v16 + 40);
      v47 = v13 * (v7 + ((unsigned __int64)v17 - v7 + 8) / v13);
    }
    v19 = 0;
    result = sub_B76070(v10, v7, (__int64)v14, v15);
    if ( (_DWORD)result )
    {
      do
      {
        v23 = *(_QWORD *)(v10 + 120);
        v24 = *(_QWORD *)(v23 + 8LL * v19);
        if ( (*(_BYTE *)(v24 + 29) & 1) != 0 )
        {
          v25 = sub_B8C3D0(v24, v7, v23, v20, v21, v22);
          v23 = *v25;
          v26 = *v25 + 8LL * *((unsigned int *)v25 + 2);
          if ( v23 >= v26 )
          {
            if ( v23 == v26 )
              goto LABEL_21;
            while ( 1 )
            {
              v20 = *(_QWORD *)v26;
              if ( *(_WORD *)(*(_QWORD *)v26 + 36LL) == 67 )
                break;
              v26 += 8LL;
              if ( v23 == v26 )
              {
                ++v19;
                goto LABEL_22;
              }
            }
          }
          else
          {
            v20 = v23;
            while ( 1 )
            {
              v7 = *(_QWORD *)v20;
              if ( *(_WORD *)(*(_QWORD *)v20 + 36LL) == 67 )
                break;
              v20 += 8;
              if ( v26 == v20 )
                goto LABEL_21;
            }
            if ( v26 == v20 )
              goto LABEL_21;
          }
          while ( 1 )
          {
            v27 = *(_QWORD *)v23;
            if ( *(_WORD *)(*(_QWORD *)v23 + 36LL) == 67 )
              break;
            v23 += 8LL;
          }
          if ( (*(_BYTE *)(v10 + 28) & 0x7F) != 0x26 )
          {
            v28 = *(_QWORD *)(*(_QWORD *)(v10 + 48) & 0xFFFFFFFFFFFFFFF0LL);
            v23 = (unsigned int)*(unsigned __int8 *)(v28 + 16) - 25;
            if ( (unsigned int)v23 > 1 )
              v28 = sub_F63050(v28, v7, v23, v20);
            v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v29 + 16) == 13 && ((*(_WORD *)(v29 + 18) >> 3) & 0x1FF) == 0x1B3 )
            {
              ++v19;
              v7 = a1 + 8;
              sub_168B9F0((__int64)v48, (__int64 *)(a1 + 8), *(_DWORD *)(v27 + 24), 0x1007u, 0);
              sub_15F7200(v48);
              goto LABEL_22;
            }
          }
        }
LABEL_21:
        ++v19;
LABEL_22:
        result = sub_B76070(v10, v7, v23, v20);
      }
      while ( (unsigned int)result > v19 );
    }
  }
  return result;
}
