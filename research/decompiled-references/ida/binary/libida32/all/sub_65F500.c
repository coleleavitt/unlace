__int64 __fastcall sub_65F500(__int64 a1, __int64 a2, const char *a3, unsigned __int8 a4)
{
  size_t v7; // rax
  size_t v8; // r14
  size_t v9; // r13
  __int64 v10; // rax
  __int64 v11; // r13
  void *v12; // rsi
  _DWORD *v13; // rbx
  unsigned int v14; // ebp
  int v15; // eax
  void (__fastcall *v17)(char *); // rdx
  void (__fastcall *v18)(char *); // rax
  void (__fastcall *v20)(char *); // rax
  void *v21; // rdi
  void *v22; // [rsp+8h] [rbp-48h] BYREF
  __int128 v23; // [rsp+10h] [rbp-40h]
  unsigned __int64 v24; // [rsp+20h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  v23 = 0;
  v22 = nullptr;
  if ( !a3 )
    return (unsigned int)-1;
  v7 = strlen(a3);
  v8 = v7 + 1;
  v9 = v7;
  v22 = (void *)qvector_reserve(&v22, 0, v7 + 1, 1);
  *(_QWORD *)&v23 = v8;
  memmove(v22, a3, v9);
  *((_BYTE *)v22 + v9) = 0;
  if ( (unsigned __int64)v23 <= 1 )
  {
    v21 = v22;
    if ( !v22 )
      return (unsigned int)-1;
    goto LABEL_17;
  }
  v10 = operator new(0x30u);
  v11 = v10 + 16;
  v12 = v22;
  v13 = (_DWORD *)v10;
  *(_OWORD *)(v10 + 16) = 0;
  *(_DWORD *)(v10 + 8) = 1;
  *(_QWORD *)v10 = &off_2B0D3B0;
  *(_OWORD *)(v10 + 32) = 0;
  v14 = qregcomp(v10 + 16, v12, a4);
  if ( v14 )
  {
    if ( v13 )
    {
      v20 = *(void (__fastcall **)(char *))(*(_QWORD *)v13 + 16LL);
      if ( v20 == sub_657B40 )
      {
        *(_QWORD *)v13 = &off_2B0D3B0;
        qregfree(v11);
        operator delete(v13, 0x30u);
        v21 = v22;
        if ( !v22 )
          return (unsigned int)-1;
      }
      else
      {
        v20((char *)v13);
        v21 = v22;
        if ( !v22 )
          return (unsigned int)-1;
      }
    }
    else
    {
      v21 = v22;
      if ( !v22 )
        return (unsigned int)-1;
    }
LABEL_17:
    *(_QWORD *)&v23 = 0;
    qfree(v21);
    return (unsigned int)-1;
  }
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22);
  }
  if ( !v13 )
    return (unsigned int)-1;
  v15 = qregexec(v11, a2, 0, 0, 0);
  if ( v15 != 17 )
    v14 = v15 != 0 ? -1 : 1;
  if ( v13[2]-- == 1 )
  {
    v17 = **(void (__fastcall ***)(char *))v13;
    if ( v17 == sub_657CC0 )
    {
      v18 = *(void (__fastcall **)(char *))(*(_QWORD *)v13 + 16LL);
      if ( v18 == sub_657B40 )
      {
        *(_QWORD *)v13 = &off_2B0D3B0;
        qregfree(v11);
        operator delete(v13, 0x30u);
      }
      else
      {
        v18((char *)v13);
      }
    }
    else
    {
      v17((char *)v13);
    }
  }
  return v14;
}

