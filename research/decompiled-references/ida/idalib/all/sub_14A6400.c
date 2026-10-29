__int64 __fastcall sub_14A6400(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __m128i a5, __m128 a6)
{
  int *v7; // r13
  int v11; // eax
  bool v12; // zf
  __int64 result; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int8 *v16; // r8
  __int64 v17; // r9
  __int16 v18; // ax
  __int64 *v19; // rsi
  __int64 v20; // rax
  __int64 *v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 *v24; // rdi
  __int64 *v25; // rdi
  __int64 *v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 *v31; // [rsp+10h] [rbp-D8h]
  __int64 v32; // [rsp+10h] [rbp-D8h]
  unsigned __int8 *v33; // [rsp+10h] [rbp-D8h]
  __int64 v34; // [rsp+18h] [rbp-D0h]
  _BYTE *v35; // [rsp+20h] [rbp-C8h] BYREF
  char v36; // [rsp+28h] [rbp-C0h]
  __int64 v37; // [rsp+30h] [rbp-B8h]
  int v38; // [rsp+38h] [rbp-B0h]
  __int16 v39; // [rsp+3Ch] [rbp-ACh]
  __int64 (__fastcall *v40)(__int64); // [rsp+40h] [rbp-A8h]
  __int64 v41; // [rsp+48h] [rbp-A0h]
  __int64 v42; // [rsp+50h] [rbp-98h]
  unsigned __int8 *v43[17]; // [rsp+60h] [rbp-88h] BYREF

  v7 = (int *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v11 = *(_DWORD *)(a1 + 40);
  v12 = *(_WORD *)(a1 + 32) == 22;
  v37 = a1;
  *(_DWORD *)a2 = v11;
  v35 = (_BYTE *)(a1 + 1952);
  LOBYTE(v11) = *(_BYTE *)(a1 + 1952);
  v38 = 1507350;
  v36 = v11;
  *(_BYTE *)(a1 + 1952) = 1;
  v39 = 63;
  v40 = sub_146A990;
  v41 = 0;
  v42 = 0;
  if ( !v12 )
    goto LABEL_2;
  if ( (unsigned int)*(unsigned __int16 *)(a1 + 88) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 144LL) )
  {
    if ( (unsigned __int8)sub_1568800(&v35) )
    {
LABEL_2:
      sub_1564840(v43, a1, v7, 1625);
      sub_149E970(v43, (__int64)"throw");
      sub_AEA040((__int64)v43);
      *(_DWORD *)(a2 + 4) = *(_DWORD *)a2;
      result = 1;
      goto LABEL_3;
    }
  }
  else
  {
    LODWORD(v42) = sub_146A990(a1);
  }
  v18 = *(_WORD *)(a1 + 32);
  if ( v18 != 27 )
  {
    v19 = (__int64 *)(a4 + 16);
    v43[0] = nullptr;
    if ( v18 == 23 )
    {
LABEL_11:
      sub_14808E0((__int64)&v35, v19, v14, v15, (__int64)v16, v17);
      *(_DWORD *)(a2 + 4) = HIDWORD(v42);
      sub_14A6190(a1, *(_QWORD *)a2, *(_DWORD *)(a3 + 8) == 0);
      result = (unsigned int)(*(_DWORD *)(a3 + 8) != 0) + 1;
      goto LABEL_3;
    }
    while ( 1 )
    {
      v19 = (__int64 *)v43;
      v20 = sub_1496480(a1, v43, 5, 3u, nullptr, 0, a5, a6);
      v15 = (unsigned int)v14;
      if ( *(_WORD *)(a1 + 32) != 27 )
        goto LABEL_9;
      v24 = *(__int64 **)(a1 + 8);
      v19 = (__int64 *)v7;
      v34 = v14;
      v31 = (__int64 *)v20;
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v24, v7);
      v14 = v34;
      v15 = *(unsigned int *)(a1 + 40);
      HIDWORD(v43[0]) = *(_DWORD *)(a1 + 40);
      if ( !(_BYTE)v34 )
        break;
LABEL_10:
      if ( *(_WORD *)(a1 + 32) == 66 )
      {
        v21 = *(__int64 **)(a1 + 8);
        v19 = (__int64 *)v7;
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v21, v7);
        if ( *(_WORD *)(a1 + 32) != 23 )
          continue;
      }
      goto LABEL_11;
    }
    v19 = v31;
    v20 = sub_1E50AF0(*(_QWORD *)(a1 + 96), v31, (unsigned int)v15);
    v15 = (unsigned int)v14;
LABEL_9:
    if ( !(_BYTE)v15 )
    {
      v22 = *(unsigned int *)(a3 + 8);
      v19 = (__int64 *)*(unsigned int *)(a3 + 12);
      if ( v22 + 1 > (unsigned __int64)v19 )
      {
        v19 = (__int64 *)(a3 + 16);
        v32 = v20;
        sub_2237220(a3, a3 + 16, v22 + 1, 8);
        v22 = *(unsigned int *)(a3 + 8);
        v20 = v32;
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v22) = v20;
      v16 = v43[0];
      ++*(_DWORD *)(a3 + 8);
      v23 = *(unsigned int *)(a4 + 8);
      v15 = *(unsigned int *)(a4 + 12);
      if ( v23 + 1 > v15 )
      {
        v19 = (__int64 *)(a4 + 16);
        v33 = v16;
        sub_2237220(a4, a4 + 16, v23 + 1, 8);
        v23 = *(unsigned int *)(a4 + 8);
        v16 = v33;
      }
      v14 = *(_QWORD *)a4;
      *(_QWORD *)(*(_QWORD *)a4 + 8 * v23) = v16;
      ++*(_DWORD *)(a4 + 8);
    }
    goto LABEL_10;
  }
  v25 = *(__int64 **)(a1 + 8);
  v26 = (__int64 *)v7;
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v25, v7);
  v30 = *(unsigned int *)(a1 + 40);
  if ( **(char **)(*(_QWORD *)(a1 + 8) + 56LL) >= 0 )
  {
    v26 = (__int64 *)a1;
    sub_1564820(v43, a1, v30, 1972);
    sub_AEA040((__int64)v43);
  }
  sub_14808E0((__int64)&v35, v26, v30, v27, v28, v29);
  *(_DWORD *)(a2 + 4) = HIDWORD(v42);
  sub_14A6190(a1, *(_QWORD *)a2, 0);
  result = 3;
LABEL_3:
  *v35 = v36;
  return result;
}
