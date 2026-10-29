__int64 __fastcall sub_2150DD0(__int64 a1)
{
  _DWORD **v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 *v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // [rsp+8h] [rbp-80h] BYREF
  const char *v10[4]; // [rsp+10h] [rbp-78h] BYREF
  __int16 v11; // [rsp+30h] [rbp-58h]
  _BYTE v12[32]; // [rsp+40h] [rbp-48h] BYREF
  __int16 v13; // [rsp+60h] [rbp-28h]

  v2 = *(_DWORD ***)(a1 + 8);
  v9 = 0;
  if ( *v2[6] == 9 )
    goto LABEL_2;
  result = sub_2153C90(v2, &v9);
  if ( !(_BYTE)result )
  {
    v2 = *(_DWORD ***)(a1 + 8);
LABEL_2:
    (*((void (__fastcall **)(_DWORD **))*v2 + 19))(v2);
    v3 = *(_QWORD *)(a1 + 8);
    v4 = v9;
    v10[1] = &byte_5;
    v5 = *(__int64 **)(v3 + 24);
    v6 = *(_QWORD *)(v3 + 16);
    v13 = 257;
    v11 = 261;
    v10[0] = ".data";
    v7 = sub_210B6D0(v6, v10, 1u, 3u, 0, (__int64)v12, 0, 0xFFFFFFFF, 0);
    sub_211C8E0(v5, v7, v4);
    return 0;
  }
  return result;
}
