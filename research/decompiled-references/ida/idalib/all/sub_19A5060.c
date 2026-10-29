unsigned __int64 __fastcall sub_19A5060(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rdi
  unsigned __int64 v11; // r12
  __int64 v12; // rdx
  unsigned __int64 result; // rax
  char v14; // dl
  char v15; // cl
  char v16; // dl

  v7 = sub_A557D0(*(_QWORD **)(a1 + 248), a4, a3, (__int64)a4, a5, a6);
  v10 = *(_QWORD **)(a1 + 248);
  v11 = v7;
  v12 = v10[294];
  v10[304] += 48LL;
  result = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v10[295] >= result + 48 && v12 )
    v10[294] = result + 48;
  else
    result = sub_986170((__int64)(v10 + 294), 48, 48, 3, v8, v9);
  v14 = *(_BYTE *)(v11 + 8);
  *(_DWORD *)result = 3;
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = v11;
  v15 = 4 * (v14 & 1);
  v16 = *(_BYTE *)(result + 4);
  *(_BYTE *)(result + 24) = 1;
  *(_QWORD *)(result + 32) = a2;
  *(_QWORD *)(result + 40) = a3;
  *(_BYTE *)(result + 4) = v15 | v16 & 0xF8;
  return result;
}
