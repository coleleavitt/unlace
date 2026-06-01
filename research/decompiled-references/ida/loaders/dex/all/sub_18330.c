unsigned __int64 __fastcall sub_18330(int *a1, const char *a2)
{
  size_t v2; // rax
  int v3; // edx
  const char *v4; // rdi
  __int64 segm_by_name; // rax
  size_t v7; // r14
  size_t v8; // rbx
  void *v9; // [rsp+0h] [rbp-48h] BYREF
  __int128 v10; // [rsp+8h] [rbp-40h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v9 = nullptr;
  v10 = 0;
  v2 = strlen(a2);
  if ( v2 )
  {
    v7 = v2 + 1;
    v8 = v2;
    v9 = (void *)qvector_reserve(&v9, 0, v2 + 1, 1);
    *(_QWORD *)&v10 = v7;
    memmove(v9, a2, v8);
    *((_BYTE *)v9 + v8) = 0;
    v3 = *a1;
    if ( (unsigned int)*a1 <= 1 )
      goto LABEL_11;
  }
  else
  {
    v3 = *a1;
    if ( (unsigned int)*a1 <= 1 )
    {
LABEL_3:
      v4 = s1;
      goto LABEL_4;
    }
  }
  sub_15D10((__int64 *)&v9, (__int64)"%d", v3);
LABEL_11:
  v4 = (const char *)v9;
  if ( !(_QWORD)v10 )
    goto LABEL_3;
LABEL_4:
  segm_by_name = get_segm_by_name(v4);
  if ( segm_by_name )
  {
    *(_WORD *)(segm_by_name + 44) |= 4u;
    update_segm(segm_by_name);
  }
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9);
  }
  return v11 - __readfsqword(0x28u);
}

