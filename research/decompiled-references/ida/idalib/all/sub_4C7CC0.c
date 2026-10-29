char *__fastcall sub_4C7CC0(__int64 a1, const char *a2, _QWORD *a3)
{
  char *v4; // rax
  char *v5; // rbx
  _BYTE *v6; // rcx
  char *v7; // rax
  __int64 v9; // [rsp+8h] [rbp-440h] BYREF
  _BYTE dest[1032]; // [rsp+10h] [rbp-438h] BYREF
  unsigned __int64 v11; // [rsp+418h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v4 = strrchr(a2, 95);
  if ( !v4 )
    return nullptr;
  v5 = v4;
  v6 = dest;
  if ( a2 == v4 )
  {
    v7 = dest;
  }
  else
  {
    v6 = memcpy(dest, a2, v4 - a2);
    v7 = &v5[v6 - a2];
  }
  *v7 = 0;
  if ( (unsigned int)atos(&v9, v6) != 2 )
    return nullptr;
  *a3 = sub_510110(a1, v9);
  return v5 + 1;
}
