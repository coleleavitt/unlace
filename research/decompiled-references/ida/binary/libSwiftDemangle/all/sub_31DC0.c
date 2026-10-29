__int64 __fastcall sub_31DC0(char *a1, unsigned __int64 a2, _QWORD *a3)
{
  char *v4; // r13
  unsigned __int64 v5; // r12
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rax
  char *v9; // rbx
  int v10; // r14d
  int v11; // r9d
  int v12; // r8d
  int v13; // edi
  int v14; // esi
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  char *v19; // r12
  char *v20; // r13
  int *v21; // rdx
  int v22; // eax
  _BYTE *v23; // rsi
  _DWORD *v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rcx
  unsigned __int64 v27; // r9
  int v28; // r10d
  int v29; // r8d
  int v30; // edx
  int v31; // eax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // r15
  int v35; // edx
  int v36; // ecx
  _DWORD *v37; // r8
  __int64 v38; // rdi
  int v39; // eax
  int *v40; // [rsp+0h] [rbp-58h]
  _DWORD *v41; // [rsp+0h] [rbp-58h]
  int v42; // [rsp+Ch] [rbp-4Ch]
  int v43; // [rsp+10h] [rbp-48h] BYREF
  int v44; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v45; // [rsp+18h] [rbp-40h]

  v4 = a1;
  v5 = a2;
  v45 = __readfsqword(0x28u);
  if ( a3[1] != *a3 )
    a3[1] = *a3;
  v7 = a2;
  std::vector<unsigned int>::reserve((__int64)a3, a2);
  v43 = 128;
  while ( 1 )
  {
    if ( !v7 )
      goto LABEL_7;
    v8 = v7 - 1;
    if ( a1[v7 - 1] == 95 )
      break;
    --v7;
  }
  if ( v7 == 1 )
    goto LABEL_22;
  if ( v8 > a2 )
    v8 = a2;
  v19 = &a1[v8];
  if ( &a1[v8] == a1 )
  {
LABEL_22:
    v4 = &a1[v7];
    v5 = a2 - v7;
LABEL_7:
    if ( v5 )
    {
      v9 = v4;
      v10 = 72;
      v11 = 0;
      v12 = 0;
      v13 = 36;
      v14 = 1;
      while ( 1 )
      {
        v17 = *v9;
        --v5;
        if ( (unsigned __int8)(*v9 - 97) > 0x19u )
        {
          if ( (unsigned __int8)(*v9 - 65) > 9u )
            return 0;
          v15 = v17 - 39;
          if ( (0x7FFFFFFF - v12) / v14 < v15 )
            return 0;
        }
        else
        {
          v15 = v17 - 97;
          if ( (0x7FFFFFFF - v12) / v14 < v15 )
            return 0;
        }
        v12 += v14 * v15;
        v16 = 1;
        if ( v10 < v13 )
        {
          v16 = v13 - v10;
          if ( v10 + 26 <= v13 )
            v16 = 26;
        }
        if ( v16 > v15 )
        {
          v24 = (_DWORD *)a3[1];
          v25 = *a3;
          v26 = ((__int64)v24 - *a3) >> 2;
          if ( v11 )
          {
            v39 = v12 - v11;
            v27 = v12;
            v28 = v39 / 2;
          }
          else
          {
            v27 = v12;
            v28 = v12 / 700;
          }
          v29 = 0;
          v30 = v28 + v28 / ((int)v26 + 1);
          if ( v30 > 455 )
          {
            do
            {
              v29 += 36;
              v31 = v30;
              v30 /= 35;
            }
            while ( v31 > 15959 );
          }
          v32 = v26 + 1;
          v10 = 36 * v30 / (v30 + 38) + v29;
          v33 = v27 / v32;
          v34 = v27 % v32;
          v35 = v43;
          if ( v27 / v32 > (unsigned int)(0x7FFFFFFF - v43) )
            return 0;
          v36 = v43 + v33;
          v43 += v33;
          if ( (unsigned int)(v35 + v33) <= 0x7F )
            return 0;
          v37 = (_DWORD *)(v25 + 4LL * (int)v34);
          if ( v24 == (_DWORD *)a3[2] )
          {
            std::vector<unsigned int>::_M_realloc_insert<unsigned int const&>(
              (__int64)a3,
              (_BYTE *)(v25 + 4LL * (int)v34),
              &v43);
          }
          else if ( v24 == v37 )
          {
            *v24 = v36;
            a3[1] += 4LL;
          }
          else
          {
            *v24 = *(v24 - 1);
            v38 = a3[1];
            a3[1] = v38 + 4;
            if ( v37 != (_DWORD *)(v38 - 4) )
            {
              v42 = v36;
              v41 = v37;
              memmove(v37 + 1, v37, v38 - 4 - (_QWORD)v37);
              v36 = v42;
              v37 = v41;
            }
            *v37 = v36;
          }
          v12 = v34 + 1;
          if ( !v5 )
            return 1;
          v11 = v34 + 1;
          v13 = 36;
          v14 = 1;
        }
        else
        {
          if ( 0x7FFFFFFF / (36 - v16) < v14 )
            return 0;
          v14 *= 36 - v16;
          v13 += 36;
          if ( !v5 )
            return 0;
        }
        ++v9;
      }
    }
    return 1;
  }
  v20 = a1;
  v21 = &v44;
  while ( 1 )
  {
    v22 = *v20;
    if ( *v20 < 0 )
      return 0;
    v44 = *v20;
    v23 = (_BYTE *)a3[1];
    if ( v23 == (_BYTE *)a3[2] )
    {
      v40 = v21;
      std::vector<unsigned int>::_M_realloc_insert<unsigned int>((__int64)a3, v23, v21);
      v21 = v40;
    }
    else
    {
      *(_DWORD *)v23 = v22;
      a3[1] += 4LL;
    }
    if ( v19 == ++v20 )
      goto LABEL_22;
  }
}

