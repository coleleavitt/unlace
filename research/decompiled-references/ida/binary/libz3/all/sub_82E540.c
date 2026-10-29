__int64 __fastcall sub_82E540(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // r12
  __int64 result; // rax
  __int64 v7; // rbp
  _DWORD *v8; // rax
  char v9; // al
  char v10; // al
  __int64 v11; // r10
  _DWORD *v12; // rax
  unsigned __int8 v13; // al
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rax
  char v18; // al
  __int64 v19; // r10
  _DWORD *v20; // rax
  __int64 v21; // r13
  __int64 v22; // rdx
  void *v23; // r12
  __int64 v24; // rsi
  char *v25; // rdi
  int v26; // edx
  __int64 v27; // rsi
  char *v28; // rcx
  __int64 v29; // rax
  unsigned int v30; // r12d
  unsigned int v31; // r12d
  __int64 v32; // rax
  _QWORD *v33; // rdx
  __m128 *v34; // rax
  int v35; // eax
  unsigned int v36; // esi
  __int64 v37; // rax
  int v38; // ecx
  int v39; // r8d
  int v40; // r9d
  __int64 v41; // rax
  __int64 v42; // rax
  int v43; // ecx
  int v44; // r8d
  int v45; // r9d
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // [rsp+0h] [rbp-78h]
  __int64 v50; // [rsp+8h] [rbp-70h]
  unsigned __int8 v51; // [rsp+8h] [rbp-70h]
  unsigned __int8 v52; // [rsp+8h] [rbp-70h]
  unsigned int v53; // [rsp+10h] [rbp-68h]
  void *v54; // [rsp+10h] [rbp-68h]
  void *v55; // [rsp+10h] [rbp-68h]
  __int64 v56; // [rsp+18h] [rbp-60h]
  __int64 v57; // [rsp+18h] [rbp-60h]
  int v58; // [rsp+20h] [rbp-58h] BYREF
  char v59; // [rsp+24h] [rbp-54h]
  __int64 v60; // [rsp+28h] [rbp-50h]
  int v61; // [rsp+30h] [rbp-48h] BYREF
  char v62; // [rsp+34h] [rbp-44h]
  __int64 v63; // [rsp+38h] [rbp-40h]

  v5 = *(unsigned int *)(a3 + 32);
  result = sub_FF9F70(*(_QWORD *)(a1 + 496), v5);
  if ( !(_BYTE)result )
  {
    v49 = *(_QWORD *)(a1 + 72);
    v7 = **(_QWORD **)(*(_QWORD *)(a1 + 88) + 8LL * a2);
    if ( v7 )
      ++*(_DWORD *)(v7 + 8);
    if ( !*(_WORD *)(v7 + 4) )
    {
      v8 = *(_DWORD **)(*(_QWORD *)(v7 + 16) + 24LL);
      if ( v8 )
      {
        if ( *v8 == 5 )
        {
          v35 = v8[1];
          if ( v35 == 6 || !v35 )
            return sub_828D60(v7, v49);
        }
        else if ( !*v8 && v8[1] == 4 )
        {
          return sub_828D60(v7, v49);
        }
      }
    }
    v9 = *(_BYTE *)(a3 + 37);
    if ( *(_BYTE *)(a3 + 36) )
    {
      if ( !v9 )
      {
        v10 = sub_828D80(v7);
        v11 = a2;
        if ( !v10
          || (v42 = sub_FF9B20(*(_QWORD *)(a1 + 496)),
              v11 = a2,
              *(_DWORD *)(**(_QWORD **)(v42 + 544) + 4LL * (unsigned int)v5) <= 1u)
          && (v48 = sub_FF9B20(*(_QWORD *)(a1 + 496)),
              v11 = a2,
              (*(_DWORD *)(**(_QWORD **)(v48 + 544) + 4LL * (unsigned int)v5) & 0xFFFFFFFD) != 0) )
        {
          v53 = -2;
        }
        else
        {
          v57 = v11;
          v59 &= 0xFCu;
          v62 &= 0xFCu;
          v52 = sub_828D80(v7);
          v58 = 0;
          v60 = 0;
          v61 = 1;
          v63 = 0;
          v55 = qword_1C7F2C0;
          sub_1849700(qword_1C7F2C0, a3, &v58);
          sub_182CBA0(v55, &v61);
          v62 &= ~1u;
          v61 = 1;
          sub_27B900(a1 + 832, (int)&v58, v52, v43, v44, v45);
          v46 = sub_15E1B70(*(_QWORD *)(a1 + 832));
          v53 = sub_7E58C0(a1, v46);
          sub_25A130((char *)&v58);
          v11 = v57;
        }
        v12 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1 + 88) + 8 * v11)) + 24);
        if ( v12
          && *v12 == 5
          && !v12[1]
          && (*(_DWORD *)(**(_QWORD **)(sub_FF9B20(*(_QWORD *)(a1 + 496)) + 544) + 4 * v5) & 0xFFFFFFFD) == 0 )
        {
LABEL_17:
          v13 = sub_828D80(v7);
          sub_27B900(a1 + 832, a3, v13, v14, v15, v16);
          v17 = sub_15E1B70(*(_QWORD *)(a1 + 832));
          v53 = sub_7E58C0(a1, v17);
        }
