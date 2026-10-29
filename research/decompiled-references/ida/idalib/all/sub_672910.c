__int64 __fastcall sub_672910(
        __int64 *a1,
        __int64 *a2,
        unsigned __int64 a3,
        unsigned int a4,
        char *a5,
        __int64 *a6,
        double a7,
        __m128i a8,
        double a9)
{
  __int64 v11; // r15
  __int64 v12; // rax
  void *v13; // r13
  __int64 v14; // r15
  __int64 result; // rax
  __int64 v16; // r14
  unsigned __int64 *v17; // rax
  __int64 v18; // r8
  __int64 v19; // rdi
  unsigned int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  void *v23; // rdi
  unsigned int v24; // r8d
  unsigned __int64 v25; // [rsp+0h] [rbp-A8h]
  unsigned int v27; // [rsp+8h] [rbp-A0h]
  __int64 v28; // [rsp+10h] [rbp-98h]
  void *v31; // [rsp+30h] [rbp-78h] BYREF
  __int128 v32; // [rsp+38h] [rbp-70h]
  _BYTE ptr[24]; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v34; // [rsp+68h] [rbp-40h]

  v11 = a2[1];
  v12 = *(_QWORD *)(a1[3] + 16);
  v34 = __readfsqword(0x28u);
  v13 = (void *)*a2;
  v28 = v12;
  v14 = v11 - *a2;
  result = sub_3BD9F0((__int64)a1, *a2, a3, v14);
  if ( (_DWORD)result == -1 )
  {
    if ( !under_debugger )
      interr(514);
    BUG();
  }
  if ( (unsigned int)(result + 3) <= 1 )
    return 4294967294LL;
  if ( (_DWORD)result == -4 )
    return result;
  v16 = *a1;
  v25 = a3 + v14;
  v17 = sub_505D70(*(_QWORD *)(*a1 + 1672) + 1624LL, a3);
  if ( (v17 && v13 != (void *)*v17 || (v17 = sub_505EB0(*(_QWORD *)(v16 + 1672) + 1624LL, a3)) != nullptr)
    && a3 < v17[1]
    && v13 != (void *)*v17
    && *v17 < v25 )
  {
    if ( (a4 & 1) == 0 )
    {
      memset(ptr, 0, sizeof(ptr));
      sub_510BD0(*(_QWORD *)(v16 + 1672), (__int64 *)ptr, v17, 0);
      sub_368890();
    }
    return 4294967294LL;
  }
  v19 = *a1;
  *(_OWORD *)ptr = 0;
  sub_630CA0(v19, 26, ptr, 0x10u, v18);
  if ( (unsigned __int64)*a2 < *(_QWORD *)&ptr[8] && *(_QWORD *)ptr < (unsigned __int64)a2[1]
    || *(_QWORD *)ptr < v25 && a3 < *(_QWORD *)&ptr[8] )
  {
    if ( (a4 & 1) == 0 )
      sub_368890();
    return 4294967294LL;
  }
  v32 = 0;
  v31 = nullptr;
  v31 = (void *)qvector_reserve(&v31, 0, 1, 8);
  v20 = a4;
  LOBYTE(v20) = a4 | 0x88;
  *((_QWORD *)v31 + v32) = a2;
  *(_QWORD *)&v32 = v32 + 1;
  result = sub_66FAA0((__int64)a1, (const __m128i ***)&v31, (a3 - (_QWORD)v13) & v28, v20, v21, v22);
  if ( !(_DWORD)result )
  {
    if ( (unsigned __int8)sub_507C10(a1 + 165, v13, a3, v14) )
    {
      if ( (unsigned __int8)sub_507C10(a1 + 315, v13, a3, v14) )
      {
        if ( (a4 & 1) == 0 )
        {
          memset(ptr, 0, sizeof(ptr));
          sub_510BD0((__int64)a1, (__int64 *)ptr, (unsigned __int64 *)a2, 0);
          sub_387AC0();
        }
        v24 = a4 & 0xFFFFFFBF;
        LOBYTE(v24) = a4 & 0x37 | 0x88;
        if ( (unsigned int)sub_6717E0(a1, v13, a3, v14, v24, 0.0, a8, a9) )
        {
          v23 = v31;
          result = 4294967291LL;
          if ( v31 )
            goto LABEL_21;
          return result;
        }
        sub_66EFC0(*a1, a6, (__int64)&v31, (a3 - (_QWORD)v13) & v28, *a5, 0);
        result = 0;
      }
      else
      {
        result = 4294967286LL;
      }
    }
    else
    {
      result = 4294967287LL;
    }
  }
  v23 = v31;
  if ( v31 )
  {
LABEL_21:
    v27 = result;
    *(_QWORD *)&v32 = 0;
    qfree(v23);
    return v27;
  }
  return result;
}
