_BYTE *__fastcall deref_idcv(_BYTE *a1, __int64 a2)
{
  _BYTE *v2; // rbp
  char v4; // r13
  __int64 v5; // r12
  _BYTE *v6; // rbx
  int v7; // r14d
  __int64 v8; // rsi
  _BYTE *v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v13; // [rsp+8h] [rbp-40h]
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v2 = a1;
  if ( !a1 )
  {
    set_qerrno(1563, a2);
    return v2;
  }
  if ( *a1 == 10 )
  {
    ptr = nullptr;
    v4 = a2;
    v13 = 0;
    v5 = sub_76BCD0();
    v6 = a1;
    v7 = a2 & 1;
    while ( 1 )
    {
      v8 = v5;
      v9 = (_BYTE *)sub_771B00((__int64)(v6 + 8), v5);
      v6 = v9;
      if ( !v9 )
        break;
      if ( *v9 != 10 || v7 )
      {
        if ( (v4 & 2) == 0 )
        {
          v2 = v9;
LABEL_15:
          if ( ptr )
          {
            *(_QWORD *)&v13 = 0;
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
      v8 = (__int64)ptr;
      v10 = (char *)ptr + 8 * v13;
      if ( ptr != v10 )
      {
        v11 = ptr;
        while ( v6 != (_BYTE *)*v11 )
        {
          if ( v10 == ++v11 )
            goto LABEL_17;
        }
        if ( v11 != v10 )
          break;
      }
LABEL_17:
      if ( *((_QWORD *)&v13 + 1) < (unsigned __int64)(v13 + 1) )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v13 + 1, 8);
        v10 = (char *)ptr + 8 * v13;
      }
      *v10 = v6;
      *(_QWORD *)&v13 = v13 + 1;
    }
    set_qerrno(1563, v8);
    goto LABEL_14;
  }
  return v2;
}

