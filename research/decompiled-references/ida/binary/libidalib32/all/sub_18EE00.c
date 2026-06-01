unsigned __int64 __fastcall sub_18EE00(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rbp
  __int64 v12; // [rsp+0h] [rbp-48h]
  __int64 v13; // [rsp+8h] [rbp-40h]
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v4 = *(_QWORD *)(a2 + 8);
  v5 = 0;
  v14 = __readfsqword(0x28u);
  v13 = 0;
  if ( v4 )
  {
    v8 = qvector_reserve();
    v9 = *(_QWORD **)a2;
    v5 = v8;
    v4 = 0;
    v12 = v8;
    v10 = *(_QWORD *)a2 + 8LL * *(_QWORD *)(a2 + 8);
    if ( v10 != *(_QWORD *)a2 )
    {
      do
      {
        v11 = *(_QWORD *)(a1[1] + 8LL * *v9);
        if ( v4 != -1 )
        {
          v12 = qvector_reserve();
          v4 = v13;
          v5 = v12;
        }
        *(_QWORD *)(v5 + 8 * v4) = v11;
        ++v9;
        v5 = v12;
        v4 = ++v13;
      }
      while ( (_QWORD *)v10 != v9 );
    }
  }
  v6 = a1[1];
  a1[1] = v5;
  a1[2] = v4;
  a1[3] = 0;
  if ( v6 )
    qfree();
  return v14 - __readfsqword(0x28u);
}

