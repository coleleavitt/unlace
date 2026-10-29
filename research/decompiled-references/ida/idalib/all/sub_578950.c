__int64 __fastcall sub_578950(__int64 *a1)
{
  char v1; // al
  __int64 v2; // r12
  __int64 v3; // rdx
  unsigned int v4; // ebx
  int aflags; // eax
  __int64 v7; // r12
  unsigned __int64 v8; // r13
  __int64 v9; // r14
  _BYTE *v10; // rsi
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v12; // [rsp+8h] [rbp-40h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  ptr = nullptr;
  v12 = 0;
  v1 = getinf(38);
  v2 = a1[2];
  if ( (v1 & 8) != 0 )
  {
    if ( sub_571740((__int64)&ptr, a1[2]) )
    {
LABEL_3:
      v3 = 8;
LABEL_4:
      (*(void (__fastcall **)(__int64 *, void *, __int64))(*a1 + 184))(a1, ptr, v3);
      v4 = 1;
      goto LABEL_5;
    }
    v2 = a1[2];
    if ( (unsigned __int8)print_type(&ptr, v2, 16) )
    {
LABEL_12:
      aflags = get_aflags(v2);
      v3 = 3;
      if ( (aflags & 0x2000000) != 0 )
      {
        if ( (unsigned __int8)getinf_flag(45, 16) )
        {
          v7 = v12;
          if ( (_QWORD)v12 )
          {
            v9 = v12 + 7;
            v8 = v12 + 8;
            v7 = v12 - 1;
          }
          else
          {
            v8 = 9;
            v9 = 8;
          }
          v10 = ptr;
          if ( *((_QWORD *)&v12 + 1) < v8 )
          {
            ptr = (void *)qvector_reserve(&ptr, ptr, v8, 1);
            v10 = ptr;
          }
          *(_QWORD *)&v12 = v8;
          v10[v9] = 0;
          *(_QWORD *)((char *)ptr + v7) = 0x697472657375203BLL;
        }
        v3 = 2;
      }
      goto LABEL_4;
    }
  }
  else
  {
    if ( (unsigned __int8)print_type(&ptr, a1[2], 16) )
      goto LABEL_12;
    if ( sub_571740((__int64)&ptr, a1[2]) )
      goto LABEL_3;
  }
  v4 = 0;
LABEL_5:
  if ( ptr )
  {
    *(_QWORD *)&v12 = 0;
    qfree(ptr);
  }
  return v4;
}
