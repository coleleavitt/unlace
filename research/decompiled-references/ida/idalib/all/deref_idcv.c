_BYTE *__fastcall deref_idcv(_BYTE *a1, char a2)
{
  _BYTE *v2; // rbp
  __int64 v4; // r12
  _BYTE *v5; // rbx
  _BYTE *v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v10; // [rsp+8h] [rbp-40h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v2 = a1;
  if ( !a1 )
  {
    set_qerrno(1563);
    return v2;
  }
  if ( *a1 == 10 )
  {
    ptr = nullptr;
    v10 = 0;
    v4 = sub_78C130();
    v5 = a1;
    while ( 1 )
    {
      v6 = (_BYTE *)sub_791F40((__int64)(v5 + 8), v4);
      v5 = v6;
      if ( !v6 )
        break;
      if ( *v6 != 10 || (a2 & 1) != 0 )
      {
        if ( (a2 & 2) == 0 )
        {
          v2 = v6;
LABEL_15:
          if ( ptr )
          {
            *(_QWORD *)&v10 = 0;
            qfree(ptr);
          }
          return v2;
        }
        *a1 = 2;
        if ( !(unsigned int)copy_idcv(a1) )
          goto LABEL_15;
LABEL_14:
        v2 = nullptr;
        goto LABEL_15;
      }
      v7 = (char *)ptr + 8 * v10;
      if ( ptr != v7 )
      {
        v8 = ptr;
        while ( v5 != (_BYTE *)*v8 )
        {
          if ( v7 == ++v8 )
            goto LABEL_17;
        }
        if ( v8 != v7 )
          break;
      }
LABEL_17:
      if ( *((_QWORD *)&v10 + 1) < (unsigned __int64)(v10 + 1) )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v10 + 1, 8);
        v7 = (char *)ptr + 8 * v10;
      }
      *v7 = v5;
      *(_QWORD *)&v10 = v10 + 1;
    }
    set_qerrno(1563);
    goto LABEL_14;
  }
  return v2;
}
