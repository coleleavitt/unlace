__int64 __fastcall sub_D438E0(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v4; // r15
  __int64 v5; // r14
  _QWORD *v6; // r13
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  unsigned int v11; // r12d
  __int64 v12; // rdi
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // r12d
  __int64 v17; // rax
  unsigned __int8 v18; // [rsp+0h] [rbp-D8h]
  __int64 v19; // [rsp+8h] [rbp-D0h]
  __m128i v20; // [rsp+10h] [rbp-C8h] BYREF
  unsigned __int64 v21; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+28h] [rbp-B0h]
  _QWORD v23[4]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v24[4]; // [rsp+50h] [rbp-88h] BYREF
  _BYTE v25[104]; // [rsp+70h] [rbp-68h] BYREF

  result = 1;
  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    v4 = *(_QWORD *)(a1 + 560);
    v5 = *(_QWORD *)(a1 + 1232);
    v6 = (_QWORD *)(a1 + 384);
    *(_QWORD *)(a1 + 1240) = *a3;
    sub_E21760(v4, 48);
    sub_E23260(v25);
    sub_E21790(v4, 48);
    if ( (unsigned __int8)sub_DCC160(a1 + 384, v5, v25, 4) )
    {
      v20 = _mm_loadu_si128((const __m128i *)sub_D0E280((__int64)v25));
      v7 = sub_21F8CF0(v20.m128i_u32[2]);
      v8 = sub_D421E0(v6, v7);
      v9 = *(_QWORD *)(a1 + 560);
      v22 = v10;
      v21 = v8;
      v11 = (a2 >> 3) & 7;
      *(__m128i *)sub_E216C0(v9, 16) = _mm_load_si128(&v20);
      v12 = v20.m128i_u32[2];
      if ( (_BYTE)v11 == 7 )
        v11 = 1;
      v13 = sub_21F8CF0(v20.m128i_u32[2]);
      v15 = sub_21F90D0(v12, 16, v14);
      v19 = v15;
      if ( v13 == v15 )
        sub_21FFCB0(v23, v15, 1);
      else
        sub_21FAF40(v23, v13, 1);
      sub_CFEAE0((__int64)v24, (__int64)&v20);
      if ( v24[0] == v19 )
        v16 = sub_2200970(v24, v23, v11);
      else
        v16 = sub_21FD850(v24, v23, v11);
      sub_CFED10((__int64)&v21, v24);
      sub_9955A0(v24);
      sub_9955A0(v23);
      v17 = sub_D0E280((__int64)v25);
      *(_QWORD *)v17 = v21;
      *(_DWORD *)(v17 + 8) = v22;
      v18 = sub_DCADA0(v6, v5, &v21, v16, a2);
      sub_E232A0(v25);
      return v18;
    }
    else
    {
      sub_E232A0(v25);
      return 0;
    }
  }
  return result;
}
