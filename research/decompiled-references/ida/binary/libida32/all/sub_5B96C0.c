__int64 __fastcall sub_5B96C0(
        __int64 *a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        int a12,
        void *a13,
        __int64 a14,
        int a15,
        __int64 a16)
{
  __int64 v18; // rax
  int v19; // r13d
  __int64 v20; // r14
  __int64 v21; // r15
  char *v22; // r12
  __int64 v23; // rax
  unsigned int v24; // eax
  void *v25; // rdi
  unsigned int v26; // r12d
  char *v27; // rax
  unsigned int v28; // edx
  __int64 v29; // r13
  __int64 v30; // rbx
  __int64 v31; // r13
  unsigned int *v32; // rax
  unsigned int *v33; // r15
  unsigned int *v34; // rax
  __int64 v35; // [rsp+8h] [rbp-60h]
  unsigned int v36; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v38; // [rsp+18h] [rbp-50h]
  unsigned __int64 v39; // [rsp+28h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  if ( a2 && *(char *)(a2 + 9) >= 0 )
    return sub_5B9040((int)a1, a10, a11, a12, a13, a14, a15, a16);
  if ( *(int *)(a2 + 20) <= 0 )
  {
    sub_5B31C0((__int64)a1, nullptr, (unsigned int *)a2, 1, a3, a4, a5);
    return 1;
  }
  else
  {
    sub_5AD260(a1, a2);
    v18 = *(int *)(a2 + 20);
    ptr = nullptr;
    v38 = 0;
    v19 = v18;
    v20 = 4 * v18;
    v21 = v18;
    if ( v18 )
    {
      v35 = *(_QWORD *)(a2 + 24);
      v22 = (char *)qvector_reserve(&ptr, 0, v18, 4);
      ptr = v22;
      memmove(&v22[v20], v22, 4 * v38);
      v23 = 0;
      if ( v20 )
      {
        do
        {
          *(_DWORD *)&v22[v23] = *(_DWORD *)(v35 + v23);
          v23 += 4;
        }
        while ( v20 != v23 );
      }
      v24 = *(_DWORD *)a2;
      v25 = ptr;
      v26 = 1;
      *(_QWORD *)&v38 = v21 + v38;
      v36 = v24;
      v27 = (char *)ptr;
      if ( v19 > 0 )
      {
        v28 = v19 - 1;
        v26 = 1;
        v29 = v19 - 1;
        v30 = 4 * v29;
        v31 = 4 * (v29 - v28);
        while ( 1 )
        {
          v32 = sub_4EE820((__int64)(a1 + 203), *(unsigned int *)&v27[v30]);
          v33 = v32;
          if ( v32 && *((char *)v32 + 9) < 0 )
            v33 = sub_4EE820((__int64)(a1 + 203), v32[4]);
          v34 = sub_5AE770(a1, (__int64)v33, v36);
          v26 &= sub_5B3360(a1, (__int64)v33, v34, 1, 0.0, a4, a5);
          v27 = (char *)ptr;
          v25 = ptr;
          if ( v31 == v30 )
            break;
          v30 -= 4;
        }
      }
      if ( v25 )
      {
        *(_QWORD *)&v38 = 0;
        qfree(v25);
      }
    }
    else
    {
      return 1;
    }
  }
  return v26;
}

