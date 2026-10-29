__int64 __fastcall sub_44B830(
        __int64 *a1,
        unsigned int *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 v7; // r14
  unsigned int v9; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // edx
  int v16; // eax
  int v17; // esi
  int v18; // eax
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // rax
  __int64 result; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // [rsp+Ch] [rbp-4Ch]
  int v27; // [rsp+Ch] [rbp-4Ch]
  int v28; // [rsp+Ch] [rbp-4Ch]
  int v29; // [rsp+Ch] [rbp-4Ch]
  __int64 v30[9]; // [rsp+10h] [rbp-48h] BYREF

  v7 = a3;
  v9 = *a2;
  v30[1] = __readfsqword(0x28u);
  v11 = v9 & 0x2000;
  if ( (v9 & 0x400000) == 0 )
  {
    v12 = v9 & 0x404;
    if ( !v12 )
    {
      v28 = v11;
      v24 = sub_3BF1D0(a1, a3);
      v20 = v28;
      v15 = 2;
      v13 = v24;
      goto LABEL_18;
    }
    if ( v12 == 4 )
    {
      v29 = v11;
      v25 = sub_3BF2F0(a1, a3);
      v20 = v29;
      v15 = 4;
      v13 = v25;
      goto LABEL_18;
    }
    goto LABEL_16;
  }
  if ( (v9 & 0x2000) != 0 )
  {
    v12 = v9 & 0x404;
    if ( !v12 )
    {
      v23 = sub_3BF1D0(a1, a3);
      v15 = 2;
      v13 = v23;
      goto LABEL_11;
    }
    if ( v12 == 4 )
    {
      v14 = sub_3BF2F0(a1, a3);
      v15 = 4;
      v13 = v14;
      goto LABEL_11;
    }
    goto LABEL_16;
  }
  if ( (v9 & 0x200000) == 0 && (v9 & 0x20000) == 0 )
    return sub_44B680((__int64)a1, a2, a3, v11, a5, a6);
  v12 = v9 & 0x404;
  if ( !v12 )
  {
    v13 = sub_3BF1D0(a1, a3);
    goto LABEL_19;
  }
  if ( v12 != 4 )
  {
LABEL_16:
    v27 = v11;
    if ( v12 == 1024 )
    {
      sub_3BEFF0(a1, v30, a3);
      v13 = v30[0];
      v20 = v27;
      v15 = 1;
    }
    else
    {
      v19 = sub_3BEF70(a1, a3);
      v20 = v27;
      v15 = 8;
      v13 = v19;
    }
LABEL_18:
    if ( !v20 )
      goto LABEL_19;
LABEL_11:
    v26 = v15;
    v16 = nbits(v7);
    v17 = v16 + 14;
    v18 = v16 + 7;
    if ( v18 >= 0 )
      v17 = v18;
    v13 = extend_sign(v13, (unsigned int)(v26 * (v17 >> 3)), 1);
    goto LABEL_19;
  }
  v13 = sub_3BF2F0(a1, a3);
LABEL_19:
  if ( (*a2 & 0x200000) == 0 )
    v7 = a4;
  v21 = v13 << ((*a2 >> 7) & 3);
  if ( (*a2 & 0x20000) != 0 )
    v21 = -v21;
  result = sub_510880(a1, a5, v7 + v21);
  if ( (*(_BYTE *)(a1[2] + 12) & 8) != 0 )
    return result & 0xFFFFFFFFFFFFFFFELL;
  return result;
}
