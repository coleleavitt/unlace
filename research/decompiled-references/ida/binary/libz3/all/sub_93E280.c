__int64 __fastcall sub_93E280(__int64 a1, int a2)
{
  __int64 v3; // rsi
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rsi
  __int64 v8; // rax
  _QWORD *v9; // rsi
  void *v10; // rdi
  void *v11; // rbx
  void *v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r13
  void *v16; // r12
  __int64 v17; // rsi
  unsigned int *v20; // [rsp+0h] [rbp-B8h]
  int v21; // [rsp+8h] [rbp-B0h]
  unsigned int v22; // [rsp+Ch] [rbp-ACh]
  int v23[2]; // [rsp+10h] [rbp-A8h]
  int v24[2]; // [rsp+18h] [rbp-A0h]
  int v25; // [rsp+20h] [rbp-98h]
  __int64 v26; // [rsp+28h] [rbp-90h] BYREF
  int v27[2]; // [rsp+30h] [rbp-88h] BYREF
  void *v28; // [rsp+40h] [rbp-78h] BYREF
  int v29[2]; // [rsp+48h] [rbp-70h]
  int v30[2]; // [rsp+50h] [rbp-68h] BYREF
  void *ptr; // [rsp+58h] [rbp-60h]
  int v32[2]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v33; // [rsp+68h] [rbp-50h]
  int v34[2]; // [rsp+70h] [rbp-48h] BYREF
  __int64 v35; // [rsp+78h] [rbp-40h]

  v26 = 0;
  v28 = (char *)&dword_0 + 1;
  *(_QWORD *)v29 = 0;
  *(_QWORD *)v30 = 1;
  ptr = nullptr;
  sub_182CBA0(qword_1C7F2C0, v30);
  LOBYTE(v30[1]) &= ~1u;
  v30[0] = 1;
  *(_QWORD *)v32 = 0;
  v33 = 0;
  *(_QWORD *)v34 = 1;
  v35 = 0;
  sub_182CBA0(qword_1C7F2C0, v34);
  v3 = *(_QWORD *)(a1 + 24);
  v34[0] = 1;
  LOBYTE(v34[1]) &= ~1u;
  if ( (unsigned __int8)sub_98A8A0(
                          (int)a1 + 56,
                          v3,
                          a2,
                          v4,
                          v5,
                          v6,
                          a2,
                          v21,
                          (int)v30,
                          (int)v34,
                          v25,
                          0,
                          v3,
                          0,
                          (char *)&dword_0 + 1,
                          0,
                          v30[0],
                          ptr)
    && (unsigned __int8)sub_9296A0(a1, v20, (int *)&v28, (__int64)v32, &v26) )
  {
    sub_91DB90((unsigned __int64 *)(a1 + 232), (int **)&v26);
    v7 = *(_QWORD *)(a1 + 240);
    if ( !v7 || (v8 = *(unsigned int *)(v7 - 4), (_DWORD)v8 == *(_DWORD *)(v7 - 8)) )
    {
      sub_53D790((__int64 *)(a1 + 240));
      v7 = *(_QWORD *)(a1 + 240);
      v8 = *(unsigned int *)(v7 - 4);
    }
    v9 = (_QWORD *)(32 * v8 + v7);
    *v9 = 0;
    v10 = qword_1C7F2C0;
    v9[1] = 0;
    v9[2] = 1;
    v9[3] = 0;
    sub_27B950((__int64)v10, (__int64)v9, v32);
    ++*(_DWORD *)(*(_QWORD *)(a1 + 240) - 4LL);
    sub_91DF20((__int64 **)(a1 + 248), (__int64 *)v27);
  }
  else
  {
    v22 = -1;
  }
  v11 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v32);
  sub_182CBA0(v11, *(_QWORD *)v24);
  v12 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v28);
  sub_182CBA0(v12, *(_QWORD *)v23);
  v13 = v26;
  if ( v26 )
  {
    v14 = *(unsigned int *)(v26 - 4);
    if ( (_DWORD)v14 )
    {
      v15 = v26 + 40 * v14;
      do
      {
        v16 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v13 + 8);
        v17 = v13 + 24;
        v13 += 40;
        sub_182CBA0(v16, v17);
      }
      while ( v15 != v13 );
      v13 = v26;
    }
    sub_186B220((void *)(v13 - 8));
  }
  return v22;
}

