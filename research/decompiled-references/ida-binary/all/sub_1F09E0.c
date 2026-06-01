__int64 __fastcall sub_1F09E0(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v3; // rbx
  __int64 v6; // r14
  _DWORD *v7; // r15
  int v8; // r13d
  __int64 v9; // r14
  __int64 v10; // rdi
  bool v11; // cf
  __int64 v12; // [rsp+0h] [rbp-68h] BYREF
  int v13; // [rsp+8h] [rbp-60h]
  _DWORD *v14; // [rsp+10h] [rbp-58h] BYREF
  int v15; // [rsp+18h] [rbp-50h]
  unsigned __int64 v16; // [rsp+28h] [rbp-40h]

  v3 = a1;
  v16 = __readfsqword(0x28u);
  *a2 = getinf(19);
  *a3 = getinf(20);
  if ( (a1 || (v3 = qword_8CC7C0) != 0)
    && (v13 = 0, v12 = 0, v14 = nullptr, v15 = 0, (unsigned __int8)sub_1F07A0(v3, (__int64)&v12, (__int64)&v14, nullptr))
    && (v6 = v12) != 0
    && (v7 = v14) != nullptr
    && (v8 = v15, !sub_1F0940(v3, v12, (__int64)v14))
    && (v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 128LL))(v6),
        v10 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 128LL))(v7),
        LOBYTE(v3) = v10 != -1 && v9 != -1,
        (_BYTE)v3)
    && (v8 || v7[2] || (v11 = v10 == 0, --v10, !v11)) )
  {
    *a2 = v9;
    *a3 = get_item_end(v10);
  }
  else
  {
    LODWORD(v3) = 0;
  }
  return (unsigned int)v3;
}
