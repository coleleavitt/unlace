__int64 __fastcall sub_4B8DE0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // ebp
  void *v5; // rdi
  __int128 v6; // xmm1
  __int64 v7; // xmm0_8
  int v8; // r14d
  __int64 v9; // r15
  __int64 v10; // r13
  __int128 v12; // [rsp+0h] [rbp-C8h]
  __int64 v13; // [rsp+18h] [rbp-B0h]
  __int128 v14; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+30h] [rbp-98h]
  __int64 v16; // [rsp+38h] [rbp-90h]
  __int64 v17; // [rsp+40h] [rbp-88h]
  __int128 v18; // [rsp+48h] [rbp-80h]
  __int128 v19; // [rsp+58h] [rbp-70h]
  __int64 v20; // [rsp+68h] [rbp-60h]
  __int128 v21; // [rsp+70h] [rbp-58h]
  unsigned __int64 v22; // [rsp+88h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v14 = 0;
  v18 = 0;
  v15 = 0;
  v16 = -1;
  v17 = 0;
  v20 = 0;
  v19 = 0;
  v21 = 0;
  v4 = sub_4B8CB0(a1, (__int64)&v14, a3, a4, 1);
  if ( (_BYTE)v4 )
  {
    v5 = *(void **)(a2 + 40);
    v6 = v14;
    v7 = v15;
    v8 = v17;
    v9 = v16;
    v10 = v18;
    if ( v5 )
    {
      v13 = v15;
      v12 = v14;
      qfree(v5);
      *(_QWORD *)(a2 + 40) = 0;
      v7 = v13;
      v6 = v12;
    }
    *(_QWORD *)(a2 + 24) = v9;
    *(_DWORD *)(a2 + 32) = v8;
    *(_OWORD *)a2 = v6;
    *(_QWORD *)(a2 + 16) = v7;
    if ( v10 )
      *(_QWORD *)(a2 + 40) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  sub_4B66E0(&v14);
  return v4;
}
