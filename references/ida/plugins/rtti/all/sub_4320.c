unsigned __int64 __fastcall sub_4320(__int64 *a1, __int64 a2, char a3)
{
  __int64 *v3; // r12
  __int64 v4; // rbx
  __int16 *v5; // rbp
  char v6; // al
  char v7; // al
  __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  __int64 v10; // r13
  __int64 v11; // rsi
  size_t v12; // rax
  __int64 v13; // rbx
  size_t v14; // r13
  size_t v15; // r14
  __int64 v16; // rsi
  unsigned __int64 v17; // r15
  __int64 v19; // rbp
  char v20; // bl
  unsigned __int64 v21; // r13
  __int64 v22; // r14
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rbp
  unsigned __int64 v26; // r13
  __int64 v27; // r14
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  char v32; // [rsp+1h] [rbp-59h] BYREF
  __int16 v33; // [rsp+12h] [rbp-48h] BYREF
  unsigned __int64 v34; // [rsp+1Ah] [rbp-40h]

  v3 = a1;
  v34 = __readfsqword(0x28u);
  v4 = a2;
  if ( a2 < 0 )
  {
    if ( !a3 )
    {
      v4 = (unsigned int)a2;
      goto LABEL_4;
    }
    v25 = a1[1];
    if ( v25 )
    {
      v26 = v25 + 1;
      v27 = a1[1];
      --v25;
    }
    else
    {
      v26 = 2;
      v27 = 1;
    }
    v28 = *a1;
    if ( a1[2] < v26 )
    {
      v31 = qvector_reserve();
      *a1 = v31;
      v28 = v31;
    }
    a1[1] = v26;
    v4 = -v4;
    *(_BYTE *)(v28 + v27) = 0;
    *(_BYTE *)(*a1 + v25) = 63;
    if ( v4 > 10 )
    {
LABEL_4:
      v5 = &v33;
      v33 = 64;
      while ( 1 )
      {
        v6 = v4;
        v5 = (__int16 *)((char *)v5 - 1);
        v4 >>= 4;
        v7 = v6 & 0xF;
        if ( v5 == (__int16 *)&v32 )
          break;
        *(_BYTE *)v5 = v7 + 65;
        if ( !v4 )
        {
          v12 = strlen((const char *)v5);
          v13 = a1[1];
          v14 = v12;
          v15 = v12;
          if ( v13 )
          {
            --v13;
            v16 = *a1;
            v15 = v12 + v13;
            v17 = v12 + v13 + 1;
            if ( a1[2] >= v17 )
              goto LABEL_18;
          }
          else
          {
            v16 = *a1;
            v17 = v12 + 1;
            if ( a1[2] >= v12 + 1 )
            {
LABEL_18:
              a1[1] = v17;
              *(_BYTE *)(v16 + v15) = 0;
              memcpy((void *)(v13 + *a1), v5, v14);
              return v34 - __readfsqword(0x28u);
            }
          }
          v24 = qvector_reserve();
          *a1 = v24;
          v16 = v24;
          goto LABEL_18;
        }
      }
      if ( under_debugger )
        BUG();
      a1 = (_QWORD *)(&loc_7730 + 2);
      interr();
      goto LABEL_9;
    }
  }
  else
  {
    if ( !a2 )
    {
LABEL_9:
      v8 = a1[1];
      if ( v8 )
      {
        v10 = v8 + 1;
        v9 = v8 + 2;
        --v8;
      }
      else
      {
        v9 = 3;
        v10 = 2;
      }
      v11 = *v3;
      if ( v3[2] < v9 )
      {
        v29 = qvector_reserve();
        *v3 = v29;
        v11 = v29;
      }
      v3[1] = v9;
      *(_BYTE *)(v11 + v10) = 0;
      *(_WORD *)(*v3 + v8) = 16449;
      return v34 - __readfsqword(0x28u);
    }
    if ( a2 > 10 )
      goto LABEL_4;
  }
  v19 = a1[1];
  v20 = v4 + 47;
  if ( v19 )
  {
    v21 = v19 + 1;
    v22 = a1[1];
    --v19;
  }
  else
  {
    v22 = 1;
    v21 = 2;
  }
  v23 = *a1;
  if ( a1[2] < v21 )
  {
    v30 = qvector_reserve();
    *a1 = v30;
    v23 = v30;
  }
  a1[1] = v21;
  *(_BYTE *)(v23 + v19) = v20;
  *(_BYTE *)(*a1 + v22) = 0;
  return v34 - __readfsqword(0x28u);
}
