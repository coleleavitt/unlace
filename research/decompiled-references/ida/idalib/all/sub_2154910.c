__int64 __fastcall sub_2154910(__int64 a1, __int64 *a2)
{
  _DWORD **v2; // rbx
  __int64 v4; // rdi
  const char *v5; // rax
  __int64 v6; // rdi
  __int64 result; // rax
  __int64 v8; // rdi
  const char *v9; // rax
  __int64 v10; // rax
  __int64 v11; // [rsp+0h] [rbp-58h] BYREF
  __int64 v12; // [rsp+8h] [rbp-50h]
  _QWORD v13[4]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v14; // [rsp+30h] [rbp-28h]

  v2 = *(_DWORD ***)(a1 + 8);
  if ( *v2[6] != 26 )
    return 0;
  (*((void (__fastcall **)(_QWORD))*v2 + 19))(*(_QWORD *)(a1 + 8));
  v4 = *(_QWORD *)(a1 + 8);
  v11 = 0;
  v12 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 160LL))(v4, &v11) )
  {
    v5 = "expected identifier";
LABEL_4:
    v6 = *(_QWORD *)(a1 + 8);
    v13[0] = v5;
    v14 = 259;
    return sub_21543E0(v6, (__int64)v13, 0, 0);
  }
  v8 = *(_QWORD *)(a1 + 8);
  if ( v12 != 6 || *(_DWORD *)v11 != 1902734965 || *(_WORD *)(v11 + 4) != 25973 )
  {
    v9 = "expected 'unique'";
LABEL_9:
    v13[0] = v9;
    v14 = 259;
    return sub_21543E0(v8, (__int64)v13, 0, 0);
  }
  if ( *v2[6] != 26 )
  {
    v9 = "expected commma";
    goto LABEL_9;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 152LL))(v8);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 8) + 224LL))(*(_QWORD *)(a1 + 8), a2);
  if ( !(_BYTE)result )
  {
    v10 = *a2;
    if ( *a2 < 0 )
    {
      v5 = "unique id must be positive";
      goto LABEL_4;
    }
    if ( (unsigned int)v10 != v10 || v10 == 0xFFFFFFFFLL )
    {
      v5 = "unique id is too large";
      goto LABEL_4;
    }
    return 0;
  }
  return result;
}
