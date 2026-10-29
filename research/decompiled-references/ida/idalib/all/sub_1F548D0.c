unsigned __int64 __fastcall sub_1F548D0(__int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 *v2; // rbp
  unsigned __int64 result; // rax
  __int64 v4; // rcx
  unsigned __int64 *v5; // r13
  __int64 *v6; // rdi
  __int64 v7; // rcx
  __int64 *v8; // rdi
  __int64 v9; // [rsp+0h] [rbp-98h]
  char v10; // [rsp+Fh] [rbp-89h]
  __int64 v11; // [rsp+10h] [rbp-88h] BYREF
  __int64 v12; // [rsp+18h] [rbp-80h]
  char v13; // [rsp+20h] [rbp-78h]
  _BYTE v14[16]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v15; // [rsp+40h] [rbp-58h]

  v2 = a2 + 8;
  sub_1F48240((__int64)&v11, a1, a2);
  if ( !a2 )
    v2 = nullptr;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 144) + 2320LL) + 21LL) & 2) != 0
    && ((*(_BYTE *)v2 | (unsigned __int8)((__int64)*v2 >> 1)) & 1) != 0 )
  {
    v4 = v12;
    v5 = v2 - 8;
    if ( v11 )
    {
      v6 = a1 + 1;
      if ( v2 != (unsigned __int64 *)&dword_40 )
        v5 = v2;
      if ( !v13 )
        v4 = 0;
      sub_1F545B0(v6, v5, v11, v4);
    }
    else
    {
      v10 = v13;
      v9 = v12;
      sub_1F43500((__int64)v14, (__int64)a1, (__int64)(v2 - 8));
      if ( v15 && (*(_BYTE *)(v15 + 28) & 0x7Fu) - 69 <= 3 )
      {
        v7 = v9;
        v8 = a1 + 1;
        if ( v2 != (unsigned __int64 *)&dword_40 )
          v5 = v2;
        if ( !v10 )
          v7 = 0;
        sub_1F545B0(v8, v5, v15, v7);
      }
      sub_1F42E40((__int64)v14);
    }
  }
  result = *(_QWORD *)((*(__int64 (__fastcall **)(unsigned __int64 *))(*a2 + 32))(a2) + 80);
  a2[10] = result;
  return result;
}
