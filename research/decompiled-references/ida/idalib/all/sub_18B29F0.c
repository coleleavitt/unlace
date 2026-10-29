__int64 __fastcall sub_18B29F0(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  int v6; // ebx
  int v7; // r15d
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // r12
  __int64 *v14; // rbp
  __int64 *v15; // rbx
  __int64 v16; // r14
  signed __int64 v17; // rbx
  __int64 v18; // rax
  __int64 *v19; // rcx
  __int64 v20; // rdx
  __int64 *v21; // rbx
  __m128 v22; // xmm0
  __int64 (__fastcall *v23)(__int64); // rdi
  __int64 (__fastcall **v24)(__int64); // r14
  __int64 (__fastcall *v25)(__int64); // rax
  _QWORD *v26; // rdi
  __int64 *v27; // rax
  __int64 v28; // rax
  int v29; // eax
  signed __int64 v30; // rdx
  __int64 v31; // rdi
  char v32; // al
  signed __int64 v33; // rdx
  __int64 (__fastcall *v34)(__int64); // rax
  _QWORD *v35; // rdi
  char v36; // al
  unsigned __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 i; // rbp
  __int64 v44; // rax
  _QWORD *v45; // rax
  unsigned __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // r9
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // [rsp+0h] [rbp-A8h]
  __int64 v52; // [rsp+0h] [rbp-A8h]
  signed __int64 v53; // [rsp+8h] [rbp-A0h] BYREF
  __m128 v54; // [rsp+10h] [rbp-98h] BYREF
  __int64 *v55; // [rsp+20h] [rbp-88h]
  __int64 *v56; // [rsp+28h] [rbp-80h]
  __m128 v57; // [rsp+30h] [rbp-78h]
  __int64 (__fastcall *v58)(__int64); // [rsp+40h] [rbp-68h] BYREF
  __int64 v59; // [rsp+48h] [rbp-60h]
  __int64 (__fastcall *v60)(__int64); // [rsp+50h] [rbp-58h]
  __int64 v61; // [rsp+58h] [rbp-50h]
  __int64 (__fastcall *v62)(__int64 *); // [rsp+60h] [rbp-48h]
  __int64 v63; // [rsp+68h] [rbp-40h]

  if ( (unsigned __int8)sub_B7D2B0(a2, *(_QWORD *)(a1 + 248))
    || (v38 = sub_B73640(a2)) == 0
    || (v7 = sub_18B2030(a1, v38, a3, a4, v39, v40, v41, v42), v6 = v7, v7 < 0) )
  {
    v6 = 0;
    v7 = 0;
  }
  v8 = *(_QWORD *)(a1 + 248);
  if ( (unsigned int)sub_B73D90(a2, v8) == 1 )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
          ;
          i = *(_QWORD *)(*(_QWORD *)(i + 32) & 0xFFFFFFFFFFFFFFF0LL) )
    {
      if ( (unsigned __int8)(*(_BYTE *)(i + 16) - 2) > 4u )
      {
        if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u
          || (v44 = sub_F63050(i, v8, v9, v10)) == 0 )
        {
          v45 = sub_F63270(i, v8, v9, v10, v11, v12);
          if ( v45 )
          {
            v46 = sub_B97300((__int64)v45);
            if ( v46 )
            {
              v49 = sub_18B1C40(a1, 0, v46, *(unsigned int *)(a2 + 24), v47, v48, a3, a4);
              if ( v6 <= v49 )
                v7 = v49;
            }
          }
          break;
        }
        i = v44;
      }
    }
  }
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x2E )
  {
    v13 = (__int64 *)(a2 + 104);
    v53 = *(unsigned int *)(a2 + 100);
    v14 = (__int64 *)(a2 + 104 + 8 * v53);
    v51 = (8 * v53) >> 3;
    if ( (8 * v53) >> 5 )
    {
      v15 = (__int64 *)(a2 + 104);
      v16 = a2 + 32 * ((8 * v53) >> 5) + 104;
      while ( !sub_B799A0(*v15) )
      {
        if ( sub_B799A0(v15[1]) )
        {
          v14 = v15 + 1;
          v51 = v15 + 1 - v13;
          goto LABEL_13;
        }
        if ( sub_B799A0(v15[2]) )
        {
          v14 = v15 + 2;
          v51 = v15 + 2 - v13;
          goto LABEL_13;
        }
        if ( sub_B799A0(v15[3]) )
        {
          v14 = v15 + 3;
          v51 = v15 + 3 - v13;
          goto LABEL_13;
        }
        v15 += 4;
        if ( (__int64 *)v16 == v15 )
        {
          v50 = v14 - v15;
          goto LABEL_55;
        }
      }
      goto LABEL_12;
    }
    v50 = (8 * v53) >> 3;
    v15 = (__int64 *)(a2 + 104);
LABEL_55:
    if ( v50 != 2 )
    {
      if ( v50 != 3 )
      {
        if ( v50 != 1 )
          goto LABEL_13;
        goto LABEL_58;
      }
      if ( sub_B799A0(*v15) )
      {
LABEL_12:
        v14 = v15;
        v51 = v15 - v13;
LABEL_13:
        v17 = v53 - v51;
        if ( v53 == v51 )
        {
          v19 = v14;
          v52 = 0;
          v18 = 0;
        }
        else
        {
          v18 = *(_QWORD *)(*v14 + 64);
          if ( v18 )
          {
            v18 = sub_B9AE60(*v14);
            --v17;
            v19 = v14 + 1;
            v52 = v18 + 8 * v20;
          }
          else
          {
            v52 = 0;
            v19 = v14;
          }
        }
        v21 = &v19[v17];
        v53 = v18;
        v55 = v13;
        v56 = v21;
        v22 = _mm_loadh_ps((const double *)&v53);
        v53 = (signed __int64)v14;
        v54 = v22;
        v57 = _mm_loadh_ps((const double *)&v53);
LABEL_17:
        if ( v14 != v13
          || *(_OWORD *)&v54 != __PAIR128__(v52, (unsigned __int64)v21)
          || __PAIR128__((unsigned __int64)v14, v52) != *(_OWORD *)&v57
          || v21 != v56 )
        {
          v23 = nullptr;
          v59 = 0;
          v58 = sub_A56010;
          v60 = sub_A56030;
          v62 = sub_A56050;
          v61 = 0;
          v24 = &v58;
          v63 = 0;
          v53 = (signed __int64)&v58;
          while ( 1 )
          {
            v25 = *v24;
            v26 = (unsigned __int64 *)((char *)v54.m128_u64 + (_QWORD)v23);
            if ( ((unsigned __int8)*v24 & 1) != 0 )
              v25 = *(__int64 (__fastcall **)(__int64))((char *)v25 + *v26 - 1);
            v27 = (__int64 *)v25((__int64)v26);
            if ( v27 )
              break;
            v24 += 2;
            v23 = v24[1];
          }
          v28 = sub_B9AE20(*v27);
          if ( v28 )
          {
            v29 = sub_18B29F0(a1, v28);
            if ( v7 <= v29 )
              v7 = v29;
          }
          v30 = v53;
          v31 = 0;
          v59 = 0;
          v58 = sub_A55F80;
          v60 = sub_A55FB0;
          v61 = 0;
          v62 = sub_A55FE0;
          v63 = 0;
          while ( 1 )
          {
            v34 = *(__int64 (__fastcall **)(__int64))v30;
            v35 = (unsigned __int64 *)((char *)v54.m128_u64 + v31);
            v53 = v30;
            if ( ((unsigned __int8)v34 & 1) != 0 )
            {
              v32 = (*(__int64 (**)(void))((char *)v34 + *v35 - 1))();
              v33 = v53;
              if ( v32 )
                goto LABEL_31;
            }
            else
            {
              v36 = v34((__int64)v35);
              v33 = v53;
              if ( v36 )
              {
LABEL_31:
                v13 = v55;
                goto LABEL_17;
              }
            }
            v30 = v33 + 16;
            v31 = *(_QWORD *)(v30 + 8);
          }
        }
        return (unsigned int)v7;
      }
      ++v15;
    }
    if ( !sub_B799A0(*v15) )
    {
      ++v15;
LABEL_58:
      if ( !sub_B799A0(*v15) )
        goto LABEL_13;
      goto LABEL_12;
    }
    goto LABEL_12;
  }
  return (unsigned int)v7;
}
