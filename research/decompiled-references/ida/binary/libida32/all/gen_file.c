__int64 __fastcall gen_file(
        unsigned int a1,
        FILE *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        double a6,
        double a7,
        double a8)
{
  __int64 v10; // rbp
  unsigned __int8 (__fastcall *v12)(__int64, time_t, _QWORD *); // r15
  time_t v13; // rax
  __int64 encoding_helper; // rax
  __int64 v15; // r15
  unsigned int v16; // ebx
  char v17; // al
  void *v18; // rdi
  unsigned int v19; // eax
  __int64 v21; // rax
  __int64 license_manager; // [rsp+0h] [rbp-98h]
  __int64 v23; // [rsp+0h] [rbp-98h]
  __int64 v24; // [rsp+0h] [rbp-98h]
  void *ptr; // [rsp+10h] [rbp-88h] BYREF
  __int128 v26; // [rsp+18h] [rbp-80h]
  _QWORD v27[3]; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v28; // [rsp+48h] [rbp-50h]
  unsigned int v29; // [rsp+4Ch] [rbp-4Ch]
  unsigned int v30; // [rsp+50h] [rbp-48h]
  char v31; // [rsp+54h] [rbp-44h]
  unsigned __int64 v32; // [rsp+58h] [rbp-40h]

  v10 = a1;
  v32 = __readfsqword(0x28u);
  if ( !a2 && a1 != 1 )
    return (unsigned int)-1;
  license_manager = get_license_manager();
  v12 = *(unsigned __int8 (__fastcall **)(__int64, time_t, _QWORD *))(*(_QWORD *)license_manager + 96LL);
  v13 = time(nullptr);
  if ( v12(license_manager, v13, v27) )
  {
    if ( (unsigned int)(LODWORD(v27[0]) - 1) > 4 )
      return (unsigned int)-1;
  }
  v23 = qword_2CA1698;
  encoding_helper = create_encoding_helper(0xFFFFFFFFLL, 1);
  v27[1] = a2;
  v27[0] = encoding_helper;
  v27[2] = v23;
  v28 = a3;
  v29 = a4;
  v30 = a5;
  v31 = 0;
  v15 = qftell(a2);
  if ( (int)qfseek(a2, 0, 2) < 0 )
    goto LABEL_5;
  v24 = qftell(a2);
  qfseek(a2, v15, 0);
  if ( v24 )
    goto LABEL_5;
  a6 = 0.0;
  ptr = nullptr;
  v26 = 0;
  v17 = (*(__int64 (__fastcall **)(_QWORD, void **))(*(_QWORD *)v27[0] + 16LL))(v27[0], &ptr);
  v18 = ptr;
  if ( !v17 || (v21 = qfwrite(a2, ptr), v18 = ptr, v21 == (_QWORD)v26) )
  {
    if ( v18 )
    {
      *(_QWORD *)&v26 = 0;
      qfree(v18);
    }
LABEL_5:
    switch ( v10 )
    {
      case 0LL:
        v19 = sub_38A570(v27, a6, a7, a8);
        break;
      case 1LL:
        v19 = gen_exe_file();
        break;
      case 2LL:
        v19 = sub_38D7C0(a2, a3, a4, (a5 >> 3) & 1);
        break;
      case 3LL:
        v19 = sub_38B480((__int64)v27, 0);
        break;
      case 4LL:
        v19 = sub_38B480((__int64)v27, 1u);
        break;
      case 5LL:
        v19 = sub_38B210(v27);
        break;
      default:
        goto LABEL_25;
    }
    v16 = v19;
    goto LABEL_14;
  }
  if ( ptr )
  {
    *(_QWORD *)&v26 = 0;
    qfree(ptr);
  }
LABEL_25:
  v16 = -1;
LABEL_14:
  if ( v27[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v27[0] + 8LL))(v27[0]);
  return v16;
}

