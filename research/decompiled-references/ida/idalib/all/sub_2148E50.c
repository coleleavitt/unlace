__int64 __fastcall sub_2148E50(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD **v6; // rdi
  unsigned int v7; // ebp
  int v8; // eax
  const char *v9; // rax
  unsigned __int8 v11; // [rsp+6h] [rbp-62h] BYREF
  unsigned __int8 v12; // [rsp+7h] [rbp-61h] BYREF
  __int64 v13; // [rsp+8h] [rbp-60h] BYREF
  const char *v14; // [rsp+10h] [rbp-58h] BYREF
  __int16 v15; // [rsp+30h] [rbp-38h]

  if ( (unsigned __int8)sub_2153CB0(*(_QWORD *)(a1 + 8), &v13) )
    return 1;
  v6 = *(_DWORD ***)(a1 + 8);
  if ( *v6[6] != 26 )
  {
    v9 = "you must specify one or both of @unwind or @except";
    goto LABEL_8;
  }
  (*((void (__fastcall **)(_DWORD **))*v6 + 19))(v6);
  v11 = 0;
  v12 = 0;
  v7 = sub_2148D30(a1, &v11, &v12);
  if ( (_BYTE)v7 )
    return 1;
  v6 = *(_DWORD ***)(a1 + 8);
  v8 = *v6[6];
  if ( v8 == 26 )
  {
    (*((void (__fastcall **)(_DWORD **))*v6 + 19))(v6);
    if ( !(unsigned __int8)sub_2148D30(a1, &v11, &v12) )
    {
      v6 = *(_DWORD ***)(a1 + 8);
      v8 = *v6[6];
      goto LABEL_5;
    }
    return 1;
  }
LABEL_5:
  if ( v8 != 9 )
  {
    v9 = "unexpected token in directive";
LABEL_8:
    v14 = v9;
    v15 = 259;
    return (unsigned int)sub_21543E0(v6, &v14, 0, 0);
  }
  (*((void (__fastcall **)(_DWORD **))*v6 + 19))(v6);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 24LL) + 1176LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
    v13,
    v11,
    v12,
    a4);
  return v7;
}
