__int64 __fastcall sub_E65540(__int64 a1)
{
  __int64 v2; // rax
  _DWORD *v3; // rdi
  __int64 result; // rax
  unsigned int v5; // ebp
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rbx
  __int16 v10; // ax
  __int64 v11; // rax
  _QWORD *v12; // r14
  _QWORD *v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rdi
  bool v16; // zf
  _QWORD *v17; // r14
  _QWORD *v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 *v22; // rdi
  unsigned int *v23; // rdx
  __int64 v24; // rax
  __m128i v25; // xmm0
  void (__fastcall *v26)(__int64 *, _QWORD, __m128i *); // rcx
  __int64 v27; // rdi
  unsigned __int8 (*v28)(void); // rdx
  __int64 (*v29)(); // rax
  unsigned int v30; // eax
  _DWORD *v31; // rdi
  unsigned __int64 v32; // [rsp+8h] [rbp-90h]
  unsigned __int64 v33; // [rsp+8h] [rbp-90h]
  __int64 v34; // [rsp+10h] [rbp-88h]
  __int64 v35; // [rsp+18h] [rbp-80h]
  __int64 *v36; // [rsp+20h] [rbp-78h]
  unsigned int v37; // [rsp+28h] [rbp-70h]
  unsigned int v38; // [rsp+2Ch] [rbp-6Ch]
  unsigned __int64 v39; // [rsp+30h] [rbp-68h] BYREF
  __int64 v40; // [rsp+38h] [rbp-60h]
  __m128i v41; // [rsp+40h] [rbp-58h] BYREF
  __int64 v42; // [rsp+50h] [rbp-48h]
  unsigned int *v43; // [rsp+58h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_DWORD **)(a1 + 16);
  v35 = v2;
  result = *(_QWORD *)(*(_QWORD *)v3 + 16LL);
  if ( (__int64 (*)())result == sub_2492B0 )
  {
    v38 = 0;
    v5 = v3[2];
  }
  else
  {
    v30 = ((__int64 (*)(void))result)();
    v31 = *(_DWORD **)(a1 + 16);
    v38 = v30;
    v5 = v31[2];
    result = *(_QWORD *)(*(_QWORD *)v31 + 16LL);
    if ( (__int64 (*)())result != sub_2492B0 )
    {
      ((void (*)(void))result)();
      result = *(_QWORD *)(**(_QWORD **)(a1 + 16) + 16LL);
      if ( (__int64 (*)())result != sub_2492B0 )
      {
        result = ((__int64 (*)(void))result)();
        v37 = result;
        goto LABEL_4;
      }
    }
  }
  v37 = 0;
LABEL_4:
  if ( v37 == v5 )
    return result;
  v6 = 0;
  do
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16), v5);
    v8 = *(_QWORD *)(v7 + 8);
    v9 = v7;
    v10 = *(_WORD *)(v8 + 4);
    if ( v10 )
    {
      if ( v10 != 2 )
        goto LABEL_40;
    }
    else if ( (*(_BYTE *)(v8 + 30) & 2) == 0 )
    {
      goto LABEL_40;
    }
    v34 = a1 + 32;
    v36 = (__int64 *)(a1 + 528);
    v11 = *(_QWORD *)(a1 + 72);
    if ( v11 )
    {
      if ( *(_DWORD *)(v11 - 4) || *(_QWORD *)(a1 + 64) != **(_QWORD **)(a1 + 56) )
      {
        *(_DWORD *)(v11 - 4) = 0;
LABEL_12:
        v12 = *(_QWORD **)(a1 + 88);
        if ( v12 )
        {
          v13 = &v12[*((unsigned int *)v12 - 1)];
          if ( v12 >= v13 )
            goto LABEL_20;
          do
          {
            while ( 1 )
            {
              v14 = *v12;
              if ( *v12 )
              {
                v15 = *(_QWORD *)(a1 + 80);
                v16 = (*(_DWORD *)(v14 + 8))-- == 1;
                if ( v16 )
                  break;
              }
              if ( ++v12 >= v13 )
                goto LABEL_19;
            }
            v32 = (unsigned __int64)v13;
            sub_15D7BC0(v15, v14);
            v13 = (_QWORD *)v32;
            ++v12;
          }
          while ( (unsigned __int64)v12 < v32 );
LABEL_19:
          v12 = *(_QWORD **)(a1 + 88);
          if ( v12 )
LABEL_20:
            *((_DWORD *)v12 - 1) = 0;
        }
        v17 = *(_QWORD **)(a1 + 120);
        if ( v17 )
        {
          v18 = &v17[*((unsigned int *)v17 - 1)];
          if ( v17 >= v18 )
            goto LABEL_29;
          do
          {
            while ( 1 )
            {
              v19 = *v17;
              if ( *v17 )
              {
                v20 = *(_QWORD *)(a1 + 112);
                v16 = (*(_DWORD *)(v19 + 8))-- == 1;
                if ( v16 )
                  break;
              }
              if ( ++v17 >= v18 )
                goto LABEL_28;
            }
            v33 = (unsigned __int64)v18;
            sub_15D7BC0(v20, v19);
            v18 = (_QWORD *)v33;
            ++v17;
          }
          while ( (unsigned __int64)v17 < v33 );
LABEL_28:
          v17 = *(_QWORD **)(a1 + 120);
          if ( v17 )
LABEL_29:
            *((_DWORD *)v17 - 1) = 0;
        }
        v21 = *(_QWORD *)(a1 + 168);
        if ( v21 )
          *(_DWORD *)(v21 - 4) = 0;
        sub_15843E0(v34);
      }
    }
    else if ( *(_QWORD *)(a1 + 64) != **(_QWORD **)(a1 + 56) )
    {
      goto LABEL_12;
    }
    v16 = *(_BYTE *)(a1 + 48) == 0;
    v39 = v6;
    v40 = v35;
    if ( v16 )
      sub_90A340(v34, v8, (__int64 *)&v39, v36);
    else
      sub_9126C0(v34, v8, (__int64 *)&v39, v36);
    v6 = v39;
    v22 = *(__int64 **)(a1 + 16);
    v35 = v40;
    v23 = *(unsigned int **)(v9 + 24);
    v24 = *v22;
    v25 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(a1 + 8)), (__m128i)v39);
    v42 = 0;
    v43 = v23;
    v26 = *(void (__fastcall **)(__int64 *, _QWORD, __m128i *))(v24 + 32);
    v41 = v25;
    if ( v39 )
      ++*(_DWORD *)(v39 + 8);
    if ( v23 )
      *v23 = (*v23 + 1) & 0x3FFFFFFF | *v23 & 0xC0000000;
    v26(v22, v5, &v41);
    sub_234F80(v41.m128i_i64);
LABEL_40:
    if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) )
      goto LABEL_43;
    v27 = *(_QWORD *)(a1 + 16);
    v28 = *(unsigned __int8 (**)(void))(*(_QWORD *)v27 + 48LL);
    if ( (char *)v28 == (char *)sub_2492C0 )
    {
      v29 = *(__int64 (**)())(*(_QWORD *)v27 + 16LL);
      if ( v29 == sub_2492B0 )
        goto LABEL_43;
    }
    else if ( v28() || (v29 = *(__int64 (**)())(**(_QWORD **)(a1 + 16) + 16LL), v29 == sub_2492B0) )
    {
LABEL_43:
      v5 = v38;
      goto LABEL_44;
    }
    if ( v5 >= (unsigned int)v29() )
      goto LABEL_43;
    ++v5;
LABEL_44:
    result = v37;
  }
  while ( v5 != v37 );
  if ( v6 )
  {
    v16 = (*(_DWORD *)(v6 + 8))-- == 1;
    if ( v16 )
      return sub_15D7BC0(v35, v6);
  }
  return result;
}

