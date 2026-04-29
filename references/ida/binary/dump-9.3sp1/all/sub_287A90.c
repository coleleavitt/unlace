__int64 __fastcall sub_287A90(_QWORD *a1, __int64 a2)
{
  __int64 *v2; // r14
  unsigned int v3; // ebp
  _QWORD *v5; // rax
  __int64 v6; // r15
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // r12
  __int64 v14; // r12
  int v15; // [rsp+4h] [rbp-94h]
  __int64 v16; // [rsp+8h] [rbp-90h]
  __int64 v17; // [rsp+10h] [rbp-88h] BYREF
  int v18; // [rsp+18h] [rbp-80h]
  __int64 v19; // [rsp+1Ch] [rbp-7Ch]
  __int64 v20; // [rsp+40h] [rbp-58h]
  int v21; // [rsp+48h] [rbp-50h]
  unsigned __int64 v22; // [rsp+58h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v2 = *(__int64 **)(a2 + 24);
  if ( v2[9] )
    return 0;
  v5 = *(_QWORD **)(v2[8] + 24);
  if ( v5[2] != 1 )
    return 0;
  v6 = *v5;
  if ( *(_QWORD *)(*v5 + 24LL) != -4294967220LL )
    return 0;
  v8 = *(_QWORD *)(v6 + 40);
  v17 = -1;
  v18 = 0;
  v19 = -1;
  v20 = 0;
  v21 = 0;
  sub_25AFF0((__int64)&v17, v8);
  v3 = sub_287730(a1, a2, v2, (__int64)&v17);
  sub_255630((__int64)&v17);
  clear_tinfo_t();
  if ( (_BYTE)v3 )
  {
    v15 = *(_DWORD *)(a2 + 12);
    v16 = *(_QWORD *)a2;
    v11 = j__qalloc_or_throw(32, a2, v9, v10);
    *(_QWORD *)v11 = -1;
    v12 = v11;
    *(_DWORD *)(v11 + 8) = 70;
    *(_QWORD *)(v11 + 12) = -1;
    sub_25AA70(v11, v6 + 16);
    sub_255580((__int64 *)a2, v12);
    if ( v2 )
    {
      v13 = v2[8];
      if ( v13 )
      {
        sub_255050(v2[8]);
        j__qfree(v13);
      }
      v14 = v2[9];
      if ( v14 )
      {
        sub_255050(v2[9]);
        j__qfree(v14);
      }
      sub_255630((__int64)v2);
      clear_tinfo_t();
      j__qfree((__int64)v2);
    }
    *(_DWORD *)(a2 + 8) = 75;
    *(_QWORD *)a2 = v16;
    *(_DWORD *)(a2 + 12) = v15;
  }
  else
  {
    return 0;
  }
  return v3;
}
