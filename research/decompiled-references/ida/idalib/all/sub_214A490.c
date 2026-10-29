__int64 __fastcall sub_214A490(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdi
  const char *v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int64 v14; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v15[4]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v16; // [rsp+30h] [rbp-28h]

  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 288LL) + 8LL) + 188LL);
  if ( (unsigned int)(v6 - 6) > 2 && v6 != 20 )
  {
    v16 = 259;
    v15[0] = "indirect symbol not in a symbol pointer or stub section";
    return (unsigned int)sub_2153E90(v5, a4, v15, 0, 0);
  }
  v7 = sub_2153CB0(v5, &v14);
  if ( !(_BYTE)v7 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    v9 = "non-local symbol required in directive";
    if ( (*(_BYTE *)(v14 + 8) & 2) != 0 )
    {
LABEL_15:
      v15[0] = v9;
      v16 = 259;
      return (unsigned int)sub_21543E0(v8, v15, 0, 0);
    }
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v8 + 24) + 296LL))(
            *(_QWORD *)(v8 + 24),
            v14,
            14) )
    {
      if ( (*(_BYTE *)(v14 + 8) & 1) != 0 )
      {
        v10 = *(__int64 **)(v14 - 8);
        v11 = *v10;
        v12 = v10 + 3;
      }
      else
      {
        v11 = 0;
        v12 = nullptr;
      }
      v15[2] = v12;
      v8 = *(_QWORD *)(a1 + 8);
      v16 = 1283;
      v15[0] = "unable to emit indirect symbol attribute for: ";
      v15[3] = v11;
      return (unsigned int)sub_21543E0(v8, v15, 0, 0);
    }
    v8 = *(_QWORD *)(a1 + 8);
    if ( **(_DWORD **)(v8 + 48) != 9 )
    {
      v9 = "unexpected token in '.indirect_symbol' directive";
      goto LABEL_15;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 152LL))(v8);
    return v7;
  }
  v8 = *(_QWORD *)(a1 + 8);
  v15[0] = "expected identifier in .indirect_symbol directive";
  v16 = 259;
  return (unsigned int)sub_21543E0(v8, v15, 0, 0);
}
