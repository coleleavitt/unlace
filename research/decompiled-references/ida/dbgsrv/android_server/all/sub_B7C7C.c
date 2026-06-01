/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B7C7C
// Address: 0x00000000000B7C7C

//----- (00000000000B7C7C) ----------------------------------------------------
void sub_B7C7C(__int64 a1, char a2, char *a3, ...)
{
  _QWORD *v5; // x22
  __int64 v6; // x23
  __int64 v7; // x26
  const char *v8; // x20
  _QWORD *v9; // x24
  const char *v10; // x1
  void *ptr; // [xsp+B8h] [xbp-10B8h] BYREF
  __int64 v12; // [xsp+C0h] [xbp-10B0h]
  gcc_va_list va1; // [xsp+D0h] [xbp-10A0h] BYREF
  gcc_va_list va; // [xsp+F8h] [xbp-1078h] BYREF
  char s[4104]; // [xsp+118h] [xbp-1058h] BYREF

  va_start(va, a3);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a3);
  _ReadStatusReg(TPIDR_EL0);
  va_copy(va1, va);
  vqmakepath((size_t)s, 0x1000u, a3, (unsigned __int8 ***)va1);
  if ( (a2 & 4) == 0 || qisdir(s) )
  {
    sub_39140(&ptr, s);
    v5 = *(_QWORD **)a1;
    v6 = 3LL * *(_QWORD *)(a1 + 8);
    if ( v6 * 8 )
    {
      v7 = 24LL * *(_QWORD *)(a1 + 8);
      if ( v12 )
        v8 = (const char *)ptr;
      else
        v8 = &byte_F154B;
      v9 = *(_QWORD **)a1;
      while ( 1 )
      {
        v10 = v9[1] ? (const char *)*v9 : &byte_F154B;
        if ( !strcmp(v8, v10) )
          break;
        v7 -= 24;
        v9 += 3;
        if ( !v7 )
          goto LABEL_16;
      }
    }
    else
    {
      v9 = *(_QWORD **)a1;
    }
    if ( v9 == &v5[v6] )
LABEL_16:
      sub_46FA4((pthread_mutex_t *)a1, (__int64)&ptr);
    if ( ptr )
    {
      v12 = 0;
      qfree(ptr);
    }
  }
}
// F154B: using guessed type char byte_F154B;
