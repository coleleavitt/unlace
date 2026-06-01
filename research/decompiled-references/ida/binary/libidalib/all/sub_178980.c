__int64 sub_178980(__int64 a1, __int64 a2, __int64 a3, ...)
{
  TChDirDialog *v4; // rbx
  __int64 v6; // rax
  __int64 v7; // r12
  __int16 v8; // r14
  void *v9; // rdi
  void *v10; // rdx
  __int64 v11; // rcx
  __m128 v12; // xmm0
  size_t v13; // rax
  size_t v14; // r12
  void *v15; // rdi
  size_t v16; // r14
  __int64 v17; // [rsp+10h] [rbp-1538h] BYREF
  __int128 v18; // [rsp+18h] [rbp-1530h]
  void *dest; // [rsp+30h] [rbp-1518h]
  __int128 v20; // [rsp+38h] [rbp-1510h] BYREF
  gcc_va_list va; // [rsp+48h] [rbp-1500h] BYREF
  char v22[1024]; // [rsp+60h] [rbp-14E8h] BYREF
  char s[4104]; // [rsp+460h] [rbp-10E8h] BYREF
  unsigned __int64 v24; // [rsp+1468h] [rbp-E0h]

  v24 = __readfsqword(0x28u);
  LODWORD(v4) = batch;
  if ( !batch )
  {
    va_start(va, a3);
    qvsnprintf();
    v18 = 0;
    v17 = 0;
    sub_17CED0(&v17, 0, v22);
    s[0] = 0;
    v4 = (TChDirDialog *)operator new(0xD8u);
    TChDirDialog::TChDirDialog(v4, 4u, 8u, v22, s);
    dest = nullptr;
    v20 = 0;
    if ( TFileList::getKey((TFileList *)TProgram::application, (const char *)v4) )
    {
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(TProgram::application + 136LL) + 88LL))(TProgram::application + 136LL);
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, 0);
      v8 = TGroup::execView(TProgram::deskTop, v4);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      TChDirDialog::getDirName(v4, s, 0x1000u);
      if ( v8 != 11 )
      {
        v13 = strlen(s);
        v14 = v13;
        if ( v13 )
        {
          v15 = dest;
          v16 = v13 + 1;
          if ( *((_QWORD *)&v20 + 1) < v13 + 1 )
          {
            dest = (void *)qvector_reserve();
            v15 = dest;
          }
          *(_QWORD *)&v20 = v16;
          memmove(v15, s, v14);
          *((_BYTE *)dest + v14) = 0;
        }
        else
        {
          *(_QWORD *)&v20 = 0;
        }
      }
    }
    if ( v4 )
    {
      (*(void (__fastcall **)(TChDirDialog *))(*(_QWORD *)v4 + 16LL))(v4);
      (*(void (__fastcall **)(TChDirDialog *))(*(_QWORD *)v4 + 8LL))(v4);
    }
    v9 = dest;
    LOBYTE(v4) = (unsigned __int64)v20 > 1;
    if ( (unsigned __int64)v20 > 1 )
    {
      v10 = *(void **)a1;
      v11 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)a1 = dest;
      v12 = _mm_loadh_ps((const double *)&v20 + 1);
      dest = v10;
      v9 = v10;
      *((_QWORD *)&v20 + 1) = v11;
      *(__m128 *)(a1 + 8) = v12;
    }
    if ( v9 )
    {
      *(_QWORD *)&v20 = 0;
      qfree();
    }
    if ( v17 )
    {
      *(_QWORD *)&v18 = 0;
      qfree();
    }
  }
  return (unsigned int)v4;
}

