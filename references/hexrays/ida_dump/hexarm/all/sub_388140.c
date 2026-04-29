const char *__fastcall sub_388140(__int64 *a1, const char **a2, _DWORD *a3, _QWORD *a4)
{
  __int64 v7; // rdi
  const char *result; // rax
  char *v10; // rax
  _QWORD *v11; // rsi
  char v12; // bl
  char tinfo_property; // al
  int v14; // ebp
  const char *v15; // rbx
  size_t v16; // rax
  void *v17; // r8
  size_t v18; // r9
  size_t v19; // rax
  const char *v20; // r8
  size_t v21; // rbp
  char *v22; // rax
  __int64 v23; // rdx
  void *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rax
  const char *v27; // rsi
  __int64 v28; // rax
  const char *dest; // [rsp+0h] [rbp-68h]
  const char *desta; // [rsp+0h] [rbp-68h]
  _BYTE *destc; // [rsp+0h] [rbp-68h]
  void *destd; // [rsp+0h] [rbp-68h]
  void *destb; // [rsp+0h] [rbp-68h]
  const char *v34; // [rsp+8h] [rbp-60h]
  size_t v35; // [rsp+8h] [rbp-60h]
  __int64 v36; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v37[9]; // [rsp+20h] [rbp-48h] BYREF

  v7 = *a4;
  v37[1] = __readfsqword(0x28u);
  if ( (get_tinfo_property(v7, 2) & 0xF) != 0xA )
    goto LABEL_2;
  v11 = a4;
  v12 = 0;
  v36 = 0;
  copy_tinfo_t(&v36, v11);
  do
  {
    if ( !(_BYTE)v36 )
    {
      v14 = 0;
      goto LABEL_10;
    }
    tinfo_property = get_tinfo_property(v36, 2);
    v37[0] = 0;
    v12 |= (tinfo_property & 0xF) == 11;
    v37[0] = get_tinfo_property(v36, 13);
    copy_tinfo_t(&v36, v37);
    clear_tinfo_t(v37);
  }
  while ( (get_tinfo_property(v36, 2) & 0xF) != 0xC );
  if ( *a2 && (desta = *a2, v19 = strlen(*a2), v20 = desta, (v21 = v19) != 0) )
  {
    v24 = (void *)*a1;
    v25 = v19 + 1;
    if ( a1[2] < v19 + 1 )
    {
      destd = (void *)(v19 + 1);
      v34 = v20;
      v26 = qvector_reserve(a1, *a1, v25, 1);
      v20 = v34;
      v25 = (__int64)destd;
      *a1 = v26;
      v24 = (void *)v26;
    }
    a1[1] = v25;
    memmove(v24, v20, v21);
    *(_BYTE *)(*a1 + v21) = 0;
  }
  else
  {
    a1[1] = 0;
  }
  if ( *a1 )
  {
    v22 = sub_385730((const char *)*a1);
    if ( v22 )
      *v22 = 0;
  }
  v14 = sub_386F90((__int64)a1);
  *a2 = (const char *)*a1;
LABEL_10:
  if ( v12 )
  {
    v15 = *a2;
    dest = (const char *)*a1;
    if ( *a2 != (const char *)*a1 )
    {
      if ( v15 && (v16 = strlen(v15), v17 = (void *)dest, (v18 = v16) != 0) )
      {
        v23 = v16 + 1;
        if ( a1[2] < v16 + 1 )
        {
          v27 = dest;
          v35 = v16;
          destb = (void *)(v16 + 1);
          v28 = qvector_reserve(a1, v27, v23, 1);
          v18 = v35;
          v23 = (__int64)destb;
          *a1 = v28;
          v17 = (void *)v28;
        }
        a1[1] = v23;
        destc = (_BYTE *)v18;
        memmove(v17, v15, v18);
        destc[*a1] = 0;
      }
      else
      {
        a1[1] = 0;
      }
    }
    v14 += sub_386F90((__int64)a1);
  }
  clear_tinfo_t(&v36);
  if ( a3 )
    *a3 = v14;
  if ( (unsigned __int64)a1[1] > 1 )
  {
    result = (const char *)*a1;
    *a2 = (const char *)*a1;
  }
  else
  {
LABEL_2:
    result = *a2;
  }
  if ( result )
  {
    v10 = sub_385730(result);
    return &v10[-(v10 == nullptr) + 1];
  }
  return result;
}
