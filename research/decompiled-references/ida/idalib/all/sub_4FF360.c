__int64 __fastcall sub_4FF360(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, __int32 a5)
{
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // edx
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // r13
  _QWORD *v15; // rcx
  __int64 v16; // rsi
  char v17; // al
  _QWORD *v18; // rcx
  char v19; // al
  _QWORD *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  char v24; // al
  __int64 v25; // rbp
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r12
  __int64 v31; // rbp
  _QWORD *v32; // rax
  __int64 v33; // rbx
  char v34; // cl
  __m128 v35; // xmm0
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  void *v41; // rax
  __int64 v42; // rdx
  __m128i v43; // xmm0
  __int64 v44; // [rsp+10h] [rbp-88h] BYREF
  __int64 v45; // [rsp+18h] [rbp-80h]
  unsigned __int64 v46; // [rsp+20h] [rbp-78h] BYREF
  __int32 v47; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __int128 v49; // [rsp+38h] [rbp-60h] BYREF
  char v50; // [rsp+48h] [rbp-50h]
  unsigned __int64 v51; // [rsp+58h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  sub_4F6FC0((_QWORD *)a2, a3, a4, a5);
  v10 = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a2 + 48) = v10 + 1;
  v11 = *(_QWORD *)(a2 + 216);
  if ( *(_QWORD *)(a2 + 32) < v11 )
  {
    v12 = 0;
    v13 = -1;
    while ( 1 )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(a2 + 208) + 16 * v11 - 16);
      if ( v13 != -1 )
        goto LABEL_11;
      v15 = *(_QWORD **)(**(_QWORD **)(a2 + 192) + 48 * v14 + 32);
      if ( !v15 )
      {
        if ( !under_debugger )
          interr(2873);
LABEL_49:
        BUG();
      }
      v16 = v15[9];
      if ( v16 == v15[6] + 32LL * v15[7] )
      {
        if ( !under_debugger )
          interr(10434);
        goto LABEL_49;
      }
      v45 = v12;
      v44 = -1;
      v17 = sub_4FD980(a2, &v44, v16);
      v13 = v44;
      v12 = v45;
      if ( *(_QWORD *)(a2 + 72) != -1 )
        goto LABEL_31;
      if ( v17 )
      {
        v11 = *(_QWORD *)(a2 + 216);
        v18 = (_QWORD *)(*(_QWORD *)(a2 + 208) + 16 * v11 - 16);
        if ( *v18 != v44 || v18[1] != v45 )
        {
          if ( !under_debugger )
            interr(3075);
          goto LABEL_49;
        }
        v13 = -1;
        v12 = 0;
      }
      else
      {
LABEL_11:
        v44 = v13;
        v45 = v12;
        v19 = sub_4FC040((_QWORD *)a2, v14, v13, v12, v8, v9);
        v13 = *(_QWORD *)(a2 + 72);
        if ( v13 != -1 )
        {
LABEL_31:
          --*(_DWORD *)(a2 + 48);
          goto LABEL_32;
        }
        if ( v19
          || (v20 = *(_QWORD **)(**(_QWORD **)(a2 + 192)
                               + 48LL * *(_QWORD *)(*(_QWORD *)(a2 + 208) + 16LL * *(_QWORD *)(a2 + 216) - 16)
                               + 32),
              v21 = v20[9] + 32LL,
              v22 = v20[7],
              v20[9] = v21,
              v21 == v20[6] + 32 * v22) )
        {
          v44 = sub_4F9450(a2);
          v13 = v44;
          v37 = *(_QWORD *)(a2 + 216);
          v45 = v38;
          if ( !v37 )
          {
LABEL_16:
            v10 = *(_DWORD *)(a2 + 48) - 1;
            v23 = *(_QWORD *)(a2 + 72);
            goto LABEL_17;
          }
          v11 = v37 - 1;
          v12 = v45;
          *(_QWORD *)(a2 + 216) = v11;
        }
        else
        {
          v11 = *(_QWORD *)(a2 + 216);
          v12 = 0;
        }
      }
      if ( *(_QWORD *)(a2 + 32) >= v11 )
        goto LABEL_16;
    }
  }
  v23 = *(_QWORD *)(a2 + 72);
  v13 = -1;
LABEL_17:
  *(_DWORD *)(a2 + 48) = v10;
  if ( v23 == -1 )
  {
    if ( *(_QWORD *)(a2 + 32) != *(_QWORD *)(a2 + 216) )
    {
      if ( !under_debugger )
        interr(2874);
      goto LABEL_49;
    }
    v24 = *(_BYTE *)(a2 + 104);
    if ( v24 )
    {
      v42 = *(_QWORD *)(a2 + 80);
      v43 = _mm_loadu_si128((const __m128i *)(a2 + 88));
      *(_BYTE *)(a2 + 104) = 0;
      *(_QWORD *)(a2 + 80) = 0;
      *(_OWORD *)(a2 + 88) = 0;
      *(_QWORD *)a1 = v42;
      *(_BYTE *)(a1 + 24) = v24;
      *(__m128i *)(a1 + 8) = v43;
    }
    else
    {
      v47 = a5;
      v25 = *(_QWORD *)(a2 + 200);
      v26 = (__int64)&v46;
      v46 = a3;
      v27 = sub_4F90B0(v25, (__int64 *)&v46);
      v30 = v27;
      if ( v27 == v25 + 8 || *(_QWORD *)(v27 + 48) != v13 )
      {
        if ( !under_debugger )
          interr(3074);
        goto LABEL_49;
      }
      v31 = **(_QWORD **)(a2 + 192) + 48 * v13;
      v49 = 0;
      v32 = nullptr;
      ptr = nullptr;
      v33 = *(_QWORD *)(v31 + 8);
      if ( v33 )
      {
        v41 = (void *)qalloc_or_throw(24 * v33);
        *((_QWORD *)&v49 + 1) = v33;
        ptr = v41;
        v26 = *(_QWORD *)v31;
        memcpy(v41, *(const void **)v31, 24 * v33);
        *(_QWORD *)&v49 = v33;
        v32 = ptr;
      }
      v50 = *(_BYTE *)(v31 + 24);
      v34 = v50;
      if ( (unsigned __int8)(v50 - 10) <= 3u )
      {
        v39 = *(_QWORD *)(v30 + 56);
        if ( v39 )
        {
          v40 = (__int64)&v32[3 * v33];
          if ( (_QWORD *)v40 != v32 )
          {
            v26 = (24 * (_BYTE)v33) & 8;
            if ( ((24 * (_BYTE)v33) & 8) == 0 || (*v32 += v39, v32 += 3, (_QWORD *)v40 != v32) )
            {
              do
              {
                *v32 += v39;
                v32[3] += v39;
                v32 += 6;
              }
              while ( (_QWORD *)v40 != v32 );
            }
          }
          sub_4FB280((__int64)&ptr, v26, v39, v40, v28, v29);
          v32 = ptr;
          v34 = v50;
        }
      }
      v35 = _mm_loadh_ps((const double *)&v49 + 1);
      *(_QWORD *)a1 = v32;
      *(_BYTE *)(a1 + 24) = v34;
      *(__m128 *)(a1 + 8) = v35;
    }
  }
  else
  {
LABEL_32:
    sub_4F53C0(a1, a2);
  }
  return a1;
}
