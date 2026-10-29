__int64 __fastcall sub_16C30B0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  int v4; // ebp
  __int64 v5; // r12
  int v6; // ebp
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // ebp
  __int64 v10; // rbp
  __int64 v11; // rdx
  int v12; // r13d
  __int64 result; // rax
  __int64 v15; // [rsp+10h] [rbp-B8h] BYREF
  _QWORD v16[2]; // [rsp+18h] [rbp-B0h] BYREF
  char v17; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+88h] [rbp-40h]

  v3 = *(unsigned int *)(a1 + 24);
  v4 = *(_DWORD *)(a1 + 1096) & 0x7FFFFFFF;
  if ( v3 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 28) )
  {
    sub_2237220(a1 + 16, a1 + 32, v3 + 1, 4);
    v3 = *(unsigned int *)(a1 + 24);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v3) = v4;
  v5 = *(unsigned int *)(a1 + 24);
  v6 = *(_DWORD *)(a1 + 1096);
  v7 = *(unsigned int *)(a1 + 28);
  v8 = (unsigned int)(v5 + 1);
  *(_DWORD *)(a1 + 24) = v8;
  v9 = v6 & 0x7FFFFFFF;
  if ( v8 + 1 > v7 )
  {
    sub_2237220(a1 + 16, a1 + 32, v8 + 1, 4);
    v8 = *(unsigned int *)(a1 + 24);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v8) = v9;
  v10 = *(unsigned int *)(a1 + 24);
  v16[0] = &v17;
  v11 = *(_QWORD *)(a1 + 1104);
  v12 = *(_DWORD *)(a1 + 1096);
  v15 = a1;
  v18 = v11;
  *(_QWORD *)(a1 + 1104) = v16;
  *(_DWORD *)(a1 + 24) = v10 + 1;
  *(_DWORD *)(a1 + 1096) = v5;
  v16[1] = 0x400000000LL;
  sub_16C1900(a1, a2);
  sub_16BB4C0(&v15);
  *(_DWORD *)(a1 + 1096) = v10;
  sub_16C1900(a1, a3);
  result = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 1096) = v12;
  *(_BYTE *)(result + 4 * v5 + 3) |= 0x80u;
  *(_BYTE *)(result + 4 * v10 + 3) |= 0x80u;
  return result;
}
