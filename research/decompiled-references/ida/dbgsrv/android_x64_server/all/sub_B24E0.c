/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B24E0
// Address: 0x00000000000B24E0

//----- (00000000000B24E0) ----------------------------------------------------
void *__fastcall sub_B24E0(_DWORD *a1, int a2, __int64 a3)
{
  __int64 v3; // r14
  int v4; // ebx
  int v5; // r12d
  _BYTE *v6; // rbp
  char *v7; // rbp
  FILE *v8; // r14
  void *v9; // rbp
  void *v10; // rax
  void *v11; // rbp
  void *v12; // rax
  void *v13; // rcx
  char *v14; // rdx
  _BYTE *v15; // rbp
  void *v16; // rax
  void *v17; // rdi
  char *v18; // rdx
  char *v19; // rax
  void *v20; // rcx
  char *v21; // rdx
  char *v22; // rax
  void *v23; // rdx
  void *v24; // rbx
  void *v25; // rax
  const char *errdesc; // rax
  void *v28; // [rsp+8h] [rbp-90h] BYREF
  _DWORD *v29; // [rsp+10h] [rbp-88h]
  __int64 v30; // [rsp+18h] [rbp-80h]
  void *ptr[4]; // [rsp+20h] [rbp-78h] BYREF
  void *v32[11]; // [rsp+40h] [rbp-58h] BYREF

  v29 = a1;
  v32[4] = (void *)__readfsqword(0x28u);
  memset(v32, 0, 24);
  if ( a2 > 0 )
  {
    v3 = a3;
    v4 = a2;
    v5 = 0;
    v30 = a3;
    do
    {
      v6 = *(_BYTE **)(v3 + 8LL * v5);
      if ( !v6 )
        break;
      if ( *v6 == 64 )
      {
        v7 = v6 + 1;
        v8 = qfopen(v7, (__int64)"r");
        if ( !v8 )
        {
          errdesc = (const char *)get_errdesc(v7, 0xFFFFFFFF);
          sub_3A5C0("indirect file %s", errdesc);
        }
        memset(ptr, 0, 24);
        while ( qgetline(ptr, v8) >= 0 )
        {
          if ( (__int64)qcleanline((__int64)ptr, 59, 3) > 0 )
          {
            v9 = ptr[1];
            if ( ptr[2] > ptr[1] )
            {
              if ( ptr[1] )
              {
                if ( ptr[0] )
                {
                  v10 = qrealloc(ptr[0], (signed __int64)ptr[1]);
                  if ( v10 )
                  {
                    ptr[0] = v10;
                    ptr[2] = v9;
                  }
                }
              }
            }
            v11 = ptr[0];
            memset(ptr, 0, 24);
            v28 = v11;
            v12 = v32[0];
            v13 = v32[1];
            v14 = (char *)v32[1] + 1;
            if ( v32[0] > &v28 || (char *)v32[0] + 8 * (__int64)v32[2] <= (char *)&v28 )
            {
              if ( v32[2] < v14 )
              {
                v12 = qvector_reserve((__int64)v32, (char *)v32[0], (unsigned __int64)v14, 8u);
                v32[0] = v12;
                v13 = v32[1];
                v11 = v28;
              }
            }
            else if ( v32[2] < v14 )
            {
              v12 = qvector_reserve((__int64)v32, (char *)v32[0], (unsigned __int64)v14, 8u);
              v32[0] = v12;
              v13 = v32[1];
            }
            *((_QWORD *)v12 + (_QWORD)v13) = v11;
            ++v32[1];
          }
        }
        qfclose(v8);
        v3 = v30;
        v4 = a2;
        if ( ptr[0] )
        {
          ptr[1] = nullptr;
          qfree(ptr[0]);
          ptr[0] = nullptr;
          ptr[2] = nullptr;
        }
      }
      else
      {
        v15 = qstrdup(*(const char **)(v3 + 8LL * v5));
        ptr[0] = v15;
        v16 = v32[0];
        v17 = v32[1];
        v18 = (char *)v32[1] + 1;
        if ( v32[0] > ptr || (char *)v32[0] + 8 * (__int64)v32[2] <= (char *)ptr )
        {
          if ( v32[2] < v18 )
          {
            v16 = qvector_reserve((__int64)v32, (char *)v32[0], (unsigned __int64)v18, 8u);
            v32[0] = v16;
            v17 = v32[1];
            v15 = ptr[0];
          }
        }
        else if ( v32[2] < v18 )
        {
          v16 = qvector_reserve((__int64)v32, (char *)v32[0], (unsigned __int64)v18, 8u);
          v32[0] = v16;
          v17 = v32[1];
        }
        *((_QWORD *)v16 + (_QWORD)v17) = v15;
        ++v32[1];
      }
      ++v5;
    }
    while ( v5 < v4 );
  }
  if ( v29 )
    *v29 = v32[1];
  ptr[0] = nullptr;
  v19 = (char *)v32[0];
  v20 = v32[1];
  v21 = (char *)v32[1] + 1;
  if ( v32[0] > ptr || (char *)v32[0] + 8 * (__int64)v32[2] <= (char *)ptr )
  {
    if ( v32[2] >= v21 )
    {
      v23 = nullptr;
    }
    else
    {
      v19 = (char *)qvector_reserve((__int64)v32, (char *)v32[0], (unsigned __int64)v21, 8u);
      v32[0] = v19;
      v20 = v32[1];
      v23 = ptr[0];
    }
    v22 = &v19[8 * (_QWORD)v20];
  }
  else
  {
    if ( v32[2] < v21 )
    {
      v19 = (char *)qvector_reserve((__int64)v32, (char *)v32[0], (unsigned __int64)v21, 8u);
      v32[0] = v19;
      v20 = v32[1];
    }
    v22 = &v19[8 * (_QWORD)v20];
    v23 = nullptr;
  }
  *(_QWORD *)v22 = v23;
  v24 = (char *)v32[1] + 1;
  v32[1] = v24;
  if ( v32[2] > v24 )
  {
    if ( v24 )
    {
      if ( v32[0] )
      {
        v25 = qrealloc(v32[0], 8LL * (_QWORD)v24);
        if ( v25 )
        {
          v32[0] = v25;
          v32[2] = v24;
        }
      }
    }
  }
  *(_OWORD *)&v32[1] = 0;
  return v32[0];
}
