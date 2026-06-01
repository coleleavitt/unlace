unsigned __int64 __fastcall sub_42EC20(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v4; // rax
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // r12
  _QWORD *v9; // rdi
  __int64 v10; // rbx
  unsigned __int64 v11; // rax
  int v12; // r8d
  int v13; // r9d
  char *v14; // rdi
  __int64 v16; // rax
  void *ptr; // [rsp+0h] [rbp-98h] BYREF
  __int128 v18; // [rsp+8h] [rbp-90h]
  _QWORD *v19; // [rsp+20h] [rbp-78h]
  __int128 v20; // [rsp+28h] [rbp-70h] BYREF
  _OWORD v21[4]; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v22; // [rsp+78h] [rbp-20h]

  v4 = *(_QWORD **)(a2 + 1672);
  v22 = __readfsqword(0x28u);
  v20 = 0;
  v19 = v4;
  memset(v21, 0, sizeof(v21));
  sub_630CA0(*v4, 26, &v20, 16);
  ptr = nullptr;
  v18 = 0;
  sub_7BF130(a2 + 1520, a2, &ptr);
  v6 = a3[1];
  v7 = *a3;
  if ( a3[2] < (unsigned __int64)(v6 + 1) )
  {
    v16 = qvector_reserve(a3, v7, v6 + 1, 24);
    *a3 = v16;
    v6 = a3[1];
    v7 = v16;
  }
  v8 = v7 + 24 * v6;
  *(_QWORD *)v8 = 0;
  v9 = v19;
  *(_OWORD *)(v8 + 8) = 0;
  ++a3[1];
  v10 = *(_QWORD *)(a2 + 1520);
  v11 = sub_3BDE50(v9, v10);
  v14 = (char *)v21;
  if ( v11 >= (unsigned __int64)v20 && v11 < *((_QWORD *)&v20 + 1) )
  {
    LOBYTE(v21[0]) = 43;
    LODWORD(v10) = v10 - v20;
    v14 = (char *)v21 + 1;
  }
  qsnprintf((_DWORD)v14, 63, (unsigned int)"%a", v10, v12, v13);
  sub_35A790((char **)v8);
  if ( ptr )
  {
    *(_QWORD *)&v18 = 0;
    qfree(ptr);
  }
  return v22 - __readfsqword(0x28u);
}
