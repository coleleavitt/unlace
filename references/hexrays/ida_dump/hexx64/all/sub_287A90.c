__int64 __fastcall sub_287A90(_QWORD *a1, __int64 a2)
{
  __int64 *v2; // r14
  unsigned int v3; // ebp
  _QWORD *v5; // rax
  __int64 v6; // r15
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r12
  __int64 v12; // r12
  int v13; // [rsp+4h] [rbp-94h]
  __int64 v14; // [rsp+8h] [rbp-90h]
  __int64 v15; // [rsp+10h] [rbp-88h] BYREF
  int v16; // [rsp+18h] [rbp-80h]
  __int64 v17; // [rsp+1Ch] [rbp-7Ch]
  __int64 v18; // [rsp+40h] [rbp-58h] BYREF
  int v19; // [rsp+48h] [rbp-50h]
  unsigned __int64 v20; // [rsp+58h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v2 = *(__int64 **)(a2 + 24);
  if ( !v2[9]
    && (v5 = *(_QWORD **)(v2[8] + 24), v5[2] == 1)
    && (v6 = *v5, *(_QWORD *)(*v5 + 24LL) == -4294967220LL)
    && (v8 = *(_QWORD *)(v6 + 40),
        v15 = -1,
        v16 = 0,
        v17 = -1,
        v18 = 0,
        v19 = 0,
        sub_25AFF0((__int64)&v15, v8),
        v3 = sub_287730(a1, a2, v2, (__int64)&v15),
        sub_255630((__int64)&v15),
        clear_tinfo_t(&v18),
        (_BYTE)v3) )
  {
    v13 = *(_DWORD *)(a2 + 12);
    v14 = *(_QWORD *)a2;
    v9 = j__qalloc_or_throw(32);
    *(_QWORD *)v9 = -1;
    v10 = v9;
    *(_DWORD *)(v9 + 8) = 70;
    *(_QWORD *)(v9 + 12) = -1;
    sub_25AA70(v9, v6 + 16);
    sub_255580((__int64 *)a2, v10);
    if ( v2 )
    {
      v11 = v2[8];
      if ( v11 )
      {
        sub_255050(v2[8]);
        j__qfree(v11);
      }
      v12 = v2[9];
      if ( v12 )
      {
        sub_255050(v2[9]);
        j__qfree(v12);
      }
      sub_255630((__int64)v2);
      clear_tinfo_t(v2 + 6);
      j__qfree(v2);
    }
    *(_DWORD *)(a2 + 8) = 75;
    *(_QWORD *)a2 = v14;
    *(_DWORD *)(a2 + 12) = v13;
  }
  else
  {
    return 0;
  }
  return v3;
}
