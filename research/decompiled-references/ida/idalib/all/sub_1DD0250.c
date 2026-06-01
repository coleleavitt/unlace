__int64 __fastcall sub_1DD0250(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  __int64 v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  __int64 v15; // r10
  __int64 v16; // rbx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // r9
  unsigned __int16 *v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // r15
  __int64 v26; // rbx
  __int64 v27; // rsi
  unsigned __int8 v28; // dl
  __int64 v29; // rax
  unsigned int v30; // r9d
  __int64 v31; // rdx
  int v32; // eax
  unsigned __int64 v34; // [rsp+8h] [rbp-60h]
  int v35; // [rsp+8h] [rbp-60h]
  int v36; // [rsp+8h] [rbp-60h]
  __int64 v37; // [rsp+10h] [rbp-58h]
  unsigned int v38; // [rsp+10h] [rbp-58h]
  unsigned int v39; // [rsp+10h] [rbp-58h]
  __int64 v40; // [rsp+18h] [rbp-50h]
  __int64 v41; // [rsp+18h] [rbp-50h]
  void *v42; // [rsp+20h] [rbp-48h] BYREF
  int v43; // [rsp+28h] [rbp-40h]

  v9 = a4 + 16;
  v10 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v13 = sub_1DCE820(
          a1,
          a2,
          *(_QWORD *)(a3 + 32),
          (const __m128i *)(v10 * ((v9 - (unsigned __int64)(v9 != 0)) / v10 + (v9 != 0))),
          a5,
          a6,
          v11,
          v12);
  if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v14 = *(_QWORD *)(a4 + 8);
    v15 = v13;
    if ( v14
      || (v25 = 0, (*(_BYTE *)(a3 + 19) & 2) != 0) && (v25 = *(_QWORD *)(*(_QWORD *)(a3 + 40) + 16LL), (v14 = v25) != 0) )
    {
      v16 = *a1;
      v37 = v13;
      v34 = v14;
      sub_18C74E0(*a1, 4, 0, 4);
      v20 = sub_1DC71F0(a1, v34, v17, v18, v34, v19, a5, a6);
      v25 = sub_19146D0(*a1, (unsigned __int64)v20 & 0xFFFFFFFFFFFFFFFELL, v21, v22, v23, v24, a5, a6)
          & 0xFFFFFFFFFFFFFFFELL;
      sub_190D5E0(v16, a5);
      v14 = v34;
      v15 = v37;
    }
    v26 = a3;
    if ( !*(_DWORD *)(*a1 + 12632) && v15 == *(_QWORD *)(a3 + 32) )
    {
      if ( (*(_BYTE *)(a3 + 19) & 2) == 0 || (v27 = *(_QWORD *)(a3 + 40), v25 == v14) || !*(_QWORD *)(v27 + 16) )
      {
LABEL_14:
        sub_1EA6140(a2, v26, 16, 8);
        *(_DWORD *)v31 = *(_DWORD *)a4;
        v32 = *(_DWORD *)(a4 + 4);
        *(_QWORD *)(v31 + 8) = v25;
        *(_DWORD *)(v31 + 4) = v32;
        return v26;
      }
    }
    else
    {
      v27 = *(_QWORD *)(a3 + 40);
    }
    v28 = *(_BYTE *)(a3 + 19);
    v29 = *(_QWORD *)a4;
    v30 = (*(_BYTE *)(a3 + 18) >> 3) & 7;
    if ( (v28 & 2) != 0 )
    {
      v43 = *(_DWORD *)(v27 + 8);
      if ( (unsigned int)v43 > 0x40 )
      {
        v41 = v29;
        v39 = v30;
        v36 = v15;
        sub_2205510(&v42);
        LODWORD(v15) = v36;
        v30 = v39;
        v29 = v41;
      }
      else
      {
        v42 = *(void **)v27;
      }
    }
    else
    {
      v43 = 8 * ((v28 >> 2) & 0x1F);
      if ( v43 > 64 )
      {
        v40 = v29;
        v38 = v30;
        v35 = v15;
        sub_2205470(&v42, v27, 0);
        v29 = v40;
        v30 = v38;
        LODWORD(v15) = v35;
      }
      else
      {
        v42 = (void *)v27;
      }
    }
    v26 = sub_1DB7A20(a1, v15, (*(_WORD *)(a3 + 18) >> 6) & 7, (__int64)&v42, v25, v30, v29);
    if ( (unsigned int)v43 > 0x40 )
    {
      if ( v42 )
        operator delete[](v42);
    }
    if ( (v26 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      goto LABEL_14;
  }
  return 0;
}
