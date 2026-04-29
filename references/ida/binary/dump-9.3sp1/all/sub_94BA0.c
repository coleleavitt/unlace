__int64 __fastcall sub_94BA0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  unsigned int v5; // r14d
  int v7; // edx
  int v8; // esi
  __int64 v9; // rdi
  __int64 v10; // rdx
  _DWORD *v11; // rax
  __int64 v12; // r12
  __int64 v13; // r14
  __int64 *v14; // rdi
  int v15; // eax
  char v16; // r15
  __int64 v17; // rax
  __int64 v18; // rbx
  int v19; // eax
  signed int v20; // [rsp+4h] [rbp-6Ch]
  __int64 v22; // [rsp+10h] [rbp-60h] BYREF
  __int64 v23; // [rsp+18h] [rbp-58h]
  __int64 v24; // [rsp+20h] [rbp-50h]
  __int128 v25; // [rsp+28h] [rbp-48h]
  unsigned __int64 v26; // [rsp+38h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 112) && *(_DWORD *)(a1 + 72) )
    return 0;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 480LL) + 112LL);
  if ( *(_DWORD *)a3 == 14 )
  {
    v12 = a3;
    v13 = 0;
  }
  else
  {
    if ( *(_DWORD *)a3 != 4 || *(_BYTE *)(a3 + 32) != 1 )
      return 0;
    v7 = *(_DWORD *)(a3 + 36);
    v8 = *(_DWORD *)(a3 + 40);
    v22 = 0;
    v23 = 0;
    sub_63E80(&v22, v8, v7);
    v9 = *(_QWORD *)(a1 + 8);
    v24 = 0;
    v10 = *(_QWORD *)(a3 + 16);
    v25 = 0;
    v11 = (_DWORD *)sub_129150(v9, (unsigned int)&v22, v10, 0, 0, 0, 257);
    v12 = (__int64)v11;
    if ( !v11 || *v11 != 14 )
    {
      if ( v24 )
      {
        *(_QWORD *)&v25 = 0;
        qfree(v24);
      }
      qfree(v22);
      return 0;
    }
    if ( v24 )
    {
      *(_QWORD *)&v25 = 0;
      qfree(v24);
    }
    qfree(v22);
    v13 = a3;
  }
  v20 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 36LL);
  if ( *(_DWORD *)(v12 + 36) < v20
    || !(unsigned int)sub_130480(
                        v4,
                        *(_QWORD *)(a1 + 8),
                        v12,
                        v12,
                        *(_QWORD *)(a1 + 88),
                        *(_QWORD *)(a1 + 96),
                        *(_QWORD *)(a1 + 104),
                        3) )
  {
    return 0;
  }
  v23 = 0;
  v22 = 0xFFFFFFFF00000000LL;
  v14 = (__int64 *)(a3 + 64);
  if ( *(_DWORD *)(v12 + 68) > v20 )
  {
    sub_125180(&v22);
    v14 = &v22;
    if ( !(unsigned __int8)sub_1272B0(&v22, v4, (unsigned int)v20, 0) )
      goto LABEL_27;
  }
  if ( !(unsigned __int8)sub_125B60(v14, a1 + 32, 0) )
    goto LABEL_27;
  if ( v13 )
    v12 = v13;
  v15 = sub_944B0(*(_QWORD *)(a1 + 8), v12, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 80), 0);
  v16 = v15;
  if ( !v15 )
    goto LABEL_27;
  if ( !v13 )
    v13 = *(_QWORD *)(a1 + 16);
  v5 = sub_1321C0(
         *(_QWORD *)(a1 + 8),
         v13,
         a1 + 32,
         *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL),
         *(_QWORD *)(a1 + 80) + 64LL);
  if ( (_BYTE)v5 )
  {
    v17 = *(_QWORD *)(a1 + 64);
    if ( v17 )
    {
      sub_125180(v17 + 32);
      sub_125180(*(_QWORD *)(a1 + 64) + 64LL);
      sub_125180(*(_QWORD *)(a1 + 16) + 64LL);
    }
    else if ( (v16 & 2) != 0 )
    {
      v18 = *(_QWORD *)(a1 + 8);
      sub_11D5A0(v12);
      v19 = *(_DWORD *)(v18 + 24);
      BYTE1(v19) &= ~2u;
      LOBYTE(v19) = v19 | 0x80;
      *(_DWORD *)(v18 + 24) = v19;
    }
  }
  else
  {
LABEL_27:
    v5 = 0;
  }
  sub_11CDA0(&v22);
  return v5;
}
