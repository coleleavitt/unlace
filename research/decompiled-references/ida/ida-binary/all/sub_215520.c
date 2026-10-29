__int64 __fastcall sub_215520(__int64 a1, __int64 a2)
{
  signed int v2; // r11d
  __int64 v3; // rbx
  unsigned int v5; // r11d
  const char *v6; // rsi
  __int64 v7; // rbx
  size_t v8; // r13
  const char *v9; // rbx
  unsigned int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdi
  void *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // [rsp-8h] [rbp-58h] BYREF
  __int64 v20; // [rsp+8h] [rbp-48h] BYREF
  __int128 v21; // [rsp+10h] [rbp-40h]
  unsigned __int64 v22; // [rsp+20h] [rbp-30h]

  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 40);
  v22 = __readfsqword(0x28u);
  v21 = 0;
  v20 = 0;
  if ( (unsigned __int8)sub_212ED0(v2, (__int64)&v19) )
  {
    v6 = (const char *)&v20;
    if ( (unsigned __int8)sub_212FD0(v5, &v20) && (int)v3 >= 0 && (int)v3 < (unsigned __int64)v21 )
    {
      v7 = v20 + 32LL * (int)v3;
      v8 = *(_QWORD *)(v7 + 16);
      v9 = *(const char **)(v7 + 8);
      free_idcv(a2);
      *(_BYTE *)a2 = 7;
      *(_QWORD *)(a2 + 8) = 0;
      *(_OWORD *)(a2 + 16) = 0;
      if ( v8 )
      {
        v17 = nullptr;
        if ( v8 != -1 )
        {
          v18 = qvector_reserve(a2 + 8, 0, v8 + 1, 1);
          *(_QWORD *)(a2 + 8) = v18;
          v17 = (void *)v18;
        }
        *(_QWORD *)(a2 + 16) = v8 + 1;
        v6 = v9;
        memmove(v17, v9, v8);
        *(_BYTE *)(*(_QWORD *)(a2 + 8) + v8) = 0;
      }
      v10 = 0;
    }
    else
    {
      v10 = 3;
    }
    v11 = v20;
    if ( v20 )
    {
      v12 = v21;
      if ( (_QWORD)v21 )
      {
        v13 = 0;
        do
        {
          v14 = v11 + 32 * v13;
          v15 = *(_QWORD *)(v14 + 8);
          if ( v15 )
          {
            *(_QWORD *)(v14 + 16) = 0;
            qfree(v15, v6);
            v11 = v20;
          }
          ++v13;
        }
        while ( v12 != v13 );
      }
      *(_QWORD *)&v21 = 0;
      qfree(v11, v6);
    }
  }
  else
  {
    return 3;
  }
  return v10;
}
