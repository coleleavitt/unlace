__int64 __fastcall sub_298190(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // r14
  unsigned int v8; // ecx
  unsigned int v9; // r13d
  unsigned int v10; // eax
  unsigned int v11; // r12d
  __int64 v12; // rax
  __int64 v14; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+8h] [rbp-B0h]
  __int64 v16; // [rsp+10h] [rbp-A8h]
  __int64 v17; // [rsp+20h] [rbp-98h]
  __int64 v18; // [rsp+28h] [rbp-90h]
  __int64 v19; // [rsp+58h] [rbp-60h]
  __int64 v20; // [rsp+60h] [rbp-58h]
  __int64 v21; // [rsp+70h] [rbp-48h]
  __int64 v22; // [rsp+78h] [rbp-40h]
  unsigned __int64 v23; // [rsp+88h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 16);
  v23 = __readfsqword(0x28u);
  v4 = *(_QWORD **)(v2 + 48);
  v5 = &v4[*(_QWORD *)(v2 + 56)];
  if ( v4 != v5 )
  {
    while ( v3 != *v4 )
    {
      if ( v5 == ++v4 )
        goto LABEL_8;
    }
    if ( v4 != v5 )
    {
      if ( (unsigned __int8)sub_298080(a2) )
        return 0;
      v3 = *(_QWORD *)(a1 + 16);
    }
  }
LABEL_8:
  if ( (*(_BYTE *)(v3 + 26) & 4) != 0 && (get_tinfo_property(*a2, 2) & 0xF) == 0xA )
    return 0;
  if ( !*(_BYTE *)a2 )
    return 0;
  v6 = *(_QWORD **)(a1 + 8);
  v7 = *(_QWORD *)(v6[1] + 8LL);
  v8 = *(_DWORD *)(v7 + 72);
  v9 = v8 - 208;
  LOBYTE(v10) = sub_1EA740(*(_QWORD *)(a1 + 16), *(_QWORD *)(*v6 + 112LL), a2, v8, 4 * (v8 - 208 > 0x2F));
  v11 = v10;
  if ( !(_BYTE)v10 )
    return 0;
  if ( v9 <= 0x2F )
    return v11;
  v12 = *(_QWORD *)(a1 + 16);
  if ( (*(_BYTE *)(v12 + 25) & 1) == 0 || *(_DWORD *)v12 == 1 )
    return v11;
  sub_CCBF0((__int64)&v14, **(_QWORD **)(a1 + 8), *(_DWORD *)(v7 + 72));
  if ( !(unsigned __int8)sub_D01C0((__int64)&v14, v7, *(_QWORD *)(a1 + 16), a2) )
  {
    if ( v21 )
    {
      v22 = 0;
      qfree(v21);
    }
    if ( v19 )
    {
      v20 = 0;
      qfree(v19);
    }
    if ( v17 )
    {
      v18 = 0;
      qfree(v17);
    }
    if ( v15 )
    {
      v16 = 0;
      qfree(v15);
    }
    return 0;
  }
  if ( v21 )
  {
    v22 = 0;
    qfree(v21);
  }
  if ( v19 )
  {
    v20 = 0;
    qfree(v19);
  }
  if ( v17 )
  {
    v18 = 0;
    qfree(v17);
  }
  if ( v15 )
  {
    v16 = 0;
    qfree(v15);
  }
  return v11;
}
