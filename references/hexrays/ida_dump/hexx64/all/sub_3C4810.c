__int64 __fastcall sub_3C4810(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  _QWORD *v4; // rbp
  unsigned __int64 i; // rbx
  size_t v6; // rax
  size_t v7; // r8
  void *v8; // rdx
  void *v9; // rdi
  char *v10; // r9
  const char *v11; // rsi
  __int64 v12; // rax
  char *src; // [rsp+8h] [rbp-C0h]
  void *srcb; // [rsp+8h] [rbp-C0h]
  void *srca; // [rsp+8h] [rbp-C0h]
  char *v17; // [rsp+10h] [rbp-B8h]
  size_t v18; // [rsp+18h] [rbp-B0h]
  char *s; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v20; // [rsp+28h] [rbp-A0h]
  char v21[8]; // [rsp+40h] [rbp-88h] BYREF
  void *dest[3]; // [rsp+48h] [rbp-80h] BYREF
  _BYTE v23[40]; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v24; // [rsp+88h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v21[0] = 2;
  memset(dest, 0, sizeof(dest));
  free_idcv(v21);
  v21[0] = 7;
  memset(dest, 0, sizeof(dest));
  idcv_object(a2, 0);
  v4 = (_QWORD *)sub_2581E0(a1, 0, v3);
  for ( i = 0; i < v4[1]; ++i )
  {
    v11 = s1;
    s = nullptr;
    v20 = 0;
    v12 = *v4 + 32 * i;
    if ( *(_QWORD *)(v12 + 8) )
      v11 = *(const char **)v12;
    tag_remove(&s, v11, 0);
    if ( (_QWORD)v20 && s && (src = s, v6 = strlen(s), (v7 = v6) != 0) )
    {
      v8 = (void *)(v6 + 1);
      v9 = dest[0];
      v10 = src;
      if ( dest[2] < (void *)(v6 + 1) )
      {
        v18 = v6;
        v17 = src;
        srca = (void *)(v6 + 1);
        dest[0] = (void *)qvector_reserve(dest, dest[0], v8, 1);
        v7 = v18;
        v9 = dest[0];
        v10 = v17;
        v8 = srca;
      }
      dest[1] = v8;
      srcb = (void *)v7;
      memmove(v9, v10, v7);
      *((_BYTE *)dest[0] + (unsigned __int64)srcb) = 0;
    }
    else
    {
      dest[1] = nullptr;
    }
    qsnprintf(v23, 32, "%zu", i);
    set_idcv_attr(a2, v23, v21, 0);
    if ( s )
    {
      *(_QWORD *)&v20 = 0;
      qfree(s);
    }
  }
  free_idcv(v21);
  return 0;
}
