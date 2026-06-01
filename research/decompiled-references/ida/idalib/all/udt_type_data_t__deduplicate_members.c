__int64 __fastcall udt_type_data_t__deduplicate_members(__int64 *a1)
{
  unsigned int v1; // r12d
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rbp
  int v5; // eax
  _QWORD *v6; // rbx
  _QWORD *v7; // rbp
  void *v8; // rdi
  __int64 v10; // [rsp+0h] [rbp-68h] BYREF
  int v11; // [rsp+8h] [rbp-60h] BYREF
  void *v12; // [rsp+10h] [rbp-58h]
  int *v13; // [rsp+18h] [rbp-50h]
  int *v14; // [rsp+20h] [rbp-48h]
  __int64 v15; // [rsp+28h] [rbp-40h]
  unsigned __int64 v16; // [rsp+38h] [rbp-30h]

  v1 = 0;
  v2 = *a1;
  v16 = __readfsqword(0x28u);
  v11 = 0;
  v13 = &v11;
  v14 = &v11;
  v3 = a1[1];
  v12 = nullptr;
  v15 = 0;
  v4 = v2 + 144 * v3;
  if ( v4 != v2 )
  {
    do
    {
      while ( *(_QWORD *)(v2 + 24) <= 1u )
      {
        v2 += 144;
        if ( v2 == v4 )
          goto LABEL_6;
      }
      v5 = sub_539050((__int64 *)(v2 + 16), &v10);
      v2 += 144;
      v1 |= v5;
    }
    while ( v2 != v4 );
LABEL_6:
    v6 = v12;
    if ( v12 )
    {
      do
      {
        v7 = v6;
        sub_533AD0((_QWORD *)v6[3]);
        v8 = (void *)v6[4];
        v6 = (_QWORD *)v6[2];
        if ( v8 )
        {
          v7[5] = 0;
          qfree(v8);
        }
        operator delete(v7, 0x38u);
      }
      while ( v6 );
    }
  }
  return v1;
}
