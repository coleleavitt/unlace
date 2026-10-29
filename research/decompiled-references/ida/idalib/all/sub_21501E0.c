__int64 __fastcall sub_21501E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rax
  _DWORD **v8; // rdi
  __int64 result; // rax
  unsigned __int64 v10; // [rsp+8h] [rbp-40h] BYREF
  const char *v11; // [rsp+10h] [rbp-38h] BYREF
  __int16 v12; // [rsp+30h] [rbp-18h]

  v7 = sub_210EBA0(0, *(_QWORD **)(*(_QWORD *)(a1 + 8) + 16LL), 0, 0, a5, a6);
  v8 = *(_DWORD ***)(a1 + 8);
  v10 = v7;
  if ( *v8[6] == 9 )
  {
LABEL_2:
    (*((void (__fastcall **)(_DWORD **))*v8 + 19))(v8);
    return sub_211C8E0(
             *(__int64 **)(*(_QWORD *)(a1 + 8) + 24LL),
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 288LL) + 8LL),
             v10);
  }
  result = sub_2153C90(v8, &v10);
  if ( !(_BYTE)result )
  {
    v8 = *(_DWORD ***)(a1 + 8);
    if ( *v8[6] != 9 )
    {
      v11 = "expected end of directive";
      v12 = 259;
      return sub_21543E0(v8, &v11, 0, 0);
    }
    goto LABEL_2;
  }
  return result;
}
