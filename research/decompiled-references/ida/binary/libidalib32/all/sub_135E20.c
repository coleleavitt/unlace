__int64 __fastcall sub_135E20(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  bool v7; // zf
  __int64 *v9; // rbp
  __int64 v10; // rax
  char *v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rsi
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 v18; // rsi
  size_t v19; // rax
  size_t v20; // r15
  void *v21; // rdi
  size_t v22; // rdx
  __int64 v23; // rax
  size_t v24; // [rsp+8h] [rbp-510h]
  char v25[96]; // [rsp+70h] [rbp-4A8h] BYREF
  char s[1032]; // [rsp+D0h] [rbp-448h] BYREF
  unsigned __int64 v27; // [rsp+4D8h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 208);
  v7 = *(_BYTE *)(a1 + 200) == 0;
  v27 = __readfsqword(0x28u);
  v9 = *(__int64 **)(v6 + 8 * a5);
  v10 = *v9;
  if ( !v7 )
  {
    (*(void (__fastcall **)(__int64 *))(v10 + 128))(v9);
    v11 = (_BYTE *)(elf_gnu_hash_indexes + 400);
    v12 = *a2;
    if ( ea2str() )
    {
      v19 = strlen(s);
      v20 = v19;
      if ( v19 )
      {
        v21 = *(void **)v12;
        v22 = v19 + 1;
        if ( *(_QWORD *)(v12 + 16) < v19 + 1 )
        {
          v24 = v19 + 1;
          v23 = qvector_reserve();
          v22 = v24;
          *(_QWORD *)v12 = v23;
          v21 = (void *)v23;
        }
        *(_QWORD *)(v12 + 8) = v22;
        v11 = s;
        memmove(v21, s, v20);
        *(_BYTE *)(*(_QWORD *)v12 + v20) = 0;
      }
      else
      {
        *(_QWORD *)(v12 + 8) = 0;
      }
    }
    v13 = (*(unsigned int (__fastcall **)(__int64 *, char *))(*v9 + 128))(v9, v11);
    get_func_name();
    if ( *(_BYTE *)(a1 + 200) )
      goto LABEL_4;
LABEL_7:
    v18 = *(_QWORD *)(a1 + 184);
    goto LABEL_8;
  }
  v13 = *a2;
  (*(void (__fastcall **)(__int64 *, __int64, _QWORD))v10)(v9, v13, *(_QWORD *)(*(_QWORD *)(a1 + 184) + 752LL));
  if ( !*(_BYTE *)(a1 + 200) )
    goto LABEL_7;
LABEL_4:
  if ( *(_DWORD *)(a1 + 192) != 2 )
  {
    (*(void (__fastcall **)(__int64 *, __int64))(*v9 + 128))(v9, v13);
    return generate_disasm_line();
  }
  v18 = *(_QWORD *)(a1 + 184);
LABEL_8:
  if ( v18 || (LODWORD(v18) = qword_251660, qword_251660) )
  {
    sub_168770((unsigned int)v25, v18, 0, v14, v15, v16);
    linearray_t_ctr();
    getinf_flag();
    setinf_flag();
    linearray_t_set_place();
    linearray_t_down();
    tag_remove();
    setinf_flag();
    linearray_t_dtr();
    sub_16C9F0(v25);
  }
  return v27 - __readfsqword(0x28u);
}

