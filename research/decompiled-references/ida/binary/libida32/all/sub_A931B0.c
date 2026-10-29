unsigned __int64 __fastcall sub_A931B0(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int8 a4, const __m128i *a5)
{
  unsigned int v5; // r15d
  unsigned int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rbp
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r15
  _QWORD *v16; // [rsp+8h] [rbp-110h]
  __int64 v17; // [rsp+18h] [rbp-100h]
  __int64 v18; // [rsp+28h] [rbp-F0h] BYREF
  __m128i v19[2]; // [rsp+30h] [rbp-E8h] BYREF
  void *ptr[2]; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v21[184]; // [rsp+60h] [rbp-B8h] BYREF

  v5 = a3;
  v7 = a4;
  ptr[0] = v21;
  ptr[1] = (void *)0x2000000000LL;
  sub_F3C990(ptr, a2, a3, a4);
  v18 = 0;
  v16 = a1 + 66;
  v8 = sub_21FF620(a1 + 66, ptr, &v18, &off_2B170E0);
  if ( v8 && (v9 = v8 - 24) != 0 )
  {
    v10 = v9 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    sub_A92E70(v19, a1, a5);
    if ( a2 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) && (unsigned __int8)sub_EF9EB0(v19, a5) )
    {
      v17 = 0;
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
      v17 = sub_A931B0(a1, v12, v5, v7, v19);
      sub_21FF620(v16, ptr, &v18, &off_2B170E0);
    }
    v13 = sub_A4C290(a1 + 294, 48, 4u);
    v14 = v5;
    v15 = v13;
    sub_F3A730(v13, v17, a2, v14, v7, a5);
    sub_A469E0((__int64)(a1 + 1), v15);
    v10 = v15 & 0xFFFFFFFFFFFFFFF0LL;
    sub_21FF4D0(v16, v15 + 24, v18, &off_2B170E0);
  }
  if ( ptr[0] != v21 )
    free(ptr[0]);
  return v10;
}

