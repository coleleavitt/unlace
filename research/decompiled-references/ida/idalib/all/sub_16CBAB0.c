__int64 __fastcall sub_16CBAB0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, _QWORD *a5)
{
  char v5; // r14
  __int64 v8; // rbp
  __int64 v10; // r15
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // [rsp+0h] [rbp-88h]
  __int64 v17; // [rsp+8h] [rbp-80h]
  _QWORD v18[2]; // [rsp+10h] [rbp-78h] BYREF
  char v19; // [rsp+20h] [rbp-68h]
  _QWORD *v20; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-50h]
  char v22; // [rsp+3Ch] [rbp-4Ch]
  char v23; // [rsp+40h] [rbp-48h]

  v5 = a4;
  v8 = sub_F68450(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, (__int64)a5);
  if ( sub_F58240(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL)) && (sub_16CB850((__int64)v18, a2, a5), v19) )
  {
    v10 = v18[0];
    v16 = v18[1];
    v17 = sub_AAE980((__int64)a5, v8);
    sub_C3EB00((__int64)&v20, a3, (__int64)a5, nullptr, v11, v12);
    if ( v23 )
    {
      if ( v22 )
      {
        v13 = v20;
        if ( v21 > 0x40 )
          v13 = (_QWORD *)*v20;
        v14 = v17 * (_QWORD)v13;
      }
      else if ( v21 > 0x40 )
      {
        v14 = *v20 * v17;
      }
      else
      {
        v14 = 0;
        if ( v21 )
          v14 = v17 * ((__int64)((_QWORD)v20 << (64 - (unsigned __int8)v21)) >> (64 - (unsigned __int8)v21));
      }
      *(_QWORD *)a1 = v10;
      *(_BYTE *)(a1 + 16) = 1;
      if ( v5 )
        v14 = -v14;
      *(_QWORD *)(a1 + 8) = v16 + v14;
      sub_98E4B0((__int64)&v20);
    }
    else
    {
      sub_98E4B0((__int64)&v20);
      *(_QWORD *)(a1 + 8) = 0;
      *(_BYTE *)(a1 + 16) = 1;
      v15 = -(v16 | v10) & (v16 | v10) | v17;
      *(_QWORD *)a1 = -v15 & v15;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 16) = 0;
  }
  return a1;
}
