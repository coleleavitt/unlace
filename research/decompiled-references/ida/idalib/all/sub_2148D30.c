__int64 __fastcall sub_2148D30(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rbp
  __int64 result; // rax
  __int64 v9; // rdi
  __int64 v10; // [rsp+0h] [rbp-68h] BYREF
  __int64 v11; // [rsp+8h] [rbp-60h]
  _QWORD v12[4]; // [rsp+10h] [rbp-58h] BYREF
  __int16 v13; // [rsp+30h] [rbp-38h]

  v5 = *(_QWORD *)(a1 + 8);
  v10 = 0;
  v11 = 0;
  v6 = **(_DWORD **)(v5 + 48);
  if ( v6 != 37 && v6 != 46 )
  {
    v13 = 259;
    v12[0] = "a handler attribute must begin with '@' or '%'";
    return sub_21543E0(v5, v12, 0, 0);
  }
  v7 = *(_QWORD *)(v5 + 184);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 152LL))(v5);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 8) + 160LL))(*(_QWORD *)(a1 + 8), &v10);
  if ( (_BYTE)result || v11 != 6 )
  {
LABEL_4:
    v9 = *(_QWORD *)(a1 + 8);
    v12[0] = "expected @unwind or @except";
    v13 = 259;
    return sub_2153E90(v9, v7, v12, 0, 0);
  }
  if ( *(_DWORD *)v10 != 1769434741 || *(_WORD *)(v10 + 4) != 25710 )
  {
    if ( *(_DWORD *)v10 == 1701017701 && *(_WORD *)(v10 + 4) == 29808 )
    {
      *a3 = 1;
      return result;
    }
    goto LABEL_4;
  }
  *a2 = 1;
  return result;
}
