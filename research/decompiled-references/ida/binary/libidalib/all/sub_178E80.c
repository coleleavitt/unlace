unsigned __int64 __fastcall sub_178E80(_QWORD *a1, __int64 *a2)
{
  int v4; // ebp
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  size_t v12; // r10
  void *v14; // r11
  void *v15; // rdi
  __int64 v16; // rax
  void *v17; // [rsp+8h] [rbp-60h]
  void *src; // [rsp+10h] [rbp-58h] BYREF
  __int128 v19; // [rsp+18h] [rbp-50h]
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  if ( a2 && a1[1] )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      v6 = a2[1];
      v7 = *a2;
      if ( a2[2] < (unsigned __int64)(v6 + 1) )
      {
        v10 = qvector_reserve();
        v6 = a2[1];
        *a2 = v10;
        v7 = v10;
      }
      v8 = v7 + 24 * v6;
      *(_QWORD *)v8 = 0;
      *(_OWORD *)(v8 + 8) = 0;
      ++a2[1];
      v9 = *a1 + 48 * v5;
      v19 = 0;
      src = nullptr;
      sub_178340(v9, (__int64 *)&src, " ");
      if ( *(_QWORD *)(v9 + 8) <= 1u )
      {
        if ( (void **)v8 != &src )
        {
          v11 = v19;
          if ( (_QWORD)v19 && (v12 = v19 - 1, (_QWORD)v19 != 1) )
          {
            v14 = src;
            v15 = *(void **)v8;
            if ( *(_QWORD *)(v8 + 16) < (unsigned __int64)v19 )
            {
              v17 = src;
              v16 = qvector_reserve();
              v14 = v17;
              v12 = v11 - 1;
              *(_QWORD *)v8 = v16;
              v15 = (void *)v16;
            }
            *(_QWORD *)(v8 + 8) = v11;
            memmove(v15, v14, v12);
            *(_BYTE *)(*(_QWORD *)v8 + v11 - 1) = 0;
          }
          else
          {
            *(_QWORD *)(v8 + 8) = 0;
          }
        }
      }
      else
      {
        sub_94440((__int64 *)v8);
      }
      if ( src )
      {
        *(_QWORD *)&v19 = 0;
        qfree();
      }
      v5 = ++v4;
    }
    while ( (unsigned __int64)v4 < a1[1] );
  }
  return v20 - __readfsqword(0x28u);
}

