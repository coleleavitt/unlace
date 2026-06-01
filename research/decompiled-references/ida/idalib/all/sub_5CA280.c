__int64 __fastcall sub_5CA280(__int64 a1, __int64 *a2, __int64 a3, const char *a4)
{
  __int64 v4; // rbx
  const char *v5; // rbp
  unsigned int v6; // ebx
  __int64 func; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v10; // [rsp+8h] [rbp-40h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v4 = a3;
  v11 = __readfsqword(0x28u);
  v5 = a4;
  if ( a3 == -1 )
  {
    ptr = nullptr;
    v10 = 0;
    if ( a4 )
      goto LABEL_3;
    v4 = *a2;
    goto LABEL_10;
  }
  if ( (get_aflags(a3) & 0x400000) != 0 || (func = get_func(v4)) != 0 && (*(_BYTE *)(func + 16) & 1) != 0 )
  {
LABEL_8:
    v6 = 1;
    sub_5C7750(a2);
    return v6;
  }
  ptr = nullptr;
  v10 = 0;
  if ( !v5 )
  {
LABEL_10:
    v5 = nullptr;
    if ( get_ea_name(&ptr, v4, 0, 0) > 0 )
      v5 = (const char *)ptr;
  }
LABEL_3:
  v6 = sub_4CBF70(a1, v4, v5);
  if ( ptr )
  {
    *(_QWORD *)&v10 = 0;
    qfree(ptr);
  }
  if ( (_BYTE)v6 )
    goto LABEL_8;
  return v6;
}
