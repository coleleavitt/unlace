__int64 __fastcall sub_2B72F0(const void **a1, unsigned __int64 a2, _QWORD *a3, __int64 *a4)
{
  __int64 v6; // rbp
  __int64 v7; // rbp
  void **v9; // rcx
  void *v10; // r15
  void *v11; // rdi
  void *v12; // r15
  void *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  void *v16; // [rsp+0h] [rbp-88h] BYREF
  void *v17; // [rsp+8h] [rbp-80h] BYREF
  void *src; // [rsp+10h] [rbp-78h] BYREF
  __int128 v19; // [rsp+18h] [rbp-70h]
  void *v20; // [rsp+28h] [rbp-60h] BYREF
  __int128 v21; // [rsp+30h] [rbp-58h]
  unsigned __int64 v22; // [rsp+48h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v19 = 0;
  v21 = 0;
  src = nullptr;
  v20 = nullptr;
  sub_2B7020(a1, a2, &src);
  sub_2B7020(a1, a2, &v20);
  if ( a4 )
  {
    v6 = v19;
    if ( (unsigned __int64)v19 > 1 )
    {
      v10 = src;
      v11 = (void *)*a4;
      if ( a4[2] < (unsigned __int64)v19 )
      {
        v15 = qvector_reserve(a4, *a4, v19, 1);
        *a4 = v15;
        v11 = (void *)v15;
      }
      a4[1] = v6;
      memmove(v11, v10, v6 - 1);
      *(_BYTE *)(*a4 + v6 - 1) = 0;
    }
    else
    {
      a4[1] = 0;
    }
    v7 = v21;
    if ( (unsigned __int64)v21 > 1 )
    {
      v12 = v20;
      v13 = (void *)a4[3];
      if ( a4[5] < (unsigned __int64)v21 )
      {
        v14 = qvector_reserve(a4 + 3, a4[3], v21, 1);
        a4[3] = v14;
        v13 = (void *)v14;
      }
      a4[4] = v7;
      memmove(v13, v12, v7 - 1);
      *(_BYTE *)(a4[3] + v7 - 1) = 0;
    }
    else
    {
      a4[4] = 0;
    }
  }
  if ( (unsigned __int64)v19 <= 1 )
    goto LABEL_7;
  v9 = (void **)v20;
  v16 = src;
  v17 = v20;
  if ( v20 )
    v9 = &v17;
  if ( (unsigned __int8)deserialize_tinfo(a3, 0, &v16, v9, 0, 0) )
    LOBYTE(a4) = (unsigned int)verify_tinfo(*a3) == 0;
  else
LABEL_7:
    LODWORD(a4) = 0;
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20);
  }
  if ( src )
  {
    *(_QWORD *)&v19 = 0;
    qfree(src);
  }
  return (unsigned int)a4;
}
