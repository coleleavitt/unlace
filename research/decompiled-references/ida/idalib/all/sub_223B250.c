__int64 __fastcall sub_223B250(__int64 *a1, __int64 a2)
{
  __int64 v3; // r13
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  char *v7; // rsi
  __int64 v8; // rdx
  unsigned int v9; // ebp
  __int64 v10; // rax
  unsigned int *v11; // rcx
  char *v13; // rsi
  __int64 v14; // rdx
  unsigned __int16 v15; // bp
  __int64 v16; // rax
  unsigned __int16 *v17; // rcx
  unsigned __int8 v18; // bp
  __int64 v19; // rdx
  char *v20; // rax
  __int64 v21; // rcx
  unsigned __int8 *v22; // rsi
  char *v23; // rsi
  __int64 v24; // rdx
  unsigned __int64 v25; // rbp
  __int64 v26; // rax
  unsigned __int64 *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // r14
  __int64 v31; // r13
  __int64 *v32; // rcx
  __int64 v33; // r14
  __int64 v34; // rax
  __int64 v35; // r15
  __int64 v36; // r14
  __int64 v37; // r13
  int *v38; // rcx
  __int64 v39; // r14
  __int64 v40; // rax
  __int64 v41; // r15
  __int64 v42; // r14
  __int64 v43; // r13
  __int16 *v44; // rcx
  __int64 v45; // r14
  __int64 v46; // [rsp+0h] [rbp-58h]
  __int64 v47; // [rsp+0h] [rbp-58h]
  __int64 v48; // [rsp+0h] [rbp-58h]
  __int64 *v49; // [rsp+8h] [rbp-50h]
  int *v50; // [rsp+8h] [rbp-50h]
  __int16 *v51; // [rsp+8h] [rbp-50h]
  _QWORD v52[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = *a1;
  v4 = (_QWORD *)a1[1];
  v5 = *(_QWORD *)(*a1 + 8);
  v6 = *(_QWORD *)(*a1 + 16) - v5;
  if ( v6 > 0xFF )
  {
    if ( v6 > 0xFFFF )
    {
      if ( v6 <= 0xFFFFFFFF )
      {
        if ( v4 )
        {
          v7 = (char *)*v4;
          v8 = (__int64)(v4[1] - *v4) >> 2;
        }
        else
        {
          v34 = operator new(0x18u);
          v35 = *(_QWORD *)(v3 + 8);
          v36 = *(_QWORD *)(v3 + 16);
          *(_OWORD *)v34 = 0;
          v37 = 0;
          v38 = (int *)v52;
          *(_QWORD *)(v34 + 16) = 0;
          v39 = v36 - v35;
          if ( !v39 )
          {
            a1[1] = v34;
            v7 = nullptr;
            return (unsigned int)(((char *)v4 - v7) >> 2) + 1;
          }
          do
          {
            if ( *(_BYTE *)(v35 + v37) == 10 )
            {
              LODWORD(v52[0]) = v37;
              if ( *(_QWORD **)(v34 + 16) == v4 )
              {
                v50 = v38;
                v47 = v34;
                sub_ECFD20(v34, v4, v38);
                v34 = v47;
                v38 = v50;
                v4 = *(_QWORD **)(v47 + 8);
              }
              else
              {
                *(_DWORD *)v4 = v37;
                v4 = (_QWORD *)((char *)v4 + 4);
                *(_QWORD *)(v34 + 8) = v4;
              }
            }
            ++v37;
          }
          while ( v39 != v37 );
          v7 = *(char **)v34;
          a1[1] = v34;
          v5 = *(_QWORD *)(*a1 + 8);
          v8 = ((char *)v4 - v7) >> 2;
        }
        v9 = a2 - v5;
        v4 = v7;
        if ( v8 > 0 )
        {
          do
          {
            while ( 1 )
            {
              v10 = v8 >> 1;
              v11 = (unsigned int *)v4 + (v8 >> 1);
              if ( v9 <= *v11 )
                break;
              v4 = v11 + 1;
              v8 = v8 - v10 - 1;
              if ( v8 <= 0 )
                return (unsigned int)(((char *)v4 - v7) >> 2) + 1;
            }
            v8 >>= 1;
          }
          while ( v10 );
        }
        return (unsigned int)(((char *)v4 - v7) >> 2) + 1;
      }
      if ( v4 )
      {
        v23 = (char *)*v4;
        v24 = (__int64)(v4[1] - *v4) >> 3;
      }
      else
      {
        v28 = operator new(0x18u);
        v29 = *(_QWORD *)(v3 + 8);
        v30 = *(_QWORD *)(v3 + 16);
        *(_OWORD *)v28 = 0;
        v31 = 0;
        v32 = v52;
        *(_QWORD *)(v28 + 16) = 0;
        v33 = v30 - v29;
        if ( !v33 )
        {
          a1[1] = v28;
          v23 = nullptr;
          return (unsigned int)(((char *)v4 - v23) >> 3) + 1;
        }
        do
        {
          if ( *(_BYTE *)(v29 + v31) == 10 )
          {
            v52[0] = v31;
            if ( *(_QWORD **)(v28 + 16) == v4 )
            {
              v49 = v32;
              v46 = v28;
              sub_1418840(v28, v4, v32);
              v28 = v46;
              v32 = v49;
              v4 = *(_QWORD **)(v46 + 8);
            }
            else
            {
              *v4++ = v31;
              *(_QWORD *)(v28 + 8) = v4;
            }
          }
          ++v31;
        }
        while ( v33 != v31 );
        v23 = *(char **)v28;
        a1[1] = v28;
        v5 = *(_QWORD *)(*a1 + 8);
        v24 = ((char *)v4 - v23) >> 3;
      }
      v25 = a2 - v5;
      v4 = v23;
      if ( v24 > 0 )
      {
        do
        {
          while ( 1 )
          {
            v26 = v24 >> 1;
            v27 = &v4[v24 >> 1];
            if ( v25 <= *v27 )
              break;
            v4 = v27 + 1;
            v24 = v24 - v26 - 1;
            if ( v24 <= 0 )
              return (unsigned int)(((char *)v4 - v23) >> 3) + 1;
          }
          v24 >>= 1;
        }
        while ( v26 );
      }
      return (unsigned int)(((char *)v4 - v23) >> 3) + 1;
    }
    if ( v4 )
    {
      v13 = (char *)*v4;
      v14 = (__int64)(v4[1] - *v4) >> 1;
    }
    else
    {
      v40 = operator new(0x18u);
      v41 = *(_QWORD *)(v3 + 8);
      v42 = *(_QWORD *)(v3 + 16);
      *(_OWORD *)v40 = 0;
      v43 = 0;
      v44 = (__int16 *)v52;
      *(_QWORD *)(v40 + 16) = 0;
      v45 = v42 - v41;
      if ( !v45 )
      {
        a1[1] = v40;
        v13 = nullptr;
        return (unsigned int)(((char *)v4 - v13) >> 1) + 1;
      }
      do
      {
        if ( *(_BYTE *)(v41 + v43) == 10 )
        {
          LOWORD(v52[0]) = v43;
          if ( *(_QWORD **)(v40 + 16) == v4 )
          {
            v51 = v44;
            v48 = v40;
            sub_F95230(v40, v4, v44);
            v40 = v48;
            v44 = v51;
            v4 = *(_QWORD **)(v48 + 8);
          }
          else
          {
            *(_WORD *)v4 = v43;
            v4 = (_QWORD *)((char *)v4 + 2);
            *(_QWORD *)(v40 + 8) = v4;
          }
        }
        ++v43;
      }
      while ( v45 != v43 );
      v13 = *(char **)v40;
      a1[1] = v40;
      v5 = *(_QWORD *)(*a1 + 8);
      v14 = ((char *)v4 - v13) >> 1;
    }
    v15 = a2 - v5;
    v4 = v13;
    if ( v14 > 0 )
    {
      do
      {
        while ( 1 )
        {
          v16 = v14 >> 1;
          v17 = (unsigned __int16 *)v4 + (v14 >> 1);
          if ( v15 <= *v17 )
            break;
          v4 = v17 + 1;
          v14 = v14 - v16 - 1;
          if ( v14 <= 0 )
            return (unsigned int)(((char *)v4 - v13) >> 1) + 1;
        }
        v14 >>= 1;
      }
      while ( v16 );
    }
    return (unsigned int)(((char *)v4 - v13) >> 1) + 1;
  }
  if ( !v4 )
  {
    v4 = (_QWORD *)sub_2237500(a1 + 1, v3);
    v5 = *(_QWORD *)(*a1 + 8);
  }
  v18 = a2 - v5;
  v19 = v4[1] - *v4;
  v20 = (char *)*v4;
  if ( v19 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v21 = v19 >> 1;
        v22 = (unsigned __int8 *)&v20[v19 >> 1];
        if ( v18 <= *v22 )
          break;
        v20 = (char *)(v22 + 1);
        v19 = v19 - v21 - 1;
        if ( v19 <= 0 )
          return (unsigned int)v20 - (unsigned int)*v4 + 1;
      }
      v19 >>= 1;
    }
    while ( v21 );
  }
  return (unsigned int)v20 - (unsigned int)*v4 + 1;
}
