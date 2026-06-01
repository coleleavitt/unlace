__int64 __fastcall sub_1B8210(const __m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // r13
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // [rsp-8h] [rbp-88h]
  __int64 v11; // [rsp+0h] [rbp-80h]
  unsigned __int8 v12[16]; // [rsp+18h] [rbp-68h] BYREF
  unsigned __int8 v13[24]; // [rsp+28h] [rbp-58h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp-40h]

  v3 = a1[4].m128i_i64[0];
  v14 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(v3 + 1504);
  v6 = sub_12EA80(v5, a1, a3, a2, 0, a2, 0);
  if ( !(_BYTE)v6 && *(_DWORD *)(a2 + 4) != 1 )
  {
    sub_123A40((__int64)v12, (unsigned __int8 *)a2, v10, v11);
    sub_123A40((__int64)v13, (unsigned __int8 *)a2, v7, v8);
    if ( (unsigned __int8)sub_1274C0(v12, v5, (unsigned int)(*(_DWORD *)(a2 + 4) / 2), 0)
      && (unsigned __int8)sub_1274C0(v13, v5, (unsigned int)(*(_DWORD *)(a2 + 4) / 2), 0)
      && (unsigned __int8)sub_1B8210(a1, v12, a3) )
    {
      v6 = sub_1B8210(a1, v13, a3);
    }
    sub_11CDA0((__int64)v13);
    sub_11CDA0((__int64)v12);
  }
  return v6;
}
