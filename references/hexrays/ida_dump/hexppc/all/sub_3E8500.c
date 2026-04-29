__int64 __fastcall sub_3E8500(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // r12
  int v7; // r13d
  int v8; // r14d
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rdi
  char v14; // dl
  int v15; // eax
  int v16; // edx
  __int64 v17; // [rsp+0h] [rbp-68h] BYREF
  __int64 v18; // [rsp+8h] [rbp-60h]
  __int128 v19; // [rsp+10h] [rbp-58h]
  __int64 v20; // [rsp+20h] [rbp-48h]
  __int128 v21; // [rsp+28h] [rbp-40h]
  unsigned __int64 v22; // [rsp+38h] [rbp-30h]

  v4 = a2[5];
  v5 = *(_QWORD *)(a1 + 8);
  v22 = __readfsqword(0x28u);
  if ( sub_CC530(0xBBBu, v5, v4) != 1 )
    return 4294967283LL;
  if ( *(_BYTE *)(a2[187] + 144LL) )
    return 0;
  v6 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v6 + 40) == -1 )
    return 0;
  v19 = 0;
  v17 = 0;
  v18 = 0;
  v20 = 0;
  v21 = 0;
  sub_CC530(0x7D4u, &v17, 64);
  v7 = v19;
  v8 = v21;
  v9 = sub_1CC390((__int64)a2, *(_QWORD *)(v6 + 40));
  *(_QWORD *)(a1 + 32) = v9;
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(v6 + 48);
  *(_QWORD *)(a1 + 56) = 4 * v7 + v9;
  if ( (sub_CC530(0xBC8u) & 0xF) == 1 )
  {
    v10 = *(_DWORD *)(a1 + 40);
    v11 = v20;
    *(_DWORD *)(a1 + 64) = 0;
    if ( v10 < 0 || v7 < v10 )
      goto LABEL_7;
    goto LABEL_14;
  }
  v14 = getinf_flag(67, 32);
  v11 = v20;
  v15 = *(_DWORD *)(a1 + 40);
  if ( v14 )
  {
    v16 = *(_DWORD *)(v6 + 52);
    *(_DWORD *)(a1 + 64) = v16;
    if ( v15 >= 0 && v7 >= v15 && v16 >= 0 )
      goto LABEL_15;
LABEL_7:
    if ( v11 )
    {
      *(_QWORD *)&v21 = 0;
      qfree(v11);
      v12 = v18;
      if ( !v18 )
        return 4294967283LL;
    }
    else
    {
      v12 = v18;
      if ( !v18 )
        return 4294967283LL;
    }
    *(_QWORD *)&v19 = 0;
    qfree(v12);
    return 4294967283LL;
  }
  *(_DWORD *)(a1 + 64) = 0;
  if ( v15 > v7 || v15 < 0 )
    goto LABEL_7;
LABEL_14:
  v16 = 0;
LABEL_15:
  if ( v8 < v16 || v8 != v16 && *(_QWORD *)(a1 + 56) + 8 * v8 > (__int64)a2[17] )
    goto LABEL_7;
  if ( v11 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v11);
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18);
  }
  return 0;
}
