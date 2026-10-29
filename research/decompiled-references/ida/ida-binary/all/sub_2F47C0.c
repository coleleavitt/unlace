__int64 __fastcall sub_2F47C0(int a1, char *a2)
{
  __int64 (__fastcall *v3)(__int64); // rax
  __int64 v4; // r13
  void (__fastcall **v6)(char *, __int64, __int64 **); // rax
  void (__fastcall **v7)(char *, __int64, __int64 (__fastcall ***)()); // rax
  const char *v8; // rsi
  __int64 (__fastcall **v9)(); // rdi
  void (__fastcall **v10)(char *, __int64, __int64 (__fastcall ***)()); // rax
  __int64 v11; // rcx
  _QWORD *v12; // rbx
  __int64 v13; // rdx
  _QWORD *v14; // rbp
  __int64 v15; // r15
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r15
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdi
  const char *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rax
  const char *v27; // rdx
  __int64 v28; // rdi
  size_t v29; // rax
  __int64 v30; // r15
  size_t v31; // r9
  size_t v32; // r10
  __int64 v33; // rsi
  size_t v34; // rdx
  size_t v35; // rax
  __int64 v36; // rbp
  size_t v37; // r15
  size_t v38; // r9
  __int64 v39; // rsi
  size_t v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rbp
  __int64 v45; // rbx
  __int64 *v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rdx
  __int64 v49; // rbp
  __int64 v50; // rbx
  __int64 *v51; // rax
  __int64 v52; // rdi
  __int64 v53; // [rsp+8h] [rbp-9F0h]
  size_t v54; // [rsp+18h] [rbp-9E0h]
  size_t v55; // [rsp+18h] [rbp-9E0h]
  size_t v56; // [rsp+20h] [rbp-9D8h]
  size_t v57; // [rsp+20h] [rbp-9D8h]
  size_t v58; // [rsp+28h] [rbp-9D0h]
  __int64 *v59; // [rsp+30h] [rbp-9C8h] BYREF
  __int128 v60; // [rsp+38h] [rbp-9C0h]
  __int64 v61; // [rsp+50h] [rbp-9A8h] BYREF
  __int128 v62; // [rsp+58h] [rbp-9A0h]
  __int64 v63; // [rsp+70h] [rbp-988h] BYREF
  __int128 v64; // [rsp+78h] [rbp-980h]
  __int64 v65; // [rsp+90h] [rbp-968h] BYREF
  __int128 v66; // [rsp+98h] [rbp-960h]
  __int64 v67; // [rsp+B0h] [rbp-948h] BYREF
  __int128 v68; // [rsp+B8h] [rbp-940h]
  __int64 v69; // [rsp+D0h] [rbp-928h] BYREF
  __int64 v70; // [rsp+D8h] [rbp-920h] BYREF
  __int128 v71; // [rsp+E0h] [rbp-918h]
  int v72; // [rsp+F0h] [rbp-908h]
  __int64 v73; // [rsp+100h] [rbp-8F8h] BYREF
  __int64 v74; // [rsp+108h] [rbp-8F0h] BYREF
  __int128 v75; // [rsp+110h] [rbp-8E8h]
  int v76; // [rsp+120h] [rbp-8D8h]
  _QWORD v77[6]; // [rsp+130h] [rbp-8C8h] BYREF
  int v78; // [rsp+160h] [rbp-898h]
  __int64 *v79; // [rsp+168h] [rbp-890h]
  __int64 (__fastcall **v80)(); // [rsp+170h] [rbp-888h] BYREF
  __int128 v81; // [rsp+178h] [rbp-880h]
  __int64 v82; // [rsp+188h] [rbp-870h]
  __int64 v83; // [rsp+190h] [rbp-868h]
  __int64 v84; // [rsp+198h] [rbp-860h]
  int v85; // [rsp+1A0h] [rbp-858h]
  __int64 *v86; // [rsp+1A8h] [rbp-850h]
  char s[1024]; // [rsp+1B0h] [rbp-848h] BYREF
  char src[1032]; // [rsp+5B0h] [rbp-448h] BYREF
  unsigned __int64 v89; // [rsp+9B8h] [rbp-40h]

  v89 = __readfsqword(0x28u);
  if ( !(_BYTE)byte_8CD498 && __cxa_guard_acquire(&byte_8CD498) )
  {
    qword_8CD4A0 = 0;
    xmmword_8CD4A8 = 0;
    __cxa_atexit((void (*)(void *))sub_16B560, &qword_8CD4A0, &off_85BC80);
    __cxa_guard_release(&byte_8CD498);
  }
  v3 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL);
  if ( v3 == form_actions_impl_t__::vfunc_9 )
    v4 = *((_QWORD *)a2 + 4);
  else
    v4 = v3((__int64)a2);
  switch ( a1 )
  {
    case 3:
      v7 = *(void (__fastcall ***)(char *, __int64, __int64 (__fastcall ***)()))a2;
      v8 = (_BYTE *)(&dword_0 + 3);
      v81 = 0;
      v80 = nullptr;
      (*v7)(a2, 3, &v80);
      if ( (_QWORD)v81 == 1 )
      {
        (*(void (__fastcall **)(char *, __int64, __int64 *))(*(_QWORD *)a2 + 8LL))(a2, 4, &qword_8CD4A0);
        (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 4);
        sub_2EE680(5u, (__int64)a2);
        v8 = a2;
        sub_2EE680(6u, (__int64)a2);
        v9 = v80;
        *(_DWORD *)(v4 + 232) = (unsigned int)*v80;
      }
      else
      {
        v9 = v80;
      }
      if ( v9 )
      {
        *(_QWORD *)&v81 = 0;
        qfree(v9, v8);
      }
      break;
    case 4:
      v69 = 40;
      v70 = 0;
      v72 = 132;
      v76 = 132;
      v6 = *(void (__fastcall ***)(char *, __int64, __int64 **))a2;
      v73 = 40;
      v74 = 0;
      v59 = nullptr;
      v61 = 0;
      v63 = 0;
      v71 = 0;
      v75 = 0;
      v60 = 0;
      v62 = 0;
      v64 = 0;
      (*v6)(a2, 4, &v59);
      if ( (_QWORD)v60 == 2 )
      {
        v11 = *v59;
        if ( *v59 )
          v12 = (_QWORD *)(**(_QWORD **)(v4 + 192) + 16 * (5 * v11 - 5));
        else
          v12 = (_QWORD *)(*(_QWORD *)(v4 + 200) + 80LL * *(int *)(v4 + 232));
        v13 = v59[1];
        if ( v13 )
          v14 = (_QWORD *)(**(_QWORD **)(v4 + 192) + 16 * (5 * v13 - 5));
        else
          v14 = (_QWORD *)(*(_QWORD *)(v4 + 200) + 80LL * *(int *)(v4 + 232));
        v15 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 8LL) + 1LL;
        v16 = v15 - v13;
        v17 = v15 - v11;
        v53 = v16;
        if ( v16 >= v17 )
        {
          v53 = v17;
          v17 = v16;
          v18 = v14;
          v14 = v12;
          v12 = v18;
        }
        v77[1] = v14 + 5;
        v19 = v14[5];
        v65 = 0;
        v77[2] = v19;
        v20 = v14[6] + v19;
        v67 = 0;
        v77[3] = v20;
        v77[4] = 0;
        v77[5] = 0;
        v78 = 0;
        v77[0] = metadata_dumper_t___vtable;
        v79 = &v65;
        v66 = 0;
        v68 = 0;
        v65 = qvector_reserve(&v65, 0, 1, 24);
        v21 = v65 + 24 * v66;
        v22 = &s1;
        *(_QWORD *)v21 = 0;
        *(_OWORD *)(v21 + 8) = 0;
        *(_QWORD *)&v66 = v66 + 1;
        if ( v14[3] )
          v22 = (const char *)v14[2];
        sub_169A50((__int64 *)v21, (__int64)"Name: %s", v22);
        metadata_visitor_t__visit(v77);
        v23 = v68;
        v83 = 0;
        *(_QWORD *)&v81 = v12 + 5;
        v24 = v12[5];
        v84 = 0;
        v25 = v67;
        *((_QWORD *)&v81 + 1) = v24;
        v82 = v12[6] + v24;
        v85 = 0;
        v80 = metadata_dumper_t___vtable;
        v86 = &v67;
        if ( *((_QWORD *)&v68 + 1) < (unsigned __int64)(v68 + 1) )
        {
          v67 = qvector_reserve(&v67, v67, v68 + 1, 24);
          v23 = v68;
          v25 = v67;
        }
        v26 = 3 * v23;
        v27 = &s1;
        v28 = v25 + 8 * v26;
        *(_QWORD *)v28 = 0;
        *(_OWORD *)(v28 + 8) = 0;
        *(_QWORD *)&v68 = v68 + 1;
        if ( v12[3] )
          v27 = (const char *)v12[2];
        sub_169A50((__int64 *)v28, (__int64)"Name: %s", v27);
        metadata_visitor_t__visit(&v80);
        sub_169A50(&v61, (__int64)"#%zu  ", v53);
        sub_169A50(&v63, (__int64)"#%zu  ", v17);
        format_timestamp(s, 1024, v14[8], 0);
        v29 = strlen(s);
        v30 = v62;
        v31 = v29;
        v32 = v29;
        if ( (_QWORD)v62 )
        {
          v30 = v62 - 1;
          v32 = v29 + v62 - 1;
        }
        v33 = v61;
        v34 = v32 + 1;
        if ( *((_QWORD *)&v62 + 1) < v32 + 1 )
        {
          v58 = v29;
          v57 = v32;
          v55 = v32 + 1;
          v61 = qvector_reserve(&v61, v61, v34, 1);
          v31 = v58;
          v33 = v61;
          v32 = v57;
          v34 = v55;
        }
        *(_QWORD *)&v62 = v34;
        *(_BYTE *)(v33 + v32) = 0;
        memmove((void *)(v30 + v61), s, v31);
        format_timestamp(src, 1024, v12[8], 0);
        v35 = strlen(src);
        v36 = v64;
        v37 = v35;
        v38 = v35;
        if ( (_QWORD)v64 )
        {
          v36 = v64 - 1;
          v38 = v35 + v64 - 1;
        }
        v39 = v63;
        v40 = v38 + 1;
        if ( *((_QWORD *)&v64 + 1) < v38 + 1 )
        {
          v56 = v38;
          v54 = v38 + 1;
          v63 = qvector_reserve(&v63, v63, v40, 1);
          v38 = v56;
          v39 = v63;
          v40 = v54;
        }
        *(_QWORD *)&v64 = v40;
        *(_BYTE *)(v39 + v38) = 0;
        memmove((void *)(v36 + v63), src, v37);
        sub_2F1E80(&v70, (unsigned __int64)&v67, &v65, v41);
        sub_2F1E80(&v74, (unsigned __int64)&v65, &v67, v42);
        v43 = v67;
        if ( v67 )
        {
          v44 = v68;
          if ( (_QWORD)v68 )
          {
            v45 = 0;
            do
            {
              v46 = (__int64 *)(v43 + 24 * v45);
              v47 = *v46;
              if ( *v46 )
              {
                v46[1] = 0;
                qfree(v47, (const char *)&v65);
                v43 = v67;
              }
              ++v45;
            }
            while ( v44 != v45 );
          }
          *(_QWORD *)&v68 = 0;
          qfree(v43, (const char *)&v65);
        }
        v48 = v65;
        if ( v65 )
        {
          v49 = v66;
          if ( (_QWORD)v66 )
          {
            v50 = 0;
            do
            {
              v51 = (__int64 *)(v48 + 24 * v50);
              v52 = *v51;
              if ( *v51 )
              {
                v51[1] = 0;
                qfree(v52, (const char *)&v65);
                v48 = v65;
              }
              ++v50;
            }
            while ( v49 != v50 );
          }
          *(_QWORD *)&v66 = 0;
          qfree(v48, (const char *)&v65);
        }
      }
      (*(void (__fastcall **)(char *, __int64, __int64 *))(*(_QWORD *)a2 + 112LL))(a2, 5, &v61);
      (*(void (__fastcall **)(char *, __int64, __int64 *))(*(_QWORD *)a2 + 112LL))(a2, 6, &v63);
      (*(void (__fastcall **)(char *, __int64, __int64 *))(*(_QWORD *)a2 + 8LL))(a2, 5, &v69);
      (*(void (__fastcall **)(char *, __int64, __int64 *))(*(_QWORD *)a2 + 8LL))(a2, 6, &v73);
      if ( v63 )
      {
        *(_QWORD *)&v64 = 0;
        qfree(v63, &byte_6);
      }
      if ( v61 )
      {
        *(_QWORD *)&v62 = 0;
        qfree(v61, &byte_6);
      }
      if ( v59 )
      {
        *(_QWORD *)&v60 = 0;
        qfree(v59, &byte_6);
      }
      if ( v74 )
      {
        *(_QWORD *)&v75 = 0;
        qfree(v74, &byte_6);
      }
      if ( v70 )
      {
        *(_QWORD *)&v71 = 0;
        qfree(v70, &byte_6);
      }
      break;
    case -1:
      if ( *(_QWORD *)(*(_QWORD *)(v4 + 184) + 24LL) == 1 )
      {
        *(_DWORD *)(v4 + 232) = 0;
        v81 = 0;
        v80 = nullptr;
        v80 = (__int64 (__fastcall **)())qvector_reserve(&v80, 0, 1, 8);
        v80[(_QWORD)v81] = nullptr;
        v10 = *(void (__fastcall ***)(char *, __int64, __int64 (__fastcall ***)()))a2;
        *(_QWORD *)&v81 = v81 + 1;
        v10[1](a2, 3, &v80);
        (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 3);
        if ( v80 )
        {
          *(_QWORD *)&v81 = 0;
          qfree(v80, (_BYTE *)&dword_0 + 3);
        }
      }
      else
      {
        *(_DWORD *)(v4 + 232) = -1;
        (*(void (__fastcall **)(char *, __int64, __int64 *))(*(_QWORD *)a2 + 8LL))(a2, 3, &qword_8CD4A0);
        (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 3);
      }
      (*(void (__fastcall **)(char *, __int64, __int64 *))(*(_QWORD *)a2 + 8LL))(a2, 4, &qword_8CD4A0);
      (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 4);
      sub_2EE680(5u, (__int64)a2);
      sub_2EE680(6u, (__int64)a2);
      break;
  }
  return 1;
}
