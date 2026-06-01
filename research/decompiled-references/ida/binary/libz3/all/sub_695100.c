__int64 __fastcall sub_695100(__int64 a1, __int64 a2)
{
  __m128i *v2; // rax
  __m128i *v3; // r13
  __int64 *v4; // rbx
  __int64 *v5; // r8
  __int64 v6; // r12
  int v7; // eax
  unsigned int v8; // r9d
  __int32 v9; // ecx
  int v10; // r15d
  size_t v11; // r14
  __m128i *v12; // rbp
  __int64 v13; // rdx
  __m128i *v14; // r10
  __m128i *v15; // rdx
  __m128i *v16; // rdi
  __int32 v17; // esi
  __int64 *v18; // rdx
  __int64 result; // rax
  int *v20; // r12
  int *v21; // rbx
  int v22; // ecx
  __int64 v23; // rax
  __m128i *v24; // rsi
  __m128i *v25; // rax
  __int32 v26; // edx
  __int64 v27; // r9
  __int64 v28; // r10
  int v29; // edi
  __int64 *v30; // rcx
  unsigned int v31; // r11d
  __int64 v32; // r10
  __int64 *v33; // rsi
  __int64 v34; // r11
  __int64 *v35; // r8
  __int64 *v36; // rax
  __int64 v37; // rdx
  __int32 v38; // esi
  __m128i *v39; // rax
  unsigned int v40; // r10d
  __m128i *v41; // r11
  __m128i *v42; // rdx
  const __m128i *v43; // r9
  const __m128i *v44; // rax
  __int64 v45; // rdx
  __m128i *v46; // rsi
  __m128i *v47; // rdx
  __m128i v48; // xmm0
  __int64 *i; // rax
  __int64 v50; // rdx
  __int64 *v51; // rax
  __int64 v52; // rdx
  __int32 v53; // edx
  __int64 v54; // rax
  int v55; // [rsp+0h] [rbp-98h]
  __int64 *v57; // [rsp+10h] [rbp-88h]
  int v59; // [rsp+20h] [rbp-78h]
  __int32 v60; // [rsp+20h] [rbp-78h]
  __int64 *v61; // [rsp+28h] [rbp-70h]
  __m128i *v62; // [rsp+28h] [rbp-70h]
  __int32 v63; // [rsp+30h] [rbp-68h]
  int v64; // [rsp+30h] [rbp-68h]
  unsigned int v65; // [rsp+38h] [rbp-60h]
  __int64 v66[8]; // [rsp+58h] [rbp-40h] BYREF

  v2 = (__m128i *)sub_186B270(0xC0u);
  v2->m128i_i64[0] = 0;
  v3 = v2;
  v2[1].m128i_i64[1] = 0;
  v2[3].m128i_i64[0] = 0;
  v2[4].m128i_i64[1] = 0;
  v2[6].m128i_i64[0] = 0;
  v2[7].m128i_i64[1] = 0;
  v2[9].m128i_i64[0] = 0;
  v2[10].m128i_i64[1] = 0;
  v4 = *(__int64 **)(a1 + 4840);
  v5 = &v4[2 * *(unsigned int *)(a1 + 4848)];
  if ( v4 == v5 )
  {
    sub_2FCDE0((__int64 *)(a1 + 4464));
    v20 = *(int **)(a1 + 4064);
    if ( v20 )
    {
      v11 = 192;
      v10 = 7;
      v21 = &v20[*(v20 - 1)];
      if ( v20 != v21 )
        goto LABEL_25;
    }
    return sub_186B220(v3);
  }
  do
  {
    if ( (unsigned __int64)*v4 > 1 )
    {
      if ( v5 == v4 )
      {
        sub_2FCDE0((__int64 *)(a1 + 4464));
        v20 = *(int **)(a1 + 4064);
        if ( v20 )
          goto LABEL_121;
        return sub_186B220(v3);
      }
      v55 = 0;
      v6 = *v4;
      v7 = 0;
      v8 = 8;
LABEL_7:
      v9 = *((_DWORD *)v4 + 2);
      if ( 3 * v8 >= 4 * (v7 + v55) )
      {
        v10 = v8 - 1;
        v11 = 24LL * v8;
        v12 = (__m128i *)((char *)v3 + v11);
LABEL_9:
        v13 = 24LL * (v10 & (unsigned int)v9);
        v14 = (__m128i *)((char *)v3 + v13);
        if ( v13 == v11 )
        {
          v16 = nullptr;
LABEL_46:
          if ( v3 == v14 )
          {
LABEL_55:
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v15 = v3;
          while ( 2 )
          {
            while ( 1 )
            {
              v38 = v15->m128i_i32[1];
              if ( v38 != 2 )
                break;
              if ( v9 != v15->m128i_i32[0] )
                goto LABEL_50;
              if ( v9 == v15->m128i_i32[2] )
                goto LABEL_17;
              v15 = (__m128i *)((char *)v15 + 24);
              if ( v14 == v15 )
                goto LABEL_55;
            }
            if ( !v38 )
              goto LABEL_56;
            v16 = v15;
LABEL_50:
            v15 = (__m128i *)((char *)v15 + 24);
            if ( v14 == v15 )
              goto LABEL_55;
            continue;
          }
        }
        v15 = (__m128i *)((char *)v3 + v13);
        v16 = nullptr;
        while ( 1 )
        {
          v17 = v15->m128i_i32[1];
          if ( v17 == 2 )
          {
            if ( v9 == v15->m128i_i32[0] && v9 == v15->m128i_i32[2] )
            {
LABEL_17:
              v15->m128i_i32[2] = v9;
              v15[1].m128i_i64[0] = v6;
              v15->m128i_i32[1] = 2;
              goto LABEL_18;
            }
          }
          else
          {
            if ( !v17 )
            {
LABEL_56:
              if ( v16 )
                --v7;
              else
                v16 = v15;
              v16->m128i_i32[2] = v9;
              v16[1].m128i_i64[0] = v6;
              v16->m128i_i32[1] = 2;
              v16->m128i_i32[0] = v9;
              ++v55;
LABEL_18:
              v18 = v4 + 2;
              if ( v5 == v4 + 2 )
                goto LABEL_23;
              while ( 1 )
              {
                v6 = *v18;
                v4 = v18;
                if ( (unsigned __int64)*v18 > 1 )
                  break;
                v18 += 2;
                if ( v5 == v18 )
                  goto LABEL_23;
              }
              if ( v5 == v18 )
              {
LABEL_23:
                result = sub_2FCDE0((__int64 *)(a1 + 4464));
                v20 = *(int **)(a1 + 4064);
                if ( !v20 )
                  goto LABEL_42;
                goto LABEL_24;
              }
              goto LABEL_7;
            }
            v16 = v15;
          }
          v15 = (__m128i *)((char *)v15 + 24);
          if ( v15 == v12 )
            goto LABEL_46;
        }
      }
      v65 = v8;
      v63 = *((_DWORD *)v4 + 2);
      v61 = v5;
      v59 = 2 * v8;
      v11 = 48LL * v8;
      v39 = (__m128i *)sub_186B270(v11);
      v40 = v59;
      v5 = v61;
      v41 = v39;
      v9 = v63;
      if ( v59 )
      {
        v42 = &v39[3 * (v65 & 0x7FFFFFFE)];
        do
        {
          v39->m128i_i64[0] = 0;
          v39 += 3;
          v39[-2].m128i_i64[1] = 0;
        }
        while ( v39 != v42 );
        v10 = v59 - 1;
        v43 = (__m128i *)((char *)v3 + 24 * v65);
        v12 = (__m128i *)((char *)v41 + v11);
      }
      else
      {
        v12 = v39;
        v10 = -1;
        v43 = (__m128i *)((char *)v3 + 24 * v65);
        if ( v3 == v43 )
        {
LABEL_71:
          if ( v3 )
          {
            v64 = v59;
            v62 = v41;
            v60 = v9;
            v57 = v5;
            sub_186B220(v3);
            v40 = v64;
            v41 = v62;
            v9 = v60;
            v5 = v57;
          }
          v8 = v40;
          v3 = v41;
          v7 = 0;
          goto LABEL_9;
        }
      }
      v44 = v3;
      do
      {
        while ( v44->m128i_i32[1] != 2 )
        {
          v44 = (const __m128i *)((char *)v44 + 24);
          if ( v44 == v43 )
            goto LABEL_71;
        }
        v45 = 24LL * (v44->m128i_i32[0] & (unsigned int)v10);
        v46 = (__m128i *)((char *)v41 + v45);
        if ( v11 == v45 )
        {
LABEL_74:
          if ( v41 == v46 )
          {
LABEL_80:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v47 = v41;
          while ( v47->m128i_i32[1] )
          {
            v47 = (__m128i *)((char *)v47 + 24);
            if ( v46 == v47 )
              goto LABEL_80;
          }
        }
        else
        {
          v47 = (__m128i *)((char *)v41 + v45);
          while ( v47->m128i_i32[1] )
          {
            v47 = (__m128i *)((char *)v47 + 24);
            if ( v47 == v12 )
              goto LABEL_74;
          }
        }
        v48 = _mm_loadu_si128(v44);
        v44 = (const __m128i *)((char *)v44 + 24);
        *v47 = v48;
        v47[1].m128i_i64[0] = v44[-1].m128i_i64[1];
      }
      while ( v44 != v43 );
      goto LABEL_71;
    }
    v4 += 2;
  }
  while ( v5 != v4 );
  sub_2FCDE0((__int64 *)(a1 + 4464));
  v20 = *(int **)(a1 + 4064);
  if ( !v20 )
    return sub_186B220(v3);
LABEL_121:
  v11 = 192;
  v10 = 7;
LABEL_24:
  result = (unsigned int)*(v20 - 1);
  v21 = &v20[result];
  if ( v21 == v20 )
    goto LABEL_42;
LABEL_25:
  while ( 2 )
  {
    v22 = *v20;
    v23 = 24LL * (v10 & (unsigned int)*v20);
    v24 = (__m128i *)((char *)v3 + v23);
    if ( v23 == v11 )
    {
LABEL_97:
      if ( v24 == v3 )
      {
LABEL_105:
        sub_1872CE0("");
        sub_1873130(114, 1058);
      }
      v25 = v3;
      while ( 1 )
      {
        v53 = v25->m128i_i32[1];
        if ( v53 != 2 )
          break;
        if ( v22 == v25->m128i_i32[0] )
        {
          if ( v22 == v25->m128i_i32[2] )
            goto LABEL_32;
          v25 = (__m128i *)((char *)v25 + 24);
          if ( v24 == v25 )
            goto LABEL_105;
        }
        else
        {
LABEL_100:
          v25 = (__m128i *)((char *)v25 + 24);
          if ( v24 == v25 )
            goto LABEL_105;
        }
      }
      if ( !v53 )
        goto LABEL_105;
      goto LABEL_100;
    }
    v25 = (__m128i *)((char *)v3 + v23);
    while ( 1 )
    {
      v26 = v25->m128i_i32[1];
      if ( v26 != 2 )
      {
        if ( !v26 )
          goto LABEL_105;
        goto LABEL_28;
      }
      if ( v22 == v25->m128i_i32[0] && v22 == v25->m128i_i32[2] )
        break;
LABEL_28:
      v25 = (__m128i *)((char *)v25 + 24);
      if ( &v3->m128i_i8[v11] == (__int8 *)v25 )
        goto LABEL_97;
    }
LABEL_32:
    v27 = v25[1].m128i_i64[0];
    v28 = *(unsigned int *)(a2 + 8);
    v29 = *(_DWORD *)(v27 + 12);
    v30 = *(__int64 **)a2;
    v31 = v28 - 1;
    v32 = 16 * v28;
    v33 = (__int64 *)(*(_QWORD *)a2 + v32);
    v34 = 16LL * (v29 & v31);
    v35 = (__int64 *)(*(_QWORD *)a2 + v34);
    v36 = v35;
    if ( v34 == v32 )
    {
LABEL_81:
      if ( v30 != v35 )
      {
        for ( i = *(__int64 **)a2; v35 != i; i += 2 )
        {
          v50 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *(_DWORD *)(v50 + 12) == v29 && v27 == v50 )
            {
              v51 = (__int64 *)(*(_QWORD *)a2 + v34);
              if ( v34 != v32 )
                goto LABEL_94;
LABEL_106:
              while ( v35 != v30 )
              {
                v54 = *v30;
                if ( (unsigned __int64)*v30 > 1 )
                {
                  if ( *(_DWORD *)(v54 + 12) == v29 && v27 == v54 )
                  {
                    v51 = v30;
                    goto LABEL_115;
                  }
                }
                else if ( !v54 )
                {
                  break;
                }
                v30 += 2;
              }
LABEL_96:
              BUG();
            }
          }
          else if ( !v50 )
          {
            break;
          }
        }
      }
LABEL_39:
      v66[0] = v27;
LABEL_40:
      ++*(_DWORD *)(v27 + 8);
      goto LABEL_41;
    }
    while ( 2 )
    {
      v37 = *v36;
      if ( (unsigned __int64)*v36 <= 1 )
      {
        if ( !v37 )
          goto LABEL_39;
        goto LABEL_36;
      }
      if ( *(_DWORD *)(v37 + 12) != v29 || v27 != v37 )
      {
LABEL_36:
        v36 += 2;
        if ( v33 == v36 )
          goto LABEL_81;
        continue;
      }
      break;
    }
    v51 = (__int64 *)(*(_QWORD *)a2 + v34);
LABEL_94:
    while ( 2 )
    {
      v52 = *v51;
      if ( (unsigned __int64)*v51 <= 1 )
      {
        if ( !v52 )
          goto LABEL_96;
        goto LABEL_93;
      }
      if ( *(_DWORD *)(v52 + 12) != v29 || v27 != v52 )
      {
LABEL_93:
        v51 += 2;
        if ( v33 == v51 )
          goto LABEL_106;
        continue;
      }
      break;
    }
LABEL_115:
    v27 = v51[1];
    v66[0] = v27;
    if ( v27 )
      goto LABEL_40;
LABEL_41:
    result = (__int64)sub_68D130((unsigned int **)(a1 + 4472), v66);
    if ( v21 != ++v20 )
      continue;
    break;
  }
LABEL_42:
  if ( v3 )
    return sub_186B220(v3);
  return result;
}

