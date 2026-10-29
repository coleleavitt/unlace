__int64 __fastcall sub_6B6F00(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v4; // r13
  size_t v5; // rax
  size_t v6; // r15
  size_t v7; // r12
  void *v8; // rax
  int v10; // [rsp+4h] [rbp-ACh] BYREF
  _QWORD v11[2]; // [rsp+8h] [rbp-A8h] BYREF
  __int128 v12; // [rsp+18h] [rbp-98h]
  __int64 v13; // [rsp+28h] [rbp-88h]
  __int64 v14; // [rsp+30h] [rbp-80h]
  char **v15; // [rsp+38h] [rbp-78h]
  char *s[2]; // [rsp+48h] [rbp-68h] BYREF
  _QWORD v17[11]; // [rsp+58h] [rbp-58h] BYREF

  v17[3] = __readfsqword(0x28u);
  v14 = 0x100000000LL;
  v12 = 0;
  v15 = s;
  v11[0] = &off_2BC1EC8;
  s[0] = (char *)v17;
  s[1] = nullptr;
  LOBYTE(v17[0]) = 0;
  v11[1] = 0;
  v13 = 0;
  sub_2257B70(v11, 0, 0, 0);
  v10 = *(_DWORD *)(a3 + 24);
  sub_FF6F00(&v10, v11, *(_QWORD *)(*(_QWORD *)(a2 + 48) + 2312LL));
  v4 = s[0];
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( v4 )
  {
    v5 = strlen(v4);
    v6 = v5 + 1;
    v7 = v5;
    v8 = (void *)qvector_reserve(a1, 0, v5 + 1, 1);
    *(_QWORD *)(a1 + 8) = v6;
    *(_QWORD *)a1 = v8;
    memmove(v8, v4, v7);
    *(_BYTE *)(*(_QWORD *)a1 + v7) = 0;
  }
  v11[0] = &off_2BC1EC8;
  sub_2257A60(v11);
  if ( (_QWORD *)s[0] != v17 )
    operator delete(s[0], v17[0] + 1LL);
  return a1;
}

