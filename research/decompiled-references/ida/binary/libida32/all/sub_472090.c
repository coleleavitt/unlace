unsigned __int64 __fastcall sub_472090(__int64 a1, int a2, int a3, int a4, int *a5)
{
  unsigned int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // r10
  unsigned int *v9; // rbp
  __int64 v10; // r9
  int v11; // r12d
  _DWORD *v12; // rsi
  __int64 v13; // rbx
  int *v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int **v18; // rsi
  int *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 (__fastcall **v22)(); // [rsp+0h] [rbp-98h] BYREF
  __int64 v23; // [rsp+8h] [rbp-90h]
  __int64 v24; // [rsp+10h] [rbp-88h]
  __int64 v25; // [rsp+18h] [rbp-80h]
  __int64 v26; // [rsp+20h] [rbp-78h]
  __int64 v27; // [rsp+28h] [rbp-70h]
  int v28; // [rsp+30h] [rbp-68h]
  _QWORD v29[2]; // [rsp+40h] [rbp-58h] BYREF
  __m128i v30; // [rsp+50h] [rbp-48h]
  unsigned __int64 v31; // [rsp+68h] [rbp-30h]

  v31 = __readfsqword(0x28u);
  if ( a2 != 5 )
    return v31 - __readfsqword(0x28u);
  v6 = *a5;
  if ( (unsigned int)*a5 > 0x2F )
  {
    v18 = *((unsigned int ***)a5 + 1);
    v19 = (int *)(v18 + 1);
    *((_QWORD *)a5 + 1) = v18 + 1;
    v9 = *v18;
LABEL_10:
    v12 = v19 + 2;
    *((_QWORD *)a5 + 1) = v19 + 2;
    v11 = *v19;
    goto LABEL_11;
  }
  v7 = *((_QWORD *)a5 + 2);
  v8 = v6 + 8;
  *a5 = v8;
  v9 = *(unsigned int **)(v7 + v6);
  if ( (unsigned int)v8 > 0x2F )
  {
    v19 = *((int **)a5 + 1);
    goto LABEL_10;
  }
  v10 = v6 + 16;
  *a5 = v10;
  v11 = *(_DWORD *)(v7 + v8);
  if ( (unsigned int)v10 <= 0x2F )
  {
    v12 = (_DWORD *)(v10 + v7);
    *a5 = v6 + 24;
    goto LABEL_7;
  }
  v12 = *((_DWORD **)a5 + 1);
LABEL_11:
  *((_QWORD *)a5 + 1) = v12 + 2;
LABEL_7:
  v13 = *(_QWORD *)(a1 + 8LL * a3 + 56);
  if ( *v12 )
  {
    v14 = *(int **)(a1 + 8LL * a4 + 56);
    v15 = *(_QWORD *)(switch_dbctx(*(int *)(v13 + 8)) + 1480);
    v16 = 5LL * *(int *)(v13 + 8);
    v17 = **(_QWORD **)(v13 + 48);
    v26 = v15;
    v27 = v13;
    v28 = v11;
    v23 = 0;
    v24 = 0;
    v22 = off_2B01888;
    v25 = v17 + 8 * v16;
    sub_470F70(v14, v9, (__int64)&v22);
  }
  else
  {
    v20 = 5LL * *(int *)(v13 + 8);
    v21 = **(_QWORD **)(v13 + 48);
    v23 = 0;
    v24 = 0;
    v22 = off_2B018B0;
    v25 = v21 + 8 * v20;
    v23 = switch_dbctx(*(int *)(v13 + 8));
    v24 = v13;
    v29[0] = &v22;
    v29[1] = 0;
    v30 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_2B02450), (__m128i)(unsigned __int64)sub_46AC70);
    sub_471910(v13, v9, (__int64)v29);
    if ( v30.m128i_i64[0] )
      ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v30.m128i_i64[0])(v29, v29, 3);
  }
  return v31 - __readfsqword(0x28u);
}

