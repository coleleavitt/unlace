/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: range_t_print
// Address: 0x00000000000C9CE0

//----- (00000000000C9CE0) ----------------------------------------------------
__int64 __fastcall range_t_print(__int64 *a1, char *a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r13
  const char *v6; // r12
  size_t v7; // rbx
  void *v8; // rax
  const char *v9; // r8
  size_t v10; // rbx
  void *v11; // rax
  int v12; // ebx
  void *ptr[2]; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v15; // [rsp+10h] [rbp-68h]
  void *dest[2]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v17; // [rsp+30h] [rbp-48h]
  unsigned __int64 v18; // [rsp+40h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  if ( !a1 )
  {
    *(_OWORD *)dest = 0;
    v17 = 0;
    v5 = -1;
LABEL_6:
    v7 = __strlen_chk("BADADDR", 8);
    if ( v7 )
    {
      v8 = dest[0];
      if ( v17 < v7 + 1 )
      {
        v8 = qvector_reserve((__int64)dest, (char *)dest[0], v7 + 1, 1u);
        dest[0] = v8;
      }
      dest[1] = (void *)(v7 + 1);
      memmove(v8, "BADADDR", v7);
      *((_BYTE *)dest[0] + v7) = 0;
      if ( dest[1] )
        goto LABEL_4;
    }
    else
    {
      dest[1] = nullptr;
    }
    goto LABEL_10;
  }
  v4 = *a1;
  v5 = a1[1];
  *(_OWORD *)dest = 0;
  v17 = 0;
  if ( v4 == -1 )
    goto LABEL_6;
  sub_3BBA0((__int64)dest, "%a", 0.0);
  if ( dest[1] )
  {
LABEL_4:
    v6 = (const char *)dest[0];
    goto LABEL_11;
  }
LABEL_10:
  v6 = s1;
LABEL_11:
  *(_OWORD *)ptr = 0;
  v15 = 0;
  if ( v5 == -1 )
  {
    v10 = __strlen_chk("BADADDR", 8);
    if ( v10 )
    {
      v11 = ptr[0];
      if ( v15 < v10 + 1 )
      {
        v11 = qvector_reserve((__int64)ptr, (char *)ptr[0], v10 + 1, 1u);
        ptr[0] = v11;
      }
      ptr[1] = (void *)(v10 + 1);
      memmove(v11, "BADADDR", v10);
      *((_BYTE *)ptr[0] + v10) = 0;
      if ( ptr[1] )
        goto LABEL_13;
    }
    else
    {
      ptr[1] = nullptr;
    }
  }
  else
  {
    sub_3BBA0((__int64)ptr, "%a", 0.0);
    if ( ptr[1] )
    {
LABEL_13:
      v9 = (const char *)ptr[0];
      goto LABEL_19;
    }
  }
  v9 = s1;
LABEL_19:
  v12 = qsnprintf(a2, a3, "%s..%s", v6, v9);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v15 = 0;
  }
  if ( dest[0] )
  {
    dest[1] = nullptr;
    qfree(dest[0]);
    dest[0] = nullptr;
    v17 = 0;
  }
  return v12;
}
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
