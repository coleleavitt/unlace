__int64 __fastcall sub_1522E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r13
  unsigned int v5; // r14d
  __int64 v7; // r12
  int v8; // r9d
  unsigned int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rsi
  _QWORD *v14; // r12
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rsi
  _QWORD *v20; // r15
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rsi
  int v24; // eax
  int v25; // eax
  int v26; // edx
  int v27; // [rsp+8h] [rbp-80h]
  int v28; // [rsp+Ch] [rbp-7Ch]
  unsigned int v29; // [rsp+10h] [rbp-78h]
  __int64 v30; // [rsp+10h] [rbp-78h]
  unsigned int v31; // [rsp+18h] [rbp-70h]
  __int64 v32; // [rsp+20h] [rbp-68h]
  __int64 v33; // [rsp+28h] [rbp-60h]
  char *v34; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v35[9]; // [rsp+40h] [rbp-48h] BYREF

  v35[1] = __readfsqword(0x28u);
  v3 = sub_11C8E0(a1, &v34, 0);
  if ( v3
    && (v4 = v3, *(_DWORD *)v3 == 23)
    && *(_BYTE *)(v3 + 48) == 2
    && (v7 = *(_QWORD *)(*(_QWORD *)(v3 + 56) + 16LL), (unsigned __int8)sub_11FD80(v34, v35, 0))
    && (v35[0] & (v35[0] + 1LL)) == 0
    && (v8 = log2ceil()) != 0
    && ((v9 = (unsigned __int8)v7 + v8, v28 = (unsigned __int8)v7, ((v9 - 8) & 0xFFFFFFF7) == 0)
     || ((v9 - 32) & 0xFFFFFFDF) == 0)
    && ((v27 = v9 >> 3, *(_BYTE *)(v4 + 32) != 4) || (unsigned __int8)v7 > 8u)
    && (v5 = sub_12AB50((unsigned __int8 *)(v4 + 32), a2, v27, 1), (_BYTE)v5) )
  {
    v12 = (_QWORD *)j__qalloc_or_throw(80, a2, v10, v11);
    v13 = *(_QWORD *)(v4 + 24);
    v14 = v12;
    v33 = (__int64)(v12 + 4);
    v32 = (__int64)(v12 + 6);
    v12[4] = 0xFFFFFFFF00000000LL;
    v12[5] = 0;
    v12[6] = 0xFFFFFFFF00000000LL;
    v12[7] = 0;
    v12[8] = 0xFFFFFFFF00000000LL;
    v12[9] = 0;
    sub_330970(v12, v13);
    *(_DWORD *)v14 = 23;
    v15 = round_up_power2();
    if ( *(_BYTE *)(v4 + 32) != 4 || v9 <= 0xF || v27 == v15 )
    {
      sub_125180(v33, (unsigned __int8 *)(v4 + 32));
      sub_125180(v32, (unsigned __int8 *)(v4 + 48));
      v24 = *((_DWORD *)v14 + 9);
    }
    else
    {
      v29 = v15;
      v18 = (_QWORD *)j__qalloc_or_throw(80, v13, v16, v17);
      v19 = *(_QWORD *)(v4 + 24);
      v20 = v18;
      v18[4] = 0xFFFFFFFF00000000LL;
      v18[5] = 0;
      v18[6] = 0xFFFFFFFF00000000LL;
      v18[7] = 0;
      v18[8] = 0xFFFFFFFF00000000LL;
      v18[9] = 0;
      sub_330970(v18, v19);
      *(_DWORD *)v20 = 11;
      v31 = v29;
      v22 = j__qalloc_or_throw(80, v19, v29, v21);
      v23 = *(_QWORD *)(v4 + 40);
      *(_OWORD *)(v22 + 8) = 0;
      v30 = v22;
      *(_QWORD *)(v22 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v22 + 40) = 0;
      *(_QWORD *)(v22 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v22 + 56) = 0;
      *(_QWORD *)(v22 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v22 + 72) = 0;
      sub_1253A0(v22, v23);
      *((_BYTE *)v20 + 32) = 4;
      *((_DWORD *)v20 + 17) = v31;
      v20[5] = v30;
      *((_DWORD *)v20 + 9) = v27;
      *((_BYTE *)v14 + 32) = 4;
      v14[5] = v20;
      *((_DWORD *)v14 + 9) = *((_DWORD *)v20 + 17);
      sub_120A10(v32, a2, v28 - 8 * (v27 - v31), 1, -1, 0);
      v24 = *((_DWORD *)v14 + 9);
    }
    *((_DWORD *)v14 + 17) = v24;
    sub_11CDA0(a1 + 48);
    sub_11CDA0(a1 + 32);
    *(_BYTE *)(a1 + 32) = 4;
    v25 = 9;
    *(_QWORD *)(a1 + 40) = v14;
    v26 = *((_DWORD *)v14 + 17);
    *(_DWORD *)(a1 + 36) = v26;
    if ( v26 >= *(_DWORD *)(a1 + 68) )
    {
      v25 = 4;
      if ( v26 > *(_DWORD *)(a1 + 68) )
        v25 = 10;
    }
    *(_DWORD *)a1 = v25;
  }
  else
  {
    return 0;
  }
  return v5;
}
