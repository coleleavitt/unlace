__int64 __fastcall sub_2148250(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdi
  unsigned int v7; // ebx
  _DWORD **v8; // rdi
  __int64 v10; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v11[4]; // [rsp+10h] [rbp-58h] BYREF
  __int16 v12; // [rsp+30h] [rbp-38h]

  v6 = *(_QWORD *)(a1 + 8);
  v11[0] = "expected unwind version number";
  v12 = 259;
  v7 = sub_2154400(v6, &v10, v11);
  if ( (_BYTE)v7 )
    return v7;
  v8 = *(_DWORD ***)(a1 + 8);
  if ( (unsigned __int64)(v10 - 1) > 0xFE )
  {
    v12 = 259;
    v11[0] = "invalid unwind version";
    return (unsigned int)sub_2153E90(v8, a4, v11, 0, 0);
  }
  else
  {
    if ( *v8[6] != 9 )
    {
      v11[0] = "unexpected token in directive";
      v12 = 259;
      return (unsigned int)sub_21543E0(v8, v11, 0, 0);
    }
    (*((void (__fastcall **)(_DWORD **))*v8 + 19))(v8);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 24LL) + 1168LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
      (unsigned __int8)v10,
      a4);
    return v7;
  }
}
