__int64 __fastcall sub_78B030(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v6; // rax
  unsigned int *v7; // rcx
  __int64 v8; // rax
  int v9; // edi
  unsigned int v10; // edx
  unsigned int *v11; // rsi
  __int64 v12; // rdx
  unsigned int *v13; // r8
  unsigned int *i; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, unsigned __int8); // rax
  unsigned int v18; // r13d
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rdx
  void *v23; // r14
  __int64 v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rbp
  unsigned int v27; // eax
  unsigned int v28; // r12d
  unsigned int v29; // edx
  unsigned int v30; // ecx
  unsigned int v31; // r15d
  unsigned int *v32; // rax
  unsigned int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rax
  char **exception; // rbx
  unsigned int v38; // [rsp+Ch] [rbp-6Ch]
  __int64 v39[11]; // [rsp+20h] [rbp-58h] BYREF

  v6 = *(_QWORD *)(a1 + 216);
  if ( v6 )
  {
    v7 = *(unsigned int **)v6;
    v8 = *(unsigned int *)(v6 + 8);
    v9 = *(_DWORD *)(a3 + 12);
    v10 = v8 - 1;
    v8 *= 16;
    v11 = (unsigned int *)((char *)v7 + v8);
    v12 = 16LL * (v9 & v10);
    v13 = &v7[(unsigned __int64)v12 / 4];
    if ( v12 != v8 )
    {
      for ( i = &v7[(unsigned __int64)v12 / 4]; v11 != i; i += 4 )
      {
        v15 = *(_QWORD *)i;
        if ( *(_QWORD *)i > 1u )
        {
          if ( *(_DWORD *)(v15 + 12) == v9 && a3 == v15 )
            return i[2];
        }
        else if ( !v15 )
        {
          goto LABEL_9;
        }
      }
    }
    for ( ; v13 != v7; v7 += 4 )
    {
      v20 = *(_QWORD *)v7;
      if ( *(_QWORD *)v7 > 1u )
      {
        if ( *(_DWORD *)(v20 + 12) == v9 && a3 == v20 )
        {
          i = v7;
          return i[2];
        }
      }
      else if ( !v20 )
      {
        break;
      }
    }
  }
LABEL_9:
  v16 = *(_QWORD *)(a1 + 192);
  v17 = *(__int64 (__fastcall **)(__int64, unsigned __int8))(*(_QWORD *)v16 + 24LL);
  if ( v17 == sub_788600 )
    v18 = sub_11CA540(v16, a2, 1);
  else
    v18 = v17(v16, a2);
  if ( !a2 )
  {
    if ( *(_BYTE *)(a1 + 273) )
    {
      v21 = sub_789F10(a1);
      v22 = v21[3];
      if ( v22 )
      {
        if ( *(_BYTE *)(v22 + 352) )
        {
          sub_7A4170(v21);
          v23 = sub_789F10(a1);
          v24 = *((_QWORD *)v23 + 297);
          if ( !v24 || (v25 = *(unsigned int *)(v24 - 4), (_DWORD)v25 == *(_DWORD *)(v24 - 8)) )
          {
            sub_2FD3F0((unsigned int **)v23 + 297);
            v24 = *((_QWORD *)v23 + 297);
            v25 = *(unsigned int *)(v24 - 4);
          }
          v26 = *((_QWORD **)v23 + 291);
          *(_DWORD *)(v24 + 4 * v25) = v18;
          ++*(_DWORD *)(v24 - 4);
          if ( v26 )
          {
            v27 = *((_DWORD *)v26 - 1);
            v38 = v27;
            if ( v18 < v27 )
            {
LABEL_39:
              v26[v18] = a3;
              return v18;
            }
            v28 = v18 + 1;
            if ( v27 >= v18 + 1 )
            {
              *((_DWORD *)v26 - 1) = v28;
              goto LABEL_39;
            }
          }
          else
          {
            v28 = v18 + 1;
            if ( v18 == -1 )
              goto LABEL_39;
            v36 = (_QWORD *)sub_186B270(0x18u);
            v38 = 0;
            *v36 = 2;
            v26 = v36 + 1;
            *((_QWORD *)v23 + 291) = v36 + 1;
          }
          while ( 1 )
          {
            v33 = *((_DWORD *)v26 - 2);
            if ( v33 >= v28 )
              break;
            v29 = (3 * v33 + 1) >> 1;
            v30 = 8 * v29 + 8;
            v31 = v29;
            if ( 8 * v33 + 8 >= v30 || v33 >= v29 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v39, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v39);
              sub_233E40((__int64)v39);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v32 = (unsigned int *)sub_186B300(v26 - 1, v30);
            v26 = v32 + 2;
            *((_QWORD *)v23 + 291) = v32 + 2;
            *v32 = v31;
          }
          *((_DWORD *)v26 - 1) = v28;
          v34 = 8LL * v28;
          v35 = 8LL * v38;
          if ( v35 != v34 )
            memset(&v26[(unsigned __int64)v35 / 8], 0, v34 - v35);
          goto LABEL_39;
        }
      }
    }
  }
  return v18;
}

