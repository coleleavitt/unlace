unsigned __int64 __fastcall sub_1C168F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 *v3; // rbx
  char v4; // al
  unsigned __int8 v5; // al
  char v6; // al
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r13
  char v10; // bp
  __int64 v11; // r14
  __int64 v12; // rax
  int v14; // [rsp+Ch] [rbp-9Ch]
  __int64 *i; // [rsp+10h] [rbp-98h]
  __int64 v16; // [rsp+38h] [rbp-70h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v18; // [rsp+50h] [rbp-58h] BYREF
  int v19; // [rsp+58h] [rbp-50h]
  _QWORD *v20; // [rsp+60h] [rbp-48h]

  v2 = sub_1C160F0(a1, *(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL));
  v3 = *(__int64 **)(a1 + 96);
  *(_QWORD *)(a1 + 88) = v2;
  for ( i = &v3[*(unsigned int *)(a1 + 104)]; i != v3; *(v3 - 1) = v11 )
  {
    v8 = *v3;
    v9 = *(_QWORD *)(*v3 + 8);
    v10 = *(_BYTE *)(*v3 + 1);
    v14 = *(_DWORD *)(a1 + 20);
    v11 = sub_EEE9A0(24, *(_QWORD **)(*(_QWORD *)(a1 + 8) + 248LL), 8u);
    *(_WORD *)v11 = *(_WORD *)v11 & 0xFE00 | 0x1A;
    if ( unk_2CD7484 )
      sub_EE9B50(26);
    v4 = *(_BYTE *)(v11 + 1);
    *(_BYTE *)(v11 + 2) &= 0xF0u;
    *(_QWORD *)(v11 + 8) = v9;
    *(_QWORD *)(v11 + 16) = v8;
    *(_BYTE *)(v11 + 1) = v4 & 1 | v10 & 0x3E;
    *(_DWORD *)(v11 + 4) = v14;
    v5 = sub_B62360(v11);
    *(_BYTE *)(v11 + 1) = (v5 << 6) | *(_BYTE *)(v11 + 1) & 0x3F;
    v6 = (v5 >> 2) & 7 | *(_BYTE *)(v11 + 2) & 0xF8;
    *(_BYTE *)(v11 + 2) = v6;
    if ( *(_BYTE *)(a1 + 24) )
      *(_BYTE *)(v11 + 2) = v6 | 8;
    v7 = *(unsigned int *)(a1 + 40);
    if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
    {
      sub_2237220(a1 + 32, a1 + 48, v7 + 1, 8);
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40)) = v11;
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v7) = v11;
    }
    ++*(_DWORD *)(a1 + 40);
    ++v3;
  }
  v16 = a1;
  v17[0] = sub_1C153F0;
  v17[1] = &v16;
  v12 = *(_QWORD *)(a1 + 8);
  v19 = 0;
  v18 = v12;
  v20 = v17;
  return sub_1C15630((__int64)&v18, a2);
}
