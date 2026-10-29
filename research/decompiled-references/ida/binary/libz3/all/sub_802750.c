__int64 __fastcall sub_802750(__int64 a1, char a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 v5; // rsi
  __int64 v6; // r15
  unsigned int v7; // ebx
  _DWORD *v8; // rax
  void *v9; // rbp
  __int64 v11; // rax
  _DWORD *v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r15
  int v15[2]; // [rsp+8h] [rbp-80h]
  int v16[2]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v17; // [rsp+18h] [rbp-70h]
  _QWORD v18[2]; // [rsp+20h] [rbp-68h] BYREF
  int v19[22]; // [rsp+30h] [rbp-58h] BYREF

  v3 = *(_DWORD *)(a3 + 24);
  if ( v3 <= 1 )
  {
    return 0;
  }
  else
  {
    v5 = *(_QWORD *)(a3 + 8LL * (v3 - 2) + 32);
    v6 = *(_QWORD *)(a3 + 8LL * (v3 - 1) + 32);
    *(_QWORD *)v16 = 0;
    v17 = 0;
    v18[0] = 1;
    v18[1] = 0;
    v7 = sub_1666AE0(a1 + 16, v5, v16, v19);
    if ( (_BYTE)v7 )
    {
      if ( !*(_WORD *)(v6 + 4)
        && (v8 = *(_DWORD **)(*(_QWORD *)(v6 + 16) + 24LL)) != nullptr
        && !*v8
        && v8[1] == 8
        && *(_DWORD *)(v6 + 24) == 1
        && (v11 = *(_QWORD *)(v6 + 32), !*(_WORD *)(v11 + 4))
        && (v12 = *(_DWORD **)(*(_QWORD *)(v11 + 16) + 24LL)) != nullptr
        && !*v12
        && v12[1] == 2
        && *(_DWORD *)(v11 + 24) == 2 )
      {
        v13 = *(_QWORD *)(v11 + 32);
        v14 = *(_QWORD *)(v11 + 40);
        if ( !a2 )
        {
          *(_QWORD *)v15 = *(_QWORD *)(v11 + 32);
          sub_1831620(qword_1C7F2C0, v16);
          v13 = *(_QWORD *)v15;
        }
        sub_801BE0(a1, (__int64 *)(a1 + 104), v16, v13);
        sub_3EBD70((__int64)v19, (__int64)v16);
        sub_801BE0(a1, (__int64 *)(a1 + 104), v19, v14);
        sub_25A130((char *)v19);
      }
      else
      {
        v7 = 0;
      }
    }
    v9 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v16);
    sub_182CBA0(v9, v18);
  }
  return v7;
}

