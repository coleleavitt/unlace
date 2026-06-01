__int64 __fastcall sub_A72F0(__int64 a1, __int64 a2)
{
  signed int v2; // r11d
  unsigned __int64 v3; // rbx
  unsigned int v4; // r11d
  __int64 v5; // rbx
  size_t v6; // r13
  const void *v7; // rbx
  unsigned int v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // rbx
  __int64 v12; // rax
  void *v14; // rdi
  __int64 v15; // rax
  _DWORD v16[3]; // [rsp+0h] [rbp-54h] BYREF
  __int64 v17; // [rsp+Ch] [rbp-48h] BYREF
  __int128 v18; // [rsp+14h] [rbp-40h]
  unsigned __int64 v19; // [rsp+24h] [rbp-30h]

  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(int *)(a1 + 40);
  v19 = __readfsqword(0x28u);
  v18 = 0;
  v17 = 0;
  if ( (unsigned __int8)sub_A4150(v2, v16) )
  {
    if ( (unsigned __int8)sub_A4240(v4, &v17) && (v3 & 0x80000000) == 0LL && v3 < (unsigned __int64)v18 )
    {
      v5 = v17 + 32 * v3;
      v6 = *(_QWORD *)(v5 + 16);
      v7 = *(const void **)(v5 + 8);
      free_idcv();
      *(_BYTE *)a2 = 7;
      *(_QWORD *)(a2 + 8) = 0;
      *(_OWORD *)(a2 + 16) = 0;
      if ( v6 )
      {
        v14 = nullptr;
        if ( v6 != -1 )
        {
          v15 = qvector_reserve();
          *(_QWORD *)(a2 + 8) = v15;
          v14 = (void *)v15;
        }
        *(_QWORD *)(a2 + 16) = v6 + 1;
        memmove(v14, v7, v6);
        *(_BYTE *)(*(_QWORD *)(a2 + 8) + v6) = 0;
      }
      v8 = 0;
    }
    else
    {
      v8 = 3;
    }
    v9 = v17;
    if ( v17 )
    {
      v10 = v18;
      if ( (_QWORD)v18 )
      {
        v11 = 0;
        do
        {
          v12 = v9 + 32 * v11;
          if ( *(_QWORD *)(v12 + 8) )
          {
            *(_QWORD *)(v12 + 16) = 0;
            qfree();
            v9 = v17;
          }
          ++v11;
        }
        while ( v10 != v11 );
      }
      *(_QWORD *)&v18 = 0;
      qfree();
    }
  }
  else
  {
    return 3;
  }
  return v8;
}

