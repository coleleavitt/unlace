__int64 __fastcall sub_986C0(__int64 a1, unsigned int a2, __int64 *a3, char a4, unsigned __int64 a5)
{
  __int64 extlang; // rax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(_BYTE *, _QWORD, _QWORD, __int64 *); // rax
  unsigned int v11; // edx
  char v12; // al
  unsigned int v13; // eax
  __int64 bpt_kernel_interface; // rax
  struct _Unwind_Exception *v16; // rdi
  _BYTE v17[40]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 16) <= 1u )
    goto LABEL_16;
  if ( *(int *)(a1 + 76) < 0 )
  {
    bpt_kernel_interface = get_bpt_kernel_interface();
    *(_DWORD *)(a1 + 76) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)bpt_kernel_interface + 152LL))(bpt_kernel_interface);
  }
  if ( a5 >= (unsigned __int64)xmmword_2508C8 )
  {
LABEL_22:
    v16 = (struct _Unwind_Exception *)sub_978E0();
    --*(_DWORD *)(a5 + 12);
    _Unwind_Resume(v16);
  }
  qsnprintf();
  if ( a5 >= (unsigned __int64)xmmword_2508C8 )
  {
    sub_978C0(v17, 32);
    goto LABEL_22;
  }
  extlang = find_extlang();
  v9 = extlang;
  if ( !extlang )
  {
    sub_94360(a3);
    goto LABEL_14;
  }
  v10 = *(__int64 (__fastcall **)(_BYTE *, _QWORD, _QWORD, __int64 *))(extlang + 40);
  if ( !v10 )
    goto LABEL_19;
  if ( !a4 )
    goto LABEL_13;
  if ( (*(_BYTE *)(v9 + 8) & 1) == 0 )
  {
LABEL_19:
    sub_94360(a3);
    --*(_DWORD *)(v9 + 12);
    goto LABEL_14;
  }
  if ( (unsigned __int8)compile_idc_snippet() )
  {
    --*(_DWORD *)(v9 + 12);
    v11 = 2;
LABEL_17:
    v13 = *(_DWORD *)(a1 + 68) | 0x20;
    goto LABEL_15;
  }
  v10 = *(__int64 (__fastcall **)(_BYTE *, _QWORD, _QWORD, __int64 *))(v9 + 40);
LABEL_13:
  v12 = v10(v17, a2, *(_QWORD *)(a1 + 8), a3);
  --*(_DWORD *)(v9 + 12);
  if ( v12 )
  {
LABEL_16:
    v11 = 1;
    goto LABEL_17;
  }
LABEL_14:
  v11 = 0;
  v13 = *(_DWORD *)(a1 + 68) & 0xFFFFFFDF;
LABEL_15:
  *(_DWORD *)(a1 + 68) = v13;
  return v11;
}

