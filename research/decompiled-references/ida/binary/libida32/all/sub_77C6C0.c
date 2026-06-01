__int64 __fastcall sub_77C6C0(__int64 a1, __int64 a2, __int64 a3, char *a4, unsigned __int64 a5, __int64 *a6)
{
  __int64 v6; // r12
  __int64 v8; // r13
  char *v9; // rdi
  char *v10; // rdi
  char *v11; // r13
  unsigned int v12; // r15d
  char *v13; // rdi
  __int64 v14; // r12
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  const char *v19; // rax
  const char *v20; // rbx
  size_t v21; // rax
  size_t v22; // r13
  int v24; // r12d
  char *v25; // rdi
  size_t v26; // r12
  void *v27; // rdi
  __int64 v28; // rax
  void *v29; // [rsp+0h] [rbp-170h]
  unsigned __int64 v30; // [rsp+8h] [rbp-168h]
  void *ptr; // [rsp+30h] [rbp-140h] BYREF
  __int128 v35; // [rsp+38h] [rbp-138h]
  _QWORD v36[20]; // [rsp+50h] [rbp-120h] BYREF
  char v37[8]; // [rsp+F0h] [rbp-80h] BYREF
  __int64 v38[2]; // [rsp+F8h] [rbp-78h]
  __int64 v39; // [rsp+108h] [rbp-68h]
  char v40[8]; // [rsp+110h] [rbp-60h] BYREF
  __int128 v41; // [rsp+118h] [rbp-58h]
  __int64 v42; // [rsp+128h] [rbp-48h]
  unsigned __int64 v43; // [rsp+138h] [rbp-38h]

  v6 = a2;
  v43 = __readfsqword(0x28u);
  v37[0] = 2;
  v39 = 0;
  *(_OWORD *)v38 = 0;
  if ( a3 || !a2 )
  {
    if ( (unsigned int)get_idcv_attr() )
      goto LABEL_20;
  }
  else
  {
    copy_idcv(v37);
  }
  a2 = 2;
  if ( deref_idcv(v37, 2) )
  {
    if ( v37[0] == 6 )
    {
      ptr = nullptr;
      v35 = 0;
      if ( v6 )
      {
        v30 = a5 + 1;
        if ( a5 == -1 )
        {
          copy_idcv(0);
          v29 = nullptr;
          v11 = (char *)&qword_20;
        }
        else
        {
          v40[0] = 2;
          v42 = 0;
          v41 = 0;
          ptr = (void *)qvector_reserve(&ptr, 0, v30, 32);
          v8 = v35;
          v9 = (char *)ptr;
          if ( (unsigned __int64)v35 < v30 )
          {
            while ( 1 )
            {
              v10 = &v9[32 * v8];
              *v10 = 2;
              *((_QWORD *)v10 + 3) = 0;
              *(_OWORD *)(v10 + 8) = 0;
              copy_idcv(v10);
              if ( a5 == v8 )
                break;
              v9 = (char *)ptr;
              ++v8;
            }
          }
          *(_QWORD *)&v35 = a5 + 1;
          free_idcv(v40);
          v29 = ptr;
          v11 = (char *)ptr + 32;
          copy_idcv(ptr);
          if ( !a5 )
          {
            LODWORD(v30) = 1;
            goto LABEL_14;
          }
        }
        v24 = 0;
        do
        {
          v25 = v11;
          a4 += 32;
          v11 += 32;
          copy_idcv(v25);
          ++v24;
        }
        while ( v24 < a5 );
      }
      else
      {
        LODWORD(v30) = a5;
        v29 = a4;
      }
LABEL_14:
      sub_7773B0((__int64)v36, 0, 0);
      v12 = sub_77BB40(v36, nullptr, v38[0], v30, (__int64)v29, a1, (__int64)a6);
      sub_777510((__int64)v36);
      v13 = (char *)ptr;
      if ( ptr )
      {
        v14 = v35;
        if ( (_QWORD)v35 )
        {
          v15 = 0;
          do
          {
            v16 = v15++;
            free_idcv(&v13[32 * v16]);
            v13 = (char *)ptr;
          }
          while ( v14 != v15 );
        }
        *(_QWORD *)&v35 = 0;
        qfree(v13);
      }
      goto LABEL_25;
    }
    set_qerrno(1541, 2);
  }
LABEL_20:
  sub_778DE0(a1);
  if ( a6 )
  {
    v19 = (const char *)qstrerror(0xFFFFFFFFLL, a2, v17, v18);
    v20 = v19;
    if ( v19 && (v21 = strlen(v19), (v22 = v21) != 0) )
    {
      v26 = v21 + 1;
      v27 = (void *)*a6;
      if ( a6[2] < v21 + 1 )
      {
        v28 = qvector_reserve(a6, *a6, v26, 1);
        *a6 = v28;
        v27 = (void *)v28;
      }
      a6[1] = v26;
      memmove(v27, v20, v22);
      *(_BYTE *)(*a6 + v22) = 0;
    }
    else
    {
      a6[1] = 0;
    }
  }
  v12 = 0;
LABEL_25:
  free_idcv(v37);
  return v12;
}

