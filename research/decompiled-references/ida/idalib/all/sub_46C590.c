__int64 __fastcall sub_46C590(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __m128i si128; // xmm3
  unsigned int v8; // ebp
  int v9; // eax
  _QWORD *v10; // r15
  __int64 v11; // rax
  unsigned __int64 *v12; // rbx
  _QWORD *v13; // r14
  unsigned __int64 *v14; // r13
  unsigned __int64 v16; // r12
  int v17; // eax
  int v18; // [rsp-8h] [rbp-B8h]
  int v19; // [rsp-8h] [rbp-B8h]
  int v20; // [rsp+0h] [rbp-B0h]
  int v21; // [rsp+0h] [rbp-B0h]
  void *v22[2]; // [rsp+8h] [rbp-A8h] BYREF
  int v23[2]; // [rsp+18h] [rbp-98h] BYREF
  int v24[2]; // [rsp+20h] [rbp-90h]
  __int64 v25[2]; // [rsp+28h] [rbp-88h]
  int v26; // [rsp+38h] [rbp-78h]
  int v27; // [rsp+3Ch] [rbp-74h]
  int v28[2]; // [rsp+48h] [rbp-68h] BYREF
  int v29[2]; // [rsp+50h] [rbp-60h]
  __int64 v30[2]; // [rsp+58h] [rbp-58h]
  unsigned __int64 v31; // [rsp+70h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  *(_QWORD *)v23 = a1;
  v26 = a2;
  *(_QWORD *)v24 = 0;
  v5 = *(_QWORD *)(qword_2CCB598 + 1672);
  v27 = 6;
  *(__m128i *)v22 = _mm_unpacklo_epi64(
                      _mm_loadl_epi64((const __m128i *)&off_2B29410),
                      (__m128i)(unsigned __int64)sub_46C130);
  v20 = v5;
  v6 = *(_QWORD *)(a3 + 16);
  *(_OWORD *)v25 = 0;
  sub_46BF30(v23, v6);
  si128 = _mm_load_si128((const __m128i *)v22);
  *(_QWORD *)v28 = v23;
  *(_QWORD *)v29 = 0;
  *(__m128i *)v30 = si128;
  v8 = sub_3D68E0(v20, v18, v20, (int)v22[0], (int)v22[1], v23[0], v24[0], v25[0]);
  if ( v30[0] )
    ((void (__fastcall *)(int *, int *, __int64))v30[0])(v28, v28, 3);
  if ( !(_BYTE)v8 )
  {
    sub_46C190(a1, a2, *(_QWORD *)(a3 + 16), 6);
    *(_QWORD *)v28 = v23;
    *(_QWORD *)v29 = 0;
    *(__m128i *)v30 = _mm_load_si128((const __m128i *)v22);
    v8 = sub_3D68E0(v21, v19, v21, (int)v22[0], (int)v22[1], v23[0], v24[0], v25[0]);
    if ( v30[0] )
      ((void (__fastcall *)(int *, int *, __int64))v30[0])(v28, v28, 3);
  }
  if ( !v25[0] )
  {
LABEL_15:
    v14 = *(unsigned __int64 **)v24;
    goto LABEL_8;
  }
  v9 = 1;
  if ( v26 )
    v9 = -(v26 != 1);
  v10 = *(_QWORD **)(switch_dbctx(*(int *)(*(_QWORD *)v23 + 4LL * v9 + 16)) + 1672);
  v11 = switch_dbctx(*(int *)(*(_QWORD *)v23 + 4LL * v26 + 16));
  v12 = *(unsigned __int64 **)v24;
  v13 = *(_QWORD **)(v11 + 1672);
  v14 = (unsigned __int64 *)(*(_QWORD *)v24 + 8 * v25[0]);
  if ( *(unsigned __int64 **)v24 != v14 )
  {
    do
    {
      while ( 1 )
      {
        v16 = *v12;
        if ( *(_QWORD *)(v10[3] + 16LL) >= *v12 )
          break;
        if ( v14 == ++v12 )
          goto LABEL_15;
      }
      if ( (sub_3BE900(v13, *v12, 4) & 0xC000) == 0 )
      {
        v17 = sub_3BE900(v10, v16, 4);
        if ( ((~(_WORD)v17 & 0x600) != 0 || (v17 & 0x10000000) == 0) && (v17 & 0x1000) == 0 && (v17 & 0xC000) == 0x8000 )
          sub_3D0150((_DWORD)v10, v16);
      }
      ++v12;
    }
    while ( v14 != v12 );
    goto LABEL_15;
  }
LABEL_8:
  if ( v14 )
  {
    v25[0] = 0;
    qfree(v14);
  }
  return v8;
}
