_QWORD *__fastcall sub_1FDE440(__int64 a1, const void *a2, size_t a3)
{
  _QWORD *v3; // rbx
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rsi
  int v8; // ecx
  unsigned int v9; // edx
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
  __int64 v13; // rax
  char v14; // dl
  int v15; // eax
  int v16; // r8d
  _QWORD *v17; // rdi
  _QWORD *vars0; // [rsp+0h] [rbp+0h] BYREF
  char vars8; // [rsp+8h] [rbp+8h]

  sub_FD9C70((__int64)&vars0, *(_QWORD *)(a1 + 120), a2, a3, 0, 0, 1);
  v3 = vars0;
  if ( (vars8 & 1) != 0 )
  {
    v13 = sub_1FDE260(&vars0);
    if ( !v14 )
    {
      sub_A04D90((__int64 *)&vars0);
      return nullptr;
    }
    v3 = (_QWORD *)v13;
  }
  sub_A04D90((__int64 *)&vars0);
  if ( !v3 )
    return v3;
  do
  {
    v4 = v3[1];
    if ( !v4 )
    {
      v6 = *(_DWORD *)(a1 + 112);
      v3 = nullptr;
      v7 = *(_QWORD *)(a1 + 96);
      if ( !v6 )
        return nullptr;
LABEL_7:
      v8 = v6 - 1;
      v9 = (v6 - 1) & (((unsigned int)v4 >> 4) ^ ((unsigned int)v4 >> 9));
      v10 = (_QWORD *)(v7 + 16LL * v9);
      v11 = (_QWORD *)*v10;
      if ( (_QWORD *)*v10 != v3 )
      {
        v15 = 1;
        if ( v11 == (_QWORD *)-4096LL )
          return nullptr;
        while ( 1 )
        {
          v16 = v15 + 1;
          v9 = v8 & (v15 + v9);
          v10 = (_QWORD *)(v7 + 16LL * v9);
          v17 = (_QWORD *)*v10;
          if ( (_QWORD *)*v10 == v3 )
            break;
          v15 = v16;
          if ( v17 == (_QWORD *)-4096LL )
            return nullptr;
        }
      }
      return (_QWORD *)v10[1];
    }
    v4 &= 0xFFFFFFFFFFFFFFF8LL;
    v5 = v3[1] & 4LL;
    v3 = (_QWORD *)v4;
  }
  while ( v5 && v4 );
  v6 = *(_DWORD *)(a1 + 112);
  v7 = *(_QWORD *)(a1 + 96);
  if ( v6 )
    goto LABEL_7;
  return nullptr;
}
