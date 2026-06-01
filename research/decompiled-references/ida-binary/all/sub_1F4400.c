__int64 __fastcall sub_1F4400(__int64 *a1, const char *a2, __int64 a3, __int64 a4)
{
  const char *v4; // r12
  __int64 *v5; // rbx
  bool v6; // zf
  char v7; // bp
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r14d
  __int64 v14; // rdx
  __int64 v15; // rbx
  int v17; // eax
  __int64 v18; // rdi
  struct _Unwind_Exception *v19; // rbx
  __int64 v20; // [rsp+0h] [rbp-48h] BYREF
  __int128 v21; // [rsp+8h] [rbp-40h]
  unsigned __int64 v22; // [rsp+18h] [rbp-30h]

  v4 = a2;
  v5 = a1;
  v6 = *((_BYTE *)a1 + 968) == 0;
  v22 = __readfsqword(0x28u);
  v7 = a3;
  v20 = 0;
  v21 = 0;
  if ( v6 )
  {
    v9 = 0;
  }
  else
  {
    if ( !a1[53] )
      goto LABEL_32;
    v8 = *((_DWORD *)a1 + 104);
    if ( v8 == 2 )
    {
      v9 = a1[112];
    }
    else if ( v8 == 3 )
    {
      v9 = a1[113];
    }
    else
    {
      v9 = 0;
      if ( v8 == 1 )
        v9 = v5[111];
    }
  }
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 176LL))(v9, (unsigned __int8)a3);
  a2 = &s1;
  if ( *(_QWORD *)(v10 + 16) )
    a2 = *(const char **)(v10 + 8);
  a1 = &v20;
  tag_remove(&v20, a2, 0);
  if ( (unsigned __int64)v21 > 1 )
  {
    v13 = 2 * *((unsigned __int8 *)v5 + 741);
    if ( v7 )
    {
      if ( *((_BYTE *)v5 + 968) )
      {
        if ( !v5[53] )
          goto LABEL_33;
        v17 = *((_DWORD *)v5 + 104);
        if ( v17 == 2 )
        {
          v18 = v5[112];
        }
        else if ( v17 == 3 )
        {
          v18 = v5[113];
        }
        else
        {
          v18 = 0;
          if ( v17 == 1 )
            v18 = v5[111];
        }
      }
      else
      {
        v18 = 0;
      }
      v14 = (*(int (__fastcall **)(__int64))(*(_QWORD *)v18 + 192LL))(v18);
      goto LABEL_13;
    }
    if ( v5[53] )
    {
      v14 = *((__int16 *)v5 + 206);
LABEL_13:
      a2 = (const char *)&v20;
      sub_32C9B0(v4, &v20, v14, v13);
      v15 = (*((_QWORD *)v4 + 1) == 0) + *((_QWORD *)v4 + 1) - 1LL;
      goto LABEL_14;
    }
    sub_1E69C0(0.0, (__int64)&v20, (__int64)a2, v11, v12);
LABEL_32:
    sub_1E69C0(0.0, (__int64)a1, (__int64)a2, a3, a4);
LABEL_33:
    v19 = (struct _Unwind_Exception *)sub_1E69C0(0.0, (__int64)a1, (__int64)a2, v11, v12);
    if ( v20 )
    {
      *(_QWORD *)&v21 = 0;
      qfree(v20, a2);
    }
    _Unwind_Resume(v19);
  }
  v15 = -1;
LABEL_14:
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20, a2);
  }
  return v15;
}
