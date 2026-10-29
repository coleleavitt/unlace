__int64 __fastcall sub_654C90(
        __int64 *a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned int a4,
        char *a5,
        unsigned int **a6,
        double a7,
        __m128i a8,
        double a9)
{
  unsigned int v11; // r13d
  unsigned int v12; // r14d
  unsigned int v13; // r13d
  __int64 result; // rax
  __int64 v15; // r15
  unsigned int *v16; // rax
  __int64 v17; // r8
  __int64 v18; // rdi
  unsigned int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  void *v22; // rdi
  unsigned int v23; // r8d
  const char *v24; // rsi
  unsigned int v26; // [rsp+Ch] [rbp-9Ch]
  unsigned int v27; // [rsp+10h] [rbp-98h]
  void *v30; // [rsp+30h] [rbp-78h] BYREF
  __int128 v31; // [rsp+38h] [rbp-70h]
  void *ptr; // [rsp+50h] [rbp-58h] BYREF
  __int128 v33; // [rsp+58h] [rbp-50h]
  unsigned __int64 v34; // [rsp+68h] [rbp-40h]

  v11 = a2[1];
  v34 = __readfsqword(0x28u);
  v12 = *a2;
  v13 = v11 - *a2;
  result = sub_3B8D90((__int64)a1);
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
  v15 = *a1;
  v27 = a3 + v13;
  v16 = sub_4EE820(*(_QWORD *)(*a1 + 1480) + 1552LL, a3);
  if ( (v16 && v12 != *v16 || (v16 = sub_4EE960(*(_QWORD *)(v15 + 1480) + 1552LL, a3)) != nullptr)
    && a3 < v16[1]
    && v12 != *v16
    && *v16 < v27 )
  {
    if ( (a4 & 1) == 0 )
    {
      ptr = nullptr;
      v33 = 0;
      sub_4F9200(*(_QWORD *)(v15 + 1480), (__int64 *)&ptr, v16, 0);
      sub_365330();
    }
    return 4294967294LL;
  }
  v18 = *a1;
  ptr = nullptr;
  sub_6141A0(v18, 26, &ptr, 8u, v17);
  if ( *a2 < HIDWORD(ptr) && (unsigned int)ptr < a2[1] || (unsigned int)ptr < v27 && a3 < HIDWORD(ptr) )
  {
    if ( (a4 & 1) == 0 )
      sub_365330();
    return 4294967294LL;
  }
  v31 = 0;
  v30 = nullptr;
  v30 = (void *)qvector_reserve(&v30, 0, 1, 8);
  v19 = a4;
  *((_QWORD *)v30 + v31) = a2;
  LOBYTE(v19) = a4 | 0x88;
  *(_QWORD *)&v31 = v31 + 1;
  result = sub_651FD0((__int64)a1, (const __m128i ***)&v30, a3 - v12, v19, v20, v21);
  if ( !(_DWORD)result )
  {
    if ( (unsigned __int8)sub_4F0620(a1 + 161, v12, a3, v13) )
    {
      if ( (unsigned __int8)sub_4F0620(a1 + 301, v12, a3, v13) )
      {
        if ( (a4 & 1) == 0 )
        {
          v33 = 0;
          ptr = nullptr;
          sub_4F9200((__int64)a1, (__int64 *)&ptr, a2, 0);
          v24 = haystack;
          if ( (_QWORD)v33 )
            v24 = (const char *)ptr;
          sub_395C70((int)"HIDECANCEL\nMoving segment %s to %#a", v24, a3);
        }
        v23 = a4 & 0xFFFFFFBF;
        LOBYTE(v23) = a4 & 0x37 | 0x88;
        if ( (unsigned int)sub_653C60(a1, v12, a3, v13, v23, 0.0, a8, a9) )
        {
          v22 = v30;
          result = 4294967291LL;
          if ( v30 )
            goto LABEL_21;
          return result;
        }
        sub_651600(*a1, a6, (__int64)&v30, a3 - v12, *a5, 0);
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
  v22 = v30;
  if ( v30 )
  {
LABEL_21:
    v26 = result;
    *(_QWORD *)&v31 = 0;
    qfree(v22);
    return v26;
  }
  return result;
}

