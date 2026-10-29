unsigned __int64 __fastcall sub_1E2640(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned __int64 v5; // rsi
  int custom_data_formats; // eax
  __int64 v7; // rdi
  const char *v8; // rax
  int v9; // ebp
  __int64 v10; // r12
  bool v11; // al
  const char *v12; // r15
  size_t v13; // rax
  __int64 v14; // r15
  const char *v15; // rax
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *custom_data_format; // rbx
  unsigned int v21; // r12d
  int v22; // r14d
  const char *v23; // rdx
  char v24; // di
  size_t v25; // rax
  __int64 v26; // rcx
  size_t v28; // r15
  void *v29; // rax
  __int64 v30; // [rsp-8h] [rbp-F8h]
  const char *v31; // [rsp+0h] [rbp-F0h]
  size_t v32; // [rsp+0h] [rbp-F0h]
  const char *n; // [rsp+8h] [rbp-E8h]
  __int64 v34; // [rsp+10h] [rbp-E0h]
  const char *v35; // [rsp+18h] [rbp-D8h]
  __int64 v36; // [rsp+20h] [rbp-D0h]
  __int64 v37; // [rsp+28h] [rbp-C8h] BYREF
  __int128 v38; // [rsp+30h] [rbp-C0h]
  __int64 v39; // [rsp+48h] [rbp-A8h] BYREF
  __int128 v40; // [rsp+50h] [rbp-A0h]
  int v41; // [rsp+68h] [rbp-88h] BYREF
  _OWORD v42[2]; // [rsp+6Ch] [rbp-84h] BYREF
  __int128 v43; // [rsp+8Ch] [rbp-64h]
  int v44; // [rsp+9Ch] [rbp-54h]
  __int64 v45; // [rsp+A0h] [rbp-50h]
  unsigned __int64 v46; // [rsp+B0h] [rbp-40h]

  v34 = a2;
  v5 = 0;
  HIDWORD(v36) = a4;
  v46 = __readfsqword(0x28u);
  v38 = 0;
  v37 = 0;
  custom_data_formats = get_custom_data_formats(&v37, 0);
  v7 = v37;
  if ( custom_data_formats > 0 )
  {
    v8 = nullptr;
    if ( a3 != -1 )
      v8 = "This register/";
    v35 = v8;
    if ( (_QWORD)v38 )
    {
      BYTE3(v36) = a3 == -1;
      v9 = 0;
      v10 = 0;
      while ( 1 )
      {
        custom_data_format = (_QWORD *)get_custom_data_format(*(unsigned int *)(v7 + 4 * v10));
        if ( !custom_data_format )
        {
          if ( !under_debugger )
            interr(40141, v5, v18, v19, 0.0);
          BUG();
        }
        v7 = v37;
        v21 = *(_DWORD *)(v37 + 4 * v10);
        if ( a3 == -1 )
        {
          v22 = xmmword_8CC398;
          if ( (int)xmmword_8CC398 <= 0 )
            goto LABEL_16;
          v23 = nullptr;
          LODWORD(v5) = 0;
          do
          {
            v24 = 1;
            v11 = 0;
            if ( 1 << SBYTE4(v36) == *(unsigned __int8 *)(*(_QWORD *)(dbg + 56LL)
                                                        + 32LL * *(int *)&v23[qword_8CC390 + 44]
                                                        + 12) )
            {
              n = v23;
              LODWORD(v31) = v5;
              v11 = sub_1E25C0(v21, v5);
              v23 = n;
              v24 = !v11;
            }
            v5 = (unsigned int)(v5 + 1);
            v23 += 56;
          }
          while ( v22 > (int)v5 && v24 );
        }
        else
        {
          v5 = a3;
          v11 = sub_1E25C0(v21, a3);
        }
        if ( v11 )
          break;
LABEL_15:
        v7 = v37;
LABEL_16:
        v10 = ++v9;
        if ( v9 >= (unsigned __int64)v38 )
          goto LABEL_34;
      }
      v12 = (const char *)custom_data_format[4];
      v39 = 0;
      v40 = 0;
      if ( v12 )
      {
        v13 = strlen(v12);
        if ( !v13 )
        {
          if ( a3 == -1 )
          {
            v14 = custom_data_format[5];
            v41 = 64;
          }
          else
          {
            v41 = 64;
            v14 = 0;
          }
          v44 = 0;
          v45 = 0x1FFFFFFFFLL;
          v15 = &s1;
          memset(v42, 0, sizeof(v42));
          v43 = 0;
LABEL_13:
          *(_QWORD *)((char *)v42 + 12) = v15;
          v16 = qalloc_or_throw(24);
          *(_DWORD *)(v16 + 12) = v21;
          v5 = (unsigned __int64)&v41;
          *(_DWORD *)(v16 + 8) = 1;
          *(_QWORD *)v16 = apply_custom_data_format_ah_t___vtable;
          *(_BYTE *)(v16 + 16) = BYTE3(v36);
          *(_QWORD *)((char *)&v42[1] + 4) = v16;
          *(_QWORD *)((char *)&v43 + 4) = v14;
          sub_539470(v34, &v41, v35, 0, 0, v17, v30, v31, n, v34, v35, v36, v37, v38);
          if ( v39 )
          {
            *(_QWORD *)&v40 = 0;
            qfree(v39, (const char *)&v41);
          }
          goto LABEL_15;
        }
        n = (const char *)v13;
        v32 = v13 + 1;
        v39 = qvector_reserve(&v39, 0, v13 + 1, 1);
        *(_QWORD *)&v40 = v32;
        v31 = n;
        memmove((void *)v39, v12, (size_t)n);
        n[v39] = 0;
        v26 = v40;
      }
      else
      {
        if ( custom_data_format[3] )
        {
          v31 = (const char *)custom_data_format[3];
          v25 = strlen(v31);
          if ( v25 )
          {
            v28 = v25 + 1;
            n = v31;
            v31 = (const char *)v25;
            v29 = (void *)qvector_reserve(&v39, 0, v25 + 1, 1);
            *(_QWORD *)&v40 = v28;
            v39 = (__int64)v29;
            memmove(v29, n, (size_t)v31);
            v31[v39] = 0;
            v12 = (const char *)v39;
          }
        }
        strrpl(v12, 95, 32);
        v26 = v40;
      }
      v14 = 0;
      if ( a3 == -1 )
        v14 = custom_data_format[5];
      v44 = 0;
      v41 = 64;
      v45 = 0x1FFFFFFFFLL;
      v15 = &s1;
      memset(v42, 0, sizeof(v42));
      v43 = 0;
      if ( v26 )
        v15 = (const char *)v39;
      goto LABEL_13;
    }
  }
LABEL_34:
  if ( v7 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v7, (const char *)v5);
  }
  return v46 - __readfsqword(0x28u);
}
