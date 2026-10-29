__int64 __fastcall sub_E3DDB0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rsi

  v5 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v6 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v6 & 8) != 0 )
  {
    a4 = a2 & 7;
    if ( a2 & 7
       | *((_BYTE *)&qword_18 + (*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL)) & 7
       | byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 7u
      || (*(_DWORD *)((_BYTE *)&qword_18 + (*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
        & 0xFFFFFE00) != 0
      || (*((_BYTE *)&qword_18 + (*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL)) & 8) != 0 )
    {
      return sub_E3D1B0((__int64)a1, a2);
    }
  }
  else if ( (((unsigned __int8)a2 | (unsigned __int8)v6) & 7) != 0 )
  {
    return sub_E3D1B0((__int64)a1, a2);
  }
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v8 + 16) != 48 )
    return sub_E3D1B0((__int64)a1, a2);
  v9 = sub_F60F10(v8, a2, v5, a4, a5);
  result = sub_E3DA60(a1, v9);
  if ( !(_BYTE)result )
  {
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
    return sub_E3D1B0((__int64)a1, v10);
  }
  return result;
}