LABEL_25:
        if ( v53 != -2 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 3288LL) + 4LL * v53) != 1 )
        {
          ++*(_DWORD *)(a1 + 428);
          sub_829BD0((_QWORD *)a1);
          v21 = *(_QWORD *)(a1 + 720);
          if ( v21 )
          {
            v22 = *(unsigned int *)(v21 - 4);
            if ( (_DWORD)v22 )
            {
              v50 = v21 + 40 * v22;
              do
              {
                v23 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v21 + 8);
                v24 = v21 + 24;
                v21 += 40;
                sub_182CBA0(v23, v24);
              }
              while ( v21 != v50 );
              v21 = *(_QWORD *)(a1 + 720);
            }
            *(_DWORD *)(v21 - 4) = 0;
          }
          if ( !*(_DWORD *)(a1 + 740) && !*(_DWORD *)(a1 + 744) )
            goto LABEL_51;
          v25 = *(char **)(a1 + 728);
          v26 = 0;
          v27 = *(unsigned int *)(a1 + 736);
          v28 = &v25[12 * v27];
          v29 = *(_QWORD *)(a1 + 728);
          if ( v25 == v28 )
            goto LABEL_50;
          do
          {
            while ( *(_DWORD *)(v29 + 4) )
            {
              *(_DWORD *)(v29 + 4) = 0;
              v29 += 12;
              if ( v28 == (char *)v29 )
                goto LABEL_40;
            }
            v29 += 12;
            ++v26;
          }
          while ( v28 != (char *)v29 );
LABEL_40:
          if ( (unsigned int)v27 <= 0x10 || 3 * (int)v27 >= (unsigned int)(4 * v26) )
          {
LABEL_50:
            *(_QWORD *)(a1 + 740) = 0;
LABEL_51:
            sub_83C270(*(_QWORD *)(a1 + 496), a3, a1 + 560);
            v34 = (__m128 *)sub_880FA0(a1, 0, v53);
            sub_82D690(a1, v53, (const void **)(a1 + 752), (__int64 *)(a1 + 776), v34);
            return sub_828D60(v7, v49);
          }
          if ( v25 )
          {
            sub_186B220(v25);
            v30 = *(_DWORD *)(a1 + 736);
            *(_QWORD *)(a1 + 728) = 0;
            v31 = v30 >> 1;
            *(_DWORD *)(a1 + 736) = v31;
            v32 = sub_186B270(12LL * v31);
            if ( !v31 )
              goto LABEL_49;
          }
          else
          {
            *(_QWORD *)(a1 + 728) = 0;
            v36 = (unsigned int)v27 >> 1;
            *(_DWORD *)(a1 + 736) = v36;
            v31 = v36;
            v32 = sub_186B270(12LL * v36);
          }
          v33 = (_QWORD *)v32;
          if ( v31 != 1 )
          {
            do
            {
              *v33 = 0;
              v33 += 3;
              *(_QWORD *)((char *)v33 - 12) = 0;
            }
            while ( (_QWORD *)(v32 + 24LL * (v31 >> 1)) != v33 );
            if ( (v31 & 1) == 0 )
              goto LABEL_49;
            v33 = (_QWORD *)(v32 + 12LL * (v31 & 0x7FFFFFFE));
          }
          *v33 = 0;
LABEL_49:
          *(_QWORD *)(a1 + 728) = v32;
          goto LABEL_50;
        }
      }
    }
    else if ( !v9 )
    {
      v18 = sub_828D80(v7);
      v19 = a2;
      if ( v18
        && ((v37 = sub_FF9B20(*(_QWORD *)(a1 + 496)),
             v19 = a2,
             (*(_DWORD *)(**(_QWORD **)(v37 + 544) + 4LL * (unsigned int)v5) & 0xFFFFFFFD) != 0)
         || (v47 = sub_FF9B20(*(_QWORD *)(a1 + 496)),
             v19 = a2,
             *(_DWORD *)(**(_QWORD **)(v47 + 544) + 4LL * (unsigned int)v5) <= 1u)) )
      {
        v56 = v19;
        v59 &= 0xFCu;
        v62 &= 0xFCu;
        v51 = sub_828D80(v7);
        v58 = 0;
        v60 = 0;
        v61 = 1;
        v63 = 0;
        v54 = qword_1C7F2C0;
        sub_18495B0(qword_1C7F2C0, a3, &v58);
        sub_182CBA0(v54, &v61);
        v62 &= ~1u;
        v61 = 1;
        sub_27B900(a1 + 832, (int)&v58, v51, v38, v39, v40);
        v41 = sub_15E1B70(*(_QWORD *)(a1 + 832));
        v53 = sub_7E58C0(a1, v41);
        sub_25A130((char *)&v58);
        v19 = v56;
      }
      else
      {
        v53 = -2;
      }
      v20 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1 + 88) + 8 * v19)) + 24);
      if ( v20
        && *v20 == 5
        && !v20[1]
        && *(_DWORD *)(**(_QWORD **)(sub_FF9B20(*(_QWORD *)(a1 + 496)) + 544) + 4 * v5) <= 1u )
      {
        goto LABEL_17;
      }
      goto LABEL_25;
    }
    return sub_828D60(v7, v49);
  }
  return result;
}

