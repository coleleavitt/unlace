char **__fastcall sub_7C1DC0(__int64 *a1, _BYTE *a2, unsigned __int64 a3, char a4, unsigned __int64 a5, int a6)
{
  _BYTE *v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  _BYTE *v12; // r8
  _BYTE *v13; // r15
  int v14; // r13d
  char v15; // r10
  int v16; // eax
  __int64 v17; // r9
  unsigned __int64 v18; // rdx
  _BYTE *v19; // rsi
  __int64 v21; // rax
  _BYTE *v22; // r15
  unsigned __int64 v23; // rcx
  void *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rdi
  void *v28; // r13
  void *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  _BYTE *v32; // [rsp+8h] [rbp-100h]
  unsigned __int64 v33; // [rsp+20h] [rbp-E8h]
  void **v34; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v35; // [rsp+30h] [rbp-D8h]
  __int64 v36; // [rsp+38h] [rbp-D0h]
  int v37; // [rsp+48h] [rbp-C0h]
  char v39; // [rsp+5Ah] [rbp-AEh]
  void *src; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v42; // [rsp+68h] [rbp-A0h]
  void *ptr; // [rsp+80h] [rbp-88h] BYREF
  __int128 v44; // [rsp+88h] [rbp-80h]
  char v45; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v46; // [rsp+C8h] [rbp-40h]

  v37 = (int)a2;
  v46 = __readfsqword(0x28u);
  if ( a3 > 0x1000 && a4 )
  {
    v25 = a1[1];
    v26 = *a1;
    if ( a1[2] < (unsigned __int64)(v25 + 1) )
    {
      v30 = qvector_reserve(a1, v26, v25 + 1, 24);
      v25 = a1[1];
      *a1 = v30;
      v26 = v30;
    }
    v27 = v26 + 24 * v25;
    *(_QWORD *)v27 = 0;
    *(_OWORD *)(v27 + 8) = 0;
    ++a1[1];
    return sub_35A790((char **)v27);
  }
  else
  {
    v7 = a2;
    v33 = (unsigned __int64)&a2[a3];
    if ( a2 < &a2[a3] )
    {
      do
      {
        v8 = a1[1];
        v9 = *a1;
        if ( a1[2] < (unsigned __int64)(v8 + 1) )
        {
          v21 = qvector_reserve(a1, v9, v8 + 1, 24);
          v8 = a1[1];
          *a1 = v21;
          v9 = v21;
        }
        v10 = v9 + 24 * v8;
        *(_OWORD *)(v10 + 8) = 0;
        v11 = v33 - (_QWORD)v7;
        *(_QWORD *)v10 = 0;
        v34 = (void **)v10;
        ++a1[1];
        if ( v33 - (unsigned __int64)v7 > a5 )
          v11 = a5;
        qsnprintf((unsigned int)&v45, 32, (unsigned int)"%04X..%04X", (_DWORD)v7 - v37, (_DWORD)v7 - v37 + v11, a6);
        if ( a4 )
        {
          src = nullptr;
          v12 = v7 + 1;
          ptr = nullptr;
          v42 = 0;
          v44 = 0;
          if ( v11 )
            goto LABEL_10;
        }
        else
        {
          v12 = v7 + 1;
          v22 = v7 + 1;
          if ( (unsigned __int64)(v7 + 1) < v33 )
          {
            do
            {
              if ( *v22 != *v7 )
              {
                v23 = v22 - v7;
                goto LABEL_32;
              }
              ++v22;
            }
            while ( (_BYTE *)v33 != v22 );
            v23 = v33 - (_QWORD)v7;
LABEL_32:
            src = nullptr;
            ptr = nullptr;
            v42 = 0;
            v44 = 0;
            if ( v23 > 0x63 )
            {
              sub_35A910((__int64 *)&src);
              if ( v34 != &src )
              {
                v24 = (void *)v42;
                if ( (unsigned __int64)v42 > 1 )
                {
                  v28 = src;
                  v29 = *v34;
                  if ( (unsigned __int64)v34[2] < (unsigned __int64)v42 )
                  {
                    v31 = qvector_reserve(v34, *v34, v42, 1);
                    *v34 = (void *)v31;
                    v29 = (void *)v31;
                  }
                  v34[1] = v24;
                  memmove(v29, v28, (size_t)v24 - 1);
                  *((_BYTE *)v24 + (_QWORD)*v34 - 1) = 0;
                }
                else
                {
                  v34[1] = nullptr;
                }
              }
              v7 = v22;
              goto LABEL_21;
            }
          }
          else
          {
            src = nullptr;
            ptr = nullptr;
            v42 = 0;
            v44 = 0;
          }
          if ( v11 )
          {
LABEL_10:
            v13 = v12;
            do
            {
              v14 = (unsigned __int8)*(v13 - 1);
              v32 = v13;
              sub_35A910((__int64 *)&src);
              v15 = 46;
              if ( (v14 & 0x80u) == 0 )
              {
                v16 = isprint(v14);
                v15 = 46;
                if ( v16 )
                  v15 = v14;
              }
              v17 = v44;
              v18 = 2;
              if ( (_QWORD)v44 )
              {
                v18 = v44 + 1;
                v17 = v44 - 1;
              }
              v19 = ptr;
              if ( *((_QWORD *)&v44 + 1) < v18 )
              {
                v36 = v17;
                v39 = v15;
                v35 = v18;
                ptr = (void *)qvector_reserve(&ptr, ptr, v18, 1);
                v17 = v36;
                v19 = ptr;
                v15 = v39;
                v18 = v35;
              }
              *(_QWORD *)&v44 = v18;
              ++v13;
              v19[v17] = v15;
              *((_BYTE *)ptr + v17 + 1) = 0;
            }
            while ( v13 - v7 - 1 < v11 );
            v7 = v32;
          }
        }
        sub_35A790((char **)v34);
LABEL_21:
        if ( ptr )
        {
          *(_QWORD *)&v44 = 0;
          qfree(ptr);
        }
        if ( src )
        {
          *(_QWORD *)&v42 = 0;
          qfree(src);
        }
      }
      while ( (unsigned __int64)v7 < v33 );
    }
    return (char **)(v46 - __readfsqword(0x28u));
  }
}
