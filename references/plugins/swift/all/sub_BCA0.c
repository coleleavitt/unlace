__int64 __fastcall sub_BCA0(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  unsigned int data_value; // r13d
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rbp
  _QWORD *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdi
  size_t v13; // rax
  size_t v14; // r14
  __int64 member; // rbx
  size_t v16; // [rsp+0h] [rbp-120h]
  __int64 v17; // [rsp+8h] [rbp-118h] BYREF
  __int128 v18; // [rsp+10h] [rbp-110h]
  __int128 v19; // [rsp+20h] [rbp-100h]
  __int64 v20; // [rsp+30h] [rbp-F0h]
  int v21; // [rsp+38h] [rbp-E8h]
  __int128 v22; // [rsp+48h] [rbp-D8h] BYREF
  void *v23; // [rsp+58h] [rbp-C8h] BYREF
  __int128 v24; // [rsp+60h] [rbp-C0h]
  __int64 v25; // [rsp+70h] [rbp-B0h]
  __int128 v26; // [rsp+78h] [rbp-A8h]
  _OWORD v27[3]; // [rsp+88h] [rbp-98h] BYREF
  __int64 v28; // [rsp+B8h] [rbp-68h]
  int v29; // [rsp+C0h] [rbp-60h]
  __int64 v30; // [rsp+C8h] [rbp-58h]
  char v31; // [rsp+D0h] [rbp-50h]
  unsigned __int64 v32; // [rsp+E0h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  v21 = 1;
  v18 = 0;
  v17 = 0;
  v20 = 0;
  v19 = 0;
  if ( !(unsigned __int8)get_tinfo_details(a3, 13, &v17) )
    goto LABEL_2;
  v23 = nullptr;
  v25 = 0;
  v28 = 1;
  v29 = -1;
  v30 = 0;
  v31 = 0;
  v22 = 0;
  v24 = 0;
  v26 = 0;
  v27[0] = 0;
  v13 = strlen(a4);
  v14 = v13;
  if ( v13 )
  {
    v16 = v13 + 1;
    v23 = (void *)qvector_reserve(&v23, 0, v13 + 1, 1);
    *(_QWORD *)&v24 = v16;
    memmove(v23, a4, v14);
    *((_BYTE *)v23 + v14) = 0;
  }
  member = udt_type_data_t__find_member(&v17, &v22, 3);
  clear_tinfo_t(v27);
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25);
  }
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23);
  }
  if ( member >= 0 )
    data_value = get_data_value(
                   a1,
                   a2 + (*(_QWORD *)(v17 + 144 * member) >> 3),
                   *(_QWORD *)(v17 + 144 * member + 8) >> 3);
  else
LABEL_2:
    data_value = 0;
  v6 = v17;
  if ( v17 )
  {
    v7 = v18;
    if ( (_QWORD)v18 )
    {
      v8 = 0;
      do
      {
        v9 = (_QWORD *)(v6 + 144 * v8);
        clear_tinfo_t(v9 + 8);
        v10 = v9[5];
        if ( v10 )
        {
          v9[6] = 0;
          qfree(v10);
        }
        v11 = v9[2];
        if ( v11 )
        {
          v9[3] = 0;
          qfree(v11);
        }
        ++v8;
        v6 = v17;
      }
      while ( v7 != v8 );
    }
    *(_QWORD *)&v18 = 0;
    qfree(v6);
  }
  return data_value;
}
