/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_idc_method
// Address: 0x000000000006AB94

//----- (000000000006AB94) ----------------------------------------------------
__int64 __fastcall set_idc_method(__int64 **a1, char *s)
{
  char *v4; // x0
  pthread_mutex_t *v5; // x19
  char *v6; // x21
  unsigned __int8 v7; // w8
  _QWORD *v8; // x25
  __int64 v9; // x8
  __int64 v10; // x24
  __int64 v11; // x8
  const char *v12; // x0
  int v13; // w0
  unsigned __int64 v14; // x26
  _UNKNOWN **v15; // x25
  unsigned __int64 v16; // x27
  unsigned int v17; // w20
  _QWORD *v19; // x0
  void *ptr[3]; // [xsp+0h] [xbp-80h] BYREF
  __int64 *v21[2]; // [xsp+20h] [xbp-60h] BYREF

  v21[1] = *(__int64 **)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = strchr(s, 46);
  if ( v4 )
  {
    v5 = (pthread_mutex_t *)qword_166AA8;
    v6 = v4;
    qmutex_lock((pthread_mutex_t *)qword_166AA8);
    v7 = atomic_load((unsigned __int8 *)&byte_166AE8);
    if ( (v7 & 1) != 0 || !_cxa_guard_acquire((__guard *)&byte_166AE8) )
    {
      if ( !s )
      {
LABEL_21:
        v17 = 0;
LABEL_22:
        qmutex_unlock(v5);
        return v17;
      }
    }
    else
    {
      v19 = operator new(0x80u);
      *(_QWORD *)((char *)v19 + 117) = 0;
      v19[14] = 0;
      *((_OWORD *)v19 + 5) = 0u;
      *((_OWORD *)v19 + 6) = 0u;
      *((_OWORD *)v19 + 3) = 0u;
      *((_OWORD *)v19 + 4) = 0u;
      *((_OWORD *)v19 + 1) = 0u;
      *((_OWORD *)v19 + 2) = 0u;
      *(_OWORD *)v19 = 0u;
      qword_166AE0 = (__int64)v19;
      _cxa_guard_release((__guard *)&byte_166AE8);
      if ( !s )
        goto LABEL_21;
    }
    v8 = (_QWORD *)qword_166AE0;
    v9 = *(_QWORD *)(qword_166AE0 + 8);
    while ( 1 )
    {
      v10 = v9 - 1;
      if ( v9 - 1 < 0 )
        break;
      v11 = *(_QWORD *)(*v8 + 8 * v9 - 8);
      if ( *(_QWORD *)(v11 + 8) )
        v12 = *(const char **)v11;
      else
        v12 = &byte_F154B;
      v13 = strcmp(v12, s);
      v9 = v10;
      if ( !v13 )
      {
        if ( (_DWORD)v10 != -1 )
          goto LABEL_20;
        break;
      }
    }
    v14 = qword_164A28;
    if ( !qword_164A28 )
      goto LABEL_21;
    v15 = off_164A30;
    v10 = 0;
    v16 = 0;
    while ( strcmp(*(const char **)((char *)v15 + v10), s) )
    {
      ++v16;
      v10 += 40;
      if ( v16 >= v14 )
        goto LABEL_21;
    }
    if ( !(_UNKNOWN **)((char *)v15 + v10) || !*(_UNKNOWN **)((char *)v15 + v10 + 8) )
      goto LABEL_21;
    LODWORD(v10) = (int)v10 / -40;
LABEL_20:
    if ( (_DWORD)v10 == 0x7FFFFFFF )
      goto LABEL_21;
    sub_39140(ptr, v6 + 1);
    v21[0] = (__int64 *)ptr;
    *((_DWORD *)sub_6CBA0(a1, (__int64)ptr, (__int64)byte_103C10, v21) + 14) = v10;
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      ptr[2] = nullptr;
    }
    v17 = 1;
    goto LABEL_22;
  }
  return 0;
}
// F154B: using guessed type char byte_F154B;
// 164A28: using guessed type __int64 qword_164A28;
// 164A30: using guessed type _UNKNOWN **off_164A30;
// 166AA8: using guessed type __int64 qword_166AA8;
// 166AE0: using guessed type __int64 qword_166AE0;
// 166AE8: using guessed type char byte_166AE8;
