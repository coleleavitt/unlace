__int64 __fastcall sub_EE17B0(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 result; // rax
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 **v17; // rbx
  __int64 v18; // rdx
  __int64 **v19; // r15
  __int64 *v20; // r14
  __int64 *v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+0h] [rbp-78h] BYREF
  __m128i v25; // [rsp+8h] [rbp-70h] BYREF
  __m128i v26[5]; // [rsp+20h] [rbp-58h] BYREF

  v7 = *a2;
  sub_7052B0((__int64 *)(*(_QWORD *)(*a2 + 104LL) + 96LL), *(_QWORD *)(*a2 + 104LL), a3, a4, a5, a6);
  result = *(unsigned int *)(*(_QWORD *)(v7 + 128) + 20LL);
  if ( (_DWORD)result )
  {
    v13 = (__int64 *)a2[8];
    if ( v13 && (_QWORD *)v13[9] == a2 )
    {
      v23 = *v13;
      v25.m128i_i64[0] = a3;
      v24 = v23;
      v25.m128i_i8[8] = 0;
      sub_EDB730(v26, (__int64)(a1 + 37), &v24, &v25);
      sub_EE17B0(a1, a2[8], a3);
    }
    result = (__int64)sub_EDE580(*a1, (char *)*a2, v8, v9, v10, v11);
    v17 = (__int64 **)a2[2];
    v18 = *((unsigned int *)a2 + 6);
    v19 = &v17[v18];
    if ( v17 != v19 )
    {
      v20 = (__int64 *)(result + 72);
      do
      {
        v21 = *v17;
        if ( !*((_BYTE *)*v17 + 8) )
        {
          v22 = sub_EDB2A0(v20, *v21, v18, v14, v15, v16);
          result = sub_EE17B0(a1, v21, v22 + a3);
        }
        ++v17;
      }
      while ( v19 != v17 );
    }
  }
  return result;
}
