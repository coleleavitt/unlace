__int64 __fastcall sub_2280F0(__int64 a1, __int64 a2, __int64 *a3, int a4)
{
  __int64 v6; // rbx
  unsigned int v7; // r8d
  int v8; // edx
  unsigned int v9; // eax
  __int64 v10; // rdi
  unsigned int v11; // r13d
  __int64 v12; // r12
  __int64 v13; // r14
  unsigned int v15; // eax
  char v16; // al
  __int64 *v17; // [rsp+8h] [rbp-70h]
  int v18; // [rsp+8h] [rbp-70h]
  int v19; // [rsp+8h] [rbp-70h]
  unsigned int v20; // [rsp+14h] [rbp-64h]
  unsigned int v21; // [rsp+14h] [rbp-64h]
  unsigned int v22; // [rsp+14h] [rbp-64h]
  __int64 *v23; // [rsp+18h] [rbp-60h]
  __int64 *v24; // [rsp+18h] [rbp-60h]
  int v25; // [rsp+20h] [rbp-58h] BYREF
  __int64 v26; // [rsp+28h] [rbp-50h]
  unsigned __int64 v27; // [rsp+38h] [rbp-40h]

  v6 = a4;
  v7 = *(_DWORD *)(a1 + 72);
  v27 = __readfsqword(0x28u);
  v8 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
  if ( a4 == -1 && !*(_BYTE *)a3 )
  {
    v15 = v7;
    if ( v7 <= 0x10 )
    {
      v24 = a3;
      v22 = v7;
      v19 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
      v15 = getinf(99);
      a3 = v24;
      v7 = v22;
      v8 = v19;
    }
    if ( v15 != 176 && v15 != 256 )
    {
      v23 = a3;
      v21 = v7;
      v18 = v8;
      v16 = getinf_flag(67, 2);
      v8 = v18;
      a3 = v23;
      v7 = v21;
      if ( !v16 )
        v6 = v18;
    }
  }
  v20 = v7;
  v17 = a3;
  v9 = sub_227ED0(a3, (unsigned int)v6, v8, v7);
  v10 = *(_QWORD *)(a1 + 1504);
  v11 = v9;
  v25 = 1;
  v12 = -v9;
  v13 = v12 & a2;
  v26 = v12 & a2;
  if ( sub_1C3B80(v10, (__int64)&v25, v17, v6, v20) )
  {
    v13 = v26;
  }
  else if ( *(_BYTE *)(*(_QWORD *)(a1 + 1496) + 145LL) && (unsigned int)v6 < v11 )
  {
    v13 = ((a2 + (int)(v11 - 1) + 1) & v12) - v6;
  }
  cleanup_argloc(&v25);
  return v13;
}
