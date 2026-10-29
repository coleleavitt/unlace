__int64 __fastcall sub_118A940(__int64 a1, __int64 a2, unsigned int a3, __int32 a4, int a5)
{
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  bool v11; // cc
  __int64 v12; // rcx
  __int64 v13; // [rsp+8h] [rbp-C0h]
  __m128i v14[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int16 v15; // [rsp+30h] [rbp-98h]
  __m128i v16[2]; // [rsp+40h] [rbp-88h] BYREF
  __int16 v17; // [rsp+60h] [rbp-68h]
  __m128i v18[5]; // [rsp+70h] [rbp-58h] BYREF

  result = sub_11BBD10(a2, a3);
  if ( a4 )
  {
    v14[0].m128i_i32[0] = a4;
    v15 = 265;
    v17 = 259;
    v16[0].m128i_i64[0] = (__int64)"-dwarf-version=";
    sub_A41580(v18, v16, v14, v8, v9, v10);
    result = sub_10DA6C0(a1, (__int64)v18);
    v12 = *(unsigned int *)(a2 + 8);
    if ( v12 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
    {
      v13 = result;
      sub_2237220(a2, a2 + 16, v12 + 1, 8);
      v12 = *(unsigned int *)(a2 + 8);
      result = v13;
    }
    *(_QWORD *)(*(_QWORD *)a2 + 8 * v12) = result;
    ++*(_DWORD *)(a2 + 8);
    v11 = a5 <= 2;
    if ( a5 != 2 )
      goto LABEL_3;
    return sub_10DC5D0(a2, (__int64)"-debugger-tuning=lldb");
  }
  v11 = a5 <= 2;
  if ( a5 == 2 )
    return sub_10DC5D0(a2, (__int64)"-debugger-tuning=lldb");
LABEL_3:
  if ( v11 )
  {
    if ( a5 == 1 )
      return sub_10DC5D0(a2, (__int64)"-debugger-tuning=gdb");
  }
  else if ( a5 == 3 )
  {
    return sub_10DC5D0(a2, (__int64)"-debugger-tuning=sce");
  }
  else if ( a5 == 4 )
  {
    return sub_10DC5D0(a2, (__int64)"-debugger-tuning=dbx");
  }
  return result;
}
