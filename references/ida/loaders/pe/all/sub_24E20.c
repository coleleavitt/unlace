__int64 __fastcall sub_24E20(__int64 a1, unsigned int a2, _DWORD *a3, _DWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  unsigned int v9; // ebx
  int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  char v17; // [rsp+0h] [rbp-128h]
  unsigned int v19; // [rsp+2Ch] [rbp-FCh] BYREF
  __int64 v20; // [rsp+30h] [rbp-F8h] BYREF
  int v21; // [rsp+38h] [rbp-F0h]
  _QWORD v22[2]; // [rsp+40h] [rbp-E8h] BYREF
  int v23; // [rsp+50h] [rbp-D8h]
  char v24; // [rsp+54h] [rbp-D4h]
  _QWORD v25[2]; // [rsp+60h] [rbp-C8h] BYREF
  int v26; // [rsp+70h] [rbp-B8h]
  char v27; // [rsp+74h] [rbp-B4h]
  int v28; // [rsp+78h] [rbp-B0h]
  int v29; // [rsp+7Ch] [rbp-ACh]
  int v30; // [rsp+80h] [rbp-A8h]
  int v31; // [rsp+84h] [rbp-A4h]
  _DWORD v32[12]; // [rsp+90h] [rbp-98h] BYREF
  _BYTE v33[40]; // [rsp+C0h] [rbp-68h] BYREF
  unsigned __int64 v34; // [rsp+E8h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  v7 = *(_QWORD *)(a1 + 8);
  if ( !*(_BYTE *)(v7 + 1232) )
    return 1;
  v9 = 0;
  v25[1] = &v20;
  v10 = *(_DWORD *)(v7 + 1236);
  v11 = a2 & 0xFFFFFF;
  v20 = v7;
  v21 = 29;
  v25[0] = v7;
  v26 = 0;
  v27 = 1;
  v28 = a2 & 0xFFFFFF;
  v29 = 45;
  v30 = v10;
  v31 = 0;
  v22[0] = v7;
  v22[1] = v25;
  v23 = 257;
  v24 = 0;
  while ( (unsigned __int8)sub_24C80((__int64)v25, (int *)&v19, (__int64)v33, v11, a5, a6) )
  {
    if ( v9 )
      sub_DA00((__int64)"More than 1 result", (__int64)&v19, v12, v13, v14, v15, v17);
    v9 = v19;
    sub_24D50((__int64)v22, v19, v32, v13, v14, v15);
  }
  if ( !v9 )
    sub_DA00((__int64)"Couldn't find field rva for field token 0x%x.", a2, v12, v13, v14, v15, v17);
  if ( a3 )
    *a3 = v32[0];
  if ( a4 )
  {
    v16 = *(_QWORD *)(a1 + 8);
    if ( !*(_BYTE *)(v16 + 232) )
      return 1;
    sub_22900(v16, a4, v16 + 232, (a2 & 0xFFFFFF) - 1, 0);
  }
  return 0;
}
