unsigned __int64 __fastcall sub_180730(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // r15
  __int64 v3; // rax
  __int64 v4; // rsi
  _QWORD *v5; // r13
  bool v6; // zf
  void (__fastcall ***v7)(void *); // rcx
  void (__fastcall *v8)(void *); // r8
  void (__fastcall *v9)(void *); // rsi
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rbx
  __int64 v13; // rdi
  void *v15; // [rsp+0h] [rbp-88h]
  __int64 v16; // [rsp+10h] [rbp-78h] BYREF
  __int128 v17; // [rsp+18h] [rbp-70h]
  __int64 v18; // [rsp+28h] [rbp-60h]
  __int128 v19; // [rsp+30h] [rbp-58h]
  char v20; // [rsp+40h] [rbp-48h]
  unsigned __int64 v21; // [rsp+48h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v20 = 0;
  v16 = 0;
  v18 = 0;
  v17 = 0;
  v19 = 0;
  (*(void (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)a1 + 152LL))(a1, &v16, 7);
  v1 = *(_QWORD *)(a1 + 1896);
  v2 = 0;
  if ( v1 )
  {
    do
    {
      v3 = *(_QWORD *)(a1 + 1888) + 80 * v2;
      v4 = *(_QWORD *)(v3 + 72);
      v5 = (_QWORD *)v3;
      if ( v4 )
      {
        v6 = (*(_DWORD *)(v4 + 8))-- == 1;
        if ( v6 )
        {
          v7 = *(void (__fastcall ****)(void *))(v3 + 72);
          v8 = **v7;
          if ( v8 == sub_17E130 )
          {
            if ( v7 )
            {
              v9 = (*v7)[2];
              if ( (char *)v9 == (char *)sub_17DE90 )
              {
                v15 = *(void **)(v3 + 72);
                *v7 = (void (__fastcall **)(void *))&off_234C58;
                qregfree();
                operator delete(v15, 0x30u);
              }
              else
              {
                v9(*(void **)(v3 + 72));
              }
            }
          }
          else
          {
            v8(*(void **)(v3 + 72));
          }
        }
      }
      if ( v5[5] )
      {
        v5[6] = 0;
        qfree();
      }
      if ( v5[1] )
      {
        v5[2] = 0;
        qfree();
      }
      ++v2;
    }
    while ( v1 != v2 );
  }
  v6 = *(_QWORD *)(a1 + 1912) == 0;
  *(_QWORD *)(a1 + 1896) = 0;
  if ( v6 )
    *(_DWORD *)(a1 + 1760) &= ~2u;
  sub_17F010(a1, (__int64)&v16);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
  v10 = v16;
  if ( v16 )
  {
    v11 = v17;
    if ( (_QWORD)v17 )
    {
      v12 = 0;
      do
      {
        v13 = *(_QWORD *)(v10 + 32 * v12);
        if ( v13 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
          v10 = v16;
        }
        ++v12;
      }
      while ( v11 != v12 );
    }
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  return v21 - __readfsqword(0x28u);
}

