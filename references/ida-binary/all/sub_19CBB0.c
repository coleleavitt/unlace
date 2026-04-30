__int64 __fastcall sub_19CBB0(
        _BYTE *bpt_kernel_interface,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        unsigned __int64 a5,
        double a6)
{
  _BYTE *v6; // r13
  char v8; // r12
  const char *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 extlang; // rax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(_BYTE *, __int64, _QWORD, __int64 *); // rax
  unsigned int v17; // edx
  char v18; // al
  unsigned int v19; // eax
  struct _Unwind_Exception *v21; // rdi
  __int64 v22; // [rsp+8h] [rbp-80h]
  unsigned __int64 v23; // [rsp+18h] [rbp-70h] BYREF
  _BYTE v24[40]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-40h]

  v6 = bpt_kernel_interface;
  v22 = a2;
  v25 = __readfsqword(0x28u);
  if ( *((_QWORD *)bpt_kernel_interface + 2) <= 1u )
    goto LABEL_18;
  v8 = a4;
  if ( *((int *)bpt_kernel_interface + 21) < 0 )
  {
    bpt_kernel_interface = (_BYTE *)get_bpt_kernel_interface(bpt_kernel_interface, a2);
    *((_DWORD *)v6 + 21) = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)bpt_kernel_interface + 152LL))(bpt_kernel_interface);
  }
  if ( a5 >= (unsigned __int64)xmmword_8CACB8 )
  {
LABEL_25:
    v21 = (struct _Unwind_Exception *)sub_199400(a6, (__int64)bpt_kernel_interface, a2, (__int64)a3, a4);
    --*(_DWORD *)(a5 + 12);
    _Unwind_Resume(v21);
  }
  v10 = &s1;
  v11 = qword_8CACB0 + 24 * a5;
  if ( *(_QWORD *)(v11 + 8) )
    v10 = *(const char **)v11;
  a2 = 32;
  bpt_kernel_interface = v24;
  qsnprintf(v24, 32, "__%s_%d", v10, *((_DWORD *)v6 + 21));
  if ( a5 >= (unsigned __int64)xmmword_8CACB8 )
  {
    sub_1993E0(a6, (__int64)v24, 32, v12, v13);
    goto LABEL_25;
  }
  v23 = a5;
  extlang = find_extlang(&v23, 2);
  v15 = extlang;
  if ( !extlang )
  {
    sub_169A50(a3, (__int64)"language '%s' is not present; cannot compile condition", v10);
    goto LABEL_16;
  }
  v16 = *(__int64 (__fastcall **)(_BYTE *, __int64, _QWORD, __int64 *))(extlang + 40);
  if ( !v16 )
  {
    sub_169A50(
      a3,
      (__int64)"the '%s' extlang does not implement the 'compile_expr' callback",
      *(const char **)(v15 + 16));
    goto LABEL_22;
  }
  if ( !v8 )
    goto LABEL_15;
  if ( (*(_BYTE *)(v15 + 8) & 1) == 0 )
  {
    sub_169A50(
      a3,
      (__int64)"low-level conditions can only be expressed in IDC (current bpt language: %s)",
      *(const char **)(v15 + 16));
LABEL_22:
    --*(_DWORD *)(v15 + 12);
    goto LABEL_16;
  }
  if ( (unsigned __int8)compile_idc_snippet(v24, *((_QWORD *)v6 + 1), a3, 0, 1) )
  {
    --*(_DWORD *)(v15 + 12);
    v17 = 2;
LABEL_19:
    v19 = *((_DWORD *)v6 + 19) | 0x20;
    goto LABEL_17;
  }
  v16 = *(__int64 (__fastcall **)(_BYTE *, __int64, _QWORD, __int64 *))(v15 + 40);
LABEL_15:
  v18 = v16(v24, v22, *((_QWORD *)v6 + 1), a3);
  --*(_DWORD *)(v15 + 12);
  if ( v18 )
  {
LABEL_18:
    v17 = 1;
    goto LABEL_19;
  }
LABEL_16:
  v17 = 0;
  v19 = *((_DWORD *)v6 + 19) & 0xFFFFFFDF;
LABEL_17:
  *((_DWORD *)v6 + 19) = v19;
  return v17;
}
