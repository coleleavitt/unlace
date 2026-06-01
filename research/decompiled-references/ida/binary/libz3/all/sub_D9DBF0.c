__int64 __fastcall sub_D9DBF0(_QWORD *a1)
{
  char **exception; // rbp
  _DWORD *v3; // rax
  __int64 (__fastcall ***v4)(__int64); // r13
  bool v5; // zf
  _QWORD *v6; // rbx
  _QWORD *i; // r12
  __int64 v8; // r12
  __int64 v9; // rdi
  int v10; // eax
  _QWORD *v11; // rbx
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rdi
  __int64 *v17; // rbx
  __int64 *v18; // r13
  __int64 j; // rax
  void (__fastcall ***v20)(_QWORD); // rbx
  void (__fastcall ***v21)(_QWORD); // rbx
  __int64 (__fastcall *v23)(__int64); // rax
  __int64 v24; // r12
  __int64 (__fastcall **v25)(__int64); // rbx
  __int64 (__fastcall **v26)(__int64); // r12
  __int64 (__fastcall *v27)(__int64); // rsi
  __int64 (__fastcall **v28)(__int64); // rdi
  __int64 (__fastcall *v29)(__int64); // rsi
  __int64 (__fastcall **v30)(__int64); // rax
  __int64 (__fastcall **v31)(__int64); // rbx
  __int64 (__fastcall **v32)(__int64); // rdi
  __int64 (__fastcall **v33)(__int64); // rdi
  __int64 v34; // [rsp+0h] [rbp-A8h]
  __int64 v35; // [rsp+8h] [rbp-A0h]
  unsigned int v36; // [rsp+Ch] [rbp-9Ch]
  __int64 v37; // [rsp+10h] [rbp-98h]
  void *ptr[4]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v39[24]; // [rsp+40h] [rbp-68h] BYREF
  __int64 *v40; // [rsp+58h] [rbp-50h]

  v3 = (_DWORD *)a1[13];
  ptr[0] = v3;
  if ( v3 )
    ++v3[32];
  sub_D9EC20(v39, *a1, ptr);
  v4 = (__int64 (__fastcall ***)(__int64))ptr[0];
  if ( ptr[0] )
  {
    v5 = (*((_DWORD *)ptr[0] + 32))-- == 1;
    if ( v5 )
    {
      v23 = **v4;
      if ( v23 == sub_38D2C0 )
      {
        v24 = *((unsigned int *)v4 + 6);
        v25 = v4[2];
        *v4 = (__int64 (__fastcall **)(__int64))&off_1C4DD50;
        v26 = &v25[2 * v24];
        if ( v25 != v26 )
        {
          while ( (unsigned __int64)*v25 <= 1 )
          {
            v25 += 2;
            if ( v26 == v25 )
              goto LABEL_48;
          }
          if ( v26 != v25 )
          {
            v27 = *v25;
            v28 = v4[1];
            if ( *v25 )
              goto LABEL_46;
            while ( 1 )
            {
              v29 = v25[1];
              if ( v29 )
              {
                v5 = (*((_DWORD *)v29 + 2))-- == 1;
                if ( v5 )
                  sub_15D7BC0(v28, v29);
              }
              v30 = v25 + 2;
              if ( v26 == v25 + 2 )
                break;
              while ( 1 )
              {
                v27 = *v30;
                v25 = v30;
                if ( (unsigned __int64)*v30 > 1 )
                  break;
                v30 += 2;
                if ( v26 == v30 )
                  goto LABEL_48;
              }
              if ( v26 == v30 )
                break;
              v28 = v4[1];
LABEL_46:
              v5 = (*((_DWORD *)v27 + 2))-- == 1;
              if ( v5 )
              {
                sub_15D7BC0(v28, v27);
                v28 = v4[1];
              }
            }
          }
        }
LABEL_48:
        sub_1695230(v4 + 9);
        v31 = v4[8];
        if ( v31 )
        {
          (*(void (__fastcall **)(__int64 (__fastcall **)(__int64)))*v31)(v4[8]);
          sub_186B220(v31);
        }
        v32 = v4[5];
        if ( v32 )
          sub_186B220(v32);
        v33 = v4[2];
        if ( v33 )
          sub_186B220(v33);
      }
      else
      {
        v23((__int64)v4);
      }
      sub_186B220(v4);
    }
  }
  v6 = (_QWORD *)a1[6];
  if ( v6 )
  {
    for ( i = &v6[*((unsigned int *)v6 - 1)]; i != v6; ++v6 )
      sub_E5EBF0(a1[14], *v6);
  }
  v8 = 0;
  while ( 1 )
  {
    v9 = *a1;
    ++*(_DWORD *)a1[36];
    if ( !(unsigned __int8)sub_18290A0(v9) )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)ptr, (const char *)off_1C7E180);
      *exception = (char *)off_1C63670;
      sub_2333C0(exception + 1, ptr);
      sub_233E40((__int64)ptr);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
    }
    v10 = sub_E60CB0((std::ios_base *)a1[14], 0, 0);
    if ( !v10 || v10 == -1 )
      break;
    ptr[0] = nullptr;
    v11 = (_QWORD *)a1[14];
    (*(void (__fastcall **)(_QWORD *, void **))(*v11 + 32LL))(v11, ptr);
    if ( ptr[0] )
    {
      v16 = v11[7];
      if ( v16 )
        (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v16 + 32LL))(v16, ptr);
    }
    if ( (unsigned __int8)sub_D9EC70((unsigned int)v39, (unsigned int)ptr, v12, v13, v14, v15, v34, v35, v37) )
    {
      v21 = (void (__fastcall ***)(_QWORD))ptr[0];
      if ( ptr[0] )
      {
        v5 = (*((_DWORD *)ptr[0] + 4))-- == 1;
        if ( v5 )
        {
          (**v21)(v21);
          sub_186B220(v21);
        }
      }
      v10 = 1;
      break;
    }
    v17 = v40;
    if ( v40 )
    {
      v18 = &v40[2 * *((unsigned int *)v40 - 1)];
      if ( v18 != v40 )
      {
        do
        {
          sub_D9D240(a1, *v17, v17[1]);
          v17 += 2;
        }
        while ( v18 != v17 );
      }
    }
    for ( j = a1[23]; j; v8 = (unsigned int)(v8 + 1) )
    {
      if ( (unsigned int)v8 >= *(_DWORD *)(j - 4) )
        break;
      sub_E5EBF0(a1[14], *(_QWORD *)(j + 8 * v8));
      j = a1[23];
    }
    v20 = (void (__fastcall ***)(_QWORD))ptr[0];
    if ( ptr[0] )
    {
      v5 = (*((_DWORD *)ptr[0] + 4))-- == 1;
      if ( v5 )
      {
        (**v20)(v20);
        sub_186B220(v20);
      }
    }
  }
  v36 = v10;
  sub_D9F6C0(v39);
  return v36;
}

