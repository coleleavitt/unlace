__int64 __fastcall sub_E6F600(__int64 a1, const void *a2, size_t a3, __int64 a4)
{
  __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // r9
  __int64 *v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  _QWORD *v19; // r13
  char *v20; // rdx
  _QWORD *v21; // rcx
  unsigned int v22; // eax
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // [rsp+0h] [rbp-58h]
  int v26; // [rsp+0h] [rbp-58h]
  int v27; // [rsp+0h] [rbp-58h]
  __int64 v28; // [rsp+0h] [rbp-58h]
  __int64 *v29; // [rsp+8h] [rbp-50h]
  __int64 *v30; // [rsp+8h] [rbp-50h]
  __int64 *v31[8]; // [rsp+18h] [rbp-40h] BYREF

  if ( !*(_QWORD *)a4 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)a1 + 17504LL);
    v9 = sub_2220DF0(a2, a3);
    v10 = (unsigned int)sub_2220F70(v8, a2, a3, v9);
    v11 = (__int64 *)(*(_QWORD *)v8 + 8 * v10);
    if ( *v11 )
    {
      if ( *v11 != -8 )
      {
        sub_965750(v31, v11, 0);
        v13 = *v31[0];
        v14 = *(__int64 **)(*v31[0] + 8);
        if ( v14 )
        {
LABEL_19:
          v31[0] = v14;
          *(_QWORD *)a4 = sub_FBF4F0(*(_QWORD *)(*(_QWORD *)a1 + 17512LL), 0, v31);
          return *(_QWORD *)a4;
        }
LABEL_6:
        v15 = *(_QWORD *)(v8 + 120);
        if ( !v15
          || (v25 = v13,
              v14 = (__int64 *)(*(__int64 (__fastcall **)(__int64, const void *, size_t))(*(_QWORD *)v15 + 16LL))(
                                 v15,
                                 a2,
                                 a3),
              v13 = v25,
              (*(_QWORD *)(v25 + 8) = v14) == 0) )
        {
          v16 = *(_QWORD *)(v8 + 24);
          *(_QWORD *)(v8 + 104) += 24LL;
          v14 = (__int64 *)((v16 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( *(_QWORD *)(v8 + 32) >= (unsigned __int64)(v14 + 3) && v16 )
          {
            *(_QWORD *)(v8 + 24) = v14 + 3;
          }
          else
          {
            v28 = v13;
            v14 = (__int64 *)sub_962430(v8 + 24, 24, 24, 3, v13, v12);
            v13 = v28;
          }
          v17 = *v14 & 0xFFFFF80000000000LL;
          v14[1] = 0;
          *v14 = v17 | 0x1FFFC05;
          *(_QWORD *)(v13 + 8) = v14;
          v14[2] = v13;
        }
        goto LABEL_19;
      }
      --*(_DWORD *)(v8 + 16);
    }
    v18 = *(_QWORD *)(v8 + 24);
    *(_QWORD *)(v8 + 104) += a3 + 17;
    v19 = (_QWORD *)((v18 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    v20 = (char *)v19 + a3 + 17;
    if ( *(_QWORD *)(v8 + 32) >= (unsigned __int64)v20 && v18 )
    {
      *(_QWORD *)(v8 + 24) = v20;
    }
    else
    {
      v27 = v10;
      v30 = v11;
      v24 = sub_962430(v8 + 24, a3 + 17, a3 + 17, 3, (__int64)v11, v10);
      v11 = v30;
      LODWORD(v10) = v27;
      v19 = (_QWORD *)v24;
    }
    v21 = v19 + 2;
    if ( a3 )
    {
      v29 = v11;
      v26 = v10;
      v23 = memcpy(v19 + 2, a2, a3);
      v11 = v29;
      LODWORD(v10) = v26;
      v21 = v23;
    }
    *((_BYTE *)v21 + a3) = 0;
    *v19 = a3;
    v19[1] = 0;
    *v11 = (__int64)v19;
    ++*(_DWORD *)(v8 + 12);
    v22 = sub_2221390(v8, (unsigned int)v10);
    sub_965750(v31, (__int64 *)(*(_QWORD *)v8 + 8LL * v22), 0);
    v13 = *v31[0];
    v14 = *(__int64 **)(*v31[0] + 8);
    if ( v14 )
      goto LABEL_19;
    goto LABEL_6;
  }
  return *(_QWORD *)a4;
}

