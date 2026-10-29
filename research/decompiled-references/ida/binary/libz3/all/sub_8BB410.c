__int64 __fastcall sub_8BB410(__int64 a1, void *a2)
{
  void *v3; // rsi
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rsi
  void *v10; // rdi
  int v11; // eax
  void *v12; // rbx
  void *v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r13
  void *v17; // r12
  __int64 v18; // rsi
  int v20; // [rsp+0h] [rbp-C8h]
  int v21; // [rsp+8h] [rbp-C0h]
  void *v22; // [rsp+8h] [rbp-C0h]
  int v23[2]; // [rsp+10h] [rbp-B8h]
  int v24; // [rsp+18h] [rbp-B0h]
  unsigned int v25; // [rsp+1Ch] [rbp-ACh]
  int v26[2]; // [rsp+20h] [rbp-A8h]
  __int64 v27; // [rsp+28h] [rbp-A0h]
  int v28; // [rsp+30h] [rbp-98h]
  int v29[2]; // [rsp+38h] [rbp-90h] BYREF
  void *v30; // [rsp+40h] [rbp-88h] BYREF
  int v31[2]; // [rsp+50h] [rbp-78h] BYREF
  void *ptr; // [rsp+58h] [rbp-70h]
  int v33[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v34; // [rsp+68h] [rbp-60h]
  int v35[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v36; // [rsp+78h] [rbp-50h]
  int v37[2]; // [rsp+80h] [rbp-48h] BYREF
  __int64 v38; // [rsp+88h] [rbp-40h]

  v21 = (int)a2;
  *(_QWORD *)v29 = 0;
  *(_QWORD *)v31 = 1;
  ptr = nullptr;
  *(_QWORD *)v33 = 1;
  v34 = 0;
  sub_182CBA0(qword_1C7F2C0, v33);
  LOBYTE(v33[1]) &= ~1u;
  v33[0] = 1;
  *(_QWORD *)v35 = 0;
  v36 = 0;
  *(_QWORD *)v37 = 1;
  v38 = 0;
  sub_182CBA0(qword_1C7F2C0, v37);
  v3 = *(void **)(a1 + 24);
  v37[0] = 1;
  LOBYTE(v37[1]) &= ~1u;
  if ( (unsigned __int8)sub_98A8A0(
                          (int)a1 + 56,
                          (int)v3,
                          v21,
                          v4,
                          v5,
                          v6,
                          v20,
                          v21,
                          (int)v37,
                          v24,
                          (int)v33,
                          v27,
                          v28,
                          0,
                          v3,
                          0,
                          1,
                          nullptr)
    && (unsigned __int8)sub_89EAA0(a1, (__int64)v22, v31, (__int64)v35, v29) )
  {
    sub_8933F0((unsigned __int64 *)(a1 + 800), (int **)v29);
    v7 = *(_QWORD *)(a1 + 808);
    if ( !v7 || (v8 = *(unsigned int *)(v7 - 4), (_DWORD)v8 == *(_DWORD *)(v7 - 8)) )
    {
      sub_53D790((__int64 *)(a1 + 808));
      v7 = *(_QWORD *)(a1 + 808);
      v8 = *(unsigned int *)(v7 - 4);
    }
    v9 = 32 * v8 + v7;
    *(_QWORD *)v9 = 0;
    v10 = qword_1C7F2C0;
    *(_QWORD *)(v9 + 8) = 0;
    *(_QWORD *)(v9 + 16) = 1;
    *(_QWORD *)(v9 + 24) = 0;
    if ( (v35[1] & 1) != 0 )
      sub_182C690(v10, v9, v35);
    else
      *(_DWORD *)v9 = v35[0];
    if ( (v37[1] & 1) != 0 )
    {
      sub_182C690(v10, v9 + 16, *(_QWORD *)v23);
    }
    else
    {
      v11 = v37[0];
      *(_BYTE *)(v9 + 20) &= ~1u;
      *(_DWORD *)(v9 + 16) = v11;
    }
    ++*(_DWORD *)(*(_QWORD *)(a1 + 808) - 4LL);
    sub_8938D0((__int64 **)(a1 + 816), (__int64 *)&v30);
  }
  else
  {
    v25 = -1;
  }
  v12 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v35);
  sub_182CBA0(v12, *(_QWORD *)v23);
  v13 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v31);
  sub_182CBA0(v13, *(_QWORD *)v26);
  v14 = *(_QWORD *)v29;
  if ( *(_QWORD *)v29 )
  {
    v15 = *(unsigned int *)(*(_QWORD *)v29 - 4LL);
    if ( (_DWORD)v15 )
    {
      v16 = *(_QWORD *)v29 + 40 * v15;
      do
      {
        v17 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v14 + 8);
        v18 = v14 + 24;
        v14 += 40;
        sub_182CBA0(v17, v18);
      }
      while ( v16 != v14 );
      v14 = *(_QWORD *)v29;
    }
    sub_186B220((void *)(v14 - 8));
  }
  return v25;
}

