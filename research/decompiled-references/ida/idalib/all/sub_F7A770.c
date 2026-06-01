bool __fastcall sub_F7A770(__int64 **a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  int v12; // edx
  _QWORD *v13; // rax
  _QWORD *v14; // r9
  bool result; // al
  _QWORD *v16; // rdx
  int v17; // eax
  __int64 v18; // rdi
  int v19; // esi
  unsigned int v20; // ecx
  _QWORD *v21; // r8
  int i; // eax
  _QWORD *v23; // r8
  _QWORD *v24; // [rsp+8h] [rbp-10h] BYREF

  v5 = *a1;
  v6 = sub_F79C60(*(__int64 **)(a2 + 16), a2, a3, a4, a5);
  v11 = sub_F63270(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL), a2, v7, v8, v9, v10);
  v12 = *((_DWORD *)v5 + 2);
  v24 = v11;
  if ( v12 )
  {
    v16 = v11;
    v17 = *((_DWORD *)v5 + 4);
    v18 = *v5;
    if ( v17 )
    {
      v19 = v17 - 1;
      v20 = (v17 - 1) & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
      v21 = *(_QWORD **)(v18 + 8LL * v20);
      result = 1;
      if ( v16 != v21 )
      {
        result = 0;
        if ( v21 != (_QWORD *)-4096LL )
        {
          for ( i = 1; ; ++i )
          {
            v20 = v19 & (i + v20);
            v23 = *(_QWORD **)(v18 + 8LL * v20);
            if ( v16 == v23 )
              break;
            if ( v23 == (_QWORD *)-4096LL )
              return 0;
          }
          return 1;
        }
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v13 = sub_F7A5E0((_QWORD *)v5[3], v5[3] + 8LL * *((unsigned int *)v5 + 8), (__int64 *)&v24);
    return v14 != v13;
  }
  return result;
}
