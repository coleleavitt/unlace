unsigned __int64 __fastcall sub_1B29B70(__int64 *a1, unsigned int **a2, __int64 a3, _WORD *a4, int a5, int a6)
{
  __int64 v11; // rdi
  __int64 v13; // rax
  char v14; // dl
  _QWORD *v15; // rax
  char v16; // [rsp+0h] [rbp-4Ch]
  __int64 v17[8]; // [rsp+Ch] [rbp-40h] BYREF

  if ( !a4 )
    return 1;
  v11 = *a1;
  v17[0] = 0x3A00000019LL;
  if ( (unsigned __int8)sub_1B28C40(v11, a2, a3, v17) )
    return 1;
  sub_1AEB8B0(*a1, 0x58u, a4);
  v13 = sub_1AE5FF0(a1[1]);
  v14 = 0;
  if ( v13 )
    v14 = *(_BYTE *)(v13 + 1106);
  v16 = v14;
  v15 = (_QWORD *)sub_168B6C0((__int64)a1);
  return sub_F00E80(v15, a5, a6, a2, a3, (__int64)a4, v16);
}
