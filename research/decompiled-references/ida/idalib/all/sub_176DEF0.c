__int64 __fastcall sub_176DEF0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  unsigned __int16 *v12; // r8
  unsigned __int64 v13; // r10
  __int64 v14; // rbx
  __int64 v15; // rax
  unsigned __int64 v16; // r15
  __int64 v17; // rbx
  __int64 v18; // rsi
  unsigned __int8 v19; // dl
  __int64 v20; // rax
  unsigned int v21; // r9d
  __int64 v22; // rdx
  int v23; // eax
  unsigned __int16 *v25; // [rsp+8h] [rbp-60h]
  int v26; // [rsp+8h] [rbp-60h]
  int v27; // [rsp+8h] [rbp-60h]
  unsigned __int64 v28; // [rsp+10h] [rbp-58h]
  unsigned int v29; // [rsp+10h] [rbp-58h]
  unsigned int v30; // [rsp+10h] [rbp-58h]
  __int64 v31; // [rsp+18h] [rbp-50h]
  __int64 v32; // [rsp+18h] [rbp-50h]
  void *v33; // [rsp+20h] [rbp-48h] BYREF
  int v34; // [rsp+28h] [rbp-40h]

  v7 = a4 + 16;
  v8 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v11 = sub_17687F0(
          a1,
          a2,
          *(_QWORD *)(a3 + 32),
          (const __m128i *)(v8 * ((v7 - (unsigned __int64)(v7 != 0)) / v8 + (v7 != 0))),
          v9,
          v10);
  if ( (v11 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v12 = *(unsigned __int16 **)(a4 + 8);
    v13 = v11;
    if ( v12
      || (v16 = 0, (*(_BYTE *)(a3 + 19) & 2) != 0)
      && (v16 = *(_QWORD *)(*(_QWORD *)(a3 + 40) + 16LL), (v12 = (unsigned __int16 *)v16) != nullptr) )
    {
      v14 = *a1;
      v28 = v11;
      v25 = v12;
      sub_18C74E0(*a1, 4, 0, 4);
      v15 = sub_175B800(a1, v25);
      v16 = sub_19146D0(*a1, v15 & 0xFFFFFFFFFFFFFFFELL) & 0xFFFFFFFFFFFFFFFELL;
      sub_190D5E0(v14);
      v12 = v25;
      v13 = v28;
    }
    v17 = a3;
    if ( !*(_DWORD *)(*a1 + 12632) && v13 == *(_QWORD *)(a3 + 32) )
    {
      if ( (*(_BYTE *)(a3 + 19) & 2) == 0
        || (v18 = *(_QWORD *)(a3 + 40), (unsigned __int16 *)v16 == v12)
        || !*(_QWORD *)(v18 + 16) )
      {
LABEL_14:
        sub_1EA6140(a2, v17, 16, 8);
        *(_DWORD *)v22 = *(_DWORD *)a4;
        v23 = *(_DWORD *)(a4 + 4);
        *(_QWORD *)(v22 + 8) = v16;
        *(_DWORD *)(v22 + 4) = v23;
        return v17;
      }
    }
    else
    {
      v18 = *(_QWORD *)(a3 + 40);
    }
    v19 = *(_BYTE *)(a3 + 19);
    v20 = *(_QWORD *)a4;
    v21 = (*(_BYTE *)(a3 + 18) >> 3) & 7;
    if ( (v19 & 2) != 0 )
    {
      v34 = *(_DWORD *)(v18 + 8);
      if ( (unsigned int)v34 > 0x40 )
      {
        v32 = v20;
        v30 = v21;
        v27 = v13;
        sub_2205510(&v33);
        LODWORD(v13) = v27;
        v21 = v30;
        v20 = v32;
      }
      else
      {
        v33 = *(void **)v18;
      }
    }
    else
    {
      v34 = 8 * ((v19 >> 2) & 0x1F);
      if ( v34 > 64 )
      {
        v31 = v20;
        v29 = v21;
        v26 = v13;
        sub_2205470(&v33, v18, 0);
        v20 = v31;
        v21 = v29;
        LODWORD(v13) = v26;
      }
      else
      {
        v33 = (void *)v18;
      }
    }
    v17 = sub_1741030(a1, v13, (*(_WORD *)(a3 + 18) >> 6) & 7, (__int64)&v33, v16, v21, v20);
    if ( (unsigned int)v34 > 0x40 )
    {
      if ( v33 )
        operator delete[](v33);
    }
    if ( (v17 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      goto LABEL_14;
  }
  return 0;
}
