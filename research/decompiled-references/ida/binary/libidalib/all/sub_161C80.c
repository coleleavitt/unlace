__int64 __fastcall sub_161C80(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v4; // rbx
  __int64 v7; // r14
  _DWORD *v8; // r15
  __int64 v9; // rsi
  int v10; // r13d
  __int64 v11; // r14
  __int64 v12; // rdi
  __int64 v13; // [rsp+0h] [rbp-68h] BYREF
  int v14; // [rsp+8h] [rbp-60h]
  _DWORD *v15; // [rsp+10h] [rbp-58h] BYREF
  int v16; // [rsp+18h] [rbp-50h]
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v4 = a1;
  v17 = __readfsqword(0x28u);
  *a2 = getinf();
  *a3 = getinf();
  if ( (a1 || (v4 = qword_252800) != 0)
    && (v14 = 0, v13 = 0, v15 = nullptr, v16 = 0, (unsigned __int8)sub_161A40(v4, (__int64)&v13, (__int64)&v15, nullptr))
    && (v7 = v13) != 0
    && (v8 = v15) != nullptr
    && (v9 = v13, v10 = v16, !sub_161BE0(v4))
    && (v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 128LL))(v7, v9),
        v12 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 128LL))(v8),
        LOBYTE(v4) = v12 != -1 && v11 != -1,
        (_BYTE)v4)
    && (v10 || v8[2] || v12) )
  {
    *a2 = v11;
    *a3 = get_item_end();
  }
  else
  {
    LODWORD(v4) = 0;
  }
  return (unsigned int)v4;
}

