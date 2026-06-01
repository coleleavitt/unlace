__int64 __fastcall sub_97A4B0(__int64 a1, __int64 a2, __int16 a3, __int16 a4)
{
  __int64 v6; // rbx
  __int64 *v7; // rbp
  void *v8; // rax
  void *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r14
  unsigned __int8 **v12; // rbx
  void *v13; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v14; // [rsp+8h] [rbp-90h]
  char v15; // [rsp+Ch] [rbp-8Ch]
  void *v16; // [rsp+10h] [rbp-88h] BYREF
  unsigned int v17; // [rsp+18h] [rbp-80h]
  char v18; // [rsp+1Ch] [rbp-7Ch]
  void *v19; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v20; // [rsp+28h] [rbp-70h]
  unsigned __int8 v21; // [rsp+2Ch] [rbp-6Ch]
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __m128i si128; // [rsp+38h] [rbp-60h]
  _BYTE v24[80]; // [rsp+48h] [rbp-50h] BYREF

  if ( !a4 )
  {
    v6 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
    v7 = (__int64 *)sub_A2E130(a1, v6, 2306, 0);
    v8 = (void *)sub_AC7B80(*(_QWORD *)(v6 + 24));
    if ( v7 )
    {
      ptr = v8;
      si128.m128i_i8[0] = 1;
      sub_839C90(v7, (__int64 *)&ptr);
    }
    return 0;
  }
  if ( a3 != (__int16)0x8000 || a4 != -1 )
    return 1;
  v14 = 16;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  v13 = "clang_CompileCommands_getCommand" + 22;
  v15 = 0;
  ptr = v24;
  sub_2587BE0(&v19, &v13, 17);
  v18 = 0;
  v17 = v20;
  v16 = v19;
  sub_831B20((__int64)&v19, (__int64)&v16);
  sub_2593F40((unsigned int)&v19, (unsigned int)&ptr, 10, v21 ^ 1, 0, 1, 0);
  if ( v20 > 0x40 && v19 )
    operator delete[](v19);
  if ( v17 > 0x40 && v16 )
    operator delete[](v16);
  v9 = (void *)sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
  v10 = *(_QWORD *)(a1 + 200);
  v19 = v9;
  v11 = sub_A180F0(v10, a2);
  v12 = (unsigned __int8 **)sub_A2E1B0(a1, &v19, 2262, 0);
  if ( v12 )
  {
    sub_838D50(v12, ptr, si128.m128i_u64[0]);
    sub_8D69A0(v12, *(_QWORD *)(v11 + 8));
  }
  if ( ptr != v24 )
    free(ptr);
  if ( v14 <= 0x40 || !v13 )
    return 0;
  operator delete[](v13);
  return 0;
}

