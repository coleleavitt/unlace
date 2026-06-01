unsigned __int64 __fastcall sub_271D40(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rbp
  const char *v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rbp
  _BYTE v13[4]; // [rsp+4h] [rbp-64h] BYREF
  __int64 v14; // [rsp+8h] [rbp-60h] BYREF
  __int64 v15; // [rsp+10h] [rbp-58h] BYREF
  __int128 v16; // [rsp+18h] [rbp-50h]
  __int64 v17; // [rsp+28h] [rbp-40h]
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v2 = sub_277DF0();
  if ( (*(_BYTE *)(v2 + 128) & 1) == 0 )
  {
    v4 = v2;
    v5 = sub_277C30(*(_QWORD *)(a1 + 40));
    v15 = 0;
    v17 = -1;
    v6 = v5;
    v16 = 0;
    if ( a2 )
    {
      sub_4A6DB0(v5);
      v7 = operator new(0x18u);
      *(_QWORD *)v7 = 0;
      v8 = v7;
      *(_OWORD *)(v7 + 8) = 0;
      sub_3A1A70(v6, v7, &v15);
      v9 = (const char *)a1;
      sub_278A30(v4, a1, v8);
    }
    else
    {
      sub_4A6DB0(v5);
      v10 = v6 + 2512;
      if ( !v6 )
        v10 = 0;
      sub_277780(v13, v10);
      v9 = (const char *)v17;
      v11 = sub_3A1B60(v6, v17);
      v12 = v11;
      if ( v11 )
      {
        v9 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + 8) + 16LL))(*(_QWORD *)(v11 + 8));
        if ( sub_2781D0(v4, v9, &v14) )
        {
          sub_278850(v4, v14, 0, a1, 1);
          v9 = (const char *)a1;
          sub_278A80(v4, a1, v12);
        }
      }
      sub_277860(v13);
    }
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree(v15, v9);
    }
  }
  return v18 - __readfsqword(0x28u);
}
