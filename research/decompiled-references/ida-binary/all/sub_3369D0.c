__int64 __fastcall sub_3369D0(__int64 a1, char a2)
{
  int v2; // ebp
  __int64 custom_data_type; // rax
  __int64 v4; // rbx
  const char *v5; // rdi
  __int64 v6; // rax
  unsigned int v7; // ebx
  const char *v9; // [rsp+0h] [rbp-88h] BYREF
  __int128 v10; // [rsp+8h] [rbp-80h]
  int v11; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v12[4]; // [rsp+24h] [rbp-64h] BYREF
  unsigned __int64 v13; // [rsp+68h] [rbp-20h]

  v2 = a1;
  v13 = __readfsqword(0x28u);
  custom_data_type = get_custom_data_type(a1);
  if ( !custom_data_type )
    return 0;
  v4 = custom_data_type;
  v10 = 0;
  v9 = nullptr;
  sub_169A50((__int64 *)&v9, (__int64)"data_type_t:%d", a1);
  v5 = &s1;
  if ( (_QWORD)v10 )
  {
    v5 = v9;
    if ( a2 )
      goto LABEL_4;
LABEL_12:
    sub_5344B0(v5);
    goto LABEL_7;
  }
  if ( !a2 )
    goto LABEL_12;
LABEL_4:
  if ( *(_QWORD *)(v4 + 32) && *(_QWORD *)(v4 + 48) )
  {
    v11 = 64;
    memset(&v12[1], 0, 44);
    *(_QWORD *)((char *)&v12[1] + 12) = 2;
    DWORD1(v12[3]) = -1;
    v12[0] = 0;
    *(__m128 *)((char *)v12 + 4) = _mm_loadh_ps((const double *)(v4 + 32));
    v6 = qalloc_or_throw(16);
    *(_DWORD *)(v6 + 12) = v2;
    *(_DWORD *)(v6 + 8) = 1;
    *(_QWORD *)v6 = custom_data_type_ah_t___vtable;
    *(_QWORD *)((char *)&v12[1] + 4) = v6;
    *(_QWORD *)((char *)&v12[2] + 4) = *(_QWORD *)(v4 + 40);
    sub_538360(&v11);
LABEL_7:
    v7 = 1;
    goto LABEL_8;
  }
  v7 = 0;
LABEL_8:
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9, "data_type_t:%d");
  }
  return v7;
}
