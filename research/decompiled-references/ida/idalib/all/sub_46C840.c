__int64 __fastcall sub_46C840(__int64 a1, int a2, __int64 *a3, __int64 a4, char *a5, void *a6)
{
  __int64 *v10; // rdi
  unsigned int v11; // r13d
  int v12; // eax
  _QWORD *v13; // r15
  __int64 v14; // rax
  unsigned __int64 *v15; // rbx
  _QWORD *v16; // r14
  unsigned __int64 *v17; // r12
  unsigned __int64 v19; // rbp
  int v20; // eax
  int v21[2]; // [rsp+0h] [rbp-98h] BYREF
  int v22[2]; // [rsp+8h] [rbp-90h]
  int v23[4]; // [rsp+10h] [rbp-88h]
  int v24; // [rsp+20h] [rbp-78h]
  int v25; // [rsp+24h] [rbp-74h]
  __m128i v26; // [rsp+30h] [rbp-68h] BYREF
  __int64 v27[2]; // [rsp+40h] [rbp-58h]
  int v28[2]; // [rsp+58h] [rbp-40h]

  *(_QWORD *)v28 = __readfsqword(0x28u);
  *(_QWORD *)v21 = a1;
  v24 = a2;
  *(_QWORD *)v22 = 0;
  v25 = 0;
  *(_OWORD *)v23 = 0;
  sub_46BF30(v21, (unsigned __int64)a3);
  v26.m128i_i64[1] = 0;
  v26.m128i_i64[0] = (__int64)v21;
  v10 = *(__int64 **)(qword_2CCB598 + 1672);
  *(__m128i *)v27 = _mm_unpacklo_epi64(
                      _mm_loadl_epi64((const __m128i *)&off_2B29410),
                      (__m128i)(unsigned __int64)sub_46C130);
  v11 = sub_3D4400(v10, a3, a4, a5, a6, &v26);
  if ( v27[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v27[0])(&v26, &v26, 3);
  if ( !*(_QWORD *)v23 )
  {
LABEL_14:
    v17 = *(unsigned __int64 **)v22;
    goto LABEL_7;
  }
  v12 = 1;
  if ( v24 )
    v12 = -(v24 != 1);
  v13 = *(_QWORD **)(switch_dbctx(*(int *)(*(_QWORD *)v21 + 4LL * v12 + 16)) + 1672);
  v14 = switch_dbctx(*(int *)(*(_QWORD *)v21 + 4LL * v24 + 16));
  v15 = *(unsigned __int64 **)v22;
  v16 = *(_QWORD **)(v14 + 1672);
  v17 = (unsigned __int64 *)(*(_QWORD *)v22 + 8LL * *(_QWORD *)v23);
  if ( *(unsigned __int64 **)v22 != v17 )
  {
    do
    {
      while ( 1 )
      {
        v19 = *v15;
        if ( *(_QWORD *)(v13[3] + 16LL) >= *v15 )
          break;
        if ( v17 == ++v15 )
          goto LABEL_14;
      }
      if ( (sub_3BE900(v16, *v15, 4) & 0xC000) == 0 )
      {
        v20 = sub_3BE900(v13, v19, 4);
        if ( ((~(_WORD)v20 & 0x600) != 0 || (v20 & 0x10000000) == 0) && (v20 & 0x1000) == 0 && (v20 & 0xC000) == 0x8000 )
          sub_3D0150((_DWORD)v13, v19);
      }
      ++v15;
    }
    while ( v17 != v15 );
    goto LABEL_14;
  }
LABEL_7:
  if ( v17 )
  {
    *(_QWORD *)v23 = 0;
    qfree(v17);
  }
  return v11;
}
