__int64 __fastcall sub_47B9C0(__int64 *a1, const char *a2, double a3)
{
  void (*v3)(); // rax
  __int64 v4; // rdx
  _QWORD *v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  struct __jmp_buf_tag *v11; // rax
  __int64 v12; // rax
  __int64 (*v13)(); // rcx
  __int64 v14; // rbp
  int v15; // eax
  __int64 v16; // rdx
  void (__fastcall *v17)(_QWORD *); // rax
  _QWORD *v18; // r12
  _QWORD *v19; // rbp
  __int64 v20; // rdi
  _QWORD *i; // rbp
  _QWORD *v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v28; // [rsp+8h] [rbp-30h]
  unsigned __int8 v29; // [rsp+Fh] [rbp-29h]
  unsigned __int8 v30; // [rsp+1Bh] [rbp-1Dh]
  int v31; // [rsp+1Ch] [rbp-1Ch]

  v29 = (unsigned __int8)a2;
  if ( !(_BYTE)a2 )
  {
    v3 = *(void (**)())(*a1 + 232);
    if ( v3 != nullsub_254 )
    {
      a2 = nullptr;
      ((void (__fastcall *)(__int64 *, _QWORD))v3)(a1, 0);
    }
  }
  v30 = 0;
  v31 = 0;
  if ( a1[3] )
  {
    while ( 1 )
    {
      if ( !v30 )
      {
        qmutex_lock(a1[8]);
        v30 = 1;
        if ( v31 >= (unsigned __int64)a1[3] )
          goto LABEL_13;
      }
      if ( byte_8C2ED0 )
      {
        v11 = (struct __jmp_buf_tag *)sub_47B970();
        v28 = 0;
        if ( _setjmp(v11) )
          break;
      }
      else
      {
        v28 = 0;
      }
      v4 = a1[2];
      v5 = *(_QWORD **)(v4 + 24LL * v31);
      v6 = v5[1];
      if ( (v6 & 0xFFFFFFFFFFFFFFF8LL) != 0x12345678 || !v5[2] && (v6 & 4) == 0 )
        break;
      v12 = *a1;
      v13 = *(__int64 (**)())(*a1 + 248);
      if ( v13 == sub_478190 )
      {
        while ( 1 )
        {
          a2 = (const char *)v31;
          *((_DWORD *)a1 + 20) = *(_DWORD *)(v4 + 24LL * v31 + 16);
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v12 + 256))(a1, v31, 0);
          qmutex_unlock(a1[8]);
          v30 = 0;
          v14 = v5[1] & 4LL;
          v15 = (*(__int64 (__fastcall **)(_QWORD *))*v5)(v5);
          if ( (_DWORD)v14 )
            goto LABEL_39;
          v16 = v5[1];
          if ( (v16 & 0xFFFFFFFFFFFFFFF8LL) != 0x12345678 )
            break;
          v24 = v5[2];
          if ( !v24 && (v16 & 4) == 0 )
            break;
          v5[1] = v15;
          if ( (unsigned __int8)qsem_post(v24) )
            goto LABEL_39;
          if ( under_debugger )
            BUG();
          interr(40002, v31, v25, v26, a3);
LABEL_50:
          v12 = *a1;
          v4 = a1[2];
        }
        if ( v5 )
        {
          v17 = *(void (__fastcall **)(_QWORD *))(*v5 + 16LL);
          if ( (char *)v17 == (char *)_base_app_mixin_t::execute_ui_requests )
          {
            v18 = (_QWORD *)v5[3];
            *v5 = &_base_app_mixin_t::execute_ui_requests;
            if ( v18 )
            {
              v19 = (_QWORD *)*v18;
              if ( (_QWORD *)*v18 != v18 )
              {
                do
                {
                  v20 = v19[2];
                  if ( v20 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
                  v19 = (_QWORD *)*v19;
                }
                while ( v19 != v18 );
                for ( i = (_QWORD *)*v18; i != v18; --v18[2] )
                {
                  v22 = i;
                  i = (_QWORD *)*i;
                  *(_QWORD *)v22[1] = i;
                  i[1] = v22[1];
                  qfree(v22, (const char *)v31);
                }
              }
              a3 = qfree(v18, (const char *)v31);
            }
            v23 = v5[2];
            *v5 = &off_86FF78;
            qsem_free(v23);
            a2 = (const char *)&qword_28;
            operator delete(v5, 0x28u);
          }
          else
          {
            v17(v5);
          }
        }
LABEL_39:
        if ( !byte_8C2ED0 )
        {
          v7 = a1[3];
LABEL_21:
          --v31;
          goto LABEL_12;
        }
        v28 = 2;
        goto LABEL_18;
      }
      a2 = *(const char **)(v4 + 24LL * v31);
      if ( ((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *, _QWORD))v13)(a1, v5, v29) )
        goto LABEL_50;
      if ( byte_8C2ED0 )
        goto LABEL_18;
LABEL_19:
      if ( v28 == 1 )
      {
LABEL_10:
        v7 = a1[3];
        if ( v31 < v7 )
        {
          a2 = (const char *)v31;
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 256))(a1, v31, 0);
          v7 = a1[3];
        }
        goto LABEL_21;
      }
      v7 = a1[3];
      if ( v28 > 0 )
        goto LABEL_21;
LABEL_12:
      if ( ++v31 >= v7 )
        goto LABEL_13;
    }
    if ( !byte_8C2ED0 )
      goto LABEL_10;
    v28 = 1;
LABEL_18:
    v9 = *((_QWORD *)&xmmword_8D1740 + 1);
    v10 = **((_QWORD **)&xmmword_8D1740 + 1);
    **(_QWORD **)(*((_QWORD *)&xmmword_8D1740 + 1) + 8LL) = **((_QWORD **)&xmmword_8D1740 + 1);
    *(_QWORD *)(v10 + 8) = *(_QWORD *)(v9 + 8);
    a3 = qfree(v9, a2);
    --qword_8D1750;
    goto LABEL_19;
  }
LABEL_13:
  result = v30;
  if ( v30 )
    return qmutex_unlock(a1[8]);
  return result;
}
