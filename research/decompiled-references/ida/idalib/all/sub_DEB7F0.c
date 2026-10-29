__int64 __fastcall sub_DEB7F0(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rbp
  __int64 v7; // r12
  const __m128i *v8; // rax
  unsigned int v9; // ebp
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r14
  int v16; // ebp
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v22; // rax
  __m128i v24; // [rsp+10h] [rbp-98h] BYREF
  unsigned __int64 v25; // [rsp+20h] [rbp-88h] BYREF
  __int64 v26; // [rsp+28h] [rbp-80h]
  _QWORD v27[4]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v28[11]; // [rsp+50h] [rbp-58h] BYREF

  v6 = *(_QWORD *)a3;
  v7 = *(_QWORD *)(a3 + 32);
  if ( !*(_DWORD *)(a3 + 24) && *(_BYTE *)(sub_CFDF60(a3) + 60) && (v22 = *(unsigned int *)(a3 + 40), v22 == v6) )
    v8 = (const __m128i *)(v7 + v22 + 72);
  else
    v8 = (const __m128i *)(v7 + v6 + 40);
  v24 = _mm_loadu_si128(v8);
  v9 = (a4 >> 3) & 7;
  v10 = sub_21F8CF0(v24.m128i_u32[2]);
  v25 = sub_D421E0(a1, v10);
  v26 = v11;
  if ( (_BYTE)v9 == 7 )
    v9 = 1;
  v12 = sub_21F8CF0(v24.m128i_u32[2]);
  v14 = sub_21F90D0(v24.m128i_u32[2], v10, v13);
  v15 = v14;
  if ( v12 == v14 )
    sub_21FFCB0(v27, v14, 1);
  else
    sub_21FAF40(v27, v12, 1);
  sub_CFEAE0((__int64)v28, (__int64)&v24);
  if ( v28[0] == v15 )
    v16 = sub_2200B70(v28, v27, v9);
  else
    v16 = sub_21FD860(v28, v27, v9);
  sub_CFED10((__int64)&v25, v28);
  sub_9955A0(v28);
  sub_9955A0(v27);
  if ( *(_DWORD *)(a3 + 24) )
  {
    v18 = *(_QWORD *)a3;
    v19 = *(_QWORD *)(a3 + 32);
  }
  else
  {
    v17 = sub_CFDF60(a3);
    v18 = *(_QWORD *)a3;
    v19 = *(_QWORD *)(a3 + 32);
    if ( *(_BYTE *)(v17 + 60) && v18 == *(_DWORD *)(a3 + 40) )
    {
      v20 = v19 + v18 + 72;
      goto LABEL_13;
    }
  }
  v20 = v19 + v18 + 40;
LABEL_13:
  *(_QWORD *)v20 = v25;
  *(_DWORD *)(v20 + 8) = v26;
  return sub_DCADA0((__int64)a1, a2, (__int64)&v25, v16, a4);
}
