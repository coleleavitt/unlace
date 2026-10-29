__int64 __fastcall xref_desktop_widget_factory_t__::vfunc_3(
        double a1,
        __int64 a2,
        __int64 a3,
        const char *a4,
        _BYTE *a5)
{
  struct _Unwind_Exception *v5; // rbx
  const char *v6; // rsi
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // r12
  __int64 v10; // rbx
  size_t v11; // rbp
  char *v13; // rax
  const char *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  size_t v19; // rbp
  size_t v20; // r12
  char *v21; // r14
  _BYTE *v22; // rbx
  _BYTE *v23; // r12
  __int64 v24; // [rsp+0h] [rbp-78h]
  __int64 v25; // [rsp+8h] [rbp-70h]
  char *v26; // [rsp+8h] [rbp-70h]
  int v27; // [rsp+10h] [rbp-68h]
  int v28; // [rsp+18h] [rbp-60h]
  unsigned int v29; // [rsp+1Ch] [rbp-5Ch] BYREF
  __int64 v30; // [rsp+20h] [rbp-58h] BYREF
  __int128 v31; // [rsp+28h] [rbp-50h]
  unsigned __int64 v32; // [rsp+38h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  v6 = *((const char **)a4 + 1);
  if ( v6 )
  {
    v7 = *(_QWORD **)a4;
    a4 = nullptr;
    while ( 1 )
    {
      if ( v7[1] )
      {
        a5 = (_BYTE *)*v7;
        if ( *(_BYTE *)*v7 == 105 && a5[1] == 100 && !a5[2] )
          break;
      }
      ++a4;
      v7 += 5;
      if ( v6 == a4 )
        goto LABEL_9;
    }
    v8 = v7 + 3;
  }
  else
  {
LABEL_9:
    v8 = nullptr;
  }
  if ( *(_DWORD *)v8 != 2 )
  {
    if ( !under_debugger )
    {
      interr(1623, v6, a4, a5, a1);
      if ( v30 )
      {
        *(_QWORD *)&v31 = 0;
        a1 = qfree(v30, v6);
      }
      if ( v25 )
        qfree(v25, v6, a1);
      _Unwind_Resume(v5);
    }
    BUG();
  }
  v9 = v8[1];
  v10 = 0;
  v11 = *(_QWORD *)(v9 + 8);
  if ( v11 )
  {
    v13 = (char *)qalloc_or_throw(*(_QWORD *)(v9 + 8));
    v14 = *(const char **)v9;
    v26 = v13;
    memcpy(v13, *(const void **)v9, v11);
    if ( v11 != 1 )
    {
      v19 = v11 - 1;
      v30 = 0;
      v31 = 0;
      v20 = v19 >> 1;
      if ( !(v19 >> 1)
        || (v14 = nullptr,
            v30 = qvector_reserve(&v30, 0, v19 >> 1, 1),
            memset((void *)(v30 + v31), 0, v20 - v31),
            v22 = (_BYTE *)v30,
            *(_QWORD *)&v31 = v19 >> 1,
            v23 = (_BYTE *)(v30 + v20),
            (_BYTE *)v30 == v23) )
      {
        v21 = v26;
      }
      else
      {
        v21 = v26;
        do
        {
          v14 = "%02X";
          v29 = 0;
          if ( (unsigned int)qsscanf(v21, "%02X", &v29) != 1 )
            break;
          if ( v29 > 0xFF )
            break;
          *v22++ = v29;
          v21 += 2;
        }
        while ( v23 != v22 );
      }
      v10 = 0;
      if ( v21 == &v26[v19] )
        v10 = sub_3ED280(
                (__int64)&v30,
                (__int64)v14,
                v15,
                v16,
                v17,
                v18,
                v24,
                (int)v26,
                v27,
                v28,
                v30,
                v31,
                *((__int64 *)&v31 + 1));
      if ( v30 )
      {
        *(_QWORD *)&v31 = 0;
        qfree(v30, v14);
      }
    }
    if ( v26 )
      qfree(v26, v14);
  }
  return v10;
}
