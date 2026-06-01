__int64 __fastcall sub_12F4FA0(__int64 a1, unsigned int a2, __int32 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 result; // rax
  void *v18; // rbx
  void (__fastcall *v19)(void *); // rdx
  unsigned __int8 *v20; // rdi
  __int64 v21; // [rsp-8h] [rbp-C8h]
  __int64 v22; // [rsp+0h] [rbp-C0h]
  unsigned __int8 v24; // [rsp+Ch] [rbp-B4h]
  void *v25; // [rsp+10h] [rbp-B0h]
  void *v26; // [rsp+20h] [rbp-A0h] BYREF
  unsigned __int64 v27; // [rsp+2Ch] [rbp-94h] BYREF
  char v28; // [rsp+34h] [rbp-8Ch]
  unsigned __int8 *v29[3]; // [rsp+38h] [rbp-88h] BYREF
  volatile signed __int32 *v30; // [rsp+50h] [rbp-70h]
  char v31; // [rsp+58h] [rbp-68h]

  v31 = 0;
  sub_12F3FE0((__m128 **)&v26, a1, a3, a4, a5, a6, (__int64)v29);
  v14 = v21;
  v15 = v22;
  if ( v31 )
  {
    if ( v30 )
      sub_4343A0(v30);
    v20 = v29[0];
    if ( v29[0] && !_InterlockedSub((volatile signed __int32 *)v29[0] + 2, 1u) )
      (*(void (__fastcall **)(unsigned __int8 *, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v20 + 8LL))(
        v20,
        a1,
        v12,
        v13,
        v14,
        v15);
  }
  v25 = v26;
  v16 = sub_FEEE40(a4);
  if ( sub_12ED580(a1, a3, *(_BYTE **)v16, *(_QWORD *)(v16 + 8), a5, a6, (__int64)v25) )
  {
    result = sub_12EA3C0(a1, a2, a3, a4, (int)a5, a6, nullptr, nullptr);
  }
  else
  {
    sub_FC70B0((__int64)v29, *(_QWORD *)(a1 + 32), a3, 37);
    sub_AEC220(v29, *(_BYTE **)a4, *(_QWORD *)(a4 + 8));
    v28 = 1;
    v27 = __PAIR64__(a3, a2);
    sub_AEC610((__int64 *)v29, (__int64 *)&v27);
    sub_AEA040((__int64)v29);
    result = 0;
  }
  v18 = v26;
  if ( v26 )
  {
    v24 = result;
    v19 = *(void (__fastcall **)(void *))(*(_QWORD *)v26 + 8LL);
    if ( v19 == sub_12EC440 )
    {
      sub_12EBC20((__int64)v26);
      operator delete(v18, 0x178u);
      return v24;
    }
    else
    {
      v19(v26);
      return v24;
    }
  }
  return result;
}
