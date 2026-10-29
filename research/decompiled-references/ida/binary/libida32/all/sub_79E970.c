char **__fastcall sub_79E970(__int64 *a1, _BYTE *a2, unsigned __int64 a3, char a4, unsigned __int64 a5, int a6)
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
  char v32; // [rsp+0h] [rbp-108h]
  _BYTE *v33; // [rsp+8h] [rbp-100h]
  unsigned __int64 v34; // [rsp+20h] [rbp-E8h]
  void **v35; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v36; // [rsp+30h] [rbp-D8h]
  __int64 v37; // [rsp+38h] [rbp-D0h]
  int v38; // [rsp+48h] [rbp-C0h]
  char v40; // [rsp+5Ah] [rbp-AEh]
  void *src; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v43; // [rsp+68h] [rbp-A0h]
  void *ptr; // [rsp+80h] [rbp-88h] BYREF
  __int128 v45; // [rsp+88h] [rbp-80h]
  char v46; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v47; // [rsp+C8h] [rbp-40h]

  v38 = (int)a2;
  v47 = __readfsqword(0x28u);
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
    return sub_3573A0((char **)v27);
  }
  else
  {
    v7 = a2;
    v34 = (unsigned __int64)&a2[a3];
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
        v11 = v34 - (_QWORD)v7;
        *(_QWORD *)v10 = 0;
        v35 = (void **)v10;
        ++a1[1];
        if ( v34 - (unsigned __int64)v7 > a5 )
          v11 = a5;
        qsnprintf((int)&v46, 32, (int)"%04X..%04X", (_DWORD)v7 - v38, (_DWORD)v7 - v38 + v11, a6, v32);
        if ( a4 )
        {
          src = nullptr;
          v12 = v7 + 1;
          ptr = nullptr;
          v43 = 0;
          v45 = 0;
          if ( v11 )
            goto LABEL_10;
        }
        else
        {
          v12 = v7 + 1;
          v22 = v7 + 1;
          if ( (unsigned __int64)(v7 + 1) < v34 )
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
            while ( (_BYTE *)v34 != v22 );
            v23 = v34 - (_QWORD)v7;
LABEL_32:
            src = nullptr;
            ptr = nullptr;
            v43 = 0;
            v45 = 0;
            if ( v23 > 0x63 )
            {
              sub_357520((__int64 *)&src);
              if ( v35 != &src )
              {
                v24 = (void *)v43;
                if ( (unsigned __int64)v43 > 1 )
                {
                  v28 = src;
                  v29 = *v35;
                  if ( (unsigned __int64)v35[2] < (unsigned __int64)v43 )
                  {
                    v31 = qvector_reserve(v35, *v35, v43, 1);
                    *v35 = (void *)v31;
                    v29 = (void *)v31;
                  }
                  v35[1] = v24;
                  memmove(v29, v28, (size_t)v24 - 1);
                  *((_BYTE *)v24 + (_QWORD)*v35 - 1) = 0;
                }
                else
                {
                  v35[1] = nullptr;
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
            v43 = 0;
            v45 = 0;
          }
          if ( v11 )
          {
LABEL_10:
            v13 = v12;
            do
            {
              v14 = (unsigned __int8)*(v13 - 1);
              v33 = v13;
              sub_357520((__int64 *)&src);
              v15 = 46;
              if ( (v14 & 0x80u) == 0 )
              {
                v16 = isprint(v14);
                v15 = 46;
                if ( v16 )
                  v15 = v14;
              }
              v17 = v45;
              v18 = 2;
              if ( (_QWORD)v45 )
              {
                v18 = v45 + 1;
                v17 = v45 - 1;
              }
              v19 = ptr;
              if ( *((_QWORD *)&v45 + 1) < v18 )
              {
                v37 = v17;
                v40 = v15;
                v36 = v18;
                ptr = (void *)qvector_reserve(&ptr, ptr, v18, 1);
                v17 = v37;
                v19 = ptr;
                v15 = v40;
                v18 = v36;
              }
              *(_QWORD *)&v45 = v18;
              ++v13;
              v19[v17] = v15;
              *((_BYTE *)ptr + v17 + 1) = 0;
            }
            while ( v13 - v7 - 1 < v11 );
            v7 = v33;
          }
        }
        sub_3573A0((char **)v35);
LABEL_21:
        if ( ptr )
        {
          *(_QWORD *)&v45 = 0;
          qfree(ptr);
        }
        if ( src )
        {
          *(_QWORD *)&v43 = 0;
          qfree(src);
        }
      }
      while ( (unsigned __int64)v7 < v34 );
    }
    return (char **)(v47 - __readfsqword(0x28u));
  }
}

