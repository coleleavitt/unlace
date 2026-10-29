__int64 __fastcall sub_9E2C30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  void *v9; // rdi
  int v10; // edx
  bool v11; // zf
  _DWORD *v12; // rdx
  __int64 v13; // r12
  void *v14; // r15
  void *v15; // rbp
  unsigned int **v17; // rcx
  int v18; // r15d
  __int64 v20; // [rsp+8h] [rbp-150h]
  void *v21; // [rsp+8h] [rbp-150h]
  __int64 v22; // [rsp+10h] [rbp-148h]
  unsigned int **v23; // [rsp+10h] [rbp-148h]
  unsigned int v24; // [rsp+1Ch] [rbp-13Ch]
  _QWORD v25[2]; // [rsp+20h] [rbp-138h] BYREF
  _QWORD v26[2]; // [rsp+30h] [rbp-128h] BYREF
  _QWORD v27[2]; // [rsp+40h] [rbp-118h] BYREF
  _QWORD v28[2]; // [rsp+50h] [rbp-108h] BYREF
  __int64 v29[6]; // [rsp+60h] [rbp-F8h] BYREF
  void *ptr; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+98h] [rbp-C0h]
  _BYTE v32[184]; // [rsp+A0h] [rbp-B8h] BYREF

  ptr = v32;
  v9 = qword_1C7F2C0;
  v31 = 0x1000000000LL;
  v25[0] = 0;
  v25[1] = 0;
  v26[0] = 1;
  v26[1] = 0;
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
  {
    v22 = a6;
    v21 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, v25, a2);
    a6 = v22;
    v9 = v21;
  }
  else
  {
    LODWORD(v25[0]) = *(_DWORD *)a2;
  }
  if ( (*(_BYTE *)(a2 + 20) & 1) != 0 )
  {
    v20 = a6;
    sub_182C690(v9, v26, a2 + 16);
    a6 = v20;
  }
  else
  {
    v10 = *(_DWORD *)(a2 + 16);
    BYTE4(v26[0]) &= ~1u;
    LODWORD(v26[0]) = v10;
  }
  v29[0] = a1;
  v27[0] = 0;
  v28[0] = 1;
  v11 = *(_WORD *)(a3 + 4) == 0;
  v27[1] = 0;
  v28[1] = 0;
  v29[1] = (__int64)v27;
  v29[2] = (__int64)v25;
  v29[3] = a6;
  v29[4] = a5;
  v29[5] = (__int64)&ptr;
  if ( v11 )
  {
    do
    {
      v12 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
      if ( !v12 )
        break;
      if ( *v12 != 5 )
        break;
      if ( v12[1] != 9 )
        break;
      v17 = (unsigned int **)(a3 + 32);
      v18 = 0;
      v24 = *(_DWORD *)(a3 + 24);
      while ( ++v18 < v24 )
      {
        v23 = v17;
        sub_9E2900(v29, *v17);
        v17 = v23 + 1;
      }
      a3 = *(_QWORD *)(a3 + 8LL * (v24 - 1) + 32);
    }
    while ( !*(_WORD *)(a3 + 4) );
  }
  sub_9E2900(v29, (unsigned int *)a3);
  if ( LODWORD(v25[0]) )
    v13 = sub_15947E0(a4, v25, (unsigned int)v31, ptr);
  else
    v13 = 0;
  v14 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v27);
  sub_182CBA0(v14, v28);
  v15 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v25);
  sub_182CBA0(v15, v26);
  if ( ptr != v32 && ptr )
    sub_186B220(ptr);
  return v13;
}

