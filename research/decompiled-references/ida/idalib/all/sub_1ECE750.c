_QWORD *__fastcall sub_1ECE750(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  void *v8; // rax
  __int64 v9; // rdi
  __int64 v11; // rdx
  __int64 v12; // r13
  size_t v13; // rax
  void *v14; // rax
  __int64 v15; // rdi
  _BOOL4 v16; // esi
  const char *v17; // rax
  __int64 v18; // r13
  size_t v19; // rax
  char *v21; // [rsp+8h] [rbp-310h]
  __int64 v23; // [rsp+20h] [rbp-2F8h] BYREF
  _BYTE *v24; // [rsp+30h] [rbp-2E8h] BYREF
  __int64 v25; // [rsp+38h] [rbp-2E0h]
  void *v26; // [rsp+40h] [rbp-2D8h] BYREF
  char v27; // [rsp+48h] [rbp-2D0h]
  void *v28; // [rsp+50h] [rbp-2C8h] BYREF
  char v29; // [rsp+58h] [rbp-2C0h]
  void *v30; // [rsp+60h] [rbp-2B8h] BYREF
  __int128 v31; // [rsp+68h] [rbp-2B0h]
  __int64 v32; // [rsp+78h] [rbp-2A0h] BYREF
  void *v33; // [rsp+A0h] [rbp-278h] BYREF
  void *ptr[2]; // [rsp+D0h] [rbp-248h] BYREF
  _BYTE v35[568]; // [rsp+E0h] [rbp-238h] BYREF

  ptr[0] = v35;
  ptr[1] = (void *)0x4000000000LL;
  v24 = nullptr;
  v25 = 0;
  sub_1EAF8B0((__int64)&v26, a3);
  if ( (v27 & 1) == 0 )
  {
    sub_2027F10(&v28, a3, (unsigned int)v26, ptr, &v24);
    if ( (v29 & 1) != 0 )
    {
      v14 = v28;
      v15 = *a2;
      v28 = nullptr;
      v33 = v14;
      sub_1EBF0A0(v15, (_QWORD **)&v33);
      if ( v33 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v33 + 8LL))(v33);
    }
    else
    {
      if ( (_DWORD)v28 == 4 )
      {
        v16 = 1;
        if ( v25 )
          v16 = *v24 != 120;
        v17 = (const char *)sub_22181E0(v16);
        if ( !v17 )
        {
          v31 = 0;
          v30 = &v32;
          sub_2EBB03(&v23, v16, v24, v25, &v30, *(_QWORD *)ptr[0]);
        }
        v18 = *a2;
        v21 = (char *)v17;
        v19 = j__strlen(v17);
        sub_1EAD680(v18, v21, v19);
        *a1 = 0;
        goto LABEL_14;
      }
      if ( (_DWORD)v28 == 3 )
      {
        v11 = v25 - 1;
        if ( !v25 )
          v11 = 0;
        sub_2230330(a1, v24, v11, a4, a5, 1);
        goto LABEL_14;
      }
      v12 = *a2;
      v13 = j__strlen("AST record has invalid code");
      sub_1EAD680(v12, "AST record has invalid code", v13);
    }
    *a1 = 0;
LABEL_14:
    sub_A0AE90((__int64 *)&v28);
    goto LABEL_5;
  }
  v8 = v26;
  v9 = *a2;
  v26 = nullptr;
  v33 = v8;
  sub_1EBF0A0(v9, (_QWORD **)&v33);
  if ( v33 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v33 + 8LL))(v33);
  *a1 = 0;
LABEL_5:
  sub_A0AE90((__int64 *)&v26);
  if ( ptr[0] != v35 )
    free(ptr[0]);
  return a1;
}
