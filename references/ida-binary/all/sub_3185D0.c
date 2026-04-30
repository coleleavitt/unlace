__int64 __fastcall sub_3185D0(__int64 a1, const char *a2)
{
  __int64 v2; // rbx
  const char *v3; // r14
  size_t v4; // rax
  size_t v5; // r12
  size_t v7; // r15
  char v8[8]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v9[24]; // [rsp+28h] [rbp-A0h] BYREF
  _BYTE v10[24]; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 v11; // [rsp+58h] [rbp-70h]
  const char *v12; // [rsp+68h] [rbp-60h]

  v12 = a2;
  v11 = __readfsqword(0x28u);
  v2 = add_idc_gvar("ARGV");
  free_idcv(v2);
  idcv_object(v2, 0);
  v8[0] = 2;
  memset(v9, 0, sizeof(v9));
  free_idcv(v8);
  v8[0] = 2;
  *(_QWORD *)v9 = 1;
  set_idcv_attr(v2, "count", v8, 0);
  qsnprintf(v10, 20, "%d", 0);
  v3 = v12;
  free_idcv(v8);
  if ( v3 )
  {
    v4 = strlen(v3);
    v8[0] = 7;
    memset(v9, 0, sizeof(v9));
    v5 = v4;
    if ( v4 )
    {
      v7 = v4 + 1;
      *(_QWORD *)v9 = qvector_reserve(v9, 0, v4 + 1, 1);
      *(_QWORD *)&v9[8] = v7;
      memmove(*(void **)v9, v3, v5);
      *(_BYTE *)(*(_QWORD *)v9 + v5) = 0;
    }
  }
  else
  {
    v8[0] = 7;
    memset(v9, 0, sizeof(v9));
  }
  set_idcv_attr(v2, v10, v8, 0);
  free_idcv(v8);
  return v2;
}
