__int64 __fastcall sub_4D2380(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4, __int64 a5)
{
  __int64 v7; // rbx
  unsigned __int64 v9; // r14
  __int64 *v10; // r15
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 tinfo_property; // rax
  __int64 v16; // r13
  __int64 v17; // r12
  unsigned __int64 v18; // r15
  const char *v19; // rsi
  const char *v20; // rdi
  __int64 v21; // rax
  size_t v22; // r14
  size_t v23; // r15
  __int64 v24; // r12
  __int64 *v25; // r13
  __int64 v26; // rsi
  __int64 v27; // rax
  unsigned __int64 v28; // r15
  __int64 *v29; // r12
  __int64 v30; // r13
  __int64 v31; // rsi
  unsigned __int64 v32; // r12
  size_t v33; // r8
  size_t v34; // r9
  __int64 *v35; // r13
  __int64 v36; // r15
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // [rsp+0h] [rbp-A0h]
  __int64 v42; // [rsp+8h] [rbp-98h]
  size_t v43; // [rsp+8h] [rbp-98h]
  unsigned __int64 v44; // [rsp+10h] [rbp-90h]
  unsigned __int64 v45; // [rsp+10h] [rbp-90h]
  size_t v46; // [rsp+10h] [rbp-90h]
  void *src; // [rsp+20h] [rbp-80h] BYREF
  __int128 v49; // [rsp+28h] [rbp-78h]
  char v50[40]; // [rsp+40h] [rbp-60h] BYREF
  unsigned __int64 v51; // [rsp+68h] [rbp-38h]

  v51 = __readfsqword(0x28u);
  if ( a5 == -1 )
    return 0;
  v7 = *a4 + 144 * a5;
  if ( (get_tinfo_property(*(_QWORD *)(v7 + 64), 2) & 0xF) == 0xE )
    *(_QWORD *)(a1 + 24) = 3489661952LL;
  else
    sub_6BEEC0(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1672LL), a1 + 24, 0, v7, -1);
  v9 = *(_QWORD *)v7;
  if ( !*(_QWORD *)v7 )
  {
    if ( (*(_BYTE *)(v7 + 132) & 0x20) != 0 )
      return 0;
    if ( *(_QWORD *)(v7 + 24) <= 1u )
    {
      src = nullptr;
      v49 = 0;
      goto LABEL_9;
    }
    goto LABEL_18;
  }
  v9 >>= 3;
  if ( *(_QWORD *)(v7 + 24) <= 1u )
  {
    src = nullptr;
    v49 = 0;
    if ( (*(_BYTE *)(v7 + 132) & 0x20) != 0 )
    {
      if ( !(unsigned __int8)print_tinfo((unsigned int)&src, 0, 0, 0, 0, (int)v7 + 64, 0, 0) )
        goto LABEL_15;
      v28 = 2;
      v29 = *(__int64 **)(a1 + 16);
      v30 = v29[1];
      if ( v30 )
        v28 = v30-- + 1;
      v31 = *v29;
      if ( v29[2] < v28 )
      {
        v39 = qvector_reserve(*(_QWORD *)(a1 + 16), v31, v28, 1);
        *v29 = v39;
        v31 = v39;
      }
      v29[1] = v28;
      *(_BYTE *)(v31 + v30) = 46;
      *(_BYTE *)(*v29 + v30 + 1) = 0;
      v32 = v49;
      if ( (_QWORD)v49 )
      {
        v33 = v49 - 1;
        if ( (_QWORD)v49 != 1 )
        {
          v34 = v49 - 1;
          v35 = *(__int64 **)(a1 + 16);
          v36 = v35[1];
          if ( v36 )
          {
            --v36;
            v34 = v33 + v36;
            v32 = v49 + v36;
          }
          v37 = *v35;
          if ( v35[2] < v32 )
          {
            v43 = v34;
            v46 = v49 - 1;
            v40 = qvector_reserve(*(_QWORD *)(a1 + 16), v37, v32, 1);
            *v35 = v40;
            v34 = v43;
            v37 = v40;
            v33 = v46;
          }
          v35[1] = v32;
          *(_BYTE *)(v37 + v34) = 0;
          memcpy((void *)(v36 + *v35), src, v33);
LABEL_15:
          if ( !*(_QWORD *)v7 || (unsigned __int64)v49 > 1 )
          {
LABEL_10:
            if ( src )
            {
              *(_QWORD *)&v49 = 0;
              qfree(src);
            }
            return 0;
          }
LABEL_17:
          btoa64(v50, 32, v9, 16);
          sub_35A910(*(__int64 **)(a1 + 16));
          goto LABEL_10;
        }
      }
    }
LABEL_9:
    if ( !*(_QWORD *)v7 )
      goto LABEL_10;
    goto LABEL_17;
  }
LABEL_18:
  v10 = *(__int64 **)(a1 + 16);
  v11 = v10[1];
  if ( v11 )
  {
    v12 = v11 + 1;
    v13 = v10[1];
    --v11;
  }
  else
  {
    v13 = 1;
    v12 = 2;
  }
  v14 = *v10;
  if ( v10[2] < v12 )
  {
    v41 = v13;
    v42 = v11;
    v45 = v12;
    v27 = qvector_reserve(*(_QWORD *)(a1 + 16), v14, v12, 1);
    v13 = v41;
    v11 = v42;
    *v10 = v27;
    v12 = v45;
    v14 = v27;
  }
  v10[1] = v12;
  *(_BYTE *)(v14 + v11) = 46;
  *(_BYTE *)(*v10 + v13) = 0;
  tinfo_property = get_tinfo_property(*a3, 306);
  v44 = *(_QWORD *)(v7 + 24);
  if ( (tinfo_property & 0x100) == 0 )
    goto LABEL_35;
  v16 = *a4;
  v17 = *a4 + 144 * a4[1];
  if ( v17 == v16 )
    goto LABEL_35;
  v18 = 0;
  while ( 1 )
  {
    v21 = *(_QWORD *)(v16 + 24);
    if ( !v44 )
      break;
    v19 = *(const char **)(v7 + 16);
    v20 = haystack;
    if ( v21 )
      goto LABEL_26;
LABEL_27:
    v18 += strcmp(v20, v19) == 0;
    v16 += 144;
    if ( v16 == v17 )
      goto LABEL_34;
  }
  if ( v21 )
  {
LABEL_32:
    v19 = haystack;
LABEL_26:
    v20 = *(const char **)(v16 + 16);
    goto LABEL_27;
  }
  while ( 1 )
  {
    v16 += 144;
    ++v18;
    if ( v17 == v16 )
      break;
    if ( *(_QWORD *)(v16 + 24) )
      goto LABEL_32;
  }
LABEL_34:
  if ( v18 > 1 )
  {
    sub_35A910(*(__int64 **)(a1 + 16));
  }
  else
  {
LABEL_35:
    if ( v44 )
    {
      v22 = v44 - 1;
      if ( v44 != 1 )
      {
        v23 = v44 - 1;
        v24 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
        v25 = *(__int64 **)(a1 + 16);
        if ( v24 )
        {
          --v24;
          v23 = v22 + v24;
          v44 += v24;
        }
        v26 = *v25;
        if ( v25[2] < v44 )
        {
          v38 = qvector_reserve(v25, v26, v44, 1);
          *v25 = v38;
          v26 = v38;
        }
        v25[1] = v44;
        *(_BYTE *)(v26 + v23) = 0;
        memcpy((void *)(v24 + *v25), *(const void **)(v7 + 16), v22);
      }
    }
  }
  return 0;
}
