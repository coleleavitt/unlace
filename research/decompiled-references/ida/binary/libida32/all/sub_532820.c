__int64 __fastcall sub_532820(__int64 *a1, const char **a2)
{
  unsigned int v2; // r12d
  const char *v3; // r13
  __int64 *v5; // r14
  char v6; // al
  void *v7; // r13
  char v8; // r14
  void *v9; // [rsp+8h] [rbp-70h] BYREF
  void *v10; // [rsp+10h] [rbp-68h] BYREF
  __int128 v11; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+30h] [rbp-48h] BYREF
  __int128 v13; // [rsp+38h] [rbp-40h]
  unsigned __int64 v14; // [rsp+48h] [rbp-30h]

  v2 = 0;
  v14 = __readfsqword(0x28u);
  v3 = *a2;
  if ( (unsigned __int64)*a2 > 0xFF )
  {
    v11 = 0;
    v5 = *(__int64 **)(qword_2CA1698 + 1480);
    v13 = 0;
    ptr = nullptr;
    ptr = (void *)qvector_reserve(&ptr, 0, 2, 1);
    *(_QWORD *)&v13 = 2;
    *(_BYTE *)ptr = 1;
    v10 = nullptr;
    *((_BYTE *)ptr + 1) = 0;
    v6 = sub_532580(v5, v3, (__int64)&ptr, (__int64)&v10, 1);
    v7 = v10;
    v8 = v6;
    if ( ptr )
    {
      *(_QWORD *)&v13 = 0;
      qfree(ptr);
    }
    if ( !v8 )
      goto LABEL_7;
    v9 = v7;
    if ( !(unsigned __int8)sub_567A90(a1, &v9) )
      goto LABEL_7;
    v13 = 0;
    ptr = nullptr;
    ptr = (void *)qvector_reserve(&ptr, 0, 2, 1);
    *(_QWORD *)&v13 = 2;
    *(_BYTE *)ptr = 1;
    *((_BYTE *)ptr + 1) = 0;
    v2 = del_tinfo_attr(a2, &ptr, 1);
    if ( ptr )
    {
      *(_QWORD *)&v13 = 0;
      qfree(ptr);
    }
    if ( (_BYTE)v2 )
      sub_51C5D0(a1);
    else
LABEL_7:
      v2 = 0;
    if ( v7 )
      qfree(v7);
  }
  return v2;
}

