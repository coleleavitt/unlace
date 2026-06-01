__int64 *__fastcall sub_845DB0(const double *a1, __int64 a2, _QWORD *a3)
{
  _OWORD *v4; // rax
  void *v5; // r12
  __int64 *result; // rax
  __int64 *v7; // r14
  __int64 *v8; // r13
  __int64 v9; // rdx
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+8h] [rbp-40h]
  int v12; // [rsp+10h] [rbp-38h]

  v4 = (_OWORD *)sub_186B270(0x40u);
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v12 = 0;
  ptr = v4;
  v11 = 8;
  sub_8426D0(a1, a3, (__int64)&ptr);
  v5 = ptr;
  result = (__int64 *)(unsigned int)v11;
  v7 = (__int64 *)((char *)ptr + 8 * (unsigned int)v11);
  v8 = (__int64 *)ptr;
  if ( v7 != ptr )
  {
    while ( (unsigned __int64)*v8 <= 1 )
    {
      if ( v7 == ++v8 )
        goto LABEL_12;
    }
    if ( v7 != v8 )
    {
      v9 = *v8;
      do
      {
        sub_845910((__int64)a1, a2, v9);
        result = v8 + 1;
        if ( v7 == v8 + 1 )
          break;
        while ( 1 )
        {
          v9 = *result;
          v8 = result;
          if ( (unsigned __int64)*result > 1 )
            break;
          if ( v7 == ++result )
            goto LABEL_12;
        }
      }
      while ( v7 != result );
    }
  }
LABEL_12:
  if ( v5 )
    return (__int64 *)sub_186B220(v5);
  return result;
}

