__int64 __fastcall sub_79CB20(__int64 a1, __int64 a2, __int64 a3, char *a4, unsigned __int64 a5, __int64 *a6)
{
  __int64 v7; // r13
  char *v8; // rdi
  char *v9; // rdi
  char *v10; // r13
  unsigned int v11; // r15d
  char *v12; // rdi
  __int64 v13; // r12
  __int64 v14; // rbx
  __int64 v15; // rax
  const char *v16; // rax
  const char *v17; // rbx
  size_t v18; // rax
  size_t v19; // r13
  int v21; // r12d
  char *v22; // rdi
  size_t v23; // r12
  void *v24; // rdi
  __int64 v25; // rax
  void *v26; // [rsp+0h] [rbp-170h]
  unsigned __int64 v27; // [rsp+8h] [rbp-168h]
  void *ptr; // [rsp+30h] [rbp-140h] BYREF
  __int128 v32; // [rsp+38h] [rbp-138h]
  _QWORD v33[20]; // [rsp+50h] [rbp-120h] BYREF
  char v34[8]; // [rsp+F0h] [rbp-80h] BYREF
  __int64 v35[2]; // [rsp+F8h] [rbp-78h]
  __int64 v36; // [rsp+108h] [rbp-68h]
  char v37[8]; // [rsp+110h] [rbp-60h] BYREF
  __int128 v38; // [rsp+118h] [rbp-58h]
  __int64 v39; // [rsp+128h] [rbp-48h]
  unsigned __int64 v40; // [rsp+138h] [rbp-38h]

  v40 = __readfsqword(0x28u);
  v34[0] = 2;
  v36 = 0;
  *(_OWORD *)v35 = 0;
  if ( a3 || !a2 )
  {
    if ( (unsigned int)get_idcv_attr(v34, a2, a3, 0) )
      goto LABEL_20;
  }
  else
  {
    copy_idcv(v34);
  }
  if ( deref_idcv(v34, 2) )
  {
    if ( v34[0] == 6 )
    {
      ptr = nullptr;
      v32 = 0;
      if ( a2 )
      {
        v27 = a5 + 1;
        if ( a5 == -1 )
        {
          copy_idcv(0);
          v26 = nullptr;
          v10 = (char *)&qword_20;
        }
        else
        {
          v37[0] = 2;
          v39 = 0;
          v38 = 0;
          ptr = (void *)qvector_reserve(&ptr, 0, v27, 32);
          v7 = v32;
          v8 = (char *)ptr;
          if ( (unsigned __int64)v32 < v27 )
          {
            while ( 1 )
            {
              v9 = &v8[32 * v7];
              *v9 = 2;
              *((_QWORD *)v9 + 3) = 0;
              *(_OWORD *)(v9 + 8) = 0;
              copy_idcv(v9);
              if ( a5 == v7 )
                break;
              v8 = (char *)ptr;
              ++v7;
            }
          }
          *(_QWORD *)&v32 = a5 + 1;
          free_idcv(v37);
          v26 = ptr;
          v10 = (char *)ptr + 32;
          copy_idcv(ptr);
          if ( !a5 )
          {
            LODWORD(v27) = 1;
            goto LABEL_14;
          }
        }
        v21 = 0;
        do
        {
          v22 = v10;
          a4 += 32;
          v10 += 32;
          copy_idcv(v22);
          ++v21;
        }
        while ( v21 < a5 );
      }
      else
      {
        LODWORD(v27) = a5;
        v26 = a4;
      }
LABEL_14:
      sub_7977F0((__int64)v33, 0, 0);
      v11 = sub_79BFB0(v33, nullptr, v35[0], v27, (__int64)v26, a1, a6);
      sub_797950((__int64)v33);
      v12 = (char *)ptr;
      if ( ptr )
      {
        v13 = v32;
        if ( (_QWORD)v32 )
        {
          v14 = 0;
          do
          {
            v15 = v14++;
            free_idcv(&v12[32 * v15]);
            v12 = (char *)ptr;
          }
          while ( v13 != v14 );
        }
        *(_QWORD *)&v32 = 0;
        qfree(v12);
      }
      goto LABEL_25;
    }
    set_qerrno(1541);
  }
LABEL_20:
  sub_799220(a1);
  if ( a6 )
  {
    v16 = (const char *)qstrerror(0xFFFFFFFFLL);
    v17 = v16;
    if ( v16 && (v18 = strlen(v16), (v19 = v18) != 0) )
    {
      v23 = v18 + 1;
      v24 = (void *)*a6;
      if ( a6[2] < v18 + 1 )
      {
        v25 = qvector_reserve(a6, *a6, v23, 1);
        *a6 = v25;
        v24 = (void *)v25;
      }
      a6[1] = v23;
      memmove(v24, v17, v19);
      *(_BYTE *)(*a6 + v19) = 0;
    }
    else
    {
      a6[1] = 0;
    }
  }
  v11 = 0;
LABEL_25:
  free_idcv(v34);
  return v11;
}
