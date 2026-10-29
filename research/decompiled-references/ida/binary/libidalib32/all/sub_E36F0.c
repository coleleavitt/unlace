unsigned __int64 __fastcall sub_E36F0(__int64 a1, __int64 *a2, double a3, double a4)
{
  __int64 v4; // rax
  char v6; // al
  _DWORD *v7; // rsi
  _DWORD **v8; // r13
  _DWORD *v9; // r8
  __int64 (*v10)(); // rax
  bool v11; // zf
  __int64 (__fastcall *v12)(__int64, __int64); // rdx
  char v14; // bl
  const char *v15; // rsi
  char v16; // cl
  int v17; // edx
  __int64 (*v18)(); // rax
  int v19; // eax
  _DWORD *v20; // rdx
  __int64 v21; // r15
  __int64 v22; // rsi
  __int64 *v23; // r15
  int v24; // eax
  __int64 v25; // rcx
  unsigned __int64 v26; // r10
  __int64 v27; // rax
  _QWORD *v28; // rbx
  _DWORD *v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rcx
  _QWORD *v32; // rbp
  _QWORD *v33; // rbx
  __int64 v34; // r13
  void (__fastcall ***v35)(_QWORD); // rax
  void (__fastcall ***v36)(_QWORD); // rsi
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // [rsp+0h] [rbp-A8h]
  __int64 v41; // [rsp+0h] [rbp-A8h]
  _DWORD *v42; // [rsp+10h] [rbp-98h]
  __int64 v43; // [rsp+10h] [rbp-98h]
  unsigned __int64 v44; // [rsp+18h] [rbp-90h]
  _DWORD *v45; // [rsp+18h] [rbp-90h]
  _DWORD *v46; // [rsp+18h] [rbp-90h]
  _DWORD *v47; // [rsp+20h] [rbp-88h]
  __int64 v48; // [rsp+20h] [rbp-88h]
  _DWORD **v49; // [rsp+28h] [rbp-80h]
  _DWORD *v50; // [rsp+30h] [rbp-78h]
  _DWORD *v51; // [rsp+38h] [rbp-70h] BYREF
  _DWORD *v52; // [rsp+40h] [rbp-68h] BYREF
  __int128 v53; // [rsp+48h] [rbp-60h]
  __int64 v54; // [rsp+58h] [rbp-50h]
  int v55; // [rsp+60h] [rbp-48h]
  unsigned __int64 v56; // [rsp+68h] [rbp-40h]

  v4 = *a2;
  v56 = __readfsqword(0x28u);
  (*(void (**)(void))(v4 + 88))();
  if ( !v50 )
    return v56 - __readfsqword(0x28u);
  v6 = (*(__int64 (__fastcall **)())(*(_QWORD *)v50 + 8LL))();
  v7 = v50;
  v8 = &v51;
  while ( v6 )
  {
    v12 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 32LL);
    if ( v12 == sub_B71B0 )
      (*(void (__fastcall **)(_DWORD **))(*(_QWORD *)v7 + 24LL))(v8);
    else
      ((void (__fastcall *)(_DWORD **))v12)(v8);
    v9 = v51;
    if ( v51 )
    {
      v10 = *(__int64 (**)())(*(_QWORD *)v51 + 120LL);
      if ( v10 == sub_B6E10 )
      {
LABEL_6:
        v11 = v9[2]-- == 1;
        if ( v11 )
          (**(void (__fastcall ***)(_DWORD *))v9)(v9);
        goto LABEL_8;
      }
      if ( ((int (__fastcall *)(_DWORD *, _QWORD))v10)(v51, *(_QWORD *)(a1 + 8)) <= 5 )
      {
        v9 = v51;
        v18 = *(__int64 (**)())(*(_QWORD *)v51 + 120LL);
        if ( v18 == sub_B6E10 )
          goto LABEL_26;
        v19 = ((__int64 (__fastcall *)(_DWORD *, _QWORD))v18)(v51, *(_QWORD *)(a1 + 8));
        v9 = v51;
        if ( v19 != 3 )
          goto LABEL_26;
        v52 = nullptr;
        v54 = 0;
        v55 = -1;
        v53 = 0;
        if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, _DWORD **))(*(_QWORD *)v51 + 72LL))(v51, &v52)
          && (_QWORD)v53
          && rangeset_t_find_range() )
        {
          sub_E36F0(a1, v51);
        }
        if ( v52 )
        {
          *(_QWORD *)&v53 = 0;
          qfree();
        }
        goto LABEL_35;
      }
      if ( !(_BYTE)byte_251048 && __cxa_guard_acquire(&byte_251048) )
      {
        qword_251050 = 0;
        xmmword_251058 = 0;
        __cxa_atexit((void (*)(void *))sub_91BF0, &qword_251050, &off_22E220);
        __cxa_guard_release(&byte_251048);
      }
      v14 = (*(__int64 (__fastcall **)(_DWORD *, __int64 *))(*(_QWORD *)v51 + 16LL))(v51, &qword_251050);
      if ( (debug & 0x40000) != 0 )
      {
        v15 = "<unnamed>";
        if ( v14 )
        {
          v15 = s1;
          if ( (_QWORD)xmmword_251058 )
            v15 = (const char *)qword_251050;
        }
        sub_91EA0((__int64)"Candidate local variable: %s (bounds: ", v15);
        v52 = nullptr;
        v54 = 0;
        v55 = -1;
        v53 = 0;
        v16 = (*(__int64 (__fastcall **)(_DWORD *, _DWORD **))(*(_QWORD *)v51 + 72LL))(v51, &v52);
        v17 = debug & 0x40000;
        if ( !v16 )
          goto LABEL_20;
        v40 = v53;
        if ( !(_QWORD)v53 )
          goto LABEL_20;
        v20 = v52;
        v21 = 0;
        if ( (debug & 0x40000) != 0 )
        {
          while ( 1 )
          {
            v22 = (unsigned int)v20[2 * (int)v21];
            sub_91EA0((__int64)"[%a -> %a[", 0.0, a4);
            if ( v40 == ++v21 )
              break;
            if ( (debug & 0x40000) != 0 )
            {
              v42 = v52;
              sub_91EA0((__int64)" ", v22);
              v20 = v42;
              if ( (debug & 0x40000) != 0 )
                continue;
            }
            goto LABEL_22;
          }
          v17 = debug & 0x40000;
LABEL_20:
          if ( v17 )
            sub_91EA0((__int64)")\n");
        }
LABEL_22:
        if ( v52 )
        {
          *(_QWORD *)&v53 = 0;
          qfree();
        }
      }
      v9 = v51;
      if ( !v14 || (unsigned __int64)xmmword_251058 <= 1 )
      {
LABEL_26:
        if ( !v9 )
          goto LABEL_8;
        goto LABEL_6;
      }
      v52 = v51;
      v23 = *(__int64 **)(a1 + 24);
      if ( v51 )
      {
        v24 = v51[2] + 1;
        v51[2] = v24;
        v25 = v23[1];
        v26 = v23[2];
        if ( v26 >= v25 + 1 )
        {
          *(_QWORD *)(*v23 + 8 * v25) = v9;
LABEL_51:
          v9[2] = v24 + 1;
          ++v23[1];
          v11 = v9[2]-- == 1;
          if ( v11 )
            (**(void (__fastcall ***)(_DWORD *))v9)(v9);
LABEL_35:
          v9 = v51;
          if ( !v51 )
            goto LABEL_8;
          goto LABEL_6;
        }
LABEL_53:
        v47 = v9;
        v44 = v26;
        v27 = qvector_reserve();
        v41 = v27;
        v28 = (_QWORD *)*v23;
        v29 = v47;
        v43 = v23[2];
        v30 = v23[1];
        v23[2] = v44;
        v31 = v30 - 1;
        if ( v31 >= 0 )
        {
          v45 = v47;
          v48 = a1;
          v32 = v28;
          v33 = (_QWORD *)v27;
          v49 = v8;
          v34 = v31;
          do
          {
            v35 = (void (__fastcall ***)(_QWORD))*v32;
            *v33 = *v32;
            if ( v35 )
              ++*((_DWORD *)v35 + 2);
            v36 = (void (__fastcall ***)(_QWORD))*v32;
            if ( *v32 )
            {
              v11 = (*((_DWORD *)v36 + 2))-- == 1;
              if ( v11 )
                (**(void (__fastcall ***)(_QWORD))*v32)(*v32);
            }
            ++v32;
            ++v33;
          }
          while ( v34-- != 0 );
          v29 = v45;
          a1 = v48;
          v8 = v49;
        }
        v46 = v29;
        qfree();
        v9 = v46;
        v23[2] = v43;
        v38 = v23[1];
        *v23 = v41;
        *(_QWORD *)(v41 + 8 * v38) = v46;
        if ( v46 )
        {
          v24 = v46[2];
          goto LABEL_51;
        }
      }
      else
      {
        v39 = v23[1];
        v26 = v23[2];
        if ( v26 < v39 + 1 )
          goto LABEL_53;
        *(_QWORD *)(*v23 + 8 * v39) = 0;
      }
      ++v23[1];
      goto LABEL_35;
    }
LABEL_8:
    v6 = (*(__int64 (__fastcall **)())(*(_QWORD *)v50 + 16LL))();
    v7 = v50;
  }
  v11 = v7[2]-- == 1;
  if ( v11 )
    (**(void (__fastcall ***)(_DWORD *))v7)(v7);
  return v56 - __readfsqword(0x28u);
}

