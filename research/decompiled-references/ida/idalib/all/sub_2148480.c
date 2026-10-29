__int64 __fastcall sub_2148480(__int64 *a1)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // [rsp+0h] [rbp-58h] BYREF
  __int64 v10; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v11[4]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v12; // [rsp+30h] [rbp-28h]

  v2 = sub_2153CB0(*(_QWORD *)(*a1 + 8), &v9);
  if ( (_BYTE)v2 )
  {
    v7 = *a1;
    v11[0] = "expected identifier in directive";
    v8 = *(_QWORD *)(v7 + 8);
    v12 = 259;
    return (unsigned int)sub_21543E0(v8, v11, 0, 0);
  }
  else
  {
    v10 = 0;
    v3 = v2;
    v4 = *(_QWORD *)(*a1 + 8);
    if ( (unsigned int)(**(_DWORD **)(v4 + 48) - 12) > 1 )
    {
LABEL_6:
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 24) + 376LL))(*(_QWORD *)(v4 + 24), v9);
      return v3;
    }
    v5 = *(_QWORD *)(v4 + 184);
    LODWORD(result) = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 224LL))(v4, &v10);
    if ( !(_BYTE)result )
    {
      v4 = *(_QWORD *)(*a1 + 8);
      if ( (unsigned __int64)(v10 + 0x80000000LL) > 0xFFFFFFFF )
      {
        v11[0] = "invalid '.rva' directive offset, can't be less than -2147483648 or greater than 2147483647";
        v12 = 259;
        return (unsigned int)sub_2153E90(v4, v5, v11, 0, 0);
      }
      goto LABEL_6;
    }
    return (unsigned int)result;
  }
}
