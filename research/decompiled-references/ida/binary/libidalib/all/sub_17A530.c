__int64 __fastcall sub_17A530(__int64 a1, __int64 a2, const char *a3)
{
  const char *v4; // r12
  unsigned int v5; // ebx
  const char *v7; // r14
  TFileDialog *v8; // rax
  TView *v9; // r12
  unsigned __int8 v10; // r8
  __int64 v11; // rdx
  void (*v12)(); // rax
  __int64 v13; // rax
  __int16 v14; // r14
  __int64 v15; // rdi
  __int64 v16; // r15
  __int64 v17; // r12
  _QWORD *v18; // r14
  __int64 v19; // rcx
  __int64 v20; // r13
  __int64 i; // rbp
  _QWORD *v22; // rax
  size_t v23; // rax
  size_t v24; // r13
  size_t v25; // rax
  size_t v26; // rbx
  void *v27; // rdi
  size_t v28; // r14
  void *v29; // rdi
  size_t v30; // r12
  __int64 v31; // rax
  __int64 v32; // rax
  const char *v33; // [rsp+8h] [rbp-1120h]
  char *v34; // [rsp+10h] [rbp-1118h]
  __int64 v35; // [rsp+18h] [rbp-1110h]
  __int64 v36; // [rsp+18h] [rbp-1110h]
  char *v37; // [rsp+30h] [rbp-10F8h] BYREF
  __int128 v38; // [rsp+38h] [rbp-10F0h]
  const char *v39; // [rsp+50h] [rbp-10D8h] BYREF
  __int128 v40; // [rsp+58h] [rbp-10D0h]
  __int64 v41; // [rsp+70h] [rbp-10B8h] BYREF
  unsigned __int64 v42; // [rsp+78h] [rbp-10B0h]
  __int64 v43; // [rsp+90h] [rbp-1098h] BYREF
  __int64 v44; // [rsp+98h] [rbp-1090h]
  __int64 v45; // [rsp+A8h] [rbp-1080h]
  __int64 v46; // [rsp+B0h] [rbp-1078h]
  __int64 v47; // [rsp+C0h] [rbp-1068h]
  __int64 v48; // [rsp+C8h] [rbp-1060h]
  char s[4104]; // [rsp+E0h] [rbp-1048h] BYREF
  unsigned __int64 v50; // [rsp+10E8h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  v4 = a3;
  v5 = batch;
  if ( batch )
  {
    if ( a3 && !(unsigned int)isWild(a3) )
    {
      v23 = strlen(v4);
      v24 = v23;
      if ( v23 )
      {
        v27 = *(void **)a1;
        v28 = v23 + 1;
        if ( *(_QWORD *)(a1 + 16) < v23 + 1 )
        {
          v31 = qvector_reserve();
          *(_QWORD *)a1 = v31;
          v27 = (void *)v31;
        }
        *(_QWORD *)(a1 + 8) = v28;
        memmove(v27, v4, v24);
        *(_BYTE *)(*(_QWORD *)a1 + v24) = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 8) = 0;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v37 = nullptr;
    v40 = 0;
    v39 = nullptr;
    v38 = 0;
    sub_17A210((__int64)&v41, &v37, (__int64 *)&v39);
    v34 = v37;
    LOWORD(v7) = (_WORD)v37;
    v33 = v39;
    if ( !(_QWORD)v38 )
      v7 = s1;
    if ( v4 && !*v4 )
      v4 = nullptr;
    sub_17A060((__int64)&v43, v4, v39);
    v8 = (TFileDialog *)operator new(0x1178u);
    v9 = v8;
    v10 = 17;
    if ( v42 <= 1 )
      v10 = 1;
    sub_179400(v8, (__int64)&v43, "File", (unsigned __int16)v7, v10);
    v35 = TProgram::application;
    if ( TFileList::getKey((TFileList *)TProgram::application, (const char *)v9) )
    {
      v11 = v35;
      v12 = *(void (**)())(*(_QWORD *)v35 + 104LL);
      if ( v12 != nullsub_67 )
      {
        ((void (__fastcall *)(__int64))v12)(v35);
        v11 = v35;
      }
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v11 + 136) + 88LL))(v11 + 136);
      v36 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 64LL))(v13, 0);
      v14 = TGroup::execView(TProgram::deskTop, v9);
      if ( v36 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 8LL))(v36);
      TChDirDialog::getData(v9, s, 0x1001u);
      if ( v9 )
      {
        (*(void (__fastcall **)(TView *))(*(_QWORD *)v9 + 16LL))(v9);
        (*(void (__fastcall **)(TView *))(*(_QWORD *)v9 + 8LL))(v9);
      }
      if ( v14 != 11 )
      {
        v25 = strlen(s);
        v26 = v25;
        if ( v25 )
        {
          v29 = *(void **)a1;
          v30 = v25 + 1;
          if ( *(_QWORD *)(a1 + 16) < v25 + 1 )
          {
            v32 = qvector_reserve();
            *(_QWORD *)a1 = v32;
            v29 = (void *)v32;
          }
          *(_QWORD *)(a1 + 8) = v30;
          memmove(v29, s, v26);
          *(_BYTE *)(*(_QWORD *)a1 + v26) = 0;
        }
        else
        {
          *(_QWORD *)(a1 + 8) = 0;
        }
        v5 = 1;
      }
    }
    if ( v47 )
    {
      v48 = 0;
      qfree();
    }
    if ( v45 )
    {
      v46 = 0;
      qfree();
    }
    v15 = v43;
    if ( v43 )
    {
      v16 = v44;
      if ( v44 )
      {
        v17 = 0;
        do
        {
          v18 = (_QWORD *)(v15 + 48 * v17);
          v19 = v18[3];
          if ( v19 )
          {
            v20 = v18[4];
            if ( v20 )
            {
              for ( i = 0; i != v20; ++i )
              {
                v22 = (_QWORD *)(v19 + 24 * i);
                if ( *v22 )
                {
                  v22[1] = 0;
                  qfree();
                  v19 = v18[3];
                }
              }
            }
            v18[4] = 0;
            qfree();
          }
          if ( *v18 )
          {
            v18[1] = 0;
            qfree();
          }
          ++v17;
          v15 = v43;
        }
        while ( v16 != v17 );
      }
      v44 = 0;
      qfree();
    }
    if ( v41 )
    {
      v42 = 0;
      qfree();
    }
    if ( v33 )
      qfree();
    if ( v34 )
      qfree();
  }
  return v5;
}

