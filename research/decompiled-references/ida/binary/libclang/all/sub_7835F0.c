size_t __fastcall sub_7835F0(__int64 a1, const void *a2, size_t a3)
{
  _QWORD *v4; // rax
  char *v5; // r13
  char *v6; // rdx
  size_t result; // rax

  v4 = (_QWORD *)sub_798D40(a1);
  v5 = (char *)v4[274];
  v4[284] += a3 + 1;
  v6 = &v5[a3 + 1];
  if ( v4[275] >= (unsigned __int64)v6 && v5 )
    v4[274] = v6;
  else
    v5 = (char *)sub_779030((__int64)(v4 + 274), a3 + 1, 0);
  memcpy(v5, a2, a3);
  v5[a3] = 0;
  result = strlen(v5);
  *(_QWORD *)(a1 + 56) = v5;
  *(_QWORD *)(a1 + 64) = result;
  return result;
}

