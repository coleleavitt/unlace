unsigned __int64 __fastcall sub_41AF20(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v4; // rax
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // r12
  _QWORD *v9; // rdi
  int v10; // ebx
  unsigned int v11; // eax
  int v12; // r8d
  int v13; // r9d
  char *v14; // rdi
  __int64 v16; // rax
  void *ptr; // [rsp+0h] [rbp-98h] BYREF
  __int128 v18; // [rsp+8h] [rbp-90h]
  _QWORD *v19; // [rsp+20h] [rbp-78h]
  __int64 v20; // [rsp+28h] [rbp-70h] BYREF
  _OWORD v21[4]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v22; // [rsp+78h] [rbp-20h]

  v4 = *(_QWORD **)(a2 + 1480);
  v22 = __readfsqword(0x28u);
  memset(v21, 0, sizeof(v21));
  v19 = v4;
  v20 = 0;
  sub_6141A0(*v4, 26, &v20, 8);
  ptr = nullptr;
  v18 = 0;
  sub_79BD30(a2 + 1332, a2, &ptr);
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
  v10 = *(_DWORD *)(a2 + 1332);
  v11 = sub_3B9110(v9, v10);
  v14 = (char *)v21;
  if ( v11 >= (unsigned int)v20 && v11 < HIDWORD(v20) )
  {
    LOBYTE(v21[0]) = 43;
    v10 -= v20;
    v14 = (char *)v21 + 1;
  }
  qsnprintf((int)v14, 63, (int)"%a", v10, v12, v13, (char)ptr);
  sub_3573A0((char **)v8);
  if ( ptr )
  {
    *(_QWORD *)&v18 = 0;
    qfree(ptr);
  }
  return v22 - __readfsqword(0x28u);
}

