__int64 __fastcall sub_176220(__int64 *a1, unsigned __int8 a2)
{
  void (*v2)(); // rax
  __int64 v3; // rdx
  _QWORD *v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  struct __jmp_buf_tag *v10; // rax
  __int64 v11; // rax
  __int64 (*v12)(); // rcx
  __int64 v13; // rbp
  int v14; // eax
  __int64 v15; // rdx
  int v17; // [rsp+8h] [rbp-30h]
  unsigned __int8 v18; // [rsp+1Bh] [rbp-1Dh]
  int v19; // [rsp+1Ch] [rbp-1Ch]

  if ( !a2 )
  {
    v2 = *(void (**)())(*a1 + 232);
    if ( v2 != nullsub_106 )
      ((void (__fastcall *)(__int64 *, _QWORD))v2)(a1, 0);
  }
  v18 = 0;
  v19 = 0;
  if ( a1[3] )
  {
    while ( 1 )
    {
      if ( !v18 )
      {
        qmutex_lock();
        v18 = 1;
        if ( v19 >= (unsigned __int64)a1[3] )
          goto LABEL_13;
      }
      if ( byte_25139C )
      {
        v10 = (struct __jmp_buf_tag *)sub_1761D0();
        v17 = 0;
        if ( _setjmp(v10) )
          goto LABEL_9;
      }
      else
      {
        v17 = 0;
      }
      v3 = a1[2];
      v4 = *(_QWORD **)(v3 + 24LL * v19);
      v5 = v4[1];
      if ( (v5 & 0xFFFFFFFFFFFFFFF8LL) != 0x12345678 || !v4[2] && (v5 & 4) == 0 )
      {
LABEL_9:
        if ( !byte_25139C )
          goto LABEL_10;
        v17 = 1;
LABEL_18:
        v8 = *((_QWORD *)&xmmword_256590 + 1);
        v9 = **((_QWORD **)&xmmword_256590 + 1);
        **(_QWORD **)(*((_QWORD *)&xmmword_256590 + 1) + 8LL) = **((_QWORD **)&xmmword_256590 + 1);
        *(_QWORD *)(v9 + 8) = *(_QWORD *)(v8 + 8);
        qfree();
        --qword_2565A0;
        goto LABEL_19;
      }
      v11 = *a1;
      v12 = *(__int64 (**)())(*a1 + 248);
      if ( v12 != sub_174740 )
      {
        if ( !((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *, _QWORD))v12)(a1, v4, a2) )
          goto LABEL_30;
        v11 = *a1;
        v3 = a1[2];
      }
      *((_DWORD *)a1 + 20) = *(_DWORD *)(v3 + 24LL * v19 + 16);
      (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v11 + 256))(a1, v19, 0);
      qmutex_unlock();
      v18 = 0;
      v13 = v4[1] & 4LL;
      v14 = (*(__int64 (__fastcall **)(_QWORD *))*v4)(v4);
      if ( (_DWORD)v13 )
        goto LABEL_32;
      v15 = v4[1];
      if ( (v15 & 0xFFFFFFFFFFFFFFF8LL) == 0x12345678 )
        break;
LABEL_28:
      if ( !v4 )
        goto LABEL_32;
      (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
      v17 = 2;
LABEL_30:
      if ( byte_25139C )
        goto LABEL_18;
LABEL_19:
      if ( v17 == 1 )
      {
LABEL_10:
        v6 = a1[3];
        if ( v19 < v6 )
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 256))(a1, v19, 0);
          v6 = a1[3];
        }
        goto LABEL_21;
      }
      v6 = a1[3];
      if ( v17 > 0 )
        goto LABEL_21;
LABEL_12:
      if ( ++v19 >= v6 )
        goto LABEL_13;
    }
    if ( !v4[2] )
      goto LABEL_42;
    while ( 1 )
    {
      v4[1] = v14;
      if ( (unsigned __int8)qsem_post() )
      {
LABEL_32:
        if ( !byte_25139C )
        {
          v6 = a1[3];
LABEL_21:
          --v19;
          goto LABEL_12;
        }
        v17 = 2;
        goto LABEL_18;
      }
      if ( under_debugger )
        BUG();
      v14 = interr();
LABEL_42:
      if ( (v15 & 4) == 0 )
        goto LABEL_28;
    }
  }
LABEL_13:
  result = v18;
  if ( v18 )
    return qmutex_unlock();
  return result;
}

