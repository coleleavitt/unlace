__int64 __fastcall sub_1FBF8D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v7; // rsi
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 result; // rax
  __int64 v14; // r12
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  _QWORD *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rdi
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned __int64 *v33; // rsi
  int v34; // eax
  __int64 v35; // r8
  __int64 v36; // rcx
  bool v37; // zf
  unsigned __int64 v38; // rax
  __int64 v39; // rdx
  unsigned __int64 v40; // r14
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  __int64 v43; // rsi
  __int64 v44; // rcx
  __m128 *v45; // rdx
  __int64 v46; // rax
  _BYTE *v47; // rdi
  unsigned __int64 v48; // r12
  __int64 v49; // rdi
  unsigned __int64 v50; // [rsp+8h] [rbp-90h] BYREF
  _QWORD *v51[2]; // [rsp+10h] [rbp-88h] BYREF
  __int64 v52; // [rsp+20h] [rbp-78h] BYREF
  __m128 v53; // [rsp+30h] [rbp-68h] BYREF
  __int64 v54; // [rsp+40h] [rbp-58h]
  _BYTE v55[80]; // [rsp+48h] [rbp-50h] BYREF

  v7 = (char *)(a2 + 80);
  if ( !a2 )
    v7 = nullptr;
  sub_1FB8120((__int64 *)a1, v7, a3, a4, a5, a6);
  sub_1FBBC70((__int64 *)a1, a2);
  sub_9B9C90(
    *(_QWORD *)(a1 + 24),
    ((*(_QWORD *)(a2 + 56) & 0x2000) != 0) | (2 * (unsigned int)((*(_QWORD *)(a2 + 56) & 0x4000) != 0)));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 96), *(_QWORD *)(a1 + 24));
  v9 = *(unsigned int *)(a2 + 100);
  sub_1F6F570(*(_QWORD **)(a1 + 16), v9, *(_QWORD *)(a1 + 24));
  if ( ((*(_BYTE *)(a2 + 80) | (unsigned __int8)(*(__int64 *)(a2 + 80) >> 1)) & 1) != 0 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(a2 + 88) + 104LL);
    sub_1F92A90(*(_QWORD *)(a1 + 16), v9, *(_QWORD *)(a1 + 24));
  }
  *(_DWORD *)(a1 + 224) = 87;
  result = *(_QWORD *)a1;
  if ( !*(_QWORD *)(*(_QWORD *)a1 + 48LL) )
    return result;
  result = *(_QWORD *)(a2 + 40);
  if ( (result & 7) == 0 && (result & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    return result;
  v14 = *(_QWORD *)(a2 + 88);
  v15 = *(_QWORD *)(v14 + 80);
  v16 = v15 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v15 & 1) != 0 )
    goto LABEL_14;
  v17 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v15 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    goto LABEL_14;
  v18 = v15 & 2;
  result = (__int64)v17;
  if ( (_DWORD)v18 )
  {
    v16 = sub_6E2500(v17, *(_QWORD *)(a2 + 88), v18, v10, v11, v12) & 0xFFFFFFFFFFFFFFFELL;
    *(_QWORD *)(v14 + 80) = v16 | 1;
LABEL_14:
    v9 = v14;
    v53.m128_u64[0] = v16;
    result = sub_B7BB70(&v53);
  }
  if ( a2 == result )
  {
    v19 = *(_QWORD *)(sub_B8C1B0(a2 + 48) + 16);
    v20 = (v19 & 4) != 0 ? *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF8LL) : v19 & 0xFFFFFFFFFFFFFFF8LL;
    v21 = sub_B8EAA0(v20);
    v26 = sub_B91570(v21, v9, v22, v23, v24, v25);
    result = sub_B8C1B0(v26);
    if ( *(char *)(result + 29) < 0 || (*(_BYTE *)(result + 28) & 0x7F) == 0 )
    {
      v27 = *(_QWORD *)a1;
      v50 = result;
      if ( (unsigned __int8)sub_1F74D20((__int64 *)(v27 + 1288), (__int64 *)&v50, v51) )
      {
        sub_1F7A030(
          &v53,
          v51[0],
          (_QWORD *)(*(_QWORD *)(v27 + 1288) + 16LL * *(unsigned int *)(v27 + 1304)),
          v27 + 1288,
          1);
        v29 = *(unsigned int *)(v53.m128_u64[0] + 8);
LABEL_21:
        v30 = *(_QWORD *)(v27 + 1312) + 40 * v29;
        v31 = *(unsigned int *)(v30 + 16);
        if ( v31 + 1 > (unsigned __int64)*(unsigned int *)(v30 + 20) )
        {
          sub_2237220(v30 + 8, v30 + 24, v31 + 1, 16);
          v31 = *(unsigned int *)(v30 + 16);
        }
        result = *(_QWORD *)(v30 + 8) + 16 * v31;
        *(_QWORD *)result = 1;
        *(_QWORD *)(result + 8) = a2;
        ++*(_DWORD *)(v30 + 16);
        return result;
      }
      v32 = *(unsigned int *)(v27 + 1304);
      v33 = v51[0];
      v34 = *(_DWORD *)(v27 + 1296) + 1;
      v35 = (unsigned int)(4 * v34);
      v53.m128_u64[0] = (unsigned __int64)v51[0];
      if ( (unsigned int)v35 >= 3 * (int)v32 )
      {
        sub_1F8AE20((__int64 *)(v27 + 1288), 2 * v32, v32, (unsigned int)(2 * v32), v35, v28);
      }
      else
      {
        v36 = (unsigned int)(v32 - *(_DWORD *)(v27 + 1300) - v34);
        if ( (unsigned int)v36 > (unsigned int)v32 >> 3 )
        {
LABEL_27:
          v37 = *v33 == -4096;
          *(_DWORD *)(v27 + 1296) = v34;
          if ( !v37 )
            --*(_DWORD *)(v27 + 1300);
          v38 = v50;
          *((_DWORD *)v33 + 2) = 0;
          v39 = *(unsigned int *)(v27 + 1304);
          *v33 = v38;
          v51[0] = v33;
          sub_1F7A030(&v53, v33, (_QWORD *)(*(_QWORD *)(v27 + 1288) + 16 * v39), v27 + 1288, 1);
          v40 = v53.m128_u64[0];
          v51[1] = (_QWORD *)0x100000000LL;
          v53.m128_u64[0] = v50;
          v54 = 0x100000000LL;
          v41 = *(unsigned int *)(v27 + 1320);
          v53.m128_u64[1] = (unsigned __int64)v55;
          v42 = *(unsigned int *)(v27 + 1324);
          v43 = v41 + 1;
          v51[0] = &v52;
          if ( v41 + 1 > v42 )
          {
            v48 = *(_QWORD *)(v27 + 1312);
            v49 = v27 + 1312;
            if ( v48 > (unsigned __int64)&v53 || (unsigned __int64)&v53 >= v48 + 40 * v41 )
            {
              sub_1F87D60(v49, v43);
              v41 = *(unsigned int *)(v27 + 1320);
              v45 = &v53;
              v44 = *(_QWORD *)(v27 + 1312);
            }
            else
            {
              sub_1F87D60(v49, v43);
              v44 = *(_QWORD *)(v27 + 1312);
              v41 = *(unsigned int *)(v27 + 1320);
              v45 = (__m128 *)((char *)&v53 + v44 - v48);
            }
          }
          else
          {
            v44 = *(_QWORD *)(v27 + 1312);
            v45 = &v53;
          }
          v46 = v44 + 40 * v41;
          *(_QWORD *)v46 = v45->m128_u64[0];
          *(_QWORD *)(v46 + 8) = v46 + 24;
          *(_QWORD *)(v46 + 16) = 0x100000000LL;
          if ( v45[1].m128_i32[0] )
            sub_1F7E350((char ***)(v46 + 8), (char ***)&v45->m128_u64[1]);
          v29 = *(unsigned int *)(v27 + 1320);
          v47 = (_BYTE *)v53.m128_u64[1];
          *(_DWORD *)(v27 + 1320) = v29 + 1;
          if ( v47 != v55 )
          {
            free(v47);
            v29 = (unsigned int)(*(_DWORD *)(v27 + 1320) - 1);
          }
          *(_DWORD *)(v40 + 8) = v29;
          goto LABEL_21;
        }
        sub_1F8AE20((__int64 *)(v27 + 1288), v32, v32, v36, v35, v28);
      }
      sub_1F74D20((__int64 *)(v27 + 1288), (__int64 *)&v50, &v53);
      v33 = (unsigned __int64 *)v53.m128_u64[0];
      v34 = *(_DWORD *)(v27 + 1296) + 1;
      goto LABEL_27;
    }
  }
  return result;
}
