__int64 __fastcall sub_1CFDCB0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  __int64 v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  unsigned __int16 *v14; // r8
  unsigned __int64 v15; // r10
  __int64 v16; // rbx
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // r15
  __int64 v25; // rbx
  __int64 v26; // rsi
  unsigned __int8 v27; // dl
  __int64 v28; // rax
  unsigned int v29; // r9d
  __int64 v30; // rdx
  int v31; // eax
  unsigned __int16 *v33; // [rsp+8h] [rbp-60h]
  int v34; // [rsp+8h] [rbp-60h]
  int v35; // [rsp+8h] [rbp-60h]
  unsigned __int64 v36; // [rsp+10h] [rbp-58h]
  unsigned int v37; // [rsp+10h] [rbp-58h]
  unsigned int v38; // [rsp+10h] [rbp-58h]
  __int64 v39; // [rsp+18h] [rbp-50h]
  __int64 v40; // [rsp+18h] [rbp-50h]
  void *v41; // [rsp+20h] [rbp-48h] BYREF
  int v42; // [rsp+28h] [rbp-40h]

  v9 = a4 + 16;
  v10 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v13 = sub_1CF4B60(
          a1,
          a2,
          *(_QWORD *)(a3 + 32),
          (__m128i *)(v10 * ((v9 - (unsigned __int64)(v9 != 0)) / v10 + (v9 != 0))),
          v11,
          v12,
          a5,
          a6);
  if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v14 = *(unsigned __int16 **)(a4 + 8);
    v15 = v13;
    if ( v14
      || (v24 = 0, (*(_BYTE *)(a3 + 19) & 2) != 0)
      && (v24 = *(_QWORD *)(*(_QWORD *)(a3 + 40) + 16LL), (v14 = (unsigned __int16 *)v24) != nullptr) )
    {
      v16 = *a1;
      v36 = v13;
      v33 = v14;
      sub_18C74E0(*a1, 4, 0, 4);
      v19 = sub_1CE88F0(a1, v33, a5, a6, v17, v18, (__int64)v33);
      v24 = sub_19146D0(*a1, v19 & 0xFFFFFFFFFFFFFFFELL, v20, v21, v22, v23, a5, a6) & 0xFFFFFFFFFFFFFFFELL;
      sub_190D5E0(v16, a5);
      v14 = v33;
      v15 = v36;
    }
    v25 = a3;
    if ( !*(_DWORD *)(*a1 + 12632) && v15 == *(_QWORD *)(a3 + 32) )
    {
      if ( (*(_BYTE *)(a3 + 19) & 2) == 0
        || (v26 = *(_QWORD *)(a3 + 40), (unsigned __int16 *)v24 == v14)
        || !*(_QWORD *)(v26 + 16) )
      {
LABEL_14:
        sub_1EA6140(a2, v25, 16, 8);
        *(_DWORD *)v30 = *(_DWORD *)a4;
        v31 = *(_DWORD *)(a4 + 4);
        *(_QWORD *)(v30 + 8) = v24;
        *(_DWORD *)(v30 + 4) = v31;
        return v25;
      }
    }
    else
    {
      v26 = *(_QWORD *)(a3 + 40);
    }
    v27 = *(_BYTE *)(a3 + 19);
    v28 = *(_QWORD *)a4;
    v29 = (*(_BYTE *)(a3 + 18) >> 3) & 7;
    if ( (v27 & 2) != 0 )
    {
      v42 = *(_DWORD *)(v26 + 8);
      if ( (unsigned int)v42 > 0x40 )
      {
        v40 = v28;
        v38 = v29;
        v35 = v15;
        sub_2205510(&v41);
        LODWORD(v15) = v35;
        v29 = v38;
        v28 = v40;
      }
      else
      {
        v41 = *(void **)v26;
      }
    }
    else
    {
      v42 = 8 * ((v27 >> 2) & 0x1F);
      if ( v42 > 64 )
      {
        v39 = v28;
        v37 = v29;
        v34 = v15;
        sub_2205470(&v41, v26, 0);
        v28 = v39;
        v29 = v37;
        LODWORD(v15) = v34;
      }
      else
      {
        v41 = (void *)v26;
      }
    }
    v25 = sub_1CAEE80(a1, v15, (*(_WORD *)(a3 + 18) >> 6) & 7, (__int64)&v41, v24, v29, v28);
    if ( (unsigned int)v42 > 0x40 )
    {
      if ( v41 )
        operator delete[](v41);
    }
    if ( (v25 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      goto LABEL_14;
  }
  return 0;
}
