void __fastcall sub_1B0B190(__int64 a1, __int64 a2, unsigned int **a3, __int64 a4, double a5)
{
  unsigned int **v5; // r15
  unsigned int **v6; // r14
  unsigned int **v7; // r12
  char v8; // bl
  unsigned int *v9; // r13
  unsigned int v10; // eax
  __int64 v11; // r12
  unsigned int v12; // edx
  unsigned int *v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // rax
  unsigned __int64 *v16; // rbx
  unsigned __int64 v17; // rbp
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // rsi
  int v26; // ebp
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r14
  _QWORD *v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdi
  unsigned int v36; // ecx
  __int64 v37; // r9
  unsigned __int64 v38; // rax
  int v39; // esi
  int v40; // r10d
  unsigned __int64 *v43; // [rsp+8h] [rbp-140h]
  unsigned __int64 v44; // [rsp+30h] [rbp-118h]
  __int64 v45; // [rsp+38h] [rbp-110h]
  __int64 *v46; // [rsp+40h] [rbp-108h]
  unsigned int v47; // [rsp+54h] [rbp-F4h]
  unsigned int **v48; // [rsp+58h] [rbp-F0h]
  unsigned int v49; // [rsp+64h] [rbp-E4h] BYREF
  unsigned __int64 v50; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v51; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v52; // [rsp+78h] [rbp-D0h] BYREF
  __m128 v53[12]; // [rsp+80h] [rbp-C8h] BYREF

  v5 = &a3[a4];
  v47 = 0;
  if ( v5 != a3 )
  {
    v6 = a3;
    v7 = a3;
    v8 = 0;
    while ( 1 )
    {
      v9 = *v7;
      if ( (*v7)[2] == 85 )
      {
        v10 = v9[12];
        if ( v10 == 1 )
        {
          v8 = 1;
          v47 = v9[14];
        }
        else if ( v10 == 2 )
        {
          v25 = a2;
          v26 = 103;
          v27 = *(unsigned int *)(a2 + 344);
          if ( (_DWORD)v27
            && (v28 = *(_QWORD *)(a2 + 336) + 6776 * v27 - 6776, *(_QWORD *)(v28 + 6768) == *(_QWORD *)(a2 + 328))
            && (v29 = *(unsigned int *)(v28 + 8),
                v25 = *(unsigned int *)(a2 + 27504),
                (unsigned int)v29 > (unsigned int)v25)
            && (v30 = v29 - v25) != 0
            && (v31 = *(_QWORD *)v28 + 1688 * (v30 - 1)) != 0 )
          {
            v26 = *(_DWORD *)(v31 + 976);
            if ( sub_FFE740(v26) )
              goto LABEL_29;
LABEL_27:
            if ( !sub_FFE580(v26) )
            {
LABEL_28:
              sub_168B9F0((__int64)v53, (__int64 *)(a1 + 8), v9[14], 0x11F1u, 0);
              sub_15F7200(v53);
              goto LABEL_6;
            }
          }
          else if ( !sub_FFE740(103) )
          {
            goto LABEL_27;
          }
LABEL_29:
          if ( !(unsigned __int8)sub_FFEBC0(v26, v25) )
            goto LABEL_6;
          goto LABEL_28;
        }
      }
LABEL_6:
      if ( v5 == ++v7 )
      {
        if ( !v8 )
          return;
        v11 = a2;
        while ( 1 )
        {
          v13 = *v6;
          if ( (*v6)[2] != 85 )
            goto LABEL_12;
          v14 = v13[12];
          if ( v14 != 1 )
          {
            if ( v14 == 3 )
              v12 = *v13;
            else
              v12 = v13[14];
            sub_168B9F0((__int64)v53, (__int64 *)(a1 + 8), v12, 0x119Bu, 0);
            sub_15F7200(v53);
            sub_168B9F0((__int64)v53, (__int64 *)(a1 + 8), v47, 0x182Du, 0);
            sub_15F7200(v53);
            goto LABEL_12;
          }
          v15 = (__int64)&v13[2 * v13[4] + 26];
          v16 = (unsigned __int64 *)(v13 + 26);
          v43 = (unsigned __int64 *)v15;
          if ( (unsigned __int64 *)v15 == v16 )
          {
LABEL_12:
            if ( v5 == ++v6 )
              return;
          }
          else
          {
            v48 = v6;
            v46 = (__int64 *)(a1 + 8);
            do
            {
              v17 = *v16;
              v18 = (__int64)&v50;
              v49 = 0;
              v50 = v17;
              v51 = 0;
              v19 = sub_1B06DD0(a1, &v50, &v49, &v51, (__int64)&byte_22F0C30, 0, a5);
              if ( !v19 )
                goto LABEL_21;
              v20 = sub_1AEE450(v19);
              v23 = *(unsigned int *)(v11 + 344);
              if ( !(_DWORD)v23
                || (v21 = *(_QWORD *)(v11 + 336),
                    v23 = v21 + 6776 * v23 - 6776,
                    *(_QWORD *)(v23 + 6768) != *(_QWORD *)(v11 + 328))
                || (v21 = *(unsigned int *)(v23 + 8),
                    v18 = *(unsigned int *)(v11 + 27504),
                    (unsigned int)v21 <= (unsigned int)v18)
                || (v21 -= v18) == 0
                || (--v21, (v32 = *(_QWORD *)v23 + 1688 * v21) == 0) )
              {
LABEL_20:
                v24 = sub_C00A40(v17, v18, v23, v21, v22);
                sub_168B9F0((__int64)v53, v46, v24, 0x11EFu, 0);
                v52 = sub_EEC8C0(v17, (__int64)v46, a5);
                sub_1587DB0((__int64)v53, &v52);
                sub_15F7200(v53);
                goto LABEL_21;
              }
              if ( v20 )
                v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 32LL))(v20);
              v45 = v20;
              v33 = (_QWORD *)(*(_QWORD *)(v32 + 1280) + 8LL * *(unsigned int *)(v32 + 1296));
              sub_1AFECD0(v53, v33, v33, v32 + 1280, 1);
              v34 = *(unsigned int *)(v32 + 1296);
              v35 = *(_QWORD *)(v32 + 1280);
              v44 = v53[0].m128_u64[0];
              if ( (_DWORD)v34 )
              {
                v36 = (v34 - 1) & (((unsigned int)v45 >> 9) ^ ((unsigned int)v45 >> 4));
                v18 = v35 + 8LL * v36;
                v37 = *(_QWORD *)v18;
                if ( v45 == *(_QWORD *)v18 )
                  goto LABEL_45;
                v39 = 1;
                if ( v37 != -4096 )
                {
                  while ( 1 )
                  {
                    v40 = v39 + 1;
                    v36 = (v34 - 1) & (v39 + v36);
                    v18 = v35 + 8LL * v36;
                    if ( v45 == *(_QWORD *)v18 )
                      break;
                    if ( *(_QWORD *)v18 == -4096 )
                      goto LABEL_49;
                    v39 = v40;
                  }
LABEL_45:
                  sub_1AFECD0(v53, (_QWORD *)v18, (_QWORD *)(v35 + 8 * v34), v32 + 1280, 1);
                  v38 = v53[0].m128_u64[0];
                  goto LABEL_46;
                }
              }
LABEL_49:
              v18 = v35 + 8 * v34;
              sub_1AFECD0(v53, (_QWORD *)v18, (_QWORD *)v18, v32 + 1280, 1);
              v38 = v53[0].m128_u64[0];
LABEL_46:
              if ( v38 == v44 )
                goto LABEL_20;
LABEL_21:
              ++v16;
            }
            while ( v43 != v16 );
            v6 = v48 + 1;
            if ( v5 == v48 + 1 )
              return;
          }
        }
      }
    }
  }
}
