__int64 __fastcall sub_1F340(__int64 a1, __int64 a2)
{
  void **p_ptr; // rsi
  bool v5; // zf
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // r12d
  char *v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // r14
  char *v12; // rax
  void *v13; // rdi
  __int64 v15; // rax
  unsigned int v16; // eax
  int v17; // r8d
  int v18; // r9d
  char *v19; // rdi
  char *v20; // r12
  char *v21; // r15
  const char *v22; // rcx
  char v23; // al
  int v24; // eax
  int v25; // r8d
  int v26; // r9d
  int v27; // ecx
  __int64 v28; // r13
  __int64 v29; // r12
  char *v30; // rdx
  char *v31; // rax
  void *v32; // rdi
  __int64 v33; // rbx
  __int64 v34; // r15
  char *v35; // rdx
  char *v36; // rax
  void *v37; // rdi
  char v38; // [rsp+0h] [rbp-4D0h]
  void *ptr; // [rsp+30h] [rbp-4A0h] BYREF
  __int128 v40; // [rsp+38h] [rbp-498h]
  void *v41; // [rsp+50h] [rbp-480h] BYREF
  __int128 v42; // [rsp+58h] [rbp-478h]
  _BYTE v43[32]; // [rsp+70h] [rbp-460h] BYREF
  char v44[1032]; // [rsp+90h] [rbp-440h] BYREF
  unsigned __int64 v45; // [rsp+498h] [rbp-38h]

  v45 = __readfsqword(0x28u);
  p_ptr = nullptr;
  v5 = *(_BYTE *)(a1 + 211) == 0;
  ptr = nullptr;
  v40 = 0;
  if ( v5 )
    p_ptr = &ptr;
  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 28LL);
  if ( v6 <= 0x2E )
  {
    if ( v6 > 3 )
    {
      switch ( v6 )
      {
        case 4u:
          v7 = (*(__int64 (__fastcall **)(_QWORD, void **, __int64, _QWORD))(**(_QWORD **)(a1 + 24) + 288LL))(
                 *(_QWORD *)(a1 + 24),
                 p_ptr,
                 a2,
                 *(unsigned int *)(a1 + 204));
          goto LABEL_7;
        case 0xAu:
          v7 = (*(__int64 (__fastcall **)(_QWORD, void **, __int64, _QWORD))(**(_QWORD **)(a1 + 24) + 296LL))(
                 *(_QWORD *)(a1 + 24),
                 p_ptr,
                 a2,
                 *(unsigned int *)(a1 + 204));
          goto LABEL_7;
        case 0xBu:
          v7 = (*(__int64 (__fastcall **)(_QWORD, void **, __int64, _QWORD))(**(_QWORD **)(a1 + 24) + 384LL))(
                 *(_QWORD *)(a1 + 24),
                 p_ptr,
                 a2,
                 *(unsigned __int8 *)(a1 + 209));
          goto LABEL_7;
        case 0x1Cu:
          v15 = *(_QWORD *)(a1 + 24);
          v41 = nullptr;
          v42 = 0;
          v16 = (*(__int64 (__fastcall **)(__int64, void **, void **, __int64, __int64, _QWORD))(*(_QWORD *)v15 + 208LL))(
                  v15,
                  &ptr,
                  &v41,
                  a2,
                  4294967293LL,
                  *(unsigned int *)(a1 + 180));
          v19 = (char *)v41;
          v8 = v16;
          if ( !v16 )
          {
            v20 = (char *)v41 + 80 * v42;
            if ( v20 != v41 )
            {
              v21 = (char *)v41;
              do
              {
                if ( *((_DWORD *)v21 + 16) )
                {
                  sub_65BE0(v43, 32, "%F %T", *((_QWORD *)v21 + 6));
                  v23 = sub_64080((unsigned __int8)v21[72]);
                  v24 = sub_9A810(
                          (unsigned int)v44,
                          1025,
                          (unsigned int)"%s %12llu CL%d/%-4s %s#%d",
                          (unsigned int)v43,
                          *((_QWORD *)v21 + 5),
                          *((_DWORD *)v21 + 17),
                          v23);
                  v27 = *((_DWORD *)v21 + 16);
                  if ( *((_DWORD *)v21 + 15) != v27 )
                    sub_9A810((unsigned int)&v44[v24], 1025 - v24, (unsigned int)"/%d UNSYNCED", v27, v25, v26, v38);
                }
                else
                {
                  v22 = haystack;
                  if ( *((_QWORD *)v21 + 1) )
                    v22 = *(const char **)v21;
                  sub_9A810(
                    (unsigned int)v44,
                    1025,
                    (unsigned int)"                     <subdir>              %s",
                    (_DWORD)v22,
                    v17,
                    v18,
                    v38);
                }
                sub_19CE0(a1, (__int64)"%s\n", v44);
                v21 += 80;
              }
              while ( v20 != v21 );
              v19 = (char *)v41;
            }
            if ( v19 )
            {
              v28 = v42;
              if ( (_QWORD)v42 )
              {
                v29 = 0;
                v30 = v19;
                do
                {
                  v31 = &v30[80 * v29];
                  v32 = *(void **)v31;
                  if ( *(_QWORD *)v31 )
                  {
                    *((_QWORD *)v31 + 1) = 0;
                    j__free(v32);
                    v30 = (char *)v41;
                  }
                  ++v29;
                }
                while ( v28 != v29 );
                v19 = v30;
              }
              *(_QWORD *)&v42 = 0;
              j__free(v19);
            }
            goto LABEL_29;
          }
          if ( v41 )
          {
            if ( (_QWORD)v42 )
            {
              v33 = 0;
              v34 = v42;
              v35 = (char *)v41;
              do
              {
                v36 = &v35[80 * v33];
                v37 = *(void **)v36;
                if ( *(_QWORD *)v36 )
                {
                  *((_QWORD *)v36 + 1) = 0;
                  j__free(v37);
                  v35 = (char *)v41;
                }
                ++v33;
              }
              while ( v34 != v33 );
              v19 = v35;
            }
            *(_QWORD *)&v42 = 0;
            j__free(v19);
          }
          break;
        case 0x20u:
          v8 = (*(__int64 (__fastcall **)(_QWORD, void **, _QWORD, __int64, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 448LL))(
                 *(_QWORD *)(a1 + 24),
                 p_ptr,
                 *(_QWORD *)(a1 + 32),
                 a2,
                 *(unsigned int *)(a1 + 204),
                 *(unsigned __int8 *)(a1 + 212),
                 0);
          if ( !v8 )
            goto LABEL_29;
          goto LABEL_8;
        case 0x2Bu:
          v7 = (*(__int64 (__fastcall **)(_QWORD, void **, __int64, _QWORD))(**(_QWORD **)(a1 + 24) + 328LL))(
                 *(_QWORD *)(a1 + 24),
                 p_ptr,
                 a2,
                 *(unsigned int *)(a1 + 192));
          goto LABEL_7;
        case 0x2Eu:
          v7 = (*(__int64 (__fastcall **)(_QWORD, void **, __int64, _QWORD))(**(_QWORD **)(a1 + 24) + 256LL))(
                 *(_QWORD *)(a1 + 24),
                 p_ptr,
                 a2,
                 *(unsigned int *)(a1 + 204));
          goto LABEL_7;
        default:
          goto LABEL_43;
      }
      goto LABEL_8;
    }
LABEL_43:
    if ( !byte_1671A1 )
      sub_96F80(2652);
    BUG();
  }
  if ( v6 != 72 )
    goto LABEL_43;
  v7 = (*(__int64 (__fastcall **)(_QWORD, void **, __int64, _QWORD))(**(_QWORD **)(a1 + 24) + 392LL))(
         *(_QWORD *)(a1 + 24),
         p_ptr,
         a2,
         *(unsigned __int8 *)(a1 + 208));
LABEL_7:
  v8 = v7;
  if ( !v7 )
  {
LABEL_29:
    sub_1A410(a1, (unsigned int **)&ptr);
    v8 = 0;
  }
LABEL_8:
  v9 = (char *)ptr;
  if ( ptr )
  {
    if ( (_QWORD)v40 )
    {
      v10 = 0;
      v11 = v40;
      do
      {
        v12 = &v9[32 * v10];
        v13 = *((void **)v12 + 1);
        if ( v13 )
        {
          *((_QWORD *)v12 + 2) = 0;
          j__free(v13);
          v9 = (char *)ptr;
        }
        ++v10;
      }
      while ( v11 != v10 );
    }
    *(_QWORD *)&v40 = 0;
    j__free(v9);
  }
  return v8;
}

