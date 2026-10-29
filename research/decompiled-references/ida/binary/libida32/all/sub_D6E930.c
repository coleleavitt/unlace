__int64 __fastcall sub_D6E930(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rbp
  unsigned int v6; // r13d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdi
  int v20; // r14d
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rsi
  int v24; // edx
  unsigned int v25; // ebx
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  void **v28; // r8
  unsigned int v29; // r14d
  unsigned __int64 v30; // rax
  int v31; // eax
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rax
  int v34; // [rsp+10h] [rbp-78h]
  unsigned int v35; // [rsp+1Ch] [rbp-6Ch]
  void *v36; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v37; // [rsp+28h] [rbp-60h]
  void *v38; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v39; // [rsp+38h] [rbp-50h]
  void *v40; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v41; // [rsp+48h] [rbp-40h]

  v5 = *(_QWORD *)(a2 + 8);
  if ( *(_DWORD *)(a2 + 16) != 2 )
    return 0;
  if ( !sub_9C8B50(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32) + 8LL)
                    & 0xFFFFFFFFFFFFFFF0LL),
          a2,
          a3,
          a4,
          a5) )
    return 0;
  if ( !sub_9C8B50(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40) + 8LL)
                    & 0xFFFFFFFFFFFFFFF0LL),
          a2,
          v10,
          v11,
          v12) )
    return 0;
  LOBYTE(v16) = sub_9C8B50(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL), a2, v13, v14, v15);
  v6 = v16;
  if ( !(_BYTE)v16 )
    return 0;
  v19 = a1[23];
  v20 = 13;
  v21 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
  v22 = *(_QWORD *)(a2 + v21 + 32);
  if ( (*(_BYTE *)(v22 + 1) & 6) == 0 )
  {
    v31 = sub_D66A20(v19, v22, v21, v17, v18);
    v19 = a1[23];
    v20 = v31;
    v21 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
  }
  v23 = *(_QWORD *)(a2 + v21 + 40);
  v24 = 13;
  if ( (*(_BYTE *)(v23 + 1) & 6) == 0 )
    v24 = sub_D66A20(v19, v23, 13, v17, v18);
  sub_D67460((__int64)&v36, a1[22], v24);
  sub_D67460((__int64)&v38, a1[22], v20);
  v25 = v39;
  v26 = sub_21E2740(&v36, 8, 0);
  if ( v26 < v25 )
  {
    v29 = v39;
    v41 = v39;
    v27 = (unsigned int)v26 + v39 - v25;
    if ( v39 > 0x40 )
    {
      v35 = v26 + v39 - v25;
      v34 = v26;
      sub_21E1730(&v40, 0, 0);
      v27 = v35;
      v28 = &v40;
      if ( !v35 )
        goto LABEL_22;
      if ( v35 > 0x40 )
      {
LABEL_21:
        sub_21E21E0(&v40, 0, (unsigned int)v27);
LABEL_22:
        if ( v39 > 0x40 )
        {
          sub_21E1E20(&v38, &v40);
          v29 = v41;
          goto LABEL_25;
        }
        v30 = (unsigned __int64)v40;
        v29 = v41;
LABEL_24:
        v38 = (void *)(v30 & (unsigned __int64)v38);
LABEL_25:
        if ( v29 > 0x40 && v40 )
          operator delete[](v40);
        goto LABEL_12;
      }
      v32 = (unsigned __int64)v40;
      v27 = v25 + 64 - v29 - v34;
      v33 = 0xFFFFFFFFFFFFFFFFLL >> ((unsigned __int8)v25 + 64 - (unsigned __int8)v29 - v34);
      if ( v41 > 0x40 )
      {
        *(_QWORD *)v40 |= v33;
        goto LABEL_22;
      }
    }
    else
    {
      v40 = nullptr;
      if ( !(_DWORD)v27 )
      {
        v30 = 0;
        goto LABEL_24;
      }
      v28 = &v40;
      if ( (unsigned int)v27 > 0x40 )
        goto LABEL_21;
      v32 = 0;
      v27 = v25 + 64 - v39 - (unsigned int)v26;
      v33 = 0xFFFFFFFFFFFFFFFFLL >> ((unsigned __int8)v25 + 64 - (unsigned __int8)v39 - (unsigned __int8)v26);
    }
    v40 = (void *)(v32 | v33);
    goto LABEL_22;
  }
LABEL_12:
  sub_D6C2A0(a1, (__int64)&v38, v5, v27, (__int64)v28);
  if ( v39 > 0x40 && v38 )
    operator delete[](v38);
  if ( v37 > 0x40 && v36 )
    operator delete[](v36);
  return v6;
}

