__int64 __fastcall sub_716DB0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rax
  int v6; // r13d
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // r13d
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  _BOOL4 v12; // r13d
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbp
  int v16; // r13d
  __int64 *v17; // r15
  __int64 result; // rax
  __int64 v19; // r13
  __int64 v20; // rbp
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rsi
  char v23; // dl
  int v24; // r14d
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  int v29; // ebp
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // r14d
  unsigned __int64 v33; // r14
  __int64 v34; // rax
  unsigned __int64 v35; // r14
  unsigned __int64 v36; // rcx
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  int v40; // r14d
  __int64 v41; // rdx
  __int64 v42; // r8
  unsigned __int64 v43; // r14
  unsigned __int64 v44; // rcx
  __int64 v45; // rax
  unsigned __int64 v46; // r14
  __int64 v47; // [rsp+8h] [rbp-40h]
  __int64 v48; // [rsp+8h] [rbp-40h]

  v5 = *(unsigned int *)(a1 + 8);
  v6 = *(_DWORD *)(a3 + 64) & 0xFFFFF;
  if ( *(unsigned int *)(a1 + 12) < (unsigned __int64)(v5 + 1) )
  {
    sub_25D6060(a1, a1 + 16, v5 + 1, 4);
    v5 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v5) = v6;
  v7 = *(unsigned int *)(a1 + 12);
  v8 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v8;
  v9 = *(_WORD *)(a3 + 66) >> 4;
  if ( v7 < v8 + 1 )
  {
    sub_25D6060(a1, a1 + 16, v8 + 1, 4);
    v8 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v8) = v9;
  v10 = *(unsigned int *)(a1 + 12);
  v11 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v11;
  v12 = (*(_BYTE *)(a3 + 80) & 2) != 0;
  if ( v10 < v11 + 1 )
  {
    sub_25D6060(a1, a1 + 16, v11 + 1, 4);
    v11 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v11) = v12;
  v13 = *(unsigned int *)(a1 + 12);
  v14 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v14;
  v15 = *(_QWORD *)(a3 + 56);
  v16 = *(_DWORD *)(v15 + 20) & 0x1FFFFFFF;
  if ( v13 < v14 + 1 )
  {
    sub_25D6060(a1, a1 + 16, v14 + 1, 4);
    v14 = *(unsigned int *)(a1 + 8);
  }
  v17 = (__int64 *)(v15 + 24);
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v14) = v16;
  result = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = result;
  v19 = v15 + (unsigned int)(8 * *(_DWORD *)(v15 + 20)) + 24;
  if ( 8 * *(_DWORD *)(v15 + 20) )
  {
    while ( 1 )
    {
      v20 = *v17;
      v21 = *(unsigned int *)(a1 + 12);
      v22 = result + 1;
      v23 = *(_BYTE *)(*v17 + 28) & 0x7F;
      if ( v23 == 65 )
      {
        if ( v21 < v22 )
        {
          v22 = a1 + 16;
          sub_25D6060(a1, a1 + 16, result + 1, 4);
          result = *(unsigned int *)(a1 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a1 + 4 * result) = 0;
        ++*(_DWORD *)(a1 + 8);
        v24 = (unsigned __int8)sub_7D53F0(v20, v22);
        v25 = *(unsigned int *)(a1 + 8);
        if ( *(unsigned int *)(a1 + 12) < (unsigned __int64)(v25 + 1) )
        {
          sub_25D6060(a1, a1 + 16, v25 + 1, 4);
          v25 = *(unsigned int *)(a1 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a1 + 4 * v25) = v24;
        v26 = *(unsigned int *)(a1 + 12);
        result = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
        *(_DWORD *)(a1 + 8) = result;
        v27 = result + 1;
        if ( (*(_BYTE *)(v20 + 60) & 8) != 0 )
        {
          if ( v26 < v27 )
          {
            sub_25D6060(a1, a1 + 16, v27, 4);
            result = *(unsigned int *)(a1 + 8);
          }
          *(_DWORD *)(*(_QWORD *)a1 + 4 * result) = 1;
          v28 = *(unsigned int *)(a1 + 12);
          result = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
          *(_DWORD *)(a1 + 8) = result;
          v29 = *(_DWORD *)(v20 + 64);
          if ( v28 < result + 1 )
          {
            sub_25D6060(a1, a1 + 16, result + 1, 4);
            result = *(unsigned int *)(a1 + 8);
          }
          *(_DWORD *)(*(_QWORD *)a1 + 4 * result) = v29;
          ++*(_DWORD *)(a1 + 8);
          goto LABEL_21;
        }
      }
      else
      {
        if ( v23 != 45 )
        {
          if ( v21 < v22 )
          {
            sub_25D6060(a1, a1 + 16, v22, 4);
            result = *(unsigned int *)(a1 + 8);
          }
          *(_DWORD *)(*(_QWORD *)a1 + 4 * result) = 2;
          ++*(_DWORD *)(a1 + 8);
          result = sub_716DB0(a1, a2, v20);
          goto LABEL_21;
        }
        if ( v21 < v22 )
        {
          sub_25D6060(a1, a1 + 16, v22, 4);
          result = *(unsigned int *)(a1 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a1 + 4 * result) = 1;
        v30 = *(unsigned int *)(a1 + 12);
        v31 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
        *(_DWORD *)(a1 + 8) = v31;
        v32 = *(unsigned __int8 *)(v20 + 80);
        if ( v30 < v31 + 1 )
        {
          sub_25D6060(a1, a1 + 16, v31 + 1, 4);
          v31 = *(unsigned int *)(a1 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a1 + 4 * v31) = v32;
        ++*(_DWORD *)(a1 + 8);
        v33 = sub_716C70(
                a2,
                *(_QWORD *)&byte_8[*(_QWORD *)(v20 + 48) & 0xFFFFFFFFFFFFFFF0LL] | *(_QWORD *)(v20 + 48) & 7LL);
        v34 = *(unsigned int *)(a1 + 8);
        if ( *(unsigned int *)(a1 + 12) < (unsigned __int64)(v34 + 1) )
        {
          sub_25D6060(a1, a1 + 16, v34 + 1, 4);
          v34 = *(unsigned int *)(a1 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a1 + 4 * v34) = v33;
        v35 = HIDWORD(v33);
        v36 = *(unsigned int *)(a1 + 12);
        v37 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
        *(_DWORD *)(a1 + 8) = v37;
        if ( v36 < v37 + 1 )
        {
          sub_25D6060(a1, a1 + 16, v37 + 1, 4);
          v37 = *(unsigned int *)(a1 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a1 + 4 * v37) = v35;
        v26 = *(unsigned int *)(a1 + 12);
        result = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
        *(_DWORD *)(a1 + 8) = result;
        v27 = result + 1;
        if ( *(_BYTE *)(v20 + 81) )
        {
          if ( v26 < v27 )
          {
            sub_25D6060(a1, a1 + 16, v27, 4);
            result = *(unsigned int *)(a1 + 8);
          }
          *(_DWORD *)(*(_QWORD *)a1 + 4 * result) = 1;
          v38 = *(unsigned int *)(a1 + 12);
          v39 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
          *(_DWORD *)(a1 + 8) = v39;
          v40 = *(_DWORD *)(v20 + 84);
          if ( v38 < v39 + 1 )
          {
            sub_25D6060(a1, a1 + 16, v39 + 1, 4);
            v39 = *(unsigned int *)(a1 + 8);
          }
          *(_DWORD *)(*(_QWORD *)a1 + 4 * v39) = v40;
          result = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
          *(_DWORD *)(a1 + 8) = result;
          v41 = *(unsigned int *)(v20 + 84);
          if ( (_DWORD)v41 )
          {
            v42 = v20 + 16 * v41;
            do
            {
              while ( 1 )
              {
                v46 = *(_QWORD *)&byte_8[*(_QWORD *)(v20 + 88) & 0xFFFFFFFFFFFFFFF0LL] | *(_QWORD *)(v20 + 88) & 7LL;
                if ( *(unsigned int *)(a1 + 12) < (unsigned __int64)(result + 1) )
                {
                  v47 = v42;
                  sub_25D6060(a1, a1 + 16, result + 1, 4);
                  result = *(unsigned int *)(a1 + 8);
                  v42 = v47;
                }
                *(_DWORD *)(*(_QWORD *)a1 + 4 * result) = v46;
                v43 = HIDWORD(v46);
                v44 = *(unsigned int *)(a1 + 12);
                v45 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
                *(_DWORD *)(a1 + 8) = v45;
                if ( v44 < v45 + 1 )
                  break;
                v20 += 16;
                *(_DWORD *)(*(_QWORD *)a1 + 4 * v45) = v43;
                result = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
                *(_DWORD *)(a1 + 8) = result;
                if ( v20 == v42 )
                  goto LABEL_21;
              }
              v20 += 16;
              v48 = v42;
              sub_25D6060(a1, a1 + 16, v45 + 1, 4);
              v42 = v48;
              *(_DWORD *)(*(_QWORD *)a1 + 4LL * *(unsigned int *)(a1 + 8)) = v43;
              result = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
              *(_DWORD *)(a1 + 8) = result;
            }
            while ( v48 != v20 );
          }
LABEL_21:
          if ( (__int64 *)v19 == ++v17 )
            return result;
          goto LABEL_22;
        }
      }
      if ( v26 < v27 )
      {
        sub_25D6060(a1, a1 + 16, v27, 4);
        result = *(unsigned int *)(a1 + 8);
      }
      ++v17;
      *(_DWORD *)(*(_QWORD *)a1 + 4 * result) = 0;
      ++*(_DWORD *)(a1 + 8);
      if ( (__int64 *)v19 == v17 )
        return result;
LABEL_22:
      result = *(unsigned int *)(a1 + 8);
    }
  }
  return result;
}

