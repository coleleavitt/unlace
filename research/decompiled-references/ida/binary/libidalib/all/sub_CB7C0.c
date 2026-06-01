void __fastcall sub_CB7C0(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  unsigned __int64 v5; // r12
  size_t v6; // r8
  __int64 v7; // r15
  size_t v8; // r9
  __int64 v9; // rsi
  __int64 v10; // r12
  unsigned __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  size_t v16; // [rsp+0h] [rbp-48h]
  size_t v17; // [rsp+8h] [rbp-40h]

  if ( a2[1] )
  {
    v3 = 0;
    while ( 1 )
    {
      v4 = *a2 + 24 * v3;
      v5 = *(_QWORD *)(v4 + 8);
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v5 != 1 )
        {
          v7 = a1[1];
          v8 = v5 - 1;
          if ( v7 )
          {
            --v7;
            v8 = v6 + v7;
            v5 += v7;
          }
          v9 = *a1;
          if ( a1[2] < v5 )
          {
            v17 = v8;
            v16 = v6;
            v15 = qvector_reserve();
            v8 = v17;
            v6 = v16;
            *a1 = v15;
            v9 = v15;
          }
          a1[1] = v5;
          *(_BYTE *)(v9 + v8) = 0;
          memcpy((void *)(v7 + *a1), *(const void **)v4, v6);
        }
      }
      if ( (unsigned __int64)++v3 >= a2[1] )
        return;
      v10 = a1[1];
      if ( v10 )
      {
        v11 = v10 + 1;
        v12 = a1[1];
        v13 = *a1;
        --v10;
        if ( a1[2] >= v11 )
          goto LABEL_13;
      }
      else
      {
        v13 = *a1;
        v12 = 1;
        v11 = 2;
        if ( (unsigned __int64)a1[2] >= 2 )
          goto LABEL_13;
      }
      v14 = qvector_reserve();
      *a1 = v14;
      v13 = v14;
LABEL_13:
      a1[1] = v11;
      *(_BYTE *)(v13 + v10) = 59;
      *(_BYTE *)(*a1 + v12) = 0;
    }
  }
}

