__int64 __fastcall sub_DC7850(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rbp
  __int64 v7; // r12
  const __m128i *v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rdi
  unsigned int v14; // ebp
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r15
  int v19; // ebp
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v25; // rax
  __m128i v27; // [rsp+10h] [rbp-98h] BYREF
  unsigned __int64 v28; // [rsp+20h] [rbp-88h] BYREF
  __int64 v29; // [rsp+28h] [rbp-80h]
  _QWORD v30[4]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v31[11]; // [rsp+50h] [rbp-58h] BYREF

  v6 = *(_QWORD *)a3;
  v7 = *(_QWORD *)(a3 + 32);
  if ( !*(_DWORD *)(a3 + 24) && *(_BYTE *)(sub_CDA220(a3) + 60) && (v25 = *(unsigned int *)(a3 + 40), v25 == v6) )
    v8 = (const __m128i *)(v7 + v25 + 72);
  else
    v8 = (const __m128i *)(v7 + v6 + 40);
  v27 = _mm_loadu_si128(v8);
  v9 = sub_21D4FB0(v27.m128i_u32[2]);
  v10 = sub_D1E4A0(a1, v9);
  v11 = a1[22];
  v29 = v12;
  v28 = v10;
  *(__m128i *)sub_DFD980(v11, 16) = _mm_load_si128(&v27);
  v13 = v27.m128i_u32[2];
  v14 = (a4 >> 3) & 7;
  if ( ((a4 >> 3) & 7) == 7 )
    v14 = 1;
  v15 = sub_21D4FB0(v27.m128i_u32[2]);
  v17 = sub_21D5390(v13, 16, v16);
  v18 = v17;
  if ( v15 == v17 )
    sub_21DBF70(v30, v17, 1);
  else
    sub_21D7200(v30, v15, 1);
  sub_CDADA0((__int64)v31, (__int64)&v27);
  if ( v31[0] == v18 )
    v19 = sub_21DCE30(v31, v30, v14);
  else
    v19 = sub_21D9B20(v31, v30, v14);
  sub_CDAFD0((__int64)&v28, v31);
  sub_971860(v31);
  sub_971860(v30);
  if ( *(_DWORD *)(a3 + 24) )
  {
    v21 = *(_QWORD *)a3;
    v22 = *(_QWORD *)(a3 + 32);
  }
  else
  {
    v20 = sub_CDA220(a3);
    v21 = *(_QWORD *)a3;
    v22 = *(_QWORD *)(a3 + 32);
    if ( *(_BYTE *)(v20 + 60) && v21 == *(_DWORD *)(a3 + 40) )
    {
      v23 = v22 + v21 + 72;
      goto LABEL_13;
    }
  }
  v23 = v22 + v21 + 40;
LABEL_13:
  *(_QWORD *)v23 = v28;
  *(_DWORD *)(v23 + 8) = v29;
  return sub_DA7060((__int64)a1, a2, (__int64)&v28, v19, a4);
}

